#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*7 � 楫��᫥���� ��᫥����⥫쭮�� ���� �㫥�� ��������.
������� ���ᨢ �� ����஢ ��� ������⮢.*/
 void main()
 {
	randomize();
	clrscr();

	int a[n], b[n], i, k = 0, isComp;

	printf("\t--��室�� ���ᨢ--\n");
	for(i = 0; i < n; i++)
	{
		a[i] = random(5);
		printf("%2i ", a[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] == 0)
			b[k++] = i+1;
	}

	printf("\n\n\t--���ᨢ �� ����஢ �㫥��� ������⮢--\n");
	for (i = 0; i < k; i++)
	{
		printf("%2i ", b[i]);
	}

   	getch();
 }