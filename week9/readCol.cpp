/*
��ó: ���α׷��ӽ�
����: ���� �б�
���̵�: Level0
�ð�: 10��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181905
*/
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    string subS = "";
    for (int i=0; i<my_string.length()/m; i++) { 
        subS = my_string.substr(i*m, m);
        answer += subS[c-1];
    }
    return answer;
}

// update code
string solution(string my_string, int m, int c) {
    string answer = "";
    for (int i=c-1; i<my_string.length(); i+=m) { 
        answer += my_string[i];
    }
    return answer;
}