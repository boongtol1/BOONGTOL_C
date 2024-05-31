#include <stdio.h>

void fruit(void);			// 함수 선언

int main(void)
{
	fruit();				// 함수 호출

	return 0;
}

void fruit(void)			// 재귀호출 함수 정의
{
	printf("apple\n");
	fruit();
	return ;				// 자신을 다시 호출
}
// return ; 는 있어도 무한히 반복되므로 결국 실행될수 없다.
// return ; 문은 함수의 끝을 나타내며, 호출된 함수가 호출자에게 제어를 반환합니다. 
// 그러나 재귀 함수가 무한히 자신을 호출하면 return; 문에 도달할 기회가 없기 때문에 실행되지 않습니다. 
// 이 경우 return; 문은 존재하지만, 재귀 호출에 의해 사실상 무의미해집니다.
// 따라서 return ; 를 쓰나 안쓰나 별 영향력을 관찰할 수 없다!
// void 타입 함수의 끝에 도달하면 암시적으로 return;이 수행됩니다.
// return; 문은 명시적으로 함수의 실행을 종료하고 호출자에게 제어를 반환하는 역할을 합니다.
