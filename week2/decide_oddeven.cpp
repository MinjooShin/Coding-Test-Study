/*
출처: 프로그래머스
문제: 홀짝 구분하기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181944
*/
#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    if(n%2 == 0) cout << n << " is even" << endl;
    else cout << n << " is odd" << endl;
    return 0;
}