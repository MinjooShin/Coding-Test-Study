/*
출처: 프로그래머스
문제: 다음 큰 숫자
난이도: Level2
시간: 30분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12911
*/
#include <string>
#include <vector>

using namespace std;

int getBinary(int num) {
    int cnt = 0;
    
    while (num > 1) {
        if (num % 2 == 1) cnt++;
        num = num / 2;
    }
    return cnt++;
}

int solution(int n) {
    int comp = n+1;
    int n_cnt, comp_cnt, answer;
    
    while (comp > n) {
        if (getBinary(n) == getBinary(comp)) break;
        else comp++;
    } 
    return comp;
}

// update code
#include <bitset>

using namespace std;

int solution(int n) {      
    int n_cnt = bitset<10>(n).count();
    
    while (bitset<10>(++n).count() != n_cnt);
    return n;
}