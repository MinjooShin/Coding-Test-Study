/*
출처: 프로그래머스
문제: [PCCE 기출문제] 문자열 출력하기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181952
*/
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    for(int i = 0; i < a; i++){
        printf("%s");
    }
    return 0;
}