#include <conio.h>
#include <stdio.h>
#include <math.h>   
#include <locale.h>

/*���⠢��� �ணࠬ�� ���᫥��� �㭪樨 F(x) �� ��१��
[a; b] c 蠣�� h. ������� �।�⠢��� � ���� ⠡����,
���� �⮫��� ���祭�� ��㬥��, ��ன ���祭�� �㭪樨
F(x) = sin2 x - cos2 x*/
void main()
{
	clrscr();

	int h, a, b, x;
	float f = 0;

	printf("������ ��१�� [a; b] ");
	scanf("%i %i", &a, &b);

	printf("\n������ 蠣 ");
	scanf("%i", &h);

	printf("\nx\tF(x) = sin 2x - cos 2x");
	printf("\n------------------------------");

	x = a;
	while (x <= b)
	{
		printf("\n%i \t%.2f", x, sin(2*x) - cos(2*x));
		x += h;
	}

	getch();
}