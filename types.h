typedef enum {
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
} tokenType;

typedef struct {
	char* contents;
	int length;
	tokenType type;
} Token;
