/*
출처: 프로그래머스
문제: 나머지 한 점
난이도: 알고리즘 문제 해설
시간: 35분
주소: https://school.programmers.co.kr/learn/courses/18/lessons/1878
*/

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int dupCheck(vector<int> v) {
    int dup = 0, size = 0, ans = 0;
    set<int> s;
    
    for (int i=0; i<v.size(); i++) {
        size = s.size(); 
        s.insert(v[i]); 
        if (s.size() == size) dup = v[i];
    }

    for (int j=0; j<v.size(); j++) {
        if (v[j] != dup) {
            ans = v[j];
            break;
        }
    }
    return ans;
}

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;
    vector<int> cmp_x;
    vector<int> cmp_y;
    int tmp = 0;
    
    for (int i=0; i<v.size(); i++) {
        cmp_x.push_back(v[i][0]);
        cmp_y.push_back(v[i][1]);
    }
    
    tmp = dupCheck(cmp_x);
    ans.push_back(tmp);
    tmp = dupCheck(cmp_y);
    ans.push_back(tmp);
        
    return ans;
}