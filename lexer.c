// lexer.c
#include "lexer.h"

static const char *source_code;
static int current_position;

void initialize_lexer(const char *source)
{
    source_code = source;
    current_position = 0;
}

Token get_next_token()
{
    char current_char = source_code[current_position++];

    while (current_char == ' ' || current_char == '\t' || current_char == '\n')
    {
        current_char = source_code[current_position++];
    }

    Token token;

    switch (current_char)
    {
    case '+':
        token.type = TOKEN_PLUS;
        break;
    case '-':
        token.type = TOKEN_MINUS;
        break;
    case '*':
        token.type = TOKEN_MULTIPLY;
        break;
    case '/':
        token.type = TOKEN_DIVIDE;
        break;
    case '(':
        token.type = TOKEN_LPAREN;
        break;
    case ')':
        token.type = TOKEN_RPAREN;
        break;
    case '\0':
        token.type = TOKEN_END;
        break;
    default:
        if (isdigit(current_char))
        {
            token.type = TOKEN_INT;
            token.value = current_char - '0';

            while (isdigit(source_code[current_position]))
            {
                token.value = token.value * 10 + (source_code[current_position++] - '0');
            }
        }
        else
        {
            // Handle unknown tokens or errors
        }
        break;
    }

    return token;
}
