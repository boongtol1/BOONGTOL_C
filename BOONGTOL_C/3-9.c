#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);       // 여기서 변수 a에 값 입력,// &a?--> 입력한 값을 a에 저장한다.
			// %d?--> 입력할 값 형태! 반드시 맞춰야 함!
	printf("입력된 값 : %d\n", a);  // 입력한 값 출력

	return 0;
}