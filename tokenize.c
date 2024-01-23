#include <stdio.h>
#include <stdlib.h>
#include "types.h"

Token * tokenizer(char * contents, size_t len){ // returns the contents of the file broken into tokens
	
    // find file size
    Token* tokens = malloc(sizeof(Token));
    tokens[0] = NULL;

    size_t currentChar;
    int numOfQuotes;

    while (currentChar != EOF){ // read 1 char at a time until EOF

        if (currentChar == LEFT_PAREN){

            Token t;

            t.type = LEFTPAREN;

        }
      
    }
    return tokens;
}
