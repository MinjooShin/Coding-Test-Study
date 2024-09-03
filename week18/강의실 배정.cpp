/*
출처: 소프티어
문제: 강의실 배정
난이도: Level3
시간: 60분
주소: https://softeer.ai/app/assessment/index.html?xid=259224&xsrfToken=oX8JnrwHjqvdsS3npjviKjhCbNbRgYe7&testType=practice
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

    int start, end;
    vector<pair<int, int>> intervals;
    for (int i=0; i<n; i++) {
        cin >> start >> end;
        intervals.push_back(make_pair(start, end));
    }
    // 종료시간이 빠른 순으로 정렬
    sort(intervals.begin(), intervals.end(), cmp);
    
    int cnt = 1; // 첫번째 강의 포함
    int chk_idx = 0;
    // 두번째 강의부터 순회
    for (int i=1; i<n; i++) {
        if (intervals[i].first >= intervals[chk_idx].second) {
            cnt++;
            chk_idx = i;
        }
    }

    cout << cnt;
    return 0;
}
