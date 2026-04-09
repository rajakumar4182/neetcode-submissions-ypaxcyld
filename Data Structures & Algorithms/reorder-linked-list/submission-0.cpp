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

    ListNode* reverse(ListNode* h){
        
        ListNode* curr = h;
        ListNode* prev = nullptr;

        while(curr!=nullptr){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;

    }
    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return;

        ListNode* fast = head->next;
        ListNode* slow = head;

        while(fast != nullptr && fast->next != nullptr){
            fast=fast->next->next;
            slow = slow->next;
        }
        ListNode* second = slow->next;
        slow->next = nullptr;

        ListNode* r = reverse(second);
        ListNode* l = head;

        while(r!= nullptr){
            ListNode* temp1 = l->next;
            ListNode* temp2 = r->next;

            l->next = r;
            r->next = temp1;
            l = temp1;
            r = temp2;
        }

    }
};
