#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*12 ������� �ணࠬ��, ����� �८�ࠧ�� ���������
� ���������� ���쬨ࠧ�來�� ����筮� �᫮ � �����筮*/
 void main()
 {
	clrscr();

	char bin[16];
	long int dec = 0;
	int i, v = 1;

	printf("������ ����筮� �᫮:  ");
	gets(bin);

	for ( i = strlen(bin) - 1; i >= 0; i--)
	{       
		if ( bin[i] == '1' )
			dec += v;
		v *= 2;
	}


	printf("\n2-e %s\n=\n10-e %d", bin, dec);

	getch();
 }