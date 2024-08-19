/*
��ó: ����Ƽ��
����: ȸ�ǽ� ����
���̵�: Level2
�ð�: 60+��
�ּ�: https://softeer.ai/app/assessment/index.html?xid=248426&xsrfToken=JbSnrbdDZdbAnOpx30gExx7Brhb6TF2S&testType=practice
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
    
    // ȸ�ǽ� ��, ����� ȸ���� �� �Է� �ޱ�
    cin >> meeting_room_cnt >> meeting_cnt;
    
    // 1. map ���� -> string, bool vector key: ȸ�ǽ� �̸�, value: ȸ�� �ð���
    map<string, vector<bool>> m;
    vector<string> meeting_room_names;
    string meeting_room_name;
    int start, end;
    
    for (int i=0; i<meeting_room_cnt; i++) {
        cin >> meeting_room_name;
        meeting_room_names.push_back(meeting_room_name);
        // 9-18�ñ��� �ð� �ʱ�ȭ
        m[meeting_room_name] = vector<bool>(10, false);
    }
    
    // 2. �Է¹��� ����-���� �ð� ���� ���� ���¸� true�� ����
    for (int j=0; j<meeting_cnt; j++) {
        cin >> meeting_room_name >> start >> end;
        if (m.find(meeting_room_name) != m.end()) {
            for (int i=start; i<end; i++) {
                if (i >= 9 && i <= 18) {
                    // 9�ÿ� �ش��ϴ� �ε����� 0 -> �ε����� �ð����� ����
                    m[meeting_room_name][i-9] = true;
                }
            }
        }
    }
    
    // 3. ȸ�ǽ� ���ĺ� ������� ���
    sort(meeting_room_names.begin(), meeting_room_names.end());

    // 4. 9-18�ñ��� ������� ���� �ð��� ���
    for (int i=0; i<meeting_room_names.size(); i++) {
        string room = meeting_room_names[i];
        cout << "Room " << room << ":" << endl;
        int available_intervals = 0;
        bool flag = false;
        
        for (int j=0; j<9; j++) { // 9-18�ñ����� �ð� Ȯ��
            if (!m[room][j]) { // ������� ���� �ð��� ����
                if (!flag) {
                    flag = true;
                }
            } else { // ����� �ð��� ����
                if (flag) {
                    available_intervals++; // ������� ���� �ð��� ����
                    flag = false;
                }
            }
        }
        if (flag) {
            available_intervals++; // �������� ������� ���� �ð����� ���
        }

        if (available_intervals > 0) {
            cout << available_intervals << " available: " << endl;
        } else {
            cout << "Not available" << endl;
        }

        flag = false; // �� ȸ�ǽǸ��� flag �ʱ�ȭ
        for (int j=0; j<9; j++) { // 9-18�ñ����� �ð� Ȯ��
            if (!m[room][j]) { // ������� ���� �ð��� ����
                if (!flag) {
                    cout << setfill('0') << setw(2) << j+9 << "-";
                    flag = true;
                }
            } else { // ����� �ð��� ����
                if (flag) {
                    cout << setfill('0') << setw(2) << j+9 << endl;
                    flag = false;
                }
            }
        }
        if (flag) {
            cout << "18" << endl;  // ���� ������ �ð��� ������� �ʾҴٸ� 18�� ���
        }
        if (i != meeting_room_names.size()-1) cout << "-----" << endl;
    }

    return 0;
}
