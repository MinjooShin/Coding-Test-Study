/*
��ó: ���α׷��ӽ�
����: [PCCE ���⹮��] ��ҹ��� �ٲ㼭 ����ϱ�
���̵�: Level 0
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181949
*/
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        else if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
    }
    cout << str;
    return 0;
}