#include <conio.h>
#include <stdio.h>
#include <math.h>   

/*12 ��������筠� ����� ����� �� 3 �� ������� �� 2 
���⪨. ��।�����, ᪮�쪮 ���� �㤥� �१ 3, 6, 9, 12,
...24 ��*/
void main()
{
	clrscr();

	int i, kletkaCount = 2;
	float s;

	for (i = 3; i <= 24; i+=3)
	{
		printf("\n��१ %i�. �㤥� %i ��.", i, kletkaCount);
		kletkaCount *= 2;
	}

	getch();
}