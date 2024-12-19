#include <stdio.h>

void print_ary(int* pa);        // 함수 선언

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);             // 배열명을 주고 함수 호출

	return 0;
}

void print_ary(int* pa)         // 매개변수로 포인터 선언
{
	int i;

	for (i = 0; i < 5; i++) // Key?--> 증감 연산이 수행되는 순간이 존재할수 있는 시간의 범위 설정해서 나중과 바로를 해석하기!
	{
		printf("%d ", pa[i]);   // pa로 배열 요소 표현식 사용
	}
}

// c언어에서 함수 선언시 포함해야 하는 부분들?--> 반환형, 함수 이름, 매개변수 리스트, 세미콜론
