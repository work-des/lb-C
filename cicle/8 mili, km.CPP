#include <conio.h>
#include <stdio.h>

/*8 ��ਠ��, ⠡��� ����� � �� � ���⭮ */
void main()
{
	clrscr();

	float km = 1.609344, n = 1, k, i;

	printf("������ ���ﭨ� � ��. k\n");
	scanf("%f", &k);

	for (i = 1; i <= ceil(k); i++)
	{
		if (i / km <n)
			printf("�� - %.4f\t�� - %.4f\n", i / km, i);
		else
		{
			if (n * km <= k)
				printf("�� - %.4f\t�� - %.4f\n", n, n * km);
			if (i <= k)
				printf("�� - %.4f\t�� - %.4f\n", i / km, i);

			n++;
		}
	}
	getch();
}