#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;              // 유효 숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);    // 소수점 이하 20자리까지 출력
	printf("double형 변수의 값 : %.20lf\n", db);

	return 0;
}

// 이 프로그램을 실행하면 float형 변수는 유효 숫자가 7자리이므로 소수점 이하 20자리까지 출력해도 실제로는 7자리까지만 정확하게 표시되고 나머지는 부정확하게 표시됩니다. 
// 반면 double형 변수는 유효 숫자가 15자리이므로 소수점 이하 20자리까지 출력해도 15자리까지는 정확하게 표시됩니다.--> 나머지는 정확히 표현 X