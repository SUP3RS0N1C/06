#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	int answer = factorial(n)/(factorial(n-r)*factorial(r));
	
	return answer;
}

int factorial(int num)
{
	int res = 1;
	int i;

	for (i=1; i<=num; i++)
	{
		res=res*i;
	}

	return res;
}

int get_integer(char c)
{
	int a;
	printf("input %d: ", c);
	scanf("%d", &a);
	return a;
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

	printf("%d", answer);
	
	return;
}

