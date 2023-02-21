#ifndef CLASS_H
#define CLASS_H

#include "method.h"

using namespace std;

class Class : public Record {
    private:
        map<string, Variable*> variables;
        map<string, Method*> methods;

    public:
        Class(string nId, string t) {  setID(nId); setType(t); setRecord("Class"); }
        Class() { setID("unknown"); setType("unknown"); }
        ~Class(){}

        void addVariable(string nId, Variable* var) { variables.emplace(nId, var); };
        void addMethod(string nId, Method* m) { methods.emplace(nId, m); }
        Method* lookupMethod(string nId) { return this->methods[nId]; }
        Variable* lookupVariable(string nId) { return this->variables[nId]; }   
    /*
    .........
    */
        virtual void print() override {
			if (getID() == "") {
				cout << "   name: " << "No ID" << " : Record: Variable Type: " << getType() << endl;
			}
			else {
				cout << "   name: " << getID() << " : Record: Variable Type: " << getType() << endl;
			}
		}
};

#endif