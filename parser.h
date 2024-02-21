// parser.h
#ifndef PARSER_H
#define PARSER_H

#include "lexer.h"

typedef struct
{
    TokenType type;
    int value; // For TOKEN_INT
} ASTNode;

ASTNode parse_expression();

#endif // PARSER_H
