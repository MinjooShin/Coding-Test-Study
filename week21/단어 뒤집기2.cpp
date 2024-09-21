/*
출처: 백준
문제: 단어 뒤집기2
난이도: 알고리즘 기초1
시간: 30분
주소: https://www.acmicpc.net/problem/17413
*/
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    string substr = "", result = "";
    bool flag = false;
    for(int i=0; i<str.length(); i++) {
        if (str[i] == '<') {
            if (substr.length() != 0) {
                reverse(substr.begin(), substr.end());
                result += substr;
                substr = "";
            }
            flag = true;
            result += str[i];
        } else if (flag == true) {
            if (str[i] == '>') {
                result += str[i];
                flag = false;
            } else if (isspace(str[i]) != 0) {
                result += ' ';
            } else if (isalpha(str[i]) == 0 || isdigit(str[i]) == 0) {
                result += str[i];
            }
        } else if (flag == false) {
            if (i == str.length()-1) {
                substr += str[i];
                reverse(substr.begin(), substr.end());
                result += substr;
                substr = "";
            } else if (isspace(str[i]) != 0) {
                reverse(substr.begin(), substr.end());
                result += substr + ' ';
                substr = "";
            } else if (isalpha(str[i]) == 0 || isdigit(str[i]) == 0) {
                substr += str[i];
            } 
        }
    }

    cout << result << endl;
    return 0;
}