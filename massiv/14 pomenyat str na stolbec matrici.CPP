#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*14. ���� ����⢨⥫쭠� �����⭠� ����� ���浪� n.
�८�ࠧ����� ������ �� �ࠢ���: ��ப� � ����஬ n
ᤥ���� �⮫�殬 � ����஬ n.*/
 void main()
 {
	randomize();
	clrscr();

	float a[n][n];
	int i, j, numStr, numCol;

	printf("\t--�����--");
	for(i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			a[i][j] = ((float)random(50)) / 5;
			printf("%5.2f ", a[i][j]);
		}
	}

	printf("\n������� ����� ��ப� ");
	scanf("%i", &numStr);

	printf("\n������� ����� �⮫�� ");
	scanf("%i", &numCol);

	for (i = n-1; i >= 0; i--)
	{
		a[i][numCol-1] = a[numStr-1][i];
	}

	printf("\n\t--�८�ࠧ������� �����--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			printf("%5.2f ", a[i][j]);
		}
	}

     	getch();
 }