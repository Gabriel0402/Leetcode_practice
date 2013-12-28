#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL) {}
};


class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        ListNode *head = NULL;
        ListNode **tail = &head;
        int carry = 0;
        int val;
        
        while (l1 != NULL || l2 != NULL) {
            val = carry;
            if (l1 != NULL) {
                val += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                val += l2->val;
                l2 = l2->next;
            }
            
            carry = val / 10;
            *tail = new ListNode(val % 10);
            tail = &((*tail)->next);
        }
        
        if (carry == 1) {
            *tail = new ListNode(1);
        }
        
        return head;
    }
};

int main(int argc, char *argv[]) {
	ListNode a=ListNode(1);
	ListNode b=ListNode(6);
	ListNode c=ListNode(3);
	ListNode d=ListNode(4);
	ListNode e=ListNode(5);
	ListNode *result;
	a.next=&b;
	b.next=&c;
	d.next=&e;
	ListNode *l1=&a;
	ListNode *l2=&d;
	Solution sol;
	result=sol.addTwoNumbers(l1,l2);
	do {
		cout<<result->val<<endl;
		result=result->next;
		
	} while (result!=NULL);

   	
	
}