#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*4. ���ࠡ���� �ணࠬ�� 㤠����� � ⥪��,
ᮤ�ঠ饬�� � 䠩��, ��譨� �஡����.*/
void main()
{
	clrscr();

    FILE *fin = fopen("1.txt", "r");
    FILE *fout = fopen("1_formatted.txt", "w");

    if(!fin || !fout)
    {
        printf("\n\n�訡�� ������ 䠩���!");
        return;
    }

    for(char ch = fgetc(fin); !feof(fin); ch = fgetc(fin))
    {
        if(ch == ' ')
        {
		fputc(ch, fout);

            while(!feof(fin) && (ch = fgetc(fin)) == ' ');
            if(feof(fin))
                break;
	  }

	  fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("\n��譨� �஡��� 㤠����");

    getch();
}