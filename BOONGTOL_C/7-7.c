#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);                 // 처음 호출하므로 1을 인수로 준다.

	return 0;
}

void fruit(int count)         // 호출 횟수를 매개변수에 저장
{
	printf("apple\n");
	if (count == 3) {return;}   // 호출 횟수가 3이면 반환하고 끝낸다.
	fruit(count + 1);         // 재호출할 때 호출 횟수를 1 증가
	printf("jam\n");
}
// f1-->count 가 1일때의 fruit 함수 호출
// f2-->count 가 2일때의 fruit 함수 호출
// f3-->count 가 3일때의 fruit 함수 호출
// return;