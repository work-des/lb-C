#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*1. �ந����� ᫨ﭨ� ���� ⥪�⮢�� 䠩���. 
����� 䠩��� �������� � ����������*/
void main()
{
	clrscr();
	char *fName1, *fName2;
	char c;
	FILE *f1;
	FILE *f2;
	FILE *mergeFiles;

	printf("������ ������ ��� ��ࢮ�� 䠩��: ");
	gets(fName1);

	printf("\n\n������ ������ ��� ��ண� 䠩��: ");
	gets(fName2);

	f1 = fopen(fName1, "r");
	f2 = fopen(fName2, "r");
	mergeFiles = fopen("3.txt", "w+");

	if(f1 == NULL || f2 == NULL || mergeFiles == NULL)
		printf("\n\n�訡�� ������ 䠩���!");
	else
	{
		while((c=fgetc(f1)) && (c!=EOF))
			fputc(c, mergeFiles);
		fputc('\n', mergeFiles);

		while((c=fgetc(f2)) && (c!=EOF))
			fputc(c, mergeFiles);
		fputc('\n', mergeFiles);
	}

	fclose(f1);
	fclose(f2);
	fclose(mergeFiles);

	printf("\n\n����� �ᯥ譮 ��ꥤ�����");

	getch();
}