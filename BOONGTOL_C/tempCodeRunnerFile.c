#include <stdio.h>

int main(void)
{
	char grade;               // 학점을 입력할 변수
	char name[20];             // 이름을 입력할 배열

	printf("학점 입력 : ");
	scanf("%c ", &grade);      // grade 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s ", name);        // name 배열에 이름 문자열 입력, &를 사용하지 않는다. // 미래의 scanf 저장변수에 저장한다!
	printf("%s의 학점은 %c입니다.\n", name, grade);
	return 0;  // scanf 함수에서 공백 문자는 특별한 의미를 가집니다. 공백 문자는 모든 공백 문자를 무시하도록 scanf 함수에 지시합니다. 여기서 공백 문자에는 스페이스, 탭, 줄바꿈 등이 포함됩니다.

}