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
    ListNode* reverselist(ListNode*head){
        ListNode*nextptr=NULL, *prev=NULL, *curr=head;
        while(curr!=NULL){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head, *fast=head;
        if(head==NULL || head->next==NULL)
        return true;

        while(fast->next!=NULL&&fast->next->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverselist(slow->next);
        slow = slow->next;

        while(slow!=NULL){
            if(slow->val!=head->val)
            return false;
           
                head=head->next;
                slow=slow->next;    
            
        }
        return true;
    }
};
//time = O(n)
//space=O(1)
//https://leetcode.com/problems/palindrome-linked-list/submissions/