#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo( int a, int b)
{
	int output;
	output = a + b;
	return output;
}

int square(int n)
{
	return (n*n);
}

int get_max(int a, int b)
{
	if (a>b)
		return a;
	else
		return b;
}

int main(int argc, char *argv[]) 
{		
	
	int a, b;
	a = 2;
	b = 5;

	int sum = sumTwo(a,b);
	int result_square = square(a);
	int max = get_max(a,b);

	printf("the result of sumTwo is %d, square is %d, get_max is %d", sum, result_square, max);
		
	return 0;
}
