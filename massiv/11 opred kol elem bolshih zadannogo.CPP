#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*11. ���� ����� A ࠧ��� n x m. ��।����� ������⢮ ������⮢
���ᨢ� ������ ��������� ������� ���ᨢ�.*/
 void main()
 {
	randomize();
	clrscr();

	int a[n][n], i, j;
	int x, y, count = 0;

	printf("\t--�����--");
	for(i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			a[i][j] = random(9);
			printf("%2i ", a[i][j]);
		}
	}

	printf("\n������ ������� ������ (��ப� c⮫���) ");
	scanf("%i %i", &x, &y);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > a[x-1][y-1])
				count++;
		}
	}

	printf("\n\n������⢮ ������⮢ ���ᨢ� ������ ��������� ������� = %i", count);

   	getch();
 }