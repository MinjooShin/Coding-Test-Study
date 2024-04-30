/*
��ó: ���α׷��ӽ�
����: ���̻����� Ȯ���ϱ�
���̵�: Level0
�ð�: 3��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181908
*/

#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    if ((my_string.find(is_suffix) != string::npos) && (my_string[my_string.length()-1] == is_suffix[is_suffix.length()-1])) return 1;
    else return 0;
}


// another method
int solution(string my_string, string is_suffix) {    
    if(my_string.size() < is_suffix.size())
    {
        return 0;
    }
    return my_string.substr(my_string.size() - is_suffix.size()) == is_suffix;
}
