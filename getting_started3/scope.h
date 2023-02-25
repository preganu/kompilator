#ifndef SCOPE_H
#define SCOPE_H

#include "record.h"
#include <list>
#include <map>

using namespace std;

class Scope {
private:
	int next = 0; //next child to visit
	Scope* parentScope; //parent scope
	vector<Scope*> childrenScopes; //children scopes
	map<string, Record*> records; // symbol to record map

public:
	Scope() { records.clear(); parentScope = nullptr; }
    Scope(Scope *nextChild) {
        records.clear();
        if(nextChild != nullptr){ parentScope = nextChild; } 
        else{ parentScope = nullptr; }	
    }
    ~Scope(){ this->childrenScopes.clear(); this->records.clear(); }
    
    Scope* getParent() { return parentScope; }
    int getNext() { return next; }
	
    Scope* nextChild() {
		Scope* nextChild;
		if(next == childrenScopes.size()) { // create new child Scope
			nextChild = new Scope(this);
			childrenScopes.push_back(nextChild);
		} else { nextChild = this->childrenScopes[next]; } 
		next++;
		return nextChild;
	}

    void put(string Key, Record* item){
        if(records.count(Key) > 0){ 
            return; 
        }
        records.emplace(Key, item); 
    }

	Record* lookup(string Key) {
		if(records.count(Key) > 0) { return records.at(Key); } //does it extist in current scope <> //records = <Key, T> vi vill jämföra mot key!
		else if (parentScope == nullptr) { return nullptr; } // indentifier not in symboltable
		else { parentScope->lookup(Key); } //Delegate the request to parent scope
	}

    void resetScope() {
		next = 0;
		for (auto i = childrenScopes.begin(); i != childrenScopes.end(); i++) { 
            (*i)->resetScope(); 
        }
	}

    void printScope(){
        cout << "-----------------Scope-------------" << endl;
        cout << "Records: " << endl;
        map<string, Record*>::iterator i;
        for (i = records.begin(); i != records.end(); i++) {
            std::cout << i->first << ':';
            i->second->print();
        }
        vector<Scope*>::iterator it;
        for(it = childrenScopes.begin(); it != childrenScopes.end(); it++) {
            (*it)->printScope();
        }
    }


};
#endif