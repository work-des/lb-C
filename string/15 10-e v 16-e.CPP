#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*15 ������� �ணࠬ��, ����� �८�ࠧ�� ��������� ���짮��⥫��
�����筮� �᫮ � ��⭠����筮�*/
 void main()
 {
	clrscr();

	int n, r, i = 4, j = 0; 
	char st[5];

	printf("������ �����筮� �᫮:  ");
	scanf("%i", &n); 

	st[5] = '\0';

	do {
		r = n % 16;
		n = n / 16;

		if (r < 10)
			st[i--] = r + 48; //0 �८�ࠧ.���� � ᨬ���
		else
			st[i--] = r + 55;
	} while ( n > 0);

	i++;
	while(st[i])
		st[j++] = st[i++];
	st[j] = '\0';

	printf("\n10-e %i\n=\n16-e %s", n, st);

	getch();
 }