/*
출처: 프로그래머스
문제: 문자열 섞기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181942
*/
#include <string>
#include <vector>
using namespace std;

string solution(string str1, string str2) {
    vector<char> result;
    int j = 0, k = 0;
    
    for(int i = 0; i < str1.length() + str2.length(); i++){
        if(i%2==0){
            result.push_back(str1[j]);
            j++;
        }
        else{
            result.push_back(str2[k]);
            k++;
        }
    }
    return string(result.begin(), result.end());
}