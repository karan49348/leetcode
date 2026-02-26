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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* remp = head;
        for (int i = 1; i <= v.size(); i++) {
            if (i % 2 != 0) {
                remp->val = v[i - 1];
                remp = remp->next;
            }
        }
        for (int i = 1; i <= v.size(); i++) {
            if (i % 2 == 0) {
                remp->val = v[i - 1];
                remp = remp->next;
            }
        }
        return head;
    }
    };