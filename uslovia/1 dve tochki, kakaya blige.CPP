#include <conio.h>
#include <stdlib.h>
#include <stdio.h>  


/*���� ��� �窨 �(x1;y1) � B(x2;y2) ���⠢��� ������,
��।����騩, ����� �� �祪 ��室���� ����� � ��砫� ���न���.*/
void main()
{
	clrscr();
	int x1, y1, x2, y2;

	printf("������ ���न���� �窨 � ");
	scanf("%i %i", &x1, &y1);

	printf("\n������ ���न���� �窨 B ");
	scanf("%i %i", &x2, &y2);

	if((x1*x1 + y1*y1) < (x2*x2 + y2*y2))
		printf("��窠 �(%i;%i) ����� � ��砫� ���न���", x1, y1);
	else
		printf("��窠 B(%i;%i) ����� � ��砫� ���न���", x2, y2);

	getch();
}