#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*10. ������ �ணࠬ��, ����� �����뢠�� � ��室�騩�� �� ��᪥ 䠩� ���,
䠬���� � ����� ⥫�䮭�, ���ਬ��, ��襣� ⮢���. �᫨ 䠩�� �� ��᪥ ���,
� �ணࠬ�� ������ ᮧ���� ���. � 䠩�� �� ����� ������ ��室�����
��᫥����⥫쭮 � ����� ��ப�. */
void main()
{
	clrscr();
	char *fio, *tel;
	char c;

	FILE *spr;

	printf("������ ���: ");
	gets(fio);

	printf("\n������ ����� ⥫�䮭�: ");
	gets(tel);


	spr = fopen("spr.txt", "a+");

	if(spr == NULL)
		printf("\n\n�訡�� ������ 䠩��!");
	else
	{
		fprintf(spr, "\nFIO: %s ---> Tel: %s", fio, tel);
		fprintf(spr, "\n------------------------------------------");
	}

	fclose(spr);

	printf("\n\n��ࠢ�筨� ��������!");

	getch();
}