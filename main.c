// main.c
#include "lexer.h"
#include "parser.h"
#include "codegen.h"

int main()
{
    const char *source_code = "2 * (3 + 4) - 5";
    initialize_lexer(source_code);

    ASTNode ast = parse_expression();

    generate_code(ast);

    return 0;
}
