/*
��ó: ���α׷��ӽ�
����: ���� �����
���̵�: Level0
�ð�: 30��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181900
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for(const auto v : indices)
    {
        my_string[v] = ' ';
    }
    for(const auto c : my_string)
    {
        if(c != ' ')
        {
            answer += c;
        }
    }
    return answer;
}
