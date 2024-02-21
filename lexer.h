// lexer.h
#include <ctype.h>
#ifndef LEXER_H
#define LEXER_H

typedef enum
{
    TOKEN_INT,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_MULTIPLY,
    TOKEN_DIVIDE,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_END,
} TokenType;

typedef struct
{
    TokenType type;
    int value; // For TOKEN_INT
} Token;

void initialize_lexer(const char *source);
Token get_next_token();

#endif // LEXER_H
