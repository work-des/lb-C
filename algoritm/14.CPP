#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� ���頤� ��㣮�쭨��, ��� ��஭� ���ண� ࠢ�� � � b,
� 㣮� ����� �⨬� ��஭��� q*/
void main()
{
	clrscr();

	float a, b, q, s=0;

	printf("������ ��� ��஭� ��㣮�쭨�� ");
	scanf("%f %f", &a, &b);

	printf("\n������ 㣮� ����� ���� ");
	scanf("%f", &q);

	s = (a * b / 2) * sin(q * M_PI / 180);
	printf("\nS = %.2f", s);

	getch();
}