#include <conio.h>
#include <stdio.h>
#include <math.h>   


/*���᫨�� ���ﭨ� ����� ���� �窠��
� ����묨 ���न��⠬� �1.�1 � �2.�2 */
void main()
{
	clrscr();
	float x1,y1,x2,y2;

	printf("\n������ ���न���� �窨 � ");
	scanf("%f%f", &x1, &y1);

	printf("\n������ ���न���� �窨 B ");
	scanf("%f%f", &x2, &y2);

	printf("\n����ﭨ� ����� �窠�� � � � = %.2f", sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)));

	getch();
}