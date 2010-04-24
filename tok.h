#define BUFSIZE		(1 << 12)
#define NAMELEN		(1 << 7)
#define ARRAY_SIZE(a)	(sizeof(a) / sizeof((a)[0]))

enum tok {
	TOK_EOF,
	TOK_NAME = 256,
	TOK_NUM,
	TOK_VOID,
	TOK_STATIC,
	TOK_RETURN,
	TOK_UNSIGNED,
	TOK_SIGNED,
	TOK_SHORT,
	TOK_LONG,
	TOK_INT,
	TOK_CHAR,
	TOK_STRUCT,
	TOK_ENUM,
	TOK_IF,
	TOK_ELSE,
	TOK_FOR,
	TOK_WHILE,
	TOK_DO,
	TOK_SWITCH,
	TOK_CASE,
	TOK_SIZEOF,
};

void tok_init(int fd);
int tok_see(void);
int tok_get(void);
char *tok_id(void);