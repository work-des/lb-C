#include <conio.h>
#include <stdio.h>
#include <math.h>   
#include <locale.h>

/*9 ����  ����ࠫ쭮� �᫮.����⠢���  ���  ����  ⠪, 
�⮡�  ��ࠧ�������  ���ᨬ��쭮�  �᫮,  ����ᠭ���  ⥬� �� 
��ࠬ�.*/
void main()
{
	clrscr();

	int i;
	unsigned long int n, n2, nOut = 0;

	printf("������ ����ࠫ쭮� �᫮ ");
	scanf("%lu", &n);

	if (n < 1)
	{
		printf("\n�訡�� �����!");
		getch();
		return;
	}

	for (i = 9; i >= 0; i--)
	{
		n2 = n;

		while (n2 > 0)
		{
			int max = n2 % 10;

			if (max == i)
				nOut = nOut * 10 + max;

			n2 /= 10;
		}
	}

	printf("\n���ᨬ��쭮 �᫮ %lu", nOut);
	getch();
}