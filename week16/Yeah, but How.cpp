/*
��ó: ����Ƽ��
����: Yeah, but How?
���̵�: Level2
�ð�: 30��
�ּ�: https://softeer.ai/app/assessment/index.html?xid=254932&xsrfToken=ZupWPF34thQSFVq96H4yxE4CLXiAyhpg&testType=practice
*/
#include<iostream>
#include<queue>
#include<string>
#include<sstream>
using namespace std;

int main(int argc, char** argv)
{
    queue<int> q;
    string str, result;
    char c;
    
    getline(cin, str);
    istringstream iss(str);
    while (iss >> c) q.push(c);

    while (!q.empty()) {
        if (q.front() == '(') {
            result += "(1+";
            q.pop();
        } else if (q.front() == ')' ) {
            q.pop();
            result += (q.empty())? "1)" : "1)+";
            
        }
    }
    cout << result << endl;
    
   return 0;
}