#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*�।� ��� n-������ �ᥫ 㪠���� �, �㬬�
��� ������ = ������� ��� �*/
void main()
{
	clrscr();

	int n;
	unsigned long int i, k, n1, n2, s;

	printf("������ ���-�� ��� � �᫥ ");
	scanf("%i", &n);

	printf("������ �᫮ k ");
	scanf("%lu", &k);

	if (n < 1)
	{
		printf("\n�訡�� �����!");
		getch();
		return;
	}
	else {
		n1 = pow(10, n-1);
		n2 = pow(10, n) - 1;

		while (n1 <= n2)
		{
			i = n1;
			s = 0;
			while (i != 0)
			{
				s += i % 10;
				i /= 10;
			}

			if (k == s)
				printf("\n�᫮: %lu �㬬� �ᥫ = %lu", n1, s);

			n1++;
		}
	}

	getch();
}