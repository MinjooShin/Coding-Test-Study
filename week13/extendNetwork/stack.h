// �����Ϸ� �ߺ� ���� ����
#ifndef STACK_H
#define STACK_H

// Node structure -> ������ ��� ����
struct Node {
    int value;
    // ���� ���� ���� 
    Node* nextNode;
};

// stack class -> stack data structure ����
class Stack {
public:
    Stack();
    ~Stack();

    // stack ���̺귯�� ���� �Լ� �������� ����
    void push(int value);
    int pop();
    bool isEmpty();

private:
    // stack�� Last ��� 
    Node* top;
};

#endif // STACK_H

