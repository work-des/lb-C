#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*6 ��� ���ᨢ ����ࠫ��� �ᥫ. ���� �㬬� ������⮢, ����� ������� K*/
 void main()
 {
	randomize();
	clrscr();

	int a[n], i, k, s=0;

	printf("\t--��室�� ���ᨢ--\n");
	for(i = 0; i < n; i++)
	{
		a[i] = random(9);
		printf("%2i ", a[i]);
	}

	printf("\n������ K ");
	scanf("%i", &k);

	for (i = 0; i < n; i++)
	{
		if(a[i] % k == 0)
			s+=a[i];
	}

	printf("\n\n�㬬� ������⮢ ����� %i = %i", k, s);

   	getch();
 }