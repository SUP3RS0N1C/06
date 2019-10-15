#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//정수제곱을 계산하는 함수예제

int square( int n);

int main()
{
	int result;
	result = square(5);
	printf("%d", result);
 } 

int square(int n)
{
	return n*n;
}
