	#include <stdio.h>

	int main(void)
	{
		int a;             // int형 변수 선언
		double b;          // double형 변수 선언
		char c;            // char형 변수 선언

		printf("int형 변수의 주소 : %u\n", &a);     // 주소 연산자로 주소 계산
		printf("double형 변수의 주소 : %u\n", &b);
		printf("char형 변수의 주소 : %u\n", &c);

		return 0;
	}
// 메모리는 작은 셀(cell)로 나뉘어져 있으며, 각 셀은 고유한 주소를 가지고 있습니다.
// 메모리 주소: 각 메모리 셀의 고유한 위치를 나타내는 숫자입니다.
// 프로그래밍에서 변수를 선언하면, 그 변수는 메모리의 특정 주소에 저장됩니다. // 선언하면 메모리 공간(셀(들)) 획득!(깨끗한것을 받을수도 있고 더렵혀진것을 받을수도 있다!!!)
// C 프로그램을 실행할 때마다 변수의 메모리 주소가 바뀌는 이유는 운영체제가 프로그램을 메모리에 로드할 때마다 다른 위치에 배치할 수 있기 때문입니다. 
// 이는 주소 공간 배치 난수화(Address Space Layout Randomization, ASLR)라는 보안 기법에 의해 발생합니다.