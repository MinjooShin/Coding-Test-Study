/*
출처: 소프티어
문제: 정관판
난이도: Level2
시간: 60분
주소: https://softeer.ai/app/assessment/index.html?xid=243767&xsrfToken=FslIOpKY1eqDYYlJYRac7nx4ngrVvTgT&testType=practice
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
const int arr[11][7] = {{1, 1, 1, 1, 0, 1, 1}, {0, 0, 1, 0, 0, 1, 0}, {0, 1, 1, 1, 1, 0, 1}, 
                    {0, 1, 1, 0, 1, 1, 1}, {1, 0, 1, 0, 1, 1, 0}, {1, 1, 0, 0, 1, 1, 1}, 
                    {1, 1, 0, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 1, 0}, {1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 1, 0, 1, 1, 1}, {0, 0, 0, 0, 0, 0, 0}};

int findCnt(string before, string after) {
    int switch_cnt = 0, bef_first = 0, aft_first = 0;
    int max_len = max(before.length(), after.length());
    //cout << "max_len: " << max_len << endl;

    while (before.length() < max_len) {
        before.insert(before.begin(), 'n');
    }
    while (after.length() < max_len) {
        after.insert(after.begin(), 'n');
    }
    
    //cout << "before: " <<before << " after: " << after << endl;
    for (int i=0; i<max_len; i++) {
        if (before[i] == 'n') bef_first = 10;
        else bef_first = before[i]-48;
        if (after[i] == 'n') aft_first = 10;
        else aft_first = after[i]-48;
        
        for (int j=0; j<7; j++) {
            if(arr[bef_first][j] != arr[aft_first][j]) switch_cnt++;
        }
    }
    return switch_cnt;
}

int main(int argc, char** argv)
{
    int case_cnt;
    string before, after;
    cin >> case_cnt;
    
    for (int i=0; i<case_cnt; i++) {
        cin >> before >> after;
        cout << findCnt(before, after) << endl;  
    }
   return 0;
}