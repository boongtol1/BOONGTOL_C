#include <stdio.h>

void print_line(void);                // 함수 선언

int main(void)
{
	print_line();                     // 함수 호출
	printf("학번     이름     전공     학점\n");
	print_line();                     // 함수 호출

	return 0;
}

void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++)          // 50번 반복하여 '-' 출력
	{
		printf("-");
	}
	printf("\n");
}
// print_line 함수는 return; 를 쓰거나 생략할 수 있다!
// 일반적인 함수는 function(); 를 함으로써 호출되지만 main 함수는 실행버튼을 누르는 것이 호출하는 것이다!(운영체제가 호출한다!)