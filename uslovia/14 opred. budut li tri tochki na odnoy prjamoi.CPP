#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� �� �窨 �(x1,y1), B(x2,y2), C(x3,y3). ��।�����, ���� �� ���
�ᯮ������ �� ����� ��אַ�� �᫨ ��� � ���᫨�� 㣮� ���*/
void main()
{
	clrscr();

	int x1,y1, x2,y2, x3,y3;
	float sc, ab, bc, u=0;

	printf("������ ��� �(x1,y1) ");
	scanf("%i %i", &x1, &y1);

	printf("\n������ ��� B(x2,y2) ");
	scanf("%i %i", &x2, &y2);

	printf("\n������ ��� C(x3,y3) ");
	scanf("%i %i", &x3, &y3);


	if((x3 - x1) / (x2 - x1) == (y3 - y1) / (y2 - y1))
		printf("\n��窨 ����� �� ����� ��אַ�");
	else
	{
		sc = (x2-x1)*(y3-y2)+(x3-x2)*(y2-y1);
		ab = sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
		bc = sqrt(pow(x2-x3, 2)+pow(y2-y3, 2));
		u = acos(sc / ab / bc) * 180 / M_PI;

		printf("\n���� ��� = %f", u);
	}

	getch();
}