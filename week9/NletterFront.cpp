/*
��ó: ���α׷��ӽ�
����: ���ڿ��� ���� n����
���̵�: Level0
�ð�: 2��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181907
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (int i=0; i<n; i++) answer += my_string[i];
    return answer;
}

// update code
string solution(string my_string, int n)
{
    return my_string.substr(0, n);
}
