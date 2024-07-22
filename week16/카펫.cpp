/*
��ó: ���α׷��ӽ�
����: ī��
���̵�: Level2
�ð�: 30��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/42842#
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int i = 1;
    int weight, height;
    
    while (true) {
        if (yellow % i == 0) {
            weight = (yellow/i) * 2;
            height = (i+2) * 2;
            if (brown == (weight + height)) break;
        }
        i++;
    }
    answer.push_back(yellow/i + 2);
    answer.push_back(i + 2);
    return answer;
}