#include <stdio.h>

int main(void)
{
    char pp = 111 ;
	short sh = 32767;                     // short형의 최댓값 초기화
	int in = 2147483647;                  // int형의 최댓값 초기화
	long ln = 2147483647;                 // long형의 최댓값 초기화
	long long lln = 123451234512345;      // 아주 큰 값 초기화

	printf("short형 변수 출력 : %d\n", pp);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);   // long long형은 lld로 출력

	return 0;
}