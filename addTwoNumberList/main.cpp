#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
}*l1=NULL, *l2=NULL;

void create1(int A[], int n) {
    int i;
    ListNode *t, *last;
    l1 = new ListNode;
    l1->val = A[0];
    l1->next = NULL;
    last = l1;

    for(i = 1; i < n; i++) {
        t = new ListNode;
        t->val = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2(int A[], int n) {
    int i;
    ListNode *t, *last;
    l2 = new ListNode;
    l2->val = A[0];
    l2->next = NULL;
    last = l2;

    for(i = 1; i < n; i++) {
        t = new ListNode;
        t->val = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int len(ListNode *p) {
    int cnt = 0;
    while(p != nullptr) {
        cnt++;
        p = p->next;
    }
    return cnt;
}

void Display(ListNode *p) {
    while(p!=NULL) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int len1 = len(l1);
    int len2 = len(l2);
    ListNode *ptr1 = len1>=len2 ? l1:l2;
    ListNode *ptr2 = len1<len2 ? l1:l2;
    ListNode *t, *ptr = ptr1;

    do
    {
        ptr1->val += ptr2->val;
        if(ptr1->val > 9 && ptr1 != nullptr) {
            ptr1->val %= 10;
            ptr1->next->val += 1;

            // else if(ptr1->next == NULL && ptr2->next != NULL)
            // {
            //     ptr1->val %= 10;
            //     ptr2->next->val += 1;
            // }
        }
        if(ptr1->next == nullptr || ptr2->next == nullptr) break;
        ptr2 = ptr2->next;
        ptr1 = ptr1->next;
    }while(ptr1 != nullptr && ptr2 != nullptr);

    while(ptr1->next != nullptr) {
        if(ptr1->val > 9) {
            ptr1->val %= 10;
            ptr1->next->val += 1;
            ptr1 = ptr1->next;
        }else {
            ptr1 = ptr1->next;
        }
    }

    if(ptr1->val > 9 && ptr1->next == nullptr) {
        ptr1->val %= 10;
        t = new ListNode;
        t->val = 1;
        ptr1->next = t;
    }

    // if(ptr2->next != nullptr) {
    //     ptr1->next = ptr2->next;
    //     ptr1 = ptr1->next;
    // }

    return ptr;
}

void DeleteAll(ListNode *del) {
    ListNode *p = del;
    while(del){
        del = del->next;
        delete p;
        p = del;
    }
}

int main()
{
    int A[] = {1};
    int B[] = {9,9};
    create1(A, 1);
    create2(B, 2);
    ListNode *ans = addTwoNumbers(l1, l2);
    cout << "----------------" << endl;
    Display(ans);
    DeleteAll(l1);
    DeleteAll(l2);
    return 0;
}
