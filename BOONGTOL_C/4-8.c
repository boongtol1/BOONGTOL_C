#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
    printf("%lf\n",res);      // (double)을 사용해 a와 b의 값을 실수로 변환,// 두 정수를 나누면 나눈 후의 값도 정수부분만 인식된다!!
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;                         // (int)를 사용해 res의 값에서 정수 부분만 추림
	printf("(int) %.1lf의 결과 : %d\n", res, a);

	return 0;
}