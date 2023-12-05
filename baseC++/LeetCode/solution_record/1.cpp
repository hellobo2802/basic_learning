//
// Created by Shaobo LIU on 2023/8/28.
//

#include<iostream>
#include<vector>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}  // 链表结点的初始化方式
};
/*
    
*/

int getLength(ListNode *pHead) {
    if (pHead == nullptr)  // nullptr？？
        return 0;
    int length = 0;
    ListNode *pNode = pHead;
    while (pNode != nullptr) {
        length++;
        pNode = pNode->next;
    }
    return length;
}

ListNode *createList(int n) {
    ListNode *Head = new ListNode;
    Head->next = NULL;
    ListNode *pre = Head;

    cout << "input " << n << " value: ";
    for (int i = 0; i < n; i++) {
        ListNode * temp = new ListNode;
        cin >> temp->val;

        pre->next = temp;
        pre = temp;
        temp->next = NULL;
    }
    return Head;
}
// 显示
void display(ListNode* head) {
    ListNode* temp=head->next;
    int e;
    cout << "show";
    while (temp!=NULL) {
        e = temp->val;
        cout << e << " ";
        temp = temp->next;
    }
    cout << "\n";
}


int main() {




    ListNode *l1 = createList(2);
    cout << getLength(l1) << endl;
    display(l1);
    system("pause");
    return 0;
}