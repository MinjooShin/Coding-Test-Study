/*
��ó: ���α׷��ӽ�
����: ���̻� �迭
���̵�: Level0
�ð�: 10��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181909
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    int n = my_string.length()-1;
    for (int i=n; i>=0; i--) {
        if (i==0) answer.push_back(my_string);
        else answer.push_back(my_string.substr(my_string.length()-i));
    }
    sort(answer.begin(), answer.end());
    return answer;
}

// update code
vector<string> solution(string my_string) {
    vector<string> answer;
    for (int i=0; i<my_string.length(); i++) answer.push_back(my_string.substr(i));
    sort(answer.begin(), answer.end());
    return answer;
}
