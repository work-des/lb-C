#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*���� ����� ॡ� �㡠. ���� ���� �࠭�, ���頤� ������ �����孮��
� ��ꥬ �⮣� �㡠*/
void main()
{
	clrscr();

      float l, sg = 0, s = 0, v = 0;
	printf("������ ����� ॡ� �㡠 ");
      scanf("%f", &l);

	sg = l * l;
	s = 6 * l * l;
	v = pow(l, 3);

	printf("\n���頤� �࠭� = %.2f\n���頤� �����孮�� = %.2f\n��ꥬ = %.2f",sg,s,v);


	getch();
}