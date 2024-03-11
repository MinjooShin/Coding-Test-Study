/*
출처: 프로그래머스
문제: 주사위 게임2
난이도: Level 0
시간: 15분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181930
*/

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int powABC (int a, int b, int c, int n) {
    int sum = 1;
    for (int i=1; i<=n; i++) sum *= (pow(a, i) + pow(b, i) + pow(c, i));
    return sum;
}

int solution(int a, int b, int c) {
    if (a != b && a != c && b != c) return powABC(a, b, c, 1);
    else if (a == b && b == c) return powABC(a, b, c, 3);
    else if (a == b || a == c || b == c) return powABC(a, b, c, 2);
}   

// update code: set
#include <set>

int powABC (int a, int b, int c, int n) {
    int sum = 1;
    for (int i=1; i<=n; i++) sum *= (pow(a, i) + pow(b, i) + pow(c, i));
    return sum;
}

int solution(int a, int b, int c) {
    set<int> dices{a, b, c};
    if (dices.size() == 3) return powABC(a, b, c, 1);
    if (dices.size() == 2) return powABC(a, b, c, 2);
    if (dices.size() == 1) return powABC(a, b, c, 3);
}   
