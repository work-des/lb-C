#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>


/*���⠢��� �ணࠬ��, ����� ������ ��� �������
�᫠ n (n<=3999) �ࠡ᪨�� ��ࠬ� ��ॢ����� ��
� ������ ਬ᪨��*/
void main()
{
	clrscr();

	int n, i = 12;

	//��㬥�� ���ᨢ ��� ��ப.
	//���.������ �������., ��ன 3 (��� ᨬ� ���� + ����� ��ப�)
	char rim[][3] = {"I", "IV", "V", "IX", "X", "XL", "L",
					"XC", "C", "CD", "D", "CM", "M"};

	int arab[] = {1, 4, 5, 9, 10, 40, 50,
					90, 100, 400, 500, 900, 1000};

	printf("������ �᫮ �� 1 �� 3999 ");
	scanf("%i", &n);

	if (n < 1 || n > 3999)
	{
		printf("\n��᫮ �� �࠭�栬� 㪠������� ���������!");
		getch();
		return;
	}

	while (n > 0)
	{
		while (arab[i] > n)
			i--;

		cputs(rim[i]);
		n -= arab[i];	
	}


	getch();
}