#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� ����⢨⥫쭮� �᫮ �. �� �������� �������� ��㣨��
���.�����ﬨ �஬� 㬭������ ᫮����� � ���⠭��
���᫨�� �� �������쭮� �᫮ ����権 2�^4-3x^3+4x^2-5x+6*/
void main()
{
	clrscr();

	float x;
	printf("������ �᫮ ");
	scanf("%f", &x);

	printf("\n%.2f", (((2*x-3)*x+4)*x-5)*x+6);


	getch();
}