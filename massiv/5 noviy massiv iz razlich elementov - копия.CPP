#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*5 ��� 楫��᫥��� ���ᨢ A[n], �।� ������⮢ ���� ���������.
������� ���ᨢ �� ࠧ����� ������⮢A[n ].*/
 void main()
 {
	randomize();
	clrscr();

	int a[n], b[n], i, j, k = 0, isComp;

	printf("\t--��室�� ���ᨢ--\n");
	for(i = 0; i < n; i++)
	{
		a[i] = random(9);
		printf("%2i ", a[i]);
	}

	for (i = 0; i < n; i++)
	{
		isComp = 1;
		for (j = 0; j < n; j++)
		{
			if(i != j && a[i] == a[j])
				isComp = 0;
		}

		if(isComp == 1)
			b[k++] = a[i];
	}

	printf("\n\n\t--���ᨢ �� ࠧ����� ������⮢--\n");
	for (i = 0; i < k; i++)
	{
		printf("%2i ", b[i]);
	}

   	getch();
 }