/*
��ó: ���α׷��ӽ�
����: Ȧ¦�� ���� �ٸ� �� ��ȯ�ϱ�
���̵�: Level 0
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181935
*/
#include <string>
#include <vector>

using namespace std;

int even(int n){
    int even_sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 == 0) even_sum += (i*i);
    }
    return even_sum;
}

int odd(int n){
    int odd_sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 != 0) odd_sum += i;
    }
    return odd_sum;
}

int solution(int n) {
    int answer = 0;
    return answer = (n%2 == 0) ? even(n) : odd(n);  
}