/*
출처: 소프티어
문제: X marks the Spot
난이도: Level2
시간: 18분
주소: https://softeer.ai/app/assessment/index.html?xid=254975&xsrfToken=0kteNfeDbZrNCLxQIjlR3kZD8mFjmacH&testType=practice
*/
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    int n, idx;
    string s, t, result;
    cin >> n;
    cin.ignore();
    
    for (int i=0; i<n; i++) {
        cin >> s >> t;
        idx = s.find('x') != string::npos? s.find('x') : s.find('X') != string::npos? s.find('X') : -1; 
        if (idx != -1) {
            result += toupper(t[idx]);
        }
    }
    cout << result << endl;
   return 0;
}