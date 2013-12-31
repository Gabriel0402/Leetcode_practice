#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL) {}
};

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
	         ListNode *temp=head;
            while(head!=NULL && head->next!=NULL)
 				{
	             if(head->val==head->next->val)
	 				{
		               head->next=head->next->next;
	             }
	 				else head=head->next;
             }
				return temp;
    }
};



int main(int argc, char *argv[]) {
	   ListNode a=ListNode(1);
		ListNode b=ListNode(1);
		ListNode c=ListNode(2);
		a.next=&b;
		b.next=&c;
		ListNode *h=&a;
		Solution sol;
		ListNode *result=sol.deleteDuplicates(h);
		while(result!=NULL)
		{
			cout<<result->val<<endl;
			result=result->next;
		}
	
}