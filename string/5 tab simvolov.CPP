#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*5 ������� �ணࠬ��, ����� �뢮��� �� ��࠭ �����
���� ⠡���� ����஢�� ᨬ����� (ᨬ���� � ������ �� 0 �� 127).
������ ������ ������ �� ���쬨 ������� � ��⭠��� ��ப.
� ��ࢮ� ������� ������ ���� ᨬ���� � ����� �� 0 �� 15,
�� ��ன �� 16 �� 31 � �.�*/
 void main()
 {
	clrscr();

	int i, j, k = 0, kod = 0;
	char s;

	for(i = 1; i <= 16; i++)
	{
		kod = k;
		for (j = 1; j <= 8; j++)
		{	
			s = kod;
			printf("%c - %3i\t", s, s);
			kod += 16;
		}
		
		k++;
		printf("\n");
	}

	getch();
 }