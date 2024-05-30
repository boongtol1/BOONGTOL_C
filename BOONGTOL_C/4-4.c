	#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;	 	 // 식?--> 숫자, 문자, 기호를 써서 이들 사이의 수학(컴퓨터)적 관계를 나타낸 것.
						 // 대전제?--> 하나의 식(식의 시작부터 세미콜론이 있는 지점 전까지의 식) 내에서!! not '식(들)내에서'
	pre = (++a) * 3;     // 전위형 증감 연산자 --> 그 어떤 연산보다 전위형 증감 연산자의 연산(a에 +1)이 가장 먼저 일어난다!
	post = (b++) * 3;    // 후위형 증감 연산자 --> 모든 연산이 끝난 후 후위형 증감 연산자의 연산(b에 +1)이 가장 나중에 일어난다!
						 // cf) 대입도 연산이다!(대입 연산자),(왼쪽에서부터 읽으니깐 이해 된다!)

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);

	return 0;
}
