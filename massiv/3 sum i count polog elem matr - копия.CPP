#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*3 ���᫨�� �㬬� � �᫮ ������⥫��� ������⮢ 
������ A[N, N], ��室����� ��� ������� ����������.*/
 void main()
{
	clrscr();
	randomize();

	int matr[n][n];

	int i, j, jd = 1, sum, count;

	printf("\n--��室��� �����--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			matr[i][j] = random(10)-2;
			printf("%3i", matr[i][j]);
		}
	}


	printf("\n\n��ப�\t�㬬�\t���-�� ����");
	for (i = 0; i < n; i++)
	{
		sum = 0, count = 0;
		for (j = jd; j < n; j++)
		{
			if (matr[i][j] >= 0)
			{
				sum += matr[i][j];
				count++;
			}
		}
		jd++;
		printf("\n%i \t%i \t%i", i+1, sum, count);
	}

	getch();
}