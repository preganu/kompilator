#include<iostream>
#include "parser.tab.hh"
#include "symbol_t.h"

extern Node* root;
extern FILE* yyin;

void yy::parser::error(std::string const&err)
{
  std::cout << "Cannot generate a syntax tree for this input: " << err << std::endl;
}

int main(int argc, char **argv)
{
  //Reads from file if a file name is passed as an argument. Otherwise, reads from stdin.
  if(argc > 1) {
    if(!(yyin = fopen(argv[1], "r"))) {
      perror(argv[1]);
      return 1;
    }
  }

  yy::parser parser;
  SymbolTable* symbol_table = new SymbolTable;
  if(!parser.parse()) {
    root->print_tree();
    root->generate_tree();
    root->create_st(symbol_table);
    //root->semantic_analysis(symbol_table);
  }
  return 0;
}
