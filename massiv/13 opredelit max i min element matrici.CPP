#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*13 ��।����� ���ᨬ���� � ��������� ������� � ����� m x n*/
 void main()
 {
	randomize();
	clrscr();

	int a[n][n], i, j;
	int min, max;

	printf("\t--�����--");
	for(i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			a[i][j] = random(10)-2;
			printf("%2i ", a[i][j]);
		}
	}

	min = a[0][0];
	max = a[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
			if (a[i][j] > max)
				max = a[i][j];
		}
	}

	printf("\n\n��������� = %i\n���ᨬ���� = %i", min, max);

   	getch();
 }