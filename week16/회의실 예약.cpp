/*
출처: 소프티어
문제: 회의실 예약
난이도: Level2
시간: 60+분
주소: https://softeer.ai/app/assessment/index.html?xid=248426&xsrfToken=JbSnrbdDZdbAnOpx30gExx7Brhb6TF2S&testType=practice
*/
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int meeting_room_cnt, meeting_cnt;
    
    // 회의실 수, 예약된 회의의 수 입력 받기
    cin >> meeting_room_cnt >> meeting_cnt;
    
    // 1. map 선언 -> string, bool vector key: 회의실 이름, value: 회의 시간들
    map<string, vector<bool>> m;
    vector<string> meeting_room_names;
    string meeting_room_name;
    int start, end;
    
    for (int i=0; i<meeting_room_cnt; i++) {
        cin >> meeting_room_name;
        meeting_room_names.push_back(meeting_room_name);
        // 9-18시까지 시간 초기화
        m[meeting_room_name] = vector<bool>(10, false);
    }
    
    // 2. 입력받은 시작-종료 시간 동안 예약 상태를 true로 설정
    for (int j=0; j<meeting_cnt; j++) {
        cin >> meeting_room_name >> start >> end;
        if (m.find(meeting_room_name) != m.end()) {
            for (int i=start; i<end; i++) {
                if (i >= 9 && i <= 18) {
                    // 9시에 해당하는 인덱스는 0 -> 인덱스를 시간으로 설정
                    m[meeting_room_name][i-9] = true;
                }
            }
        }
    }
    
    // 3. 회의실 알파벳 순서대로 출력
    sort(meeting_room_names.begin(), meeting_room_names.end());

    // 4. 9-18시까지 예약되지 않은 시간을 출력
    for (int i=0; i<meeting_room_names.size(); i++) {
        string room = meeting_room_names[i];
        cout << "Room " << room << ":" << endl;
        int available_intervals = 0;
        bool flag = false;
        
        for (int j=0; j<9; j++) { // 9-18시까지의 시간 확인
            if (!m[room][j]) { // 예약되지 않은 시간대 시작
                if (!flag) {
                    flag = true;
                }
            } else { // 예약된 시간대 시작
                if (flag) {
                    available_intervals++; // 예약되지 않은 시간대 종료
                    flag = false;
                }
            }
        }
        if (flag) {
            available_intervals++; // 마지막이 예약되지 않은 시간대일 경우
        }

        if (available_intervals > 0) {
            cout << available_intervals << " available: " << endl;
        } else {
            cout << "Not available" << endl;
        }

        flag = false; // 각 회의실마다 flag 초기화
        for (int j=0; j<9; j++) { // 9-18시까지의 시간 확인
            if (!m[room][j]) { // 예약되지 않은 시간대 시작
                if (!flag) {
                    cout << setfill('0') << setw(2) << j+9 << "-";
                    flag = true;
                }
            } else { // 예약된 시간대 시작
                if (flag) {
                    cout << setfill('0') << setw(2) << j+9 << endl;
                    flag = false;
                }
            }
        }
        if (flag) {
            cout << "18" << endl;  // 만약 마지막 시간이 예약되지 않았다면 18시 출력
        }
        if (i != meeting_room_names.size()-1) cout << "-----" << endl;
    }

    return 0;
}
