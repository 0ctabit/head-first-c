#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char *question;
	struct node *no;
	struct node *yes;
} node;

