#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(a));
	printf("double형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));        // C 언어에서 정수 상수는 기본적으로 int형으로 취급됩니다.
	printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4)); // 기본적으로 c에선 실수는 float가 아닌 double 이다!
	printf("char 자료형의 크기 : %d\n", sizeof(char));

	return 0;
}