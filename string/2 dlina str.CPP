#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*2 ������ �ணࠬ��, ����� ������ �����
��������� � ���������� ��ப�*/
 void main()
 {
	clrscr();

	char *s;

	printf("������ ��ப�\n");

	gets(s);
	
	printf("����� ��襩 ��ப� = %d", strlen(s));

	getch();
 }