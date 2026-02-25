class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        vector<int> ans;
        ListNode* temp = head;
        
        while (temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0;
        int j = ans.size() - 1;
        while (i < j) {
            if (ans[i] != ans[j]) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
};