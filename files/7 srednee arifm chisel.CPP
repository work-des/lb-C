#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*7. ������ �ணࠬ��, ����� ������ �।���
��䬥��᪮� �ᥫ, ��室����� � 䠩��.
1
2
3*/
void main()
{
	clrscr();
    float sred = 0;
    int in[10];    
    int  i, summ = 0, count = 0;

    FILE *n;
    n = fopen("1.txt","rt");

    if(!n)
    {
         puts("\n�訡�� ������ 䠩��");
         getch();
         return;
    }

    for(i = 0; i < 9; i++)
    {
	   fscanf(n,"%d", &in[i]);
         
	   summ += in[i];

	   if (in[i] != 0)
             count++;
    }

    fclose(n);
    sred = float(summ) / count;
    printf("\n\n�।��� ��䬥��᪮� �ᥫ � 䠩�� = %.2f", sred);

    getch();
}