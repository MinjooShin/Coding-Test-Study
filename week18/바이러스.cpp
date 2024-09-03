/*
출처: 소프티어
문제: 바이러스
난이도: Level2
시간: 40분
주소: https://softeer.ai/app/assessment/index.html?xid=257718&xsrfToken=8vZ27uWHHWxvRRMOqOzhN9CqfQf7L7KX&testType=practice
*/
#include<iostream>
using namespace std;

int MOD = 1000000007;

// 거듭제곱을 모듈러 연산을 사용하여 계산
long long mod_exp(long long p, long long n) {
    long long result = 1;
    // n이 0이 될 때까지 지수를 줄임 
    while (n > 0) {
        // 지수가 홀수 일때 p를 따로 곱함 
        if (n % 2 == 1) {
            result = (result * p) % MOD;
        }
        p = (p * p) % MOD;
        n /= 2;
    }
    return result;
}

int main() {
    long long k, p, n;
    cin >> k >> p >> n;
    // P^N % MOD 계산
    long long result = mod_exp(p, n);
    // 최종 바이러스 수 계산
    result = (k * result) % MOD;
    
    cout << result << endl;

    return 0;
}