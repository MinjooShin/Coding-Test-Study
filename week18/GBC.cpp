/*
출처: 소프티어
문제: GBC
난이도: Level2
시간: 60+분
주소: https://softeer.ai/app/assessment/index.html?xid=258443&xsrfToken=nYXEt7AXRcGVSTyTd5ho0cJDdwY6ZBQ7&testType=practice
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> rules; 
    vector<pair<int, int>> tests; 
    int me, ms;
    
    // 규칙 구간 입력
    for (int i = 0; i < n; i++) {
        cin >> me >> ms;
        rules.push_back(make_pair(me, ms));
    }
    
    // 테스트 구간 입력
    for (int i = 0; i < m; i++) {
        cin >> me >> ms;
        tests.push_back(make_pair(me, ms));
    }
    // j는 rule을 증가시키기 위한 인덱스 
    int j = 0, max_limit = 0, test_len, rule_len = rules[j].first, rule_idx;
    for (int i=0; i<m; i++) {
        test_len = tests[i].first;
        while (test_len > 0 && j < n) {
            if (test_len <= rule_len) {
                if (tests[i].second > rules[j].second) max_limit = max(max_limit, tests[i].second - rules[j].second);
                rule_len -= test_len;
                test_len = 0;
                if (rule_len == 0) {
                    j++;
                    rule_len = rules[j].first;
                }
            }
            // 테스트 범위가 규칙 범위 보다 더 큰 경우 
            else {
                if (tests[i].second > rules[j].second) max_limit = max(max_limit, tests[i].second - rules[j].second);
                test_len -= rule_len;
                j++;
                if (j < n) rule_len = rules[j].first;
            }
        }
    }
    
    cout << max_limit << endl;
    return 0;
}
