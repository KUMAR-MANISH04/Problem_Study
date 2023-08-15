class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode*low=NULL;
        ListNode*high=NULL;
        ListNode*templow=low;
        ListNode*temphigh=high;
        ListNode*temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                if(templow==NULL){
                    templow = new ListNode(temp->val);
                    low = templow;     
                }
                else{
                    templow->next=temp;
                    templow=templow->next;
                }
            }
            else{
                if(temphigh==NULL){
                    temphigh = new ListNode(temp->val);
                    high = temphigh;  
                }
                else{
                    temphigh->next=temp;                  
                    temphigh=temphigh->next;
                }
            }
            temp=temp->next;
        }
        if(templow==NULL || temphigh==NULL)
        return (templow == NULL) ? high : low;
        templow->next=high;
        temphigh->next=NULL;
        return low;
        
    }
};