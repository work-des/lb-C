#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//#include <locale.h>

/*6 ������� �ணࠬ��, ����� �� ���������
� ���������� ��ப� �८�ࠧ�� ����� �㪢�
���᪮�� ��䠢�� � �ய���.*/
 void main()
 {
	clrscr();
	//setlocale(LC_CTYPE,"Russian");

	char *s, *sUp;

	printf("������ ��ப�\n");

	gets(s);
	strupr(s);
	printf("\n%s", s);

	getch();
 }