/*
출처: 소프티어
문제: 택배 마스터 광우
난이도: Level3
시간: 60+분
주소: https://softeer.ai/app/assessment/index.html?xid=266226&xsrfToken=007OHwtQ4LVTaRD7SMRL5ZW7W3pR0jMQ&testType=practice
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n, m, k;
int ans = 100000;

void computeAns(vector<int> rails_w) {
    int total = 0, bucket = 0, idx = 0;
    for (int i=0; i<k; i++) {
        while (bucket+rails_w[idx]<=m) {
            bucket += rails_w[idx];
            idx = (idx + 1) % n;
        }
        total += bucket;
        bucket = 0;
    }
    ans = ans < total? ans:total;
}

void permutation(vector<int> rails_w, int loc) {
    int temp;
    if (loc == n-1) {
        computeAns(rails_w);
        return;
    }
    for (int i=loc; i<n; i++) {
        temp = rails_w[loc];
        rails_w[loc] = rails_w[i];
        rails_w[i] = temp;
        
        permutation(rails_w, loc+1);
        
        temp = rails_w[loc];
        rails_w[loc] = rails_w[i];
        rails_w[i] = temp;
    }
}

int main(int argc, char** argv)
{
    cin >> n >> m >> k;
    vector<int> rails_w(n);
    
    for (int i=0; i<n; i++) {
        cin >> rails_w[i];
    }
    permutation(rails_w, 0);
    cout << ans << endl;
   return 0;
}