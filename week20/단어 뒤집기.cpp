/*
출처: 백준
문제: 단어 뒤집기
난이도: 알고리즘 기초1
시간: 20분
주소: https://www.acmicpc.net/problem/9093
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

int main() {
    int n, cnt, j;
    cin >> n;
    cin.ignore();

    string str, substr, result = "";
    for(int i=0; i<n; i++) {
        getline(cin, str);
        istringstream iss(str);
        cnt = count(str.begin(), str.end(), ' ');
        j = 0;
        while (iss >> substr) {
            reverse(substr.begin(), substr.end());
            result += (cnt == j)? substr : substr + ' ';
            j++;
        }
        cout << result << endl;
        result = "";
    }
    return 0;
}