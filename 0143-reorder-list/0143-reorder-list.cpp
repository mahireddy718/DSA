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
ListNode* reverse(ListNode* head){
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* Next;
    while(curr){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=reverse(slow->next);
        slow->next=NULL;
        ListNode* temp=head;
        while(second){
            ListNode* f1=temp->next;  
            ListNode* f2=second->next; //keeping track of links before merging front and back
            temp->next=second;
            second->next=f1;
            temp=f1;
            second=f2;
        }
    }
};