#include "stack.h"
#include <iostream>

// Stack Constructor -> stack�� last ��带 null pointer�� �ʱ�ȭ
Stack::Stack() : top(nullptr) {}

// Stack Destructor -> ��� ��� ����
Stack::~Stack() {
    while (!isEmpty()) pop();
}

bool Stack::isEmpty() {
    return top == nullptr? true : false;
}

void Stack::push(int value) {
    Node* newNode = new Node();
    newNode->value = value;
    // swap -> top��带 newNode�� nextNode��, newNode�� top���� ����
    newNode->nextNode = top;
    top = newNode;
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout << "stack is empty.";
        return 0;
    }
    // swap -> top ��� �����ϰ�, ���� ��带 top ���� ����
    Node* temp = top;
    int value = temp->value;
    top = top->nextNode;
    delete temp;
    return value;
}
