#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x;
	double y;
	double z;
	double sum;
	double sum2;

	printf("실수를 입력하시오:");
	scanf("%lf", &x);

	printf("실수를 입력하시오:");
	scanf("%lf", &y);

	printf("실수를 입력하시오:");
	scanf("%lf", &z);

	sum = x + y + z;
	sum2 = (x + y + z) / 3;

	printf("합은 %.6lf이고 평균은 %.6lf입니다.", sum, sum2);


	return 0;
}