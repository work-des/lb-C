#include <conio.h>
#include <stdio.h>
#include <math.h>   
#include <locale.h>

/*14 ���� �� ��㧭��� �᫠, �㬬� �����⮢ ���
������ ��⭠ M */
void main()
{
	clrscr();

	int i, m, first, last;

	printf("������ �㬬� �����⮢ ��� ");
	scanf("%i", &m);

	for (i = 10; i <= 99; i++)
	{
		first = (i / 10) * (i / 10);
		last = (i % 10) * (i % 10);
		if (first + last == m)
			printf("\n%i", i);
	}
	getch();
}