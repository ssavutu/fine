#include <stdio.h>
#include <stdlib.h>
#include "tokenize.h"

int main (int argc, char* argv[]){

	if (argv[1] == NULL) {
		printf("Please kill yourself.\n");
		return -1;
	}
    // Get file
    FILE * f = fopen(argv[1], "r");
    char * contents;
    size_t len;

    fseek(f, 0L, SEEK_END);
    len = ftell(f);
    
    fseek(f, 0L, SEEK_SET);
    contents = (char*)malloc(len + 1);	
    contents[len] = 0;
    
    fread(contents, sizeof(char), len, f);
    fclose(f);

    Token * tokens = tokenize(contents, len);
    int x = 0;
    while(tokens[x].type != END) {
        printf("Token of type %d\n", tokens[x].type);
        x++;
    }
    return 0;
}
