#include <stdio.h>

int main() {
    int a, b;
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d ", &a, &b);
    printf("입력된 정수: %d, %d\n", a, b);
    return 0;
}
// scanf 함수는 입력을 포맷 문자열의 형태에 따라 그 형태의 값을 읽어들이는 역할을 합니다. 
// 포맷 문자열 안의 공백 문자는 입력에서 연속된 공백 문자를 무시하게 하는 역할을 합니다. 그러나 포맷 문자열의 끝에 공백 문자가 있을 경우, scanf의 동작이 조금 다릅니다.
// 탐구한것?--> scanf의 형식 지정자 피문자열 끝에 공백 문자가 있는 경우 입력시 실질적인 공백이나 줄바꿈(엔터) (탈출문자는 해당 안함!)는 무시된다!
// 그리고, 입력이 완료되어 형식 a,b 에 값이 모두 저장되어도 마지막 한번더 실질적인 공백이나 줄바꿈(엔터)외의 입력을 주기를 기다린다!
// if 포맷 문자열 안의 공백 문자를 무시하지 않을때?--> 
// 1. 공백 문자가 형식 지정자 문자열의 맨 끝에 있지 않은 경우--> 사용자가 입력한 공백 문자와 형식 지정자 문자열의 공백 문자가 정확히 일치해야만 scanf가 입력을 제대로 처리할 수 있습니다.
// 2. 공백 문자가 형식 지정자 문자열의 맨 끝에 있는 경우?--> 위 내용을 따른다!(추가적인 기회 제공으로 이해 가능)
// if 포맷 문자열 안의 공백 문자를 무시할때?--> 무시함 그 자체!(무시하다 = 없는 취급하다.)
// 만약 형식 지정자 사이에 공백이 아닌 특정 문자가 있다면, 입력에서도 해당 문자가 정확히 일치해야 합니다.
// 예를 들어, scanf("%d,%d", &a, &b);에서 입력은 10,20처럼 쉼표를 포함해야 합니다.
//%c 형식 지정자와 공백
//%c 형식 지정자는 특수한 경우로, 공백 문자를 포함한 모든 문자를 그대로 읽습니다.
//이는 일반적인 숫자나 문자열 입력과 달리 공백 문자를 무시하지 않기 때문에 다르게 동작합니다.(공백 문자가 형식 지정자 문자열의 맨 끝에 있지 않은 경우에만!)