#ifndef VARIABLE_H
#define VARIABLE_H

#include "record.h"

using namespace std;

class Variable : public Record {
	private:

	public:
		Variable(string nId, string t) { 
			setID(nId); 
			setType(t); 
			setRecord("Variable");
		}
		Variable() { 
			setID("Variable ID uni"); 
			setType("Variable Type uni"); 
			setRecord("Record");
		}
		~Variable() {}

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