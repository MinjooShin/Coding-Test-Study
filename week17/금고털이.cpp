/*
출처: 소프티어
문제: 금고털이
난이도: Level2
시간: 60분
주소: https://softeer.ai/app/assessment/index.html?xid=255253&xsrfToken=lwt2JSlrZs8OkHHIQyB0Jt5JClv0Kqe6&testType=practice
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second; // 가격 기준으로 정렬
}

int main(int argc, char** argv)
{
    int bag_w, metals;
    cin >> bag_w >> metals;
    cin.ignore();

    int w, p;
    vector<pair<int,int>> v;
    for (int i=0; i<metals; i++) {
        cin >> w >> p;
        v.push_back(make_pair(w, p));
    }
    sort(v.begin(), v.end(), cmp);

    int total_w = 0, available_w = 0, total_p = 0;
    for (int i=0; i<metals; i++) {
        if (total_w + v[i].first <= bag_w) { // 전체 무게를 넣을 수 있을 때
            total_p += v[i].first * v[i].second;
            total_w += v[i].first;
        } else { // 일부 무게만 넣을 수 있을 때
            total_p += (bag_w - total_w) * v[i].second;
            total_w += bag_w - total_w;
            break;
        }
    }
    cout << total_p << endl;
    
   return 0;
}