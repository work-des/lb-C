#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*7 ������� �ணࠬ��, ����� 㤠��� ��
��������� � ���������� ��ப� ��砫�� �஡���.*/
 void main()
 {
	clrscr();

	char *s;
	int i, flag=0;

	printf("������ ��ப�\n");

	gets(s);
      printf("\n");

	for (i = 0; i < strlen(s); i++)
	{
		if(s[i] != 32 || flag != 0)
		{
			printf("%c", s[i]);
			flag = 1;
		}
	}

	getch();
 }