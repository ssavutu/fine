#include "main.h"

int main (int argc, char* argv[]){
	if (argv[1] == NULL) }
		printf("Please kill yourself.");
		return -1;
	}
	FILE* file = fopen(argv[1], "r");
	
	tokenize(file);
		
	return 0;
}
