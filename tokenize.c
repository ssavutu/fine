#include <stdio.h>
#include <stdlib.h>
#include "tokenize.h"
#include "types.h"

Token * tokenize(char * contents, size_t len){ // returns the contents of the file broken into tokens
	
    // find file size
    Token* tokens = NULL;
    
    size_t count = 0;
    
    for (size_t currentChar = 0; currentChar < len; currentChar++){ // read 1 char at a time until EOF
        Token temp;
        switch (contents[currentChar]) {
            case '(':
                temp = (Token){LEFTPAREN, NULL};
                break;
            case ')':
                temp = (Token){RIGHTPAREN, NULL};
                break;
            default:
                continue;
        }
        tokens = realloc(tokens, (count + 1)*sizeof(Token));
        tokens[count] = temp;
        count++;
    }

    tokens = realloc(tokens, (count + 1)*sizeof(Token));

    Token end;
    end.contents = NULL;
    end.type = END;

    tokens[count] = end;
    return tokens;
}
