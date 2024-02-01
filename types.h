#pragma once

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
	tokenType type;
	char* contents;
} Token;
