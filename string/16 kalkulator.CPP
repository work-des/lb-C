#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*������� �ணࠬ��, ����� ������ ���祭�� ��ࠦ����*/
 void main()
 {
	clrscr();

	int i, error = 0;
	long int a, b;
	char oper;
	char *s;

	printf("\t--������ ��ࠦ����--\n");

	gets(s);

      a = s[0] - '0';

	for(i=1; s[i] != 0; i+=2) {
		b = s[i+1] - '0';
		oper = s[i];

		switch(oper) {
			case '+':
				a += b;
				break;
			case '-':
				a -= b;
				break;
			default:
				error = -1;
  		}
	}

	if(error == 0)
		printf("१���� ��ࠦ���� %s = %li", s, a);
	else
		printf("����୮� ��ࠦ����!");

	getch();
 }