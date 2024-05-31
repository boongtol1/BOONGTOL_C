#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	if (a > 0)              // ① 조건식1 : a가 0보다 크면 b에 1 대입
	{
		b = 1;
	}
	else if (a == 0)        // ② 조건식2 : a가 0보다 크지 않고 a가 0이면 b에 2 대입  // 파이썬의 elif 와 마찬가지로 시간을 아껴주는 기능이 있다! 첫번째가 참이면 나머지는 보지도 않는다!
	{
		b = 2;
	}
	else                    // ③ a가 0보다 크지 않고 0도 아니면 b에 3 대입
	{
		b = 3;
	}

	printf("b : %d\n", b);  // if문으로 결정된 b 값 출력

	return 0;
}