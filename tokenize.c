#include <stdio.h>
#include <stdlib.h>
#include "tokenize.h"
#include "types.h"

Token * tokenize(char * contents, size_t len){ // returns the contents of the file broken into tokens
	
    // find file size
    Token* tokens = malloc(sizeof(Token));
    
    Token end;
    end.contents = NULL;
    end.type = END;
    end.length = -1;

    tokens[0] = end;

    size_t currentChar = 0;
    size_t count = 0;
    
    while (currentChar != EOF){ // read 1 char at a time until EOF

        if (currentChar == LEFT_PAREN){

            Token t;
            t.type = LEFTPAREN;
            t.contents = malloc(0);
  
            //tokens = realloc(count*sizeof(Token) + sizeof(Token));
            tokens[count] = t;
            tokens[count++] = end;
        }
      
    }
    return tokens;
}
