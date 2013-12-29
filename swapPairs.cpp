#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL) {}
};

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
			if(head==NULL||head->next==NULL) return head;
			ListNode *temp=new ListNode(-1);
			temp->next=head;
			ListNode *pre,*cur,*nex;
			pre=temp;
			cur=head;
			nex=head->next;
			while(nex!=NULL)
			{
				pre->next=nex;
				cur->next=nex->next;
				nex->next=cur;
				pre=cur;
				cur=cur->next;
				if(cur==NULL) break;
				nex=cur->next;
				
			}
			return temp->next;
			
    }
};

int main(int argc, char *argv[]) {
	ListNode a=ListNode(1);
	ListNode b=ListNode(2);
	ListNode c=ListNode(3);
	ListNode d=ListNode(4);
	ListNode *result;
	a.next=&b;
	b.next=&c;
	c.next=&d;
	ListNode *h=&a;
	Solution sol;
	result=sol.swapPairs(h);
	while (result!=NULL) {
		cout<<result->val<<endl;;
		result=result->next;
	}
	
}