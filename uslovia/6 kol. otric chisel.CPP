#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*������� ���-�� ����⥫��� �ᥫ �।� �ᥫ �, �, �*/
void main()
{
	clrscr();
	float a, b, c;
	int k = 0;

	printf("������ �� �᫠ ");
	scanf("%f %f %f", &a, &b, &c);

	if(a < 0)
		k++;

	if(b < 0)
		k++;

	if(c < 0)
		k++;

	printf("���-�� ����⥫��� �ᥫ = %i", k);
	getch();
}