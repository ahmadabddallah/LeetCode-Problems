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
    bool isPalindrome(ListNode* head) {
        ListNode *tmp=head;
        deque<int>dq;
        while(tmp!=nullptr){
            dq.push_back(tmp->val);
          //  cout<<tmp->val;
            tmp=tmp->next;
        }

        for(int i=0;i<dq.size();i++){
            if(dq[i]!=dq[dq.size()-1-i]){
                return 0;
            }
        }
        return 1;
      
        return 1;
        
    }
};