/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* merge(ListNode* a,ListNode* b){
    ListNode* dummy=new ListNode(0);
    ListNode* curr=dummy;
    while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            curr->next=a;
            a=a->next;
        }
        else{
            curr->next=b;
            b=b->next;
        }
        curr=curr->next;
    }
    if(a!=NULL){
        curr->next=a;
    }
    else{
        curr->next=b;
    }
    return dummy->next;
}
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* right=slow->next;
        slow->next=NULL;
        ListNode* left=sortList(head);
        right=sortList(right);
        return merge(left,right);
    }
};