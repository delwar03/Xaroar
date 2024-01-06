#include <stdio.h>
#include <stdlib.h>

#include "lexer.h"
#include "parser.h"


int main () {
  FILE *file = fopen("test.xara", "r");
  Token *tokens = lexer(file);
  parser(tokens);
  // print_tokens(tokens);

  return 0;
}