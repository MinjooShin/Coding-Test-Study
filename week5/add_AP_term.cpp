/*
��ó: ���α׷��ӽ�
����: ���������� Ư���� �׸� ���ϱ�
���̵�: Level 0
�ð�:
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181931
*/
#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for (int i=0; i<included.size(); i++) {
        if (included[i] == true) answer += (a + (d*i));
    }
    return answer;
}

// update code: range-based for statement (c++11)

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    a -= d;
    for (auto flag : included) {
        a += d;
        if (flag) answer += a;
    }
    return answer;
}
