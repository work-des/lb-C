#include <conio.h>
#include <stdio.h>
#include <math.h>   


/*��।����� ࠢ�� �� ������ ��������� ��姭�筮�� �᫠ ��� �㬬� ���
�⮣� �᫠*/
void main()
{
	clrscr();
	int x, x2, xs;

	printf("\n������ ��姭�筮� �᫮ ");
	scanf("%i", &x);

	if(x > 999 || x < 100)
	{
		printf("\n�᫮ �� ��姭�筮�");
		getch(); return;
	}

	x2 = x*x;
	xs = pow((x/100) + (x/10%10) + (x%10), 3);

	if(x2 == xs)
		printf("\n������ �᫠ %i = ��� �㬬� ��� �⮣� �᫠", x);
	else
		printf("\n������ �᫠ %i != ��� �㬬� ��� �⮣� �᫠", x);


	getch();
}