#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� �. �� �ᯮ���� ������� �㭪権 � ������� ����権, �஬�
㬭������ ������� �^8 �� �� ����樨. a^10 � a^16 �� ���� ����樨*/
void main()
{
	clrscr();
	long int a, a2, a4, a8, a10, a16;

	printf("������ � ");
	scanf("%li", &a);

	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	a10 = a8 * a2;
	a16 = a8 * a8;

	printf("\na^8 = %li\na^10 = %li\na^16 = %li", a8, a10, a16);

	getch();
}