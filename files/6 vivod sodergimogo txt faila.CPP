#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

/*6. ������ �ணࠬ��, ����� �뢮��� �� ��࠭ ᮤ�ন��� ⥪�⮢��� 䠩��*/
void main()
{
	clrscr();
	char c[100];
	FILE  *f;

	f = fopen("1.txt", "r");

	if(f == NULL)
		printf("�訡�� ������ 䠩��");
	else
	{
		while(fgets(c, 100, f) != 0)
		{
		  puts(c);
		}
	}
	
	fclose(f);

	getch();
}