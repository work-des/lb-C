#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*14 ������� �ணࠬ��, ����� �८�ࠧ�� ���������
���짮��⥫�� �����筮� �᫮ � �᫮ � 㪠������ ��⥬�
��᫥��� (�� 2 �� 10*/
 void main()
 {
	clrscr();

	int osn, n, cn, r, i; 
	char st[17];

	printf("������ �����筮� �᫮:  ");
	scanf("%i", &n); 

	printf("\n������ �᭮����� CC (2-10):  "); 
	scanf("%i", &osn);

	cn = n;
	st[16] = '\0';
	i = 15;

	do {
		r = n % osn;
		n = n / osn; 
		st[i--] = r + 48; //0 �८�ࠧ.���� � ᨬ���
	} while ( n > 0);

	i++;
	int j = 0;
	while(st[i])
		st[j++] = st[i++];
	st[j] = '\0';

    st[i--] = ' ';

	printf("\n10-e %i\n=\n%i-e %s", cn, osn, st);

	getch();
 }