#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*16 �������� �������� ᫮�� � ⥪��, ��室�饬�� � �������� 
䠩��, �� ��㣮� ᫮��*/
void main()
{
	clrscr();

    int count = 0;
    char find[512];
    char replace[512];
    char buf[512];
    FILE *in = fopen("in.txt","r");
    FILE *out = fopen("out.txt","w+");

    printf("����: ");
    scanf("%511s", &find);

    printf("�������� ��: ");
    scanf("%511s", &replace);
    
    
    while (!feof(in))
    {
        fscanf(in, "%511s", buf);//�⠥� � ���� ᫮��

        if (strcmp(buf, find) == 0) //0-᫮�� �������
        {    
            strcpy(buf, replace); //�����塞 ᫮��
            count++;
        }

        fprintf(out, "%s ", buf); //�����뢠�� � ��⮬
    }

    fclose(in);
    fclose(out);

    printf("\n�������� %i c���(�)", count);

    getch();
}