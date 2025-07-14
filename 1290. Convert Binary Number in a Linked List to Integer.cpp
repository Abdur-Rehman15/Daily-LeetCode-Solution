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
    int getDecimalValue(ListNode* head) {
        int count = 0, num = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            temp = temp->next;
            count++;
        }
        count--;
        temp = head;
        while (count >= 0) {
            if (temp->val) {
                num += (pow(2, count));
            }
            temp = temp->next;
            count--;
        }
        return num;
    }
};
