#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� ����⢨⥫쭮� �᫮ �, ����ࠫ쭮� �᫮ n. ���᫨��
p=a(a-n)(a-2n)x...x(a-n^2)*/
void main()
{
	clrscr();

	float a, p = 0;
	int i, n;

	printf("������ ����⢨⥫쭮� �᫮ � ");
	scanf("%f", &a);

	printf("������ ����ࠫ쭮� �᫮ n ");
	scanf("%i", &n);

	if (n < 1)
	{
		printf("\n�訡�� �����!");
		getch();
		return;
	}

	p = a;
	for (i = 1; i <= n; i++)
		p *= (a - i * n);

	printf("\np=a(a-n)(a-2n)x...x(a-n^2) = %.2f", p);


	getch();
}