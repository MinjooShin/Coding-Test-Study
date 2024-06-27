// 컴파일러 중복 선언 방지
#ifndef STACK_H
#define STACK_H

// Node structure -> 스택의 노드 정의
struct Node {
    int value;
    // 다음 노드와 연결 
    Node* nextNode;
};

// stack class -> stack data structure 정의
class Stack {
public:
    Stack();
    ~Stack();

    // stack 라이브러리 내장 함수 수동으로 구현
    void push(int value);
    int pop();
    bool isEmpty();

private:
    // stack의 Last 노드 
    Node* top;
};

#endif // STACK_H

