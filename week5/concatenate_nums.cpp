/*
��ó: ���α׷��ӽ�
����: �̾� ���� ��
���̵�: Level 0
�ð�: 6��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181928
*/
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string even = "", odd = "";
    
    for (auto num: num_list) {
        (num % 2 != 0)? odd += to_string(num) : even += to_string(num);
    }
    return stoi(odd) + stoi(even);
}