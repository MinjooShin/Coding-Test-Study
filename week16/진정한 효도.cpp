/*
출처: 소프티어
문제: 진정한 효도
난이도: Level2
시간: 60분
주소: https://softeer.ai/app/assessment/index.html?xid=255005&xsrfToken=F3KQPGcz036Vyvfb89TDwUCttPT1d8Mj&testType=practice
*/
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int getCost(vector<vector<int>> *arr2d, int i, int cnt) {
    int cost = 0;
    if (cnt == 2) {
        if ((*arr2d)[i][0] == (*arr2d)[i][1]) {
            while ((*arr2d)[i][1] != (*arr2d)[i][2]) {
                if ((*arr2d)[i][1] > (*arr2d)[i][2]) {
                    (*arr2d)[i][2]++;
                    cost++;
                } else if ((*arr2d)[i][1] < (*arr2d)[i][2]) {
                    (*arr2d)[i][2]--;
                    cost++;
                }
            }
        } else if ((*arr2d)[i][0] == (*arr2d)[i][2]) {
            while ((*arr2d)[i][2] != (*arr2d)[i][1]) {
                if ((*arr2d)[i][2] > (*arr2d)[i][1]) {
                    (*arr2d)[i][1]++;
                    cost++;
                } else if ((*arr2d)[i][2] < (*arr2d)[i][1]) {
                    (*arr2d)[i][1]--;
                    cost++;
                } 
            }  
        } else if ((*arr2d)[i][1] == (*arr2d)[i][2]) {
            while ((*arr2d)[i][2] != (*arr2d)[i][0]) {
                if ((*arr2d)[i][2] > (*arr2d)[i][0]) {
                    (*arr2d)[i][0]++;
                    cost++;
                } else if ((*arr2d)[i][2] < (*arr2d)[i][0]) {
                    (*arr2d)[i][0]--;
                    cost++;
                } 
            }  
        }
    }
    return cost;
}

int main(int argc, char** argv)
{
    /*
    row:
        1 1 1
        2 3 1
        3 1 2
    col:
        1 2 3
        1 3 1
        1 1 2
    */
    // 3X3 격자 값 입력 받기
    string str;
    int n;
    vector<vector<int>> row(3);
    vector<vector<int>> col(3);
    for (int i=0; i<3; i++) {
        getline(cin, str);
        istringstream iss(str);
        while (iss >> n) row[i].push_back(n);
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            col[i].push_back(row[j][i]);
        }
    }
    // 격자 입력 확인
    /*
    for(int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << col[i][j] << " ";
        }
        cout << endl;
    }
    */
    vector<int> costs;
    // 하나의 행 또는 열이 모두 같은 높이일 경우
    for (int i=0; i<3; i++) {
        if (row[i][0] == row[i][1] && row[i][0] == row[i][2]) {
            cout << 0 << endl;
            return 0;
        }
        if (col[i][0] == col[i][1] && col[i][0] == col[i][2]) {
            cout << 0 << endl;
            return 0;
        }
    }
    // 하나의 행 또는 열이 두개만 같을 경우
    for (int i=0; i<3; i++) {
        if (row[i][0] == row[i][1] || row[i][0] == row[i][2] || row[i][1] == row[i][2]) {
            costs.push_back(getCost(&row, i, 2));
        }
        if (col[i][0] == col[i][1] || col[i][0] == col[i][2] || col[i][1] == col[i][2]) {
            costs.push_back(getCost(&col, i, 2));
        }
    }
    // 최소비용 구하기
    int min = *std::min_element(costs.begin(), costs.end());
    cout << min << endl;
   return 0;
}