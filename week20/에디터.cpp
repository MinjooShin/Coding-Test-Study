/*
출처: 백준
문제: 에디터
난이도: 알고리즘 기초1
시간: 50분
주소: https://www.acmicpc.net/problem/1406
*/
#include<iostream>
#include<list>
#include<string>

using namespace std;

int main() {
    string str;
    int n;
    cin >> str; cin >> n;
    list<char> editor(str.begin(), str.end());
    auto cursor = editor.end();

    for (int i=0; i<n; i++) {
        char cmd;
        cin >> cmd;

        if (cmd == 'P') {
            char p;
            cin >> p; 
            editor.insert(cursor, p);
        } else if (cmd == 'L') {
            if (cursor != editor.begin()) cursor--;
        } else if (cmd == 'D') {
            if (cursor != editor.end()) cursor++;
        } else if (cmd == 'B') {
            if (cursor != editor.begin()) {
                cursor = editor.erase(--cursor);
            }
        }

    }
    for (char c : editor) cout << c;
    return 0;
}