/*
출처: 프로그래머스
문제: 주사위 게임3
난이도: Level0
시간: 60분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181916
*/
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    if (a == b && a == c && a == d) return 1111*a;
    else if (a == b && a == c) return (10*a+d)*(10*a+d);
    else if (a == b && a == d) return (10*a+c)*(10*a+c);
    else if (a == c && a == d) return (10*a+b)*(10*a+b);
    else if (b == c && b == d) return (10*b+a)*(10*b+a);
    else if (a == b && c == d) return (a+c)*abs(a-c);
    else if (a == c && b == d) return (a+b)*abs(a-b);
    else if (b == c && a == d) return (b+a)*abs(b-a);
    else if (a == b) return c*d;
    else if (a == c) return b*d;
    else if (a == d) return b*c;
    else if (b == c) return a*d;
    else if (b == d) return a*c;
    else if (c == d) return a*b;
    else return min(a, min(b, min(c, d)));
}