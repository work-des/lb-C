#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� ����ࠫ쭮� �᫮ n. ���� �㬬� ��ࢮ� �
��᫥���� ���� �⮣� �᫠*/
void main()
{
	clrscr();

	int nl, n;

	printf("������ ����ࠫ쭮� �᫮ n ");
	scanf("%i", &n);

	if (n < 1)
	{
		printf("\n�訡�� �����!");
		getch();
		return;
	}
	else if (n < 10)
		printf("\nS = %i", n);
	else {
		nl = n;
		while (nl / 10 != 0)
			nl /= 10;

		printf("\nS = %i", (n%10) + nl);
	}

	getch();
}