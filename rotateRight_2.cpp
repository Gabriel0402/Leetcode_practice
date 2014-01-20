#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL) {}
};


class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if (NULL == head || k == 0)
            return head;
        
        ListNode dummy(0);
        ListNode *kprev = NULL;
        ListNode *last = &dummy;
        ListNode *tmp;
        
        dummy.next = head;
        
        int size = 0;
        while (last->next != NULL) {
            ++size;
            last = last->next;
        }
        
        k = k % size;
        if (k == 0)
            return dummy.next;
        
        last = &dummy;
        while (last->next != NULL) {
            last = last->next;
            
            if (NULL != kprev)
                kprev = kprev->next;
            else if (k == 0) {
                kprev = dummy.next;
            } else {
                --k;
            }
        }
 
        // swap
        tmp = dummy.next;
        dummy.next = kprev->next;
        last->next = tmp;
        kprev->next = NULL;
            
        return dummy.next;
    }
};

int main(int argc, char *argv[]) {
	ListNode a=ListNode(1);
	ListNode b=ListNode(2);
	a.next=&b;
	Solution sol;
	ListNode *h=&a;
   ListNode *result= sol.rotateRight(h,1);
	while(result!=NULL)
	{
		cout<<result->val<<endl;
		result=result->next;
	}

	
}