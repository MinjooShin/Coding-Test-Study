/*
��ó: ���α׷��ӽ�
����: ���� ����Ʈ�� ���ڿ��� ��ȯ�ϱ�
���̵�: Level 0
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181941
*/
#include <string>
#include <vector>
using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for(int i=0; i<arr.size(); i++){
        answer.append(arr[i]);   
    }
    return answer;
}