#include <stdio.h>

int get_num(void);                    // 함수 선언

int main(void)
{
	int result;

	result = get_num();               // 함수 호출, 반환값은 result에 저장
	printf("반환값 : %d\n", result);  // 반환값 출력
	return 0;
}

int get_num(void)                     // 매개변수가 없고 반환형만 있다.
{
	int num;                          // 키보드 입력값을 저장할 변수

	printf("양수 입력 : ");           // 입력 안내 메시지
	scanf("%d", &num);  
	printf("n\n");              // 키보드 입력
	return num;                       // 입력한 값 반환
}

//입력된 값이 개행되어 출력되는 이유는 scanf 함수가 사용자로부터 입력을 받을 때, 
//사용자가 Enter 키를 누르면 개행 문자가 입력 스트림에 추가되기 때문입니다.--> printf("\n") 가 있는 셈이다! 실제로 보이지는 않지만...!
// 형식 지정자 없이 단일 문자를 직접 printf 함수에 전달하면 컴파일 오류가 발생합니다.