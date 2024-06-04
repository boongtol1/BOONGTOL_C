#include <stdio.h>

int main(void)
{
	int a;        // 일반 변수 선언
	int* pa;      // 포인터 선언

	pa = &a;      // 포인터에 a의 주소 대입
	*pa = 10;     // 포인터로 변수 a에 10 대입

	printf("포인터로 a 값 출력 : % d\n", *pa);
	printf("변수명으로 a 값 출력 : % d\n", a);    // 변수 a 값 출력

	return 0;
}

// 포인터는 변수의 주소를 저장하는 변수입니다.
// int* pa;는 정수형 변수의 주소를 저장할 수 있는 포인터 변수를 선언하는 것입니다.
// *pa는 포인터 pa가 가리키는 주소에 저장된 값을 나타냅니다.
// 포인터를 선언하면 포인터 변수가 저장되는 메모리 공간도 필요합니다.
// 포인터 변수 자체도 메모리에 저장되는 변수이기 때문에, 포인터 변수를 선언할 때 이를 저장할 메모리 공간이 할당됩니다.
// 9행에 아무것도 없을시?--> a에는 쓰레기 값이 저장된다.(깨끗한것을 받을수도 있고 더렵혀진것을 받을수도 있다!!!)에 의해!!

