#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*4 ���� 楫�� �����⭠� ����� �-�� ���浪�. ��।�����,
���� �� ��� �����᪨� �����⮬, �.�. ⠪��, � ���ன 
�㬬� ������⮢ �� ��� ��ப�� � �⮫��� ���������*/
 void main()
{
	clrscr();
	randomize();

	int matr[n][n];

	int i, j, sumStr, sumStr2, sumCol, sumCol2, magic = 0;

	printf("\n--��室��� �����--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			matr[i][j] = random(2);
			printf("%3i", matr[i][j]);
		}
	}


	for (i = 0; i < n; i++)
	{
		sumStr2=sumStr;
		sumCol2=sumCol;
		sumStr=0;
		sumCol=0;
		for (j = 0; j < n; j++)
		{
			sumStr += matr[i][j];
			sumCol += matr[j][i];
		}

		if (i != 0 && (sumStr2 != sumStr || sumCol2 != sumCol))
			magic = -1;

		printf("\n�㬬� ��. � ��ப� %i = %i | �㬬� ��. � ������� %i = %i",
			i+1, sumStr, i+1, sumCol);
	}

	if (magic != 0)
		printf("\n\n����� �� ���� �����᪨� �����⮬");
	else
		printf("\n\n����� ���� �����᪨� �����⮬");
	getch();
}