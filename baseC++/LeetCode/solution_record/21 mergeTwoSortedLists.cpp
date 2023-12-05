//
// Created by Shaobo LIU on 2023/8/30.
//

#include<iostream>
#include<algorithm>
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
class MySolution {
public:
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

    ListNode *createTotalList(vector<int> &totalList) {
        ListNode *head = new ListNode(totalList[0]);
        head->next = NULL;
        ListNode *pre = head;

        for (int i = 1; i < totalList.size(); i++) {
            ListNode *temp = new ListNode;
            temp->val = totalList[i];

            pre->next = temp;
            pre = temp;
            temp->next = NULL;
        }
        return head;
    }

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        int list1Length = getLength(list1);
        int list2Length = getLength(list2);

        if (list1Length == 0 && list2Length == 0) {
            ListNode * listNode;
//            listNode->next = NULL;
            return listNode;
        }
//            return ListNode;
//        if (list1Length * list2Length == 0 && list1Length == list2Length) {
//            if (list1Length == 0)
//                return list2;
//            else
//                return list1;
//        }
        else if (list1Length != 0 && list2Length == 0)
            return list1;
        else if (list1Length == 0 && list2Length != 0)
            return list2;
        else {
            vector<int> totalList;
            int i;
            ListNode *l1Head = list1;

            for (i = 0; i < list1Length; i++) {
                totalList.push_back(l1Head->val);
//                cout << "aaa" << l1Head->val << endl;
                l1Head = l1Head->next;
//                cout << "aaa" << l1Head->val << endl;
            }

            ListNode *l2Head = list2;
            for (int j = i; j < list2Length + i; j++) {
                totalList.push_back(l2Head->val);
                l2Head = l2Head->next;
            }


//            for (int i = 0; i < totalList.size(); i++) {
//                cout << totalList[i] << endl;
//            }

            sort(totalList.begin(), totalList.end());

//            for (int i = 0; i < totalList.size(); i++) {
//                cout << totalList[i] << endl;
//            }

            ListNode *answer = createTotalList(totalList);
            return answer;


        }
    }
};

//ListNode *createList(int n) {
//    ListNode *Head = new ListNode;
//    Head->next = NULL;
//    ListNode *pre = Head;
//
//    cout << "input " << n << " value: ";
//    for (int i = 0; i < n; i++) {
//        ListNode *temp = new ListNode;
//        cin >> temp->val;
//
//        pre->next = temp;
//        pre = temp;
//        temp->next = NULL;
//    }
//    return Head;
//}

// 显示
void display(ListNode *head) {
    ListNode *temp = head;
    int e;
    cout << "show: ";
    while (temp != NULL) {
        e = temp->val;
        cout << e << " ";
        temp = temp->next;
    }
    cout << "\n";
}


int main() {

    vector<int> totalList1 = {0};
    vector<int> totalList2 = {};
    MySolution ms;
    ListNode *l1 = ms.createTotalList(totalList1);
    ListNode *l2 = ms.createTotalList(totalList2);
    ListNode *my_answer = ms.mergeTwoLists(l1, l2);
    display(my_answer);
    system("pause");
    return 0;
}