#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	int answer;
	
	int numerator = factorial(n);
	int denominator = (factorial(n-r)*factorial(r));
	
	answer = numerator/denominator;
	
	return answer;
}

int factorial(int num)
{
	int res = 1;
	int i;
	for (i=1; i<=num; i++)
	{
		res = res * i;
	}

	return res;
}

int main(int argc, char *argv[])
{
	int n;
	printf("input n: ", n);
	scanf("%d", &n);

	int r;
	printf("input r: ", r);
	scanf("%d", &r);

	int answer = combination(n,r);

	printf("combination result is %d.", answer);
	
	return;
}

