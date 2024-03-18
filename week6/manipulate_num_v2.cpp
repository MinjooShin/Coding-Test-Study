/*
��ó: ���α׷��ӽ�
����: �� �����ϱ�2
���̵�: Level0
�ð�: ��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181925
*/
#include <string>
#include <vector>
#include <map>

using namespace std;
int pre = 0;

string solution(vector<int> numLog) {
    string answer = "";

    map<int, char> m = {{1, 'w'}, {-1, 's'}, {10, 'd'}, {-10, 'a'}};
    for (int i=0; i<numLog.size(); i++) {
        if (i == 0) pre = numLog[i];
        else {
            answer += m[numLog[i]-pre];
            pre = numLog[i];
        }
    }
    return answer;
}

// update code
string solution(vector<int> numLog) {
    string answer = "";

    map<int, char> m = {{1, 'w'}, {-1, 's'}, {10, 'd'}, {-10, 'a'}};
    for (int i=1; i<numLog.size(); i++) answer += m[numLog[i]-numLog[i-1]];
    return answer;
}