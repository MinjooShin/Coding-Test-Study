/*
��ó: ���α׷��ӽ�
����: qr code
���̵�: Level0
�ð�: 5��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181903
*/

#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for (int i=r; i< code.length(); i+=q) answer += code[i];
    return answer;
}