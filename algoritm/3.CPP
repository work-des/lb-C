#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���᫨�� ����� ���㦭��� � ���頤� ��㣠
������ � ⮣� �� ��������� ࠤ��� R*/
void main()
{
	clrscr();
	float r;

	printf("������ ࠤ��� ���㦭��� ");
	scanf("%f", &r);

	printf("\n����� ���㦭��� = %.2f", 2*M_PI*r);
	printf("\n���頤� ��㣠 = %.2f", M_PI * (r*r) );

	getch();
}