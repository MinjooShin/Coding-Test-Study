/*
출처: 소프티어
문제: 연탄의 크기
난이도: Level2
시간: 33분
주소: https://softeer.ai/app/assessment/index.html?xid=254998&xsrfToken=SAEU03YaS8GVF6dYS9zfVZTb3qqQTC45&testType=practice
*/
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int homes, n;
    string radiuss; 
    cin >> homes;
    cin.ignore();
    
    vector<int> v;
    getline(cin, radiuss);
    //cout << radiuss << endl;
    
    istringstream iss(radiuss);
    while (iss >> n) v.push_back(n);
    
    vector<int> cnts(homes, 0);
    for (int i=0; i<homes; i++) {
        for (int j=0; j<homes; j++) {
            if (v[j] % v[i] == 0) cnts[i]++;
        }
    }
    int max = *std::max_element(cnts.begin(), cnts.end()); 
    cout << max << endl;
   
    return 0;
}