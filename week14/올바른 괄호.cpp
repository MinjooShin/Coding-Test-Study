/*
��ó: ���α׷��ӽ�
����: �ùٸ� ��ȣ
���̵�: Level2
�ð�: 40��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12909
*/
#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> v;

    for (char c : s) {
        if (c == '(') v.push_back(c);
        else {
            if (v.empty()) return false;
            else v.pop_back(); 
        }
    }

    return v.empty();
}