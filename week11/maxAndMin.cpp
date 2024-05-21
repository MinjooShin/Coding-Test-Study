/*
��ó: ���α׷��ӽ�
����: �ִ񰪰� �ּڰ�
���̵�: Level2
�ð�: 25��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12939
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// string���� ���� ������ ��� ó���ұ�..?
string solution(string s) {
    vector <int> v; 
    string answer = "";
    string digit = "";
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '-') {
            digit += s[i];
        }
        else if (isdigit(s[i]) != 0) {
            digit += s[i];
            if (s[i+1] == ' ' || s[i+1] == NULL) {
                v.push_back(stoi(digit));
                digit = "";
            }
        }
    }
    
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    answer += to_string(min);
    answer += " ";
    answer += to_string(max);
    
    return answer;
}

// update code
string solution(string s) {
    vector <int> v; 
    string answer = "";
    string digit = "";
    s += ' ';
    for (int i=0; i<=s.length(); i++) {
        if (s[i] != ' ') {
            digit += s[i];
        }
        else {
            v.push_back(stoi(digit));
            digit = "";
        }
    }
    
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    answer += to_string(min);
    answer += " ";
    answer += to_string(max);
    
    return answer;
}