#include "stack.h"
#include <iostream>

// Stack Constructor -> stack의 last 노드를 null pointer로 초기화
Stack::Stack() : top(nullptr) {}

// Stack Destructor -> 모든 노드 제거
Stack::~Stack() {
    while (!isEmpty()) pop();
}

bool Stack::isEmpty() {
    return top == nullptr? true : false;
}

void Stack::push(int value) {
    Node* newNode = new Node();
    newNode->value = value;
    // swap -> top노드를 newNode의 nextNode로, newNode를 top노드로 설정
    newNode->nextNode = top;
    top = newNode;
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout << "stack is empty.";
        return 0;
    }
    // swap -> top 노드 삭제하고, 다음 노드를 top 노드로 설정
    Node* temp = top;
    int value = temp->value;
    top = top->nextNode;
    delete temp;
    return value;
}
