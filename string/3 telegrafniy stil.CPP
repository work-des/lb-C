#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>

/*3 ������ �ணࠬ��, ����� �뢮��� �� ��࠭
ᮮ�饭�� � "⥫���䭮�" �⨫�: �㪢� ᮮ�饭��
������ ������� �� �����, � �����ன ����প��*/
 void main()
 {
	clrscr();

	char *s = "�� �ணࠬ�� �뢮��� ��� ⥪�� � ⥫���䭮� �⨫�";

	for (int i = 0; s[i] != 0x0; i++)
	{
		printf("%c", s[i]);
		delay(200);
	}

	getch();
 }