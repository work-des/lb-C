#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� ���頤� �����, ����७��� ࠤ��� ���ண� ࠢ�� r,
� ���譨� ��������� ��� R*/
void main()
{
	clrscr();
	float r, R, s;

	printf("������ ����७��� ࠤ��� r ");
	scanf("%f", &r);

	printf("\n������ ���譨� ࠤ��� R ");
	scanf("%f", &R);

	s = M_PI * (R*R - r*r);

	printf("\n���頤� ����� S = %.2f", s);


	getch();
}