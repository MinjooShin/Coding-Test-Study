/*
��ó: ���α׷��ӽ�
����: JadenCase ���ڿ� �����
���̵�: Level2
�ð�: 40��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12951
*/
#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

string solution(string s) {
    vector<char> result;
    
    for (int i=0; i<s.length(); i++) {
        // ���ڰ� �ƴ� ���
        if (isdigit(s[i]) == 0) {
            // ���ĺ��� ��� -> ���ڿ��� ù������ ���
            if (isalpha(s[i]) > 0) {
                if (s[i-1] == ' ' || i == 0) result.push_back(toupper(s[i]));
                else result.push_back(tolower(s[i]));
            // ���ڰ� �ƴѵ� ���ĺ��� �ƴѰ��
            } else result.push_back(s[i]); 
        // ������ ���
        } else result.push_back(s[i]);
    }    
    string answer(result.begin(), result.end());
    
    return answer;
}

// update code
string solution(string s) {
    string answer = ""; 
    
    answer += toupper(s[0]);
    for (int i=1; i<s.length(); i++) {
        answer += (s[i-1] == ' ')? toupper(s[i]) : tolower(s[i]);
    }    
    return answer;
}