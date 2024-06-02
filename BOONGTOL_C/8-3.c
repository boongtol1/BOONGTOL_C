#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;                        // 배열 요소의 개수를 저장할 변수

	count = sizeof(score) / sizeof(score[0]);   // 배열 요소의 개수 계산

	for (i = 0; i < count; i++)       // 11행에서 계산한 count만큼 반복
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++)       // 11행에서 계산한 count만큼 반복
	{
		total += score[i];
	}
	avg = total / (double)count;      // 총합을 count로 나누어 평균 계산

	for (i = 0; i < count; i++)       // 11행에서 계산한 count만큼 반복
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}

// count는 배열의 크기를 바이트 단위로 저장하므로, 배열의 요소 개수가 아닌 바이트 크기를 저장하게 됩니다.(12행)
// C 언어에서는 산술 연산을 수행할 때 서로 다른 데이터 타입이 섞여 있으면 더 큰 범위를 표현할 수 있는 타입으로 자동 형 변환이 일어납니다.(23행에서 total 앞에 (double)이 없어도 되는 이유!)