#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*10. ���� ��᫥����⥫쭮��� �ᥫ, �।� ������ ������� ���� ����.
�뢥�� �� ����� �� �᫠, �����⥫쭮 �����.*/
 void main()
 {
	randomize();
	clrscr();

	int a[n] = {1, 2, 3, 5, 0, 6, 7, 8, 9, 4};
	int i, j=0;

	printf("\t--��室�� ���ᨢ--\n");
	for(i = 0; i < n; i++)
	{
		//a[i] = random(5);
		printf("%2i ", a[i]);
	}

	printf("\n\n\t--���ᨢ �����⥫쭮 �� 0--\n");
	while (a[j] != 0)
		printf("%2i ", a[j++]);

	printf("%2i ", a[j]);

   	getch();
 }