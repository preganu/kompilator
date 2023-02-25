#ifndef METHOD_H
#define METHOD_H

#include "variable.h"

using namespace std;

class Method : public Record { 
    private:
        map<string, Variable*> params;
        map<string, Variable*> variables;

    public:
        Method(string nId, string t){ setID(nId); setType(t); setRecord("Method"); }
        Method() {
            setID("method ID uni");
            setType("method Type uni");
        }
        ~Method(){}

        void addVariable(string nId, Variable* var) { variables.emplace(nId, var); };
        void addParameter(string nId, Variable* var) { params.emplace(nId, var); };

        Variable* lookupParam(string nId) { return this->params[nId]; }
        Variable* lookupVariable(string nId) { return this->variables[nId]; } 

        virtual void print() override {
			if (getID() == "") {
				cout << "   name: " << "Not declared" << "| Record: " << getType() << endl;
			}
			else {
				cout << "   name: " << getID() << "| Record: " << getType() << endl;
			}
		}
};

#endif //METHOD_H