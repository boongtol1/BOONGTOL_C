#include <stdio.h>
#include <string.h>                  // 문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
	char fruit[20] = "strawberry";   // strawberry로 초기화,  //not char but yes char 배열!

	printf("%s\n", fruit);           // strawberry 출력
	strcpy(fruit, "banana");         // fruit에 banana 복사
	printf("%s\n", fruit);           // banana 출력

	return 0;
}
// C 언어에서 char 배열은 문자열을 저장하는 데 사용됩니다.
// 배열에 문자열을 초기화, 나머지 부분은 '\0'으로 채워짐.