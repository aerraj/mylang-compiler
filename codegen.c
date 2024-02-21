// codegen.c
#include "codegen.h"
#include <stdio.h>

void generate_code(ASTNode node)
{
    switch (node.type)
    {
    case TOKEN_INT:
        printf("%d", node.value);
        break;
    case TOKEN_PLUS:
        printf("(");
        generate_code(node);
        printf(" + ");
        generate_code(node);
        printf(")");
        break;
    case TOKEN_MINUS:
        printf("(");
        generate_code(node);
        printf(" - ");
        generate_code(node);
        printf(")");
        break;
    case TOKEN_MULTIPLY:
        printf("(");
        generate_code(node);
        printf(" * ");
        generate_code(node);
        printf(")");
        break;
    case TOKEN_DIVIDE:
        printf("(");
        generate_code(node);
        printf(" / ");
        generate_code(node);
        printf(")");
        break;
    default:
        // Handle error
        break;
    }
}
