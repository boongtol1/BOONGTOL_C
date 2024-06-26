#include <stdio.h>

int sum(int x, int y);       // sum 함수 선언 : 186쪽에서 설명합니다.--> x,y 는 자동으로 sum의 매개변수로 선언됨!
// 매개변수가 있는 함수를 선언할 때, 그 매개변수는 함수 선언 이전에 별도로 선언할 필요가 없습니다.
int main(void)               // main 함수 시작
{
	int a = 10, b = 20;
	int result;              // 두 정수를 더한 결과(result)를 저장할 변수

	result = sum(a, b);      // sum 함수 호출
	printf("result : %d\n", result);

	return 0;
}                            // main 함수의 끝  

int sum(int x, int y)        // sum 함수 정의 시작
{
	int temp;                // 두 정수의 합을 잠시 저장할 변수  // 파이썬과 다르게 선언적인 변수가 하나 더 있다!(제일 원초적인 것!)
							 // 선언적인 변수는 이 변수를 정의하기 전(위)에만 어디든지 선언되면 된다! 

	temp = x + y;            // x와 y의 합을 temp에 보관

	return temp;             // temp의 값을 반환
}
// 함수 선언은 함수 내부나 외부 어디서든 가능합니다.
// 함수 정의는 항상 함수 외부에서 수행되어야 합니다.
// 함수 정의를 함수 내부에 포함시키면 컴파일 에러가 발생합니다.
// 코드 전체에서 sum 이라는 함수가 정의 되어있는지 본다!(인식의 순서와 무관!)
// 인식의 순서와 관련있는것?--> sum이라는 함수의 선언!!! sum을 사용하기 전에 선언되어있어야 한다!
// main 함수는 컴파일러와 링커에 의해 특별한 방식으로 처리되기 때문에, 별도의 선언 없이 정의만 해도 문제가 없습니다.
// 이는 C 언어의 표준에서 규정된 사항이며, 대부분의 C 컴파일러가 이를 따릅니다.
// c 언어에서 위에서부터 차례대로 인식되는게 맞다. 이때, 함수의 선언이 인식되면 자동으로 코드 전체 내에서 그 함수의 정의를 모두 읽는다!	