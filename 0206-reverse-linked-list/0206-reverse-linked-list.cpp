class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> store;
        ListNode* temp = head;
        while (temp != NULL) {
            store.push_back(temp->val);
            temp = temp->next;
        }
        int i = store.size() - 1;
        ListNode* remp = head;
        while (i >= 0) {
            remp->val = store[i];
            i--;
            remp = remp->next;
        }
        return head;
    }
};