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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessdummy=new ListNode(0);
        ListNode* greaterdummy=new ListNode(0);
        ListNode* less=lessdummy;
        ListNode* great=greaterdummy;
        while(head!=NULL){
           if(head->val<x){
            less->next=head;
            less=less->next;
           } 
           else{
            great->next=head;
            great=great->next;
           }
           head=head->next;
        }
        great->next=NULL;
        less->next=greaterdummy->next;
        return lessdummy->next;
    }
};