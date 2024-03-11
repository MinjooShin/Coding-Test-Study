/*
��ó: ���α׷��ӽ�
����: �� �����ϱ�1
���̵�: Level0
�ð�: 15��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181926
*/
#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for (auto ch : control) {
        n += (ch == 'w')? 1:((ch == 's')? -1:((ch == 'd')? 10:-10));
    }
    return n;
}

// update code
#include <map> 

int solution(int n, string control) {
    map <char, int> m = {{'w', 1}, {'s', -1}, {'d', 10}, {'a', -10}};

    for (auto ch : control) n += m[ch];
    return n;
}