#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*������ ���न���� ��� ���設 ��㣮�쭨��
���� ��� ��ਬ��� � ���頤�*/
void main()
{
	clrscr();
	int a1, a2, b1,b2, c1,c2, d1,d2,d3;
	float s=0, p=0;

	printf("������ ���न���� ���設� � ");
	scanf("%i %i", &a1, &a2);

	printf("������ ���न���� ���設� B ");
	scanf("%i %i", &b1, &b2);

	printf("������ ���न���� ���設� C ");
	scanf("%i %i", &c1, &c2);

	d1 = sqrt(sqrt(b1-a1) + sqrt(b2-a2));
	d2 = sqrt(sqrt(c1-b1) + sqrt(c2-b2));
	d3 = sqrt(sqrt(c1-a1) + sqrt(c2-a2));

	p = (d1+d2+d3) / 2.0;
	s = sqrt(p * (p-d1) * (p-d2) * (p-d3));

	printf("\nS = %.2f \nP = %.2f", s, p);

	getch();
}