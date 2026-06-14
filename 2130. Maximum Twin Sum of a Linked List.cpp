class Solution {
public:
    int pairSum(ListNode* head) {

        ListNode* temp = head;
        int n = 0;
        while (temp) {
            n++;
            temp = temp->next;
        }

        temp = head;
        ListNode* prev = nullptr;
        for (int i = 0; i <= n / 2 - 1; i++) {
            prev = temp;
            temp = temp->next;
        }
        if (prev) prev->next = nullptr;

        ListNode* curr = temp;
        prev = nullptr;
        ListNode* next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        int maxi = INT_MIN;
        for (int i = 0; i <= n / 2 - 1; i++) {
            maxi = max(maxi, head->val + prev->val);
            head = head->next;
            prev = prev->next;
        }
        return maxi;
    }
};
