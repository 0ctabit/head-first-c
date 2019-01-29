#include <stdio.h>

void catalog(struct fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

int main()
{
	struct fish snappy = {"Snappy", "Piranha", 69, 4};
	catalog(snappy);
	/*We're skipping calling label for now*/
	return 0;
}
