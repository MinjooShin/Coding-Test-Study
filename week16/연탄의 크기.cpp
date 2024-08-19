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

    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    vector<int> primes_cnts(primes.size(), 0);
    for (int i=0; i<homes; i++) {
        for (int j=0; j<primes.size(); j++) {
            if (v[i] % primes[j] == 0) primes_cnts[j]++;
        }
    }
    int max = *std::max_element(primes_cnts.begin(), primes_cnts.end()); 
    cout << max;
   
    return 0;
}