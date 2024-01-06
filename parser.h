#ifndef XARA_PARSER_H_
#define XARA_PARSER_H_

typedef struct Node {
  char *value;
  TokenType type;
  struct Node *right;
  struct Node *left;
} Node;

void print_tree(Node *node, int indent, char *identifier);
Node *init_node(Node *node, char *value, TokenType type);
void print_error(char *error_type);
Node *parser(Token *tokens);

#endif