#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� ����⢨⥫�� �᫠ a,b,c. ������� �� �᫠, �᫨ a<b<c,
� �������� �� ��᮫��묨 ���祭�ﬨ �᫨ �� �� ⠪*/
void main()
{
	clrscr();
	float a, b, c;

	printf("������ �᫠ a b c ");
	scanf("%f %f %f", &a, &b, &c);

	if(a<b && b<c)
		printf("\n�������� �᫠ %.2f\t%.2f\t%.2f", a*=2, b*=2, c*=2);
	else
		printf("\n����� �ᥫ %.2f %.2f %.2f", fabs(a), fabs(b), fabs(c));


	getch();
}