#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*13 � ⥪�� ��। ����� �।��������, � ���஬ ����砥���
�������� ᫮��, ���⠢��� ��᪫��⥫�� ����*/
void main()
{
	clrscr();

    char find[512];
    char buf[512];
    int flag = 0;
    long int startPoz = 0, endPoz = 0;
    FILE *in = fopen("in.txt","r");
    FILE *out = fopen("out.txt","w+");

    printf("������ ᫮��: ");
    scanf("%511s", &find);

    while (!feof(in))
    {
        char symbol = fgetc(in);

        if (symbol == '.')
        {
            endPoz = ftell(in);

            fseek(in, startPoz, 0);
            while (ftell(in) != endPoz)
            {
                fscanf(in, "%511s", buf);//�⠥� � ���� ᫮��

                if (strcmp(buf, find) == 0)//��室�� ᫮��
                {
                    flag = 1;
                    continue;
                }
            }

            //������ � ��室��� 䠩� � ���⮢�� ����樨
            fseek(in, startPoz, 0);
            while (ftell(in) != endPoz)
            {
                if (flag == 1)
                {
                    fputc('!', out);
                    flag = 0;
                }

                fscanf(in, "%511s", buf); //�⠥� � ���� ᫮��
                fprintf(out, "%s ", buf); //��襬 � ��⮪
            }
            
            startPoz = endPoz;
        }
    }

    fclose(in);
    fclose(out);

    printf("\n��� ��室� ������ ���� �������...");
    getch();
}