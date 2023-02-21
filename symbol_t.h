#ifndef SYMBOL_T_H
#define SYMBOL_T_H

#include "scope.h"

using namespace std;

class SymbolTable {
private:
	Scope root;
	Scope *current;
	
public:
    SymbolTable() { root = new Scope(nullptr); current = &root; }
    ~SymbolTable() { this->current = nullptr; }

	void enterScope() { current = current->nextChild(); } //create new scope if needed
	void exitScope() { current = current->getParent(); }

	void put(string Key, Record* item) { 
		current->put(Key, item); 
	}

	void addIdent(string id) {
		//current->changeId(id);
	}

	Scope* getParent() { current->getParent(); }

	void printTable() { root.printScope(); }
	void resetTable() { root.resetScope(); } //prep for traveral current = &root;finns i andra koden

	Record* lookup(string Key) { return current->lookup(Key); }

};

#endif