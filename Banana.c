#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x;
	double y;
	double z;
	double sum;
	double sum2;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &x);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &y);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &z);

	sum = x + y + z;
	sum2 = (x + y + z) / 3;

	printf("���� %.6lf�̰� ����� %.6lf�Դϴ�.", sum, sum2);


	return 0;
}