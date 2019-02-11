#include <stdio.h>
#include "decrypt.h"

int main()
{
	char msg[80];
	while (fgets(msg, 80, stdin)) {
		decrypt(msg);
		printf("%s", msg);
	}
}
