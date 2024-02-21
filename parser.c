// parser.c
#include "parser.h"

ASTNode parse_factor()
{
    Token token = get_next_token();

    ASTNode node;

    switch (token.type)
    {
    case TOKEN_INT:
        node.type = TOKEN_INT;
        node.value = token.value;
        break;
    case TOKEN_LPAREN:
        node = parse_expression();
        if (get_next_token().type != TOKEN_RPAREN)
        {
            // Handle error
        }
        break;
    default:
        // Handle error
        break;
    }

    return node;
}

ASTNode parse_term()
{
    ASTNode left = parse_factor();

    Token token = get_next_token();

    while (token.type == TOKEN_MULTIPLY || token.type == TOKEN_DIVIDE)
    {
        ASTNode right = parse_factor();

        // Create a new AST node representing the operation
        // For simplicity, just store the operator in the AST node
        left.type = token.type;
        left.value = right.value;

        token = get_next_token();
    }

    return left;
}

ASTNode parse_expression()
{
    ASTNode left = parse_term();

    Token token = get_next_token();

    while (token.type == TOKEN_PLUS || token.type == TOKEN_MINUS)
    {
        ASTNode right = parse_term();

        // Create a new AST node representing the operation
        // For simplicity, just store the operator in the AST node
        left.type = token.type;
        left.value = right.value;

        token = get_next_token();
    }

    return left;
}
