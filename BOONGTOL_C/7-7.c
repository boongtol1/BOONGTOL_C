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
	if (count == 3) return;   // 호출 횟수가 3이면 반환하고 끝낸다.
	fruit(count + 1);         // 재호출할 때 호출 횟수를 1 증가
	printf("jam\n");
}
// 재귀함수와 return 쉽개 생각하는법?--> 몇번째 함수에 들어와 있는지를 중요하게 생각해야 한다!
// p7-7 으로부터 관점계적으로 얻어낸 사실?--> '재귀호출 함수는 (바로) 이전에 호출했던 곳으로 돌아갑니다'!!
// 중요하개 생각할 것?--> 호출의 순간들 인지하기! 그리고 '재귀호출 함수는 return 을 만나면 (바로) 이전에 호출했던 곳 중 끝부분(; 뒤부분)으로 돌아갑니다'를 인지하기!




