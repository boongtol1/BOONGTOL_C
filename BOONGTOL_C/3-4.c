#include <stdio.h>

int main(void)
{
	unsigned int a;	//핵심?-->1차--> unsigned int 보는 순간 a의 범위 나옴!--> 1. 범위 내에 있으면 그대로 내보내기!,2. 범위 내에 없으면 수정해서 내보내기!!!
	//2차--> %d or %u 보는 순간 a의 범위가 변하거나 그대로!-->1. 범위 내에 있으면 그대로 내보내기!,2. 범위 내에 없으면 수정해서 내보내기!!!
	//이때,  가 핵심 key!
	//how 수정?--> char 생각해봐라!cf) 보수 개념을 아직 모르니까 일단 그냥 규칙 탐구해서 알아둬라!
	a = 4294967295;        // 큰 양수 저장
	printf("%d\n", a);     // %d로 출력
	a = -1;                // 음수 저장
	printf("%u\n", a);     // %u로 출력

	return 0;
}