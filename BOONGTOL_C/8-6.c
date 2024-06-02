#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");  // 입력 안내 메시지 출력
	gets(str);                 // 빈칸을 포함한 문자열 입력
	puts("입력된 문자열 : ");  // 문자열 상수 출력
	puts(str);                 // 배열에 저장된 문자열 출력

	return 0;
}
// printf는 형식 지정 문자열과 함께 다양한 데이터 타입을 출력할 수 있는 반면, puts는 단순 문자열을 출력하고 자동으로 개행 문자를 추가합니다.
// puts 는 형식 지정자 사용 불가!