#include <iostream>


using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL) {}
};

class Solution{
	public:
	ListNode *Merge_Lists(ListNode *list1,ListNode *list2)
	{
		if(list1==NULL) return list2;
		if(list2==NULL) return list1;
		if(list1->val<list2->val)
		{
			list1->next=Merge_Lists(list1->next,list2);
			return list1;
		}
		else{
			list2->next=Merge_Lists(list2->next,list1);
			return list2;
			
		}
	}
};
int main(int argc, char *argv[]) {
	ListNode a=ListNode(5);
	ListNode b=ListNode(6);
	ListNode c=ListNode(7);
	ListNode d=ListNode(8);
	ListNode e=ListNode(1);
	ListNode f=ListNode(2);
	ListNode g=ListNode(3);
	a.next=&b;
	b.next=&c;
	c.next=&d;
	e.next=&f;
	f.next=&g;
	Solution sol;
	ListNode *h=&a;
	ListNode *k=&e;
	ListNode *n;
	n=sol.Merge_Lists(h,k);
	do
	{
		cout<<n->val<<endl;
		n=n->next;
	}while(n!=NULL);
	
	 	
}