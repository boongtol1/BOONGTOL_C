#include <stdio.h>

int main(void)
{
	int ary[3];	// 정수형과 배열형의 차이를 인식하면서 사고해라!
	int i;

	*(ary + 0) = 10;                   // ary[0] = 10  // ary는 배열의 시작 주소이고, ary + i는 배열의 i번째 요소의 주소입니다.
	*(ary + 1) = *(ary + 0) + 10;      // ary[1] = ary[0] + 10

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);              // &ary[2]

	for (i = 0; i < 3; i++)            // 모든 배열 요소 출력
	{
		printf("%5d", *(ary + i));     // ary[i]
	}

	return 0;
}

// 포인터는 어떤 변수의 위치(주소)를 가리키는 변수입니다.
// 포인터는 단순히 1씩 더해지는 것이 아니라, 포인터가 가리키는 데이터 타입의 크기만큼 이동합니다.
// 네, 이것은 C 언어의 설계 원칙에 따른 규칙, 즉 약속입니다. 이 약속 덕분에 C 언어는 포인터를 통해 배열처럼 연속적인 메모리를 쉽게 다룰 수 있도록 설계되었습니다.
// p는 주소입니다. ary 배열의 첫 번째 요소의 주소를 가리킵니다.
// *p는 값입니다. p가 가리키는 주소에 있는 실제 값을 나타내므로 ary[0]의 값과 동일합니다.
// 네, ary + i가 ary에서 i * 데이터 타입 크기만큼 이동한 주소를 나타내는 것은 C 언어의 설계 원칙에 따른 규칙(약속)입니다.
// scanf("형식 문자열", &변수);
// "형식 문자열": 입력할 데이터의 형식을 지정하는 부분입니다. 예를 들어, 정수형은 %d, 실수형은 %f, 문자형은 %c 등의 형식을 사용합니다.
// &변수: 입력받은 값을 저장할 변수의 주소를 지정합니다. scanf는 변수의 주소를 필요로 하기 때문에 &(주소 연산자)를 사용합니다.
// scanf("%d", ary + 2);  는 정수형 데이터를 입력받아서 ary+2 가 가리키는 포인터 위치에 저장되어 있는 값을 초기화 하는 것!
// 이렇게 5칸을 지정하면 숫자가 왼쪽에 공백을 포함해 총 5칸의 공간을 사용하여 깔끔하게 정렬됩니다.(16행!)