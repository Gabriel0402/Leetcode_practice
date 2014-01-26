#include <iostream>

using namespace std;

class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(head==NULL || k<=1) return head;
        int length=0;
        ListNode *cur=head;
        while(cur!=NULL)
        {
            length++;
            cur=cur->next;
        }
        if(k>length) return head;
        cur=head;
        ListNode *pre=NULL;
        int count=k;
        while(cur!=NULL && count>0)
        {
            ListNode *temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
            count--;
            
        }
        head->next=reverseKGroup(cur,k);
        return pre;
        
    }
};


int main(int argc, char *argv[]) {
	
}