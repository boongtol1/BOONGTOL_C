#include <stdio.h>

int main(void)
{
	printf("%c\n", 'A');                        // 문자 상수 출력  문자?-->''use
	printf("%s\n", "A");                        // 문자열 상수 출력 문자열?-->""use!
	printf("%c은 %s입니다.\n", '1', "first");   // 문자(%c)와 문자열(%s)을 함께 출력

	return 0;
}