#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL) {}
};


class Solution {
public:
    void reorderList(ListNode *head) {
			ListNode *a=head;
			ListNode *temp;
			ListNode *result;
			while()
			
			
        
    }
};

int main(int argc, char *argv[]) {
	   ListNode a=ListNode(1);
		ListNode b=ListNode(2);
		ListNode c=ListNode(3);
		ListNode d=ListNode(4);
		a.next=&b;
		b.next=&c;
		c.next=&d;
		ListNode *h=&a;
		Solution sol;
		sol.reorderList(h);
		while(h!=NULL)
		{
			cout<<h->val<<endl;
			h=h->next;
		}
		
	
}