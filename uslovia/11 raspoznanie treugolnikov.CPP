#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*������� �ணࠬ��, �ᯮ������� �� ������ ��஭ �।� ��� ��㣮�쭨���
��אַ㣮���. �᫨ ⠪���� ���, � ���᫨�� ����稭� 㣫� �.*/
void main()
{
	clrscr();
	int a, b, c;
	float g=0;

	printf("������ ��஭� a ");
	scanf("%i", &a);

	printf("\n������ ��஭� b ");
	scanf("%i", &b);

	printf("\n������ ��஭� c ");
	scanf("%i", &c);



	if(a*a + b*b == c*c)
		printf("\n��㣮�쭨� ��אַ㣮���");
	else
	{
		g = acos( (a*a+b*b-c*c) / (2*a*b) ) * 180 / M_PI;
		printf("\n��㣮�쭨� �� ��אַ㣮���");
		printf("\n����稭� 㣫� � = %.2f", g);

	}


	getch();
}