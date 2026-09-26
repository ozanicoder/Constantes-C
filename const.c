#include <stdio.h>
#include <locale.h>

const float pi=3.141592;

int main()
{
	setlocale(LC_ALL,"portuguese");
	float n;

	printf("insira um número para ser multiplicado por pi:\n");
	scanf("%f",& n);
	printf("%f x pi = %f", n, n*pi);
	printf ("");
	printf ("");
	printf ("");
	printf ("");
}
