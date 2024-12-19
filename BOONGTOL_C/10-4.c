#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;                         // 첫 번째 배열 요소 주소
	int* pb = pa + 3;                      // 네 번째 배열 요소 주소

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;                                  // pa를 다음 배열 요소로 이동
	printf("pb - pa : %u\n", pb - pa);     // 두 포인터의 뺄셈

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);      // pa가 배열의 앞에 있으면 *pa 출력
	else printf("%d\n", *pb);              // pb가 배열의 앞에 있으면 *pb 출력

	return 0;
}

// 메모리 주소는 실제 물리적 또는 가상 메모리의 위치를 나타내며, 이는 부호 없는 정수 (unsigned integer) 형태로 표현됩니다. 
// 따라서 메모리 주소 자체는 항상 0 이상의 값을 가지며 음수가 될 수 없습니다.
// 컴파일러는 같은 배열 내의 포인터 뺄셈을 할 때
// 자동으로 해당 데이터 타입의 크기(여기서는 int의 크기 4바이트)로 나눔
// 8 ÷ 4 = 2 (요소의 개수)