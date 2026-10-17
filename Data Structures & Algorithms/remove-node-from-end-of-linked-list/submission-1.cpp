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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while( temp != nullptr){
            size++;
            temp = temp->next;
        }
        int n1 = size - n +1;
        int i = 1 ;
        ListNode* prev = nullptr;
        ListNode* cur = head;
        while(cur != nullptr){
            if( i == n1){
                if(prev != nullptr){
                    ListNode* temp = cur;
                    prev->next = cur->next;
                    cur->next = nullptr;
                    delete(temp);
                    break;
                }
                else{
                    ListNode* temp = cur->next;
                    delete(cur);
                    return temp;
                }
            }
            prev = cur;
            cur = cur->next;
            i++;
        }
        return head;
    }
};
