#include <conio.h>
#include <stdio.h>


/*15 ���⠢��� �ணࠬ�� ��ॢ��� ������� ����ࠫ쭮��
�᫠ �� �����筮� ��⥬� ��᫥��� � �������.*/
void DecToBin(unsigned long int dec)
{
	int bin;

	bin = dec % 2;
	dec = dec / 2;
	if (dec != 0)
		DecToBin(dec);

	printf("%i", bin);
}

void main()
{
	clrscr();

	unsigned long int n, a, b, c;

	printf("������ ����ࠫ쭮� �᫮ ");
	scanf("%lu", &a);

	if (a < 1)
	{
		printf("\n�訡�� �����!");
		getch();
		return;
	}

	printf("\n�����筮� �᫮ %lu \n� ����筮� ���� ", a);
	DecToBin(a);

	getch();
}