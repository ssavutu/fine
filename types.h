#pragma once

#define LEFT_PAREN 40
#define RIGHT_PAREN 41
#define DOUBLE_QUOTE 34
#define SINGLE_QUOTE 39

typedef enum {
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
  	END,
  	LEFTPAREN,
  	RIGHTPAREN,
} tokenType;

typedef struct {
	char* contents;
	tokenType type;
} Token;
