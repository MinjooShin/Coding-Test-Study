/*
��ó: ���α׷��ӽ�
����: ������ �������� ���� �迭
���̵�: Level1
�ð�: 5��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12910
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (auto a : arr) {
        if (a%divisor==0) answer.push_back(a);
    }
    (answer.size() == 0)? answer.push_back(-1) : sort(answer.begin(), answer.end());
    
    return answer;
}