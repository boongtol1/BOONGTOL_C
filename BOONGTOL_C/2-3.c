#include <stdio.h>

int main(void)
{
	printf("Be happy\n");              // "Be happy"를 출력하고 줄을 바꿈(\n)
	printf("12345678901234567890\n");  // 화면에 열 번호 출력하고 줄을 바꿈(\n)
	printf("My\tfriend\n");            // "My"를 출력하고 탭 위치로 이동(\t) 후에 "friend"를 출력하고 줄을 바꿈(\n)
	printf("Goot\bd\tchance\n");       // "Goot"를 출력하고 한 칸 왼쪽으로 이동(\b)해 t를 d로 바꾸고 탭 위치로 이동(\t) 후에 "chance"를 출력하고 줄을 바꿈(\n)
	printf("Cow\rW\a\n");              // 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)
	return 0;

	
}    // \t 에 대한 탭위치는 8개기준으로 바뀐다!(영어 기준)
    //ex) My 다음에 tab을 누르면 8-2=6개의 공백이 입력된다!(영어 기준)
	//	탭위치가 4개 기준으로 나뉜다!(변하기 가능!)(영어 기준)