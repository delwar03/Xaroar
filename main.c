#include <stdio.h>
#include <stdlib.h>

#include "lexer.h"
#include "parser.h"
#include "codegenerator.h"
#include "./hashmap/hashmapoperators.h"
#include "./hashmap/hashmap.h"


int main () {
  FILE *file = fopen("test.xara", "r");
  Token *tokens = lexer(file);
  // print_tokens(tokens);
  Node *root = parser(tokens);
  // print_tree(root, 0, "root");
  generate_code(root, "generated.asm");

  return 0;
}