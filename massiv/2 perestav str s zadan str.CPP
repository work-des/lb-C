#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*2 ������ �����⭠� �����. ����⠢��� ��ப� �
���ᨬ���� ������⮬ �� ������� ��������� � ��ப��
� ������� ����஬ m.*/
 void main()
{
	clrscr();
	randomize();

	int matr[n][n];

	int i, j, m, max, maxI, temp;

	printf("\n--��室��� �����--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			matr[i][j] = random(10);
			printf("%3i", matr[i][j]);
		}
	}

	printf("\n\n������ � ��ப� ������ �㦭� ����⠢��� ");
	scanf("%i", &m);

	if (--m > n)
	{
		printf("\n����� ��ப� �� �������!");
		getch(); return;
	}

	//���� ����. ��. ��.���������
	max = matr[0][0];
	for (i = 0; i < n; ++i)
	{
		if (max < matr[i][i])
		{
			max = matr[i][i];
			maxI = i;
		}
	}

	//���塞 ���⠬� ��ப�
	for (i = 0; i < n; ++i)
	{
		temp = matr[maxI][i];
		matr[maxI][i] = matr[m][i];
		matr[m][i] = temp;
	}

	printf("\n\n--���������� �����--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%3i", matr[i][j]);
		}
	}

	getch();
}