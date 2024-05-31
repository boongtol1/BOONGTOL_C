#include <stdio.h>

int main(void)
{
	int a = -10;			// 비트열 00000000 00000000 00000000 00001010
	int b = 12;			// 비트열 00000000 00000000 00000000 00001100

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);

	return 0;
}
// C 언어에서 a >> 2와 같은 오른쪽 시프트 연산을 수행할 때, a가 음수라면 왼쪽의 빈 자리는 모두 1로 채워집니다. 
// 이는 산술 시프트(arithmetic shift)라고 불리는 과정의 일부입니다. cf)what is 부호비트?-->가장 왼쪽에 있는 비트값!(0-->양수,1-->음수!)
// 2.now 이해의 key?= 암기!--> 왼쪽으로 한번 비트 연산 할때마다 2가 곱해진 결과가 나오고, 오른쪽으로 한번 비트 연산 할때마다 2로 나눈 몫이 결과로 나온다!(이유는 아직 모름!)
// when?--> 무제한 비트에서 사고시!!! not 8비트! 책의 '사라짐'부분은 8비트이어야 하기 때문에 그런건데 무제한 비트 사고시에는 사라지지 않는다!
// C 언어에서 a << 2와 같은 왼쪽 시프트 연산을 수행할 때, a가 음수라면 왼쪽의 빈 자리는 모두 0으로 채워집니다.
// 1. a >> 2와 같은 (오른쪽 시프트 연산)을 수행할 때, (a가 음수)라면 왼쪽의 빈 자리는 모두 1로 채워집니다. 나머지 경우는 모두 0으로 채워진다!-> 그 이유? 아직 모름!!