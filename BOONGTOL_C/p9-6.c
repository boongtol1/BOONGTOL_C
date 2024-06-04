#include <stdio.h>

int main(void)
{
    int a = 10;             // 변수 선언과 초기화
    int* p = &a;            // 포인터 선언과 동시에 a를 가리키도록 초기화
    double d = 10.0;        // double형 변수 선언과 초기화
    double* pd = &d;        // double형 포인터 선언과 동시에 d를 가리키도록 초기화

    printf("%lf\n", *pd);   // pd가 가리키는 변수의 값 출력

    return 0;
}
