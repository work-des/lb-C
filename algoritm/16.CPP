#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� �㬬� 童��� ��䬥��᪮� �ண��ᨨ, �᫨ ������� �� ����
童�, �������⥫� � �᫮ 童��� �ண��ᨨ.*/
void main()
{
	clrscr();

	long int a, an, d, n, s=0;

	printf("������ ���� 童� �ண��ᨨ ");
	scanf("%li", &a);

	printf("\n������ ࠧ����� ");
	scanf("%li", &d);

	printf("\n������ �᫮ 童��� �ண��ᨨ ");
	scanf("%li", &n);

	an = a + d*(n - 1);
	s = ((a + an) * n) / 2;

	printf("\n\n�㬬� 童��� ��䬥��᪮� �ண��ᨨ = %li", s);

	getch();
}