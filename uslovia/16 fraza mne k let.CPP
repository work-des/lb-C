#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*��� 楫��� �᫠ � �� 1-99 �������� �ࠧ� "��� � ���", ���뢠� �� �⮬,
�� �� �������� ���祭��� � ᫮�� ��� ���� �������� �� ᫮�� ��� ��� ����.
���ਬ�� 11 ���, 22 ����, 21 ���*/
void main()
{
	clrscr();

	int k;

	printf("������ ��� ������ �� 1 �� 99 ");
	scanf("%i", &k);

	if(k < 1 || k > 99)
		printf("\n�� �� �� த����� ��� ��� 㦥 ��� � �����!");
	else if (k == 11 || k == 12 || k == 13)
		printf("\n��� %i ���", k);
	else
	{
	   switch(k%10) {
		case 1:
			printf("\n��� %i ���", k);
			break;
		case 2: case 3: case 4:
			printf("\n��� %i ����", k);
			break;
		default:
			printf("\n��� %i ���", k);
			break;
	   }
	}

	getch();
}