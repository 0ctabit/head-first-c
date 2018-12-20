#include <stdio.h>
int main() {
	void fortune_cookie(char msg[])
	{
		printf("Message reads: %s\n", quote);
		printf("quote occupies %i bytes\n", sizeof(msg));
	}
	char quote[] = "Cookies make you fat";
	fortune_cookie(quote);
	printf("The quote string is stored at: %p\n", quote);
	
	return 0;
}
