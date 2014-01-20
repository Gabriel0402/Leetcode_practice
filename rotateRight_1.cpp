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
          if(head==NULL) return NULL;
          if(k==0) return head;
	      ListNode *result;
		  ListNode *temp=head;
		  ListNode *tmp=head;
		  int length;
		  while(temp!=NULL)
		  {
			  length++;
			  temp=temp->next;
		  }
		  if (k>=length) return head;
		  temp=head;
		  while(k--)
		  {
			   temp=temp->next;
		  }
		  while(temp->next!=NULL)
		  {
			  
		      tmp=tmp->next;
		     temp=temp->next;
		  }
		  result=tmp->next;
		  temp=result;
		  tmp->next=NULL;
		  while(temp->next!=NULL)
		  {
			  temp=temp->next;
		  }
		  temp->next=head;
	     return result;
        
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