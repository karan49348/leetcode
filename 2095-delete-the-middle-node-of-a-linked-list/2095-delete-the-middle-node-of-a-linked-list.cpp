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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
         ListNode*temp=head;
         while(temp!=NULL){
            count++;
            temp=temp->next;
         }
         if(count==1)return NULL;
         int mid=count/2;
          ListNode*prev=head;
           ListNode*agge=head;
           while(mid!=0){
            prev=agge;
            agge=agge->next;
            mid--;
           }
           prev->next=agge->next;
           delete(agge);
           return head;
    }
};