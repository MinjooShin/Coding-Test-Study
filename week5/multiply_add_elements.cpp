/*
��ó: ���α׷��ӽ�
����: ���ҵ��� ���� ��
���̵�: Level 0
�ð�: 10��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181929
*/
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int mul = 1, sum = 0;
    
    for (auto num: num_list) {
        mul *= num;
        sum += num;
    }
    sum *= sum;
    if (mul < sum) return 1;
    else return 0;
}

// update code
#include <numeric>

int solution(vector<int> num_list) {
    int sum = accumulate(num_list.begin(), num_list.end(), 0);
    int mul = accumulate(num_list.begin(), num_list.end(), 1, multiplies<int>());
    sum *= sum;

    return sum > mul? 1:0;
}