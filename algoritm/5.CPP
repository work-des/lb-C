#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� ��� ����⢨⥫��� �᫠ � � �.
���᫨�� �� �㬬� ࠧ����� �ந�������� � ��⭮�*/
void main()
{
	clrscr();

	float x, y;

	printf("������ ����⢨⥫�� �᫠ � � � ");
	scanf("%f%f", &x, &y);

	printf("\n�㬬� = %.2f \n�������� = %.2f \n�ந��������� = %.2f \n���⭮� = %.2f", x+y, x-y, x*y, x/y);

	getch();
}