#include <iostream>

using namespace std;

// Linked list node
class ListNode{
public:
    int val;
    ListNode *next;
};

// Hash Table
class HashTable{
public:
    ListNode **HT;
    HashTable();
    int Hash(int key);
    void Insert(int key);
    int Search(int key);
    ~HashTable();
};

HashTable::HashTable() {
    HT = new ListNode* [10];
    for(int i = 0; i < 10; i++) {
        HT[i] = nullptr;
    }
}

int HashTable::Hash(int key) {
    return key%10;
}

void HashTable::Insert(int key) {
    int hIdx = Hash(key);
    ListNode* t = new ListNode;
    t->val = key;
    t->next = nullptr;
    // CASE : No node in linked list
    if (HT[hIdx] == nullptr) {
        HT[hIdx] = t;
    }else {
        ListNode* p = HT[hIdx];
        ListNode* q = HT[hIdx];

        while(p && p->val < key) {
            q = p;
            p = p->next;
        }
        // IF Insert position is first
        if(q == HT[hIdx]) {
            t->next = HT[hIdx];
            HT[hIdx] = t;
        }else {
            t->next = q->next;
			q->next = t;
        }
    }
}

int HashTable::Search(int key) {
    int hIdx = Hash(key);
    ListNode *p = HT[hIdx];
    while(p) {
        if(p->val == key) {
            return p->val;
        }
        p = p->next;
    }
    return -1;
}

HashTable::~HashTable() {
	for (int i=0; i<10; i++){
		ListNode* p = HT[i];
		while (HT[i]){
			HT[i] = HT[i]->next;
			delete p;
			p = HT[i];
		}
	}
	delete [] HT;
}

int main()
{
    int A[] = {16, 12, 25, 39, 6, 122, 5, 68, 75};
	int n = sizeof(A)/sizeof(A[0]);
	HashTable H;
	for (int i=0; i<n; i++){
		H.Insert(A[i]);
	}
	cout << "Successful Search" << endl;
	int key = 6;
	int value = H.Search(key);
	cout << "Key: " << key << ", Value: " << value << endl;
	cout << "Unsuccessful Search" << endl;
	key = 95;
	value = H.Search(key);
	cout << "Key: " << key << ", Value: " << value << endl;

    return 0;
}
