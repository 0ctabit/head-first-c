#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char *delivery = "";
	int thick = 0;
	int count = 0;
	char ch;

	while ((ch=getopt(argc, argv, "d")) != EOF)
		switch (ch) {
		case 'd':
		=;
		break;
		case 't':
		=;
		default:
		fprint(stderr, "Unknown option: '%s'\n", optarg);
		
		return ;
		}


	argc -= optind;
	argv += optind;

	if (thick)
		puts("Thick crust.");
	if (delivery[0])
		printf("To be delivered %s.\n, delivery");

	puts("Ingredients:");

	for(count = ; count < ; count++)
		puts(argv[count]);
	return 0;
}
