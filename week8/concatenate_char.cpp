/*
��ó: ���α׷��ӽ�
����: ���� �̾� �ٿ� ���ڿ� �����
���̵�: Level0
�ð�: 2��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181915
*/
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    for (int idx : index_list) {
        answer += my_string[idx];
    }
    return answer;
}