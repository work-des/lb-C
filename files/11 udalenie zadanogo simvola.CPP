#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*11. ������ �� ⥪��, ��室�饣��� � 䠩��, ������� ����,
��� �� �� ������砫��.*/
void main()
{
	clrscr();

    char *simbol;
    int f = 0;

    printf("������ 㤠�塞� ᨬ���: ");
    gets(simbol);

    FILE *fin = fopen("1.txt", "r");
    FILE *fout = fopen("1_edit.txt", "w");

    if(!fin || !fout)
    {
        printf("\n\n�訡�� ������ 䠩���!");
        return;
    }

    for(char ch = fgetc(fin); !feof(fin); ch = fgetc(fin))
    {
        if(ch == simbol[0] && f == 0)
        {
            f = 1;
		continue;
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("\n������ 㤠���");

    getch();
}