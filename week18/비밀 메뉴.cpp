/*
출처: 소프티어
문제: 비밀 메뉴
난이도: Level2
시간: 20분
주소: https://softeer.ai/app/assessment/index.html?xid=257690&xsrfToken=mChiMwMuBDA7DeT5EjPH19JaBp7tE20E&testType=practice
*/
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    int m, n, k;
    cin >> m >> n >> k;
    cin.ignore();

    string m_str, n_str;
    getline(cin, m_str);
    getline(cin, n_str);
    m_str.erase(remove(m_str.begin(), m_str.end(), ' '), m_str.end());
    n_str.erase(remove(n_str.begin(), n_str.end(), ' '), n_str.end());
   
    
    if (n < m) {
        cout << "normal" << endl;
    } else {
        n_str.find(m_str) != string::npos? cout << "secret" : cout << "normal";
    }
    

    return 0;
}