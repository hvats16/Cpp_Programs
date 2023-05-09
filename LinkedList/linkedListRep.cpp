#include <bits/stdc++.h>
using namespace std;

class LinkedList {
   public:
    int data;
    LinkedList *next;

    LinkedList(int data) {
        this->data = data;
        next = nullptr;
    }
};

int main() {
    LinkedList *node = new LinkedList(10);
    node->next = new LinkedList(11);
    node->next->next = new LinkedList(12);
    node->next->next->next = new LinkedList(13);
    cout << node->next->next->data;
}