#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� ���頤� ࠢ�����७��� �࠯�樨 � �᭮����ﬨ � � b
� 㣫�� a �� ����襬 �᭮����� �*/
void main()
{
	clrscr();
	float a, b, u, h, s;

	printf("������ �᭮����� �࠯�樨 a b ");

	scanf("%f %f", &a, &b);

	printf("������ 㣮� � ");

	scanf("%f", &u);

	if(b==0 || a<=b || u==0 || u=>90)
	{
		printf("\n�室�� ����� ������");
		getch(); return;
	}

	u = u * M_PI / 180;
	h = (a - b) * sin(u) / (2 * cos(u));
	s = (a + b) * h / 2;

	printf("\n���頤� �࠯�樨 = %.2f", s);

	getch();
}