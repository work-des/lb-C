#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*9. ���� ��᫥����⥫쭮��� �ᥫ a1, a2, ..., an.
�������� �� �� 童��, ����訥 ������� Z, �⨬ �᫮�.
�������� ������⢮ �����*/
 void main()
 {
	randomize();
	clrscr();

	int a[n], i, z, count = 0;

	printf("\t--��室�� ���ᨢ--\n");
	for(i = 0; i < n; i++)
	{
		a[i] = random(5);
		printf("%2i ", a[i]);
	}

	printf("\n����� �᫮ Z ");
	scanf("%i", &z);
	for (i = 0; i < n; i++)
	{
		if (a[i] > z)
		{
			a[i] = z;
			count++;
		}
	}

	if (count > 0)
	{
		printf("\n\n\t--��������� ���ᨢ--\n");
		for (i = 0; i < n; i++)
		{
			printf("%2i ", a[i]);
		}
		printf("\n���-�� ����� = %i", count);
	}
	else
		printf("\n童��� ����� Z ���!");

   	getch();
 }