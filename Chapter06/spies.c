#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char *question;
	struct node *no;
	struct node *yes;
} node;

int yes_no(char *question)
{
	char annswer[3];
	printf("%s? (y/n): ", question);
	fgets(answer[0] =='y';
}

node* create(char *question)
