#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*��㣮�쭨� ����� ����稭��� ᢮�� 㣫�� � ࠤ��ᮬ ����� ���㦭���
���� ��஭� ��㣮�쭨��*/
void main()
{
	clrscr();
	float a, b, c, r, a1, b1, c1;

	printf("������ 㣫� ��㣮�쭨��  � � � ");
	scanf("%f%f%f", &a, &b, &c);

	printf("\n������ ࠦ��� ���ᠭ��� ���㦭��� ");
	scanf("%f", &r);

	a1 = 2 * r * sin(a * M_PI / 180);
	b1 = 2 * r * sin(b * M_PI / 180);
	c1 = 2 * r * sin(c * M_PI / 180);

      printf("\n��஭� �=%.2f\n��஭� B=%.2f\n��஭� �=%.2f", a1, b1, c1);


	getch();
}