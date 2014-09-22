#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "token.h"

typedef struct TreeNode TreeNode;
struct TreeNode {
	int rule;
	int children;
	TreeNode **child;
};

typedef struct TokenStackNode TokenStackNode;
struct TokenStackNode {
	Token *t;
	TokenStackNode *next;
};