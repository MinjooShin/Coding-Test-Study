/*
��ó: ����Ƽ��
����: ���� ����
���̵�: Level2
�ð�: 60��
�ּ�: https://softeer.ai/app/assessment/index.html?xid=254817&xsrfToken=TJ2k1eAUvJN9gEXdnU3ahfWeG2Ukd0TT&testType=practice
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<string>

using namespace std;

void attack(int l, int r, int col, vector<vector<int>> *v) {
    for (int i=l-1; i<r; i++) {
        for (int j=0; j<col; j++) {
            if ((*v)[i][j] == 1) {
                (*v)[i][j] = 0;
                break;
            }
        }
    }
}

int main(int argc, char** argv)
{
    int row, col, n; 
    string nums;
    
    cin >> row >> col;
    cin.ignore(); // ���ۿ� ���� ������ ���� ���ڵ� �Է¹ޱ� ����. ���� �Է��� ���� ����.
    vector<vector<int>> v(row);

    for (int i=0; i<row; i++) {
        getline(cin, nums);
        istringstream iss(nums);
        while(iss >> n) v[i].push_back(n);
    }
    // ����� ���� ���
    /*
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
                cout << v[i][j] << " ";
            }
            cout << endl;
    }
    */
    int l1, r1, l2, r2;
    cin >> l1 >> r1;
    attack(l1, r1, col, &v);
    cin >> l2 >> r2;
    attack(l2, r2, col, &v);

    int cnt = 0;
    for (int i=0; i<row; i++) {
        cnt += count(v[i].begin(), v[i].end(), 1);
    }
    cout << cnt << endl;

   return 0;
}