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
    int length(ListNode* h){
        int count = 0;
        while(h != nullptr){
            count++;
            h = h->next;
        }
        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = length(head);
        if(count==n) return head->next;
        int index = count-n;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        int i =0;
        while(i<index){
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next = temp->next;
        // temp->next = nullptr;
        return head;
    }
};
