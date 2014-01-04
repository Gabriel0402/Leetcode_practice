#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL) {}
};


class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
	 	    ListNode *result=head;
			ListNode *temp=head;
			while(n--)
			{
				temp=temp->next;
			}
			if(temp==NULL) 
			{
				head=head->next;
				return head;
			}
			temp=temp->next;
			while(temp!=NULL)
			{
				result=result->next;
				temp=temp->next;
			}
			result->next=result->next->next;
			return head;
			 
 
    }
};


int main(int argc, char *argv[]) {
		ListNode a=ListNode(1);
		ListNode b=ListNode(2);
		ListNode c=ListNode(3);
		ListNode d=ListNode(4);
		ListNode e=ListNode(5);
		a.next=&b;
		b.next=&c;
		c.next=&d;
		d.next=&e;
		ListNode *h=&a;
		Solution sol;
		ListNode *result=sol.removeNthFromEnd(h,5);
		while(result!=NULL)
		{
			cout<<result->val<<endl;
			result=result->next;
		}
	
}