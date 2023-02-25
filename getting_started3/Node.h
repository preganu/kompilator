#ifndef NODE_H
#define	NODE_H

#include <list>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include "symbol_t.h"
#include "class.h"

using namespace std;

class Node {
public:
	int id;
	string type, value;
	list<Node*> children;
	Node(string t, string v) : type(t), value(v) {}
	Node() {
		type = "uninitialised";
		value = "uninitialised"; 
	}   // Bison needs this.
  
	void print_tree(int depth=0) {
		for(int i=0; i<depth; i++)
		cout << "  ";
		cout << type << ":" << value << endl;
		for(auto i=children.begin(); i!=children.end(); i++)
			(*i)->print_tree(depth+1);

	}

	void generate_tree() {
		std::ofstream outStream;
	  	outStream.open("tree.dot");

		int count = 0;
		outStream << "digraph {" << std::endl;
		generate_tree_content(count, &outStream);
		outStream << "}" << std::endl;
		outStream.close();

		std::cout << "\nBuilt a parse-tree:" << std::endl;
  	}

  	void generate_tree_content(int &count, ofstream *outStream) {
	  id = count++;
	  *outStream << "n" << id << " [label=\"" << type << ":" << value << "\"];" << endl;

	  for (auto i = children.begin(); i != children.end(); i++)
	  {
		  (*i)->generate_tree_content(count, outStream);
		  *outStream << "n" << id << " -> n" << (*i)->id << endl;

	  }
	}

	void create_st(SymbolTable *st) {
		cout << "Creating Symboltable" << endl; 
		//st->put(this->type, findIdentifier(this, st));
		findIdentifier(this, st);
		st->enterScope();		
		execute(this->children, st);
		st->exitScope(); 
		st->resetTable();
 		st->printTable();
	}

	void execute(auto node, SymbolTable *st) {
		for (auto i = node.begin(); i != node.end(); i++) {
			//st->put((*i)->type, findIdentifier((*i), st));
			findIdentifier((*i), st);
			if ((*i)->type == "MainClass" ||
			(*i)->type == "ClassDeclaration" ||
			(*i)->type == "MethodDeclaration") { st->enterScope(); }	
			if ((*i)->children.size() > 0) { execute((*i)->children, st); }
			if ((*i)->type == "MainClass" ||
			(*i)->type == "ClassDeclaration" ||
			(*i)->type == "MethodDeclaration") { st->exitScope(); }	
		}
	}

	Record* findIdentifier(auto *n, SymbolTable *st) {
		/*
		if (n->type == "Goal") { 
			cout << "Goal " << ": " << n->value << endl;
			return new Class(n->value, n->type); 
		}
		else if (n->type == "MainClass") { 
			cout << "mainclass " << ": " << n->value << endl;
			return new Class(n->value, n->type); 
		}
		//------------------------------------------------------
		else if (n->type == "MethodDeclaration") { 
			cout << "Methoddec " << ": " << n->value << endl; 
			return new Method(n->value, n->type); 
		} 
		//LÄgg till method dec param
		//------------------------------------------------------
		else if (n->type == "ClassDeclaration") {
			cout << "classDec " << ": " << n->value << endl; 
			//st->enterScope(); 
			return new Class(n->value, n->type); 
		}  
		//------------------------------------------------------
		else if (n->type == "VarDeclartation") {
			cout << "VarDec " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		}
		*/
		if (n->type == "Goal") { 
			cout << "Goal " << ": " << n->value << endl;
			st->put(n->type, new Class(n->value, n->type)); 
		}
		else if (n->type == "MainClass") { 
			cout << "mainclass " << ": " << n->value << endl;
			st->put(n->type, new Class(n->value, n->type));  
		}
		//------------------------------------------------------
		else if (n->type == "MethodDeclaration") { 
			cout << "Methoddec " << ": " << n->value << endl; 
			st->put(n->type, new Method(n->value, n->type));  
		} 
		else if (n->type == "MethodDeclaration param") { 
			cout << "methodDec param " << ": " << n->value << endl;  
			st->put(n->type, new Method(n->value, n->type)); 
			//ADDERA IN SÅ MAN FÅR UT PARAMETRARMA
		}
		//------------------------------------------------------
		else if (n->type == "ClassDeclaration") {
			cout << "classDec " << ": " << n->value << endl;  
			st->put(n->type, new Class(n->value, n->type)); 
		}  
		//------------------------------------------------------
		else if (n->type == "VarDeclaration") {
			cout << "VarDec " << ": " << n->value << endl; 
			st->put(n->type, new Variable(n->value, n->type)); 
		}
		else if (n->type == "String[]") {
			cout << "VarDec String[]" << ": " << n->value << endl; 
			st->put(n->type, new Variable(n->value, n->type)); 
		}
		else if (n->type == "int[]") {
			cout << "VarDec int[]" << ": " << n->value << endl; 
			st->put(n->type, new Variable(n->value, n->type)); 
		}
		else if (n->type == "<INTEGER_LITERAL>") {
			cout << "VarDec int" << ": " << n->value << endl; 
			st->put(n->type, new Variable(n->value, n->type)); 
		}
	}
};
#endif

/*
stringarr



*/

/**
		//------------------------------------------------------
		else if (n->type == "MethodDeclarationlist") { 
			cout << "METHDECLIST " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "MethodDeclaration param") { 
			cout << "methodDec param " << ": " << n->value << endl;  
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "Classdeclarationlist") { 
			cout << "CLASSDECLIST " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		}

*/