#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*16 ���� �㬬� ��� �-������ �ᥫ */
void main()
{
	clrscr();

	int n;
	unsigned long int i, k, n1, n2, s;

	printf("������ ���-�� ��� � �᫥ (�� 1 �� 4) ");
	scanf("%i", &n);

	if (n < 1 || n > 4)
	{
		printf("\n�訡�� �����!");
		getch();
		return;
	}
	else {
		n1 = pow(10, n-1);
		n2 = pow(10, n)-1;

		while (n1 <= n2)
		{
			i = n1;
			s = 0;
			while (i != 0)
			{
				s += i % 10;
				i /= 10;
			}

			printf("\n�᫮: %lu �㬬� �ᥫ = %lu", n1++, s);
		}
	}

	getch();
}