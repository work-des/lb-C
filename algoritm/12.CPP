#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���᫨�� ��୨ �����⭮�� �ࠢ����� ax^2 + bx + c = 0
��������� ����樥�⠬� a, b, c (a <> 0 � ���ਬ����� => 0)*/
void main()
{
	clrscr();

	float a, b, c, d, x1, x2;

	printf("������ ����樥��� a b c: ");
	scanf("%f %f %f", &a, &b, &c);

	d = (b * b) - (4 * a * c);

	if(a == 0)
	{
		printf("\n� �������� ࠢ������ 0");
		getch(); return;
	}

	if(d < 0)
	{
		printf("\n���ਬ����� ����⥫�� ");
		getch(); return;
	}

	x1 = (-b - sqrt(d)) / (2 * a);
	x2 = (-b + sqrt(d)) / (2 * a);

	printf("\n��୨ �ࠢ����� (%.2f;%.2f)", x1, x2);


	getch();
}