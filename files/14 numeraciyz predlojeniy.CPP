#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*14. ���ଠ�஢��� ⥪��, ��室�騩�� � 䠩��, ᫥���騬 ��ࠧ��: 
������ �।������� ������ ����� ᢮� ���浪��� �����; ��稭����� 
� ��᭮� ��ப�*/
void main()
{
	clrscr();

    int flag = 0;

    FILE *in = fopen("in.txt","r");
    FILE *out = fopen("out.txt","w+");

    int num = 1;
    for (char symbol = fgetc(in); !feof(in); symbol = fgetc(in))
    {
        if (flag == 0)
        {
            fprintf(out, "%i.", num++);
            flag = 1;
        }

        fputc(symbol, out);

        if (symbol == '.')
        {
            fprintf(out, "\n");
            flag = 0;
        }
    }

    fclose(in);
    fclose(out);

    printf("\n��� ��室� ������ ���� �������...");
    getch();
}