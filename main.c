#include <stdio.h>
#include <stdlib.h>

#include "lexer.h"
#include "parser.h"


int main () {
  FILE *file = fopen("test.xara", "r");
  Token *tokens = lexer(file);
  // print_tokens(tokens);
  Node *root = parser(tokens);
  print_tree(root, 0, "");

  return 0;
}