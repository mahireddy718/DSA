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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return head; 
        ListNode* temp=head;
        int size=1;
        while(temp->next!=NULL){
            temp=temp->next;
            size++;
        }
        k=k%size;
        int moves=size-k-1;
        temp->next=head;
        ListNode* newtail=head;
        while(moves>0){
            newtail=newtail->next;
            moves--;
        }
        ListNode* newhead=newtail->next;
        newtail->next=NULL;
        return newhead;
    }
};