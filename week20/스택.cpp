#include<iostream>
#include<stack>
#include<sstream>

using namespace std;

int main() {
    int N, p;
    cin >> N;
    cin.ignore();

    string str, substr;
    stack<int> st;
    for (int i=0; i<N; i++) {
        getline(cin, str);
        istringstream iss(str);
        iss >> str;
        if (str == "top") {
            if (st.empty()) cout << -1 << endl;
            else cout << st.top() << endl;
        }
        else if (str == "size") cout << st.size() << endl;
        else if (str == "pop") {
            if (st.empty()) cout << -1 << endl;
            else {
                cout << st.top() << endl;
                st.pop();
            }
        }
        else if (str == "empty") {
            if (st.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else {
            iss >> p;
            st.push(p);
        }
    }

    return 0;    
}