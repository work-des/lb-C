#include <conio.h>
#include <stdio.h>
#include <math.h>   

/*11 ���㯠⥫� ������ �������� � ����� S �. � ���� �������
1, 2, 5, 10, 50, 100, 500 �. ����쪮 ���� ࠧ���� ���⮨��⢠ 
�⤠�� ���㯠⥫�, �᫨ �� ��稭��� ������ � ᠬ�� ��㯭��?*/
void main()
{
	clrscr();

	int i;
	float s;

	printf("������ �㬬� ");
	scanf("%f", &s);

	int kup[] = { 500, 100, 50, 10, 5, 2, 1 };

	for (i = 0; i < 7; i++)
	{
		if (s > 0 && s <= kup[i])
			printf("\n���� %i - 1", kup[i]);
		else if (s > kup[i])
			printf("\n���� %i - 1", kup[i]);
		else
			printf("\n���� %i - 0", kup[i]);

		s = s - kup[i];
	}

	if (s > 0)
		printf("\n�� �� 墠⠥� %.2f �.", s);

	getch();
}