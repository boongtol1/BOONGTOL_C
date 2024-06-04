#include <stdio.h>

int main(void)
{
	int a = 10;             // 변수 선언과 초기화
	int* p = &a;            // 포인터 선언과 동시에 a를 가리키도록 초기화
	double* pd;             // double형 변수를 가리키는 포인터

	pd = p;                 // 포인터 p 값을 포인터 pd에 대입
	printf("%lf\n", *pd);   // pd가 가리키는 변수의 값 출력

	return 0;
}
// 0.000000 이 나오는 이유?--> int형 값을 double형 형식으로 출력하면 정보 손실이 발생할 수 있으며, 이는 예상치 못한 결과를 초래할 수 있습니다.
// %lf 형식 지정자는 double형 값을 출력하도록 사용됩니다.