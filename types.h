#define LEFT_PAREN 40
#define RIGHT_PAREN 41
#define DOUBLE_QUOTE 34
#define SINGLE_QUOTE 39

typedef enum {
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
  LEFTPAREN,
  RIGHTPAREN,
} tokenType;

typedef struct {
	char* contents;
	int length;
	tokenType type;
} Token;
