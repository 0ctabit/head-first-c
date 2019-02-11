#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("The value of INT_MAX is %i\n", INT_MAX);
	printf("The value of INT_MIN is %i\n", INT_MIN);
	printf("An int takes %zu bytes\n", sizeof(int));

	printf("The value of FLT_MAX is %f\n", FLT_MAX);
	printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
	printf("A float takes %zu bytes\n", sizeof(float));
	
	printf("The value of CHAR_MAX is %c\n", CHAR_MAX);
	printf("The value of CHAR_MIN is %c\n", CHAR_MIN);
	printf("A char takes %zu bytes\n", sizeof(char));
	
	printf("The value of DBL_MAX is %lf\n", DBL_MAX);
	printf("The value of DBL_MIN is %lf\n", DBL_MIN);
	printf("A double takes %zu bytes\n", sizeof(double));
	
	printf("The value of SHRT_MAX is %hi\n", SHRT_MAX);
	printf("The value of SHRT_MIN is %hi\n", SHRT_MIN);
	printf("A short takes %zu bytes\n", sizeof(short));
	
	printf("The value of LONG_MAX is %li\n", LONG_MAX);
	printf("The value of LONG_MIN is %li\n", LONG_MIN);
	printf("A long takes %zu bytes\n", sizeof(long));
	
	return 0;
}
