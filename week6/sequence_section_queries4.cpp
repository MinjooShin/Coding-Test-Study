/*
��ó: ���α׷��ӽ�
����: ������ ���� ����4
���̵�: Level0
�ð�: 10��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181922
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (auto q : queries) {
        for (int i=q[0]; i<=q[1]; i++) {
            if (i%q[2] == 0) arr[i] += 1;
        }
    }
    return arr;
}