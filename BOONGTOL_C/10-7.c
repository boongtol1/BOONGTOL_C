#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;                               // 최댓값을 저장할 변수
	int size = sizeof(ary) / sizeof(ary[0]);  // 배열 요소의 개수 계산

	input_ary(ary, size);                     // 배열에 값 입력
	max = find_max(ary, size);                // 배열의 최댓값 반환
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size)          // double 포인터를 매개변수로 선언
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)                // size의 값에 따라 반복 횟수 결정
	{
		scanf("%lf", pa + i);                 // &pa[i]도 가능, 입력할 배열 요소의 주소를 전달 // 실수 하나를 사용자에게 입력받아서, pa[i](포인터의 주인의 i번째 위치) 에 저장하라 // 포인터의 "주인"은 그 포인터가 가리키는(저장하고 있는) 주소의 대상이다.
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];                              // 첫 번째 배열 요소의 값을 최댓값으로 설정
	for (i = 1; i < size; i++)                // 두 번째 배열 요소부터 max와 비교
	{
		if (pa[i] > max) max = pa[i];         // 새로운 배열 요소의 값이 max보다 크면 대입
	}

	return max;                               // 최댓값 반환
}

// 포인터는 "어떤 존재의 주소를 저장하는 변수"입니다.	

// double* pa는 "어떤 실수형 변수의 주소"를 저장하는 포인터 , 포인터의 이름은 pa

// sizeof x 는 "변수 x가 차지하는 메모리의 바이트 수"를 알려줍니다.

// 10행의 size 는 40/8 = 5 이다!

// pa + i → double i개 크기만큼 떨어진 메모리 주소 = &pa[i]


// pa[i]는 "pa 라는 포인터의 주인이 가리키는 i번째 값" 
// &pa[i]는 "pa가 가리키는 i번째 값의 주소"

// 배열 이름 자체	첫 번째 요소의 주소 (&arr[0])