#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*3 ������ �ணࠬ��, ����� �뢮���
��� ���������� ���짮��⥫�� ᨬ����. 
�ணࠬ�� ������ �������� ࠡ��� � 
१���� �����, ���ਬ��, �窨*/
 void main()
 {
	clrscr();

	char s;

	while(1)
	{
		printf("������ ᨬ���: ");

		s = getch();
		
		printf("ᨬ��� \"%c\" - ��� %i \n\n", s, s);

		if(s == 46) break;
	}
 }