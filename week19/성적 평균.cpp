/*
출처: 소프티어
문제: 성적 평균
난이도: Level3
시간: 40분
주소: https://softeer.ai/app/assessment/index.html?xid=260921&xsrfToken=qs3Woz5Fz1kJiSlNzdWQrFXdTrAEw5Fu&testType=practice
*/
#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
    int n, k;
    cin >> n >> k;
    cin.ignore();

    string str;
    vector<int> scores(n+1, 0);
    vector<int> prefix_sum(n+1, 0);

    // 누적합 계산으로 구간 계산 O(1) 소요
    for (int i = 1; i <= n; i++) {
        cin >> scores[i];
        prefix_sum[i] = prefix_sum[i - 1] + scores[i];
    }
    
    int a, b;
    for (int i=0; i<k; i++) {
        cin >> a >> b;
        int sum = prefix_sum[b] - prefix_sum[a-1];
        double average = static_cast<double>(sum) / (b-a+1);
        printf("%.2f\n", average);
    }

   return 0;
}