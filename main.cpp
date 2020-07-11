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
    ListNode* middleNode(ListNode* head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        
        while (true) {
            if (fastPtr->next == nullptr) {
                break;
            }
            else {
                fastPtr = fastPtr->next->next;
                if (fastPtr == nullptr) {
                    slowPtr = slowPtr->next;
                    break;
                }
            }
            slowPtr = slowPtr->next;
        }
        
        return slowPtr;
    }
};
