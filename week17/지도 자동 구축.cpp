/*
출처: 소프티어
문제: 지도 자동 구축
난이도: Level2
시간: 40분
주소: https://softeer.ai/app/assessment/index.html?xid=256809&xsrfToken=SYvzdmqK6d9A7nApiAuH4xqThAVZbP2C&testType=practice
*/
#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
    int n, bef_val;
    cin >> n;
    for (int i=1; i<=n; i++) {
        bef_val = pow((pow(2,  i) + 1), 2);
    }
    cout << bef_val << endl;
   return 0;
}