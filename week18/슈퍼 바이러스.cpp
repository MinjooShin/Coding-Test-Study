/*
출처: 소프티어
문제: 슈퍼 바이러스
난이도: Level3
시간: 40분
주소: https://softeer.ai/app/assessment/index.html?xid=258860&xsrfToken=GUBEdGMa0faJzNgrxY6VJDF4epwxmTcD&testType=practice
*/
#include<iostream>

using namespace std;

int MOD = 1000000007;

long long mod_exp(long long p, long long n) {
    long long result = 1;
    n *= 10;
    while (n > 0) {
        if (n%2 == 1) {
            result = (result * p) % MOD; 
        }
        p = (p*p) % MOD;
        n /= 2;
    }
    return result;
}

int main(int argc, char** argv)
{
    long long k, p, n;
    cin >> k >> p >> n;

    long long result = mod_exp(p, n);
    result = (k * result) % MOD;

    cout << result << endl;
    
   return 0;
}