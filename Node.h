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
		for (auto i = children.begin(); i != children.end(); i++) {
			st->put((*i)->type, findIdentifier((*i), st));
			if ((*i)->type != "Classdeclarationlist") { st->enterScope(); }			
			execute((*i)->children, st);
			st->exitScope();
		}
		//st->resetTable();
 		st->printTable();
	}

	void execute(auto node, SymbolTable *st) {
		for (auto i = node.begin(); i != node.end(); i++) {
			st->put((*i)->type, findIdentifier((*i), st));
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
		if (n->type == "Goal") { 
			cout << "Goal " << ": " << n->value << endl;
			return new Class(n->value, n->type); 
		}
		else if (n->type == "MainClass") { 
			cout << "mainclass " << ": " << n->value << endl;
			return new Class(n->value, n->type); 
		}
		//------------------------------------------------------
		else if (n->type == "MethodDeclarationlist") { 
			cout << "METHDECLIST " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "MethodDeclaration param") { 
			cout << "methodDec param " << ": " << n->value << endl;  
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "MethodDeclaration") { 
			cout << "Methoddec " << ": " << n->value << endl; 
			return new Method(n->value, n->type); 
		} 
		//------------------------------------------------------
		else if (n->type == "ClassDeclaration") {
			cout << "classDec " << ": " << n->value << endl; 
			//st->enterScope(); 
			return new Class(n->value, n->type); 
		} 
		else if (n->type == "Classdeclarationlist") { 
			cout << "CLASSDECLIST " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		} 
		//------------------------------------------------------
		else if (n->type == "Statementlist") { 
			cout << "statlist " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Statementlist assign") {
			cout << "statlist assign " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "Statement assign") { 
			cout << "stat assign " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "Statement while") { 
			cout << "stat while " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "Statement sys.out") { 
			cout << "stat sys.out " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "Statement if") { 
			cout << "stat if " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "Statement") {
			cout << "Statement " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		//------------------------------------------------------
		else if (n->type == "Expression list") {
			cout << "EXPLIST " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expressionlist") {
			cout << "EXPLIST " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression or") {
			cout << "EXP OR " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression less than") {
			cout << "EXP LT " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression larger") {
			cout << "EXPLARGER " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression if equal") {
			cout << "EXP IF EQ " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression ADD") {
			cout << "EXP ADD " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression subtract") {
			cout << "EXP subtract " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression multiplication") {
			cout << "EXP multiplication " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression Divided") {
			cout << "EXP Divided " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 		
		else if (n->type == "Expression()") {
			cout << "EXP " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression len") {
			cout << "EXPLEN " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression.identifier") {
			cout << "EXP IDENT " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression TRUE") {
			cout << "EXP TRUE " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression FALSE") {
			cout << "EXP FALSE " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression THIS") {
			cout << "EXP THIS " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression NEW INT") {
			cout << "EXP NEW INT " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "Expression new identifier") {
			cout << "EXP new identifier " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "Expression NOT") {
			cout << "EXP NOT " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression param") {
			cout << "EXP param " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Expression") {
			cout << "EXP " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		} 
		//------------------------------------------------------
		else if (n->type == "parameter list") { 
			cout << "param list " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
			
		}
		else if (n->type == "parameterlist") { 
			cout << "paramlist " << ": " << n->value << endl; 
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "identifier") { 
			cout << "IDENT " << ": " << n->value << endl;
			//st->addIdent(n->value);
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "VarDeclaration") { 
			cout << "VARDEC " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "<INTEGER_LITERAL>") { 
			cout << "<INTEGER_LITERAL> " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "String[]") { 
			cout << "String[] " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		} 
		else if (n->type == "Int[]") { 
			cout << "Int[] " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		}
		else if (n->type == "boolean") { 
			cout << "boolean " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		}	
		else if (n->type == "Vardeclarationlist") { 
			cout << "VARDECL " << ": " << n->value << endl;
			return new Variable(n->value, n->type); 
		}	
	}
};
#endif
