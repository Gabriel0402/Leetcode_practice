#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL) {}
};

class Solution{
	public:
	bool hasCycle(ListNode *head)
	{
		ListNode *fast =head;
		ListNode *slow =head;
		do {
			if(fast!=NULL)
			{
				fast=fast->next;
			}
			if(fast!=NULL)
			{
				fast=fast->next;
			}
			if(fast==NULL)
			{
				return false;
			}
			slow=slow->next;
			
		} while (fast!=slow);
		return true;
	}
};

int main(int argc, char *argv[]) {
	ListNode a=ListNode(1);
	ListNode b=ListNode(2);
	ListNode c=ListNode(2);
	a.next=&b;
	b.next=&c;
	c.next=&a;
	ListNode *h=&a;
	Solution solu;
	cout<<solu.hasCycle(h)<<endl;
	
	
}