#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*�������� ���-�� 楫�� �ᥫ �।� �ᥫ �, �, �*/
void main()
{
	clrscr();
	float a, b, c;
	int k = 0;

	printf("������ �� �᫠ ");
	scanf("%f %f %f", &a, &b, &c);

	if(ceil(a) == a)
		k++;

	if(ceil(b) == b)
		k++;

	if(ceil(c) == c)
		k++;

	printf("���-�� 楫�� �ᥫ = %i", k);
	getch();
}