/*
출처: 소프티어
문제: 8단 변속기
난이도: Level2
시간: 13분
주소: https://softeer.ai/app/assessment/index.html?xid=255576&xsrfToken=0r5m74R5JSgWnHv90ODMf21bc5Aqtaf3&testType=practice
*/
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
    string str;
    int n;
    vector<int> v;
    vector<int> ascending;
    vector<int> descending;
    
    getline(cin, str);
    istringstream iss(str);
    while (iss >> n) v.push_back(n);

    ascending = descending = v;
    sort(ascending.begin(), ascending.end());
    sort(descending.rbegin(), descending.rend());
    if (v == ascending) {
        cout << "ascending" << endl;
    } else if (v == descending) {
        cout << "descending" << endl;
    } else {
        cout << "mixed" << endl;
    }
    return 0;
}