/*
��ó: ���α׷��ӽ�
����: ���ڿ� ���ϱ�
���̵�: Level 0
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181940
*/
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer="";
    for(int i=0; i<k; i++) answer += my_string;
    return answer;
}