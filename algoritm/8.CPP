#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


/*�����⭠ ����� ���㦭���.
���� ���頤� ��㣠 ��࠭�祭��� �⮩ ���㦭�����*/
void main()
{
	clrscr();
	float l, r, s = 0;

	printf("������ ����� ���㦭��� ");
	scanf("%f", &l);

	r = l / (2 * M_PI);
	s = M_PI * r * r;

	printf("\n���頤� = %.2f", s);


	getch();
}