#include <stdio.h>

void fruit1(int count);
void fruit2(int count);
void fruit3(int count);

int main(void)
{
	fruit1(1); // 처음 호출
	return 0;
}

void fruit1(int count)
{
	printf("apple\n");
	fruit2(count + 1);
	printf("jam\n");
}

void fruit2(int count)
{
	printf("apple\n");
	fruit3(count + 1);
	printf("jam\n");
}

void fruit3(int count)
{
	printf("apple\n");
	if (count ==3) return;						// 더 이상 호출하지 않고 반환
}
// fruit3에 들어와 있다는 것은, 언제 어디선가 fruit3 를 호출했기 때문이다!
// fruit3에 들어온 상태에서 return을 만나면 fruit3를 호출한 곳의 끝으로(세미클론 후) 시점이 이동된다!!
// 위 코드와 다르게 재귀 코드에서는 몇번째 함수에 들어와 있는지를 중요하게 생각해야 한다!(헷갈리므로)
