/*
��ó: ���α׷��ӽ�
����: �κ� ���ڿ� �̾� �ٿ� ���ڿ� �����
���̵�: Level0
�ð�: 5��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181911
*/
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    string substr = "";
    for (int i=0; i<parts.size(); i++) {
        substr = "";
        for (int j=parts[i][0]; j<=parts[i][1]; j++) {
           substr += my_strings[i][j];
        }
        answer += substr;
    }
    return answer;
}