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
    ListNode* reverseList(ListNode* head) {
        ListNode *tmp=head;
        vector<int>v;
        while(tmp!=nullptr){
            
            cout<<tmp->val<<"\n";
            v.push_back(tmp->val);
            tmp=tmp->next;
        }
        tmp=head;
        int counter=0;
          while(tmp!=nullptr){
            
            tmp->val=v[v.size()-1-counter];
            //v.push_back(tmp->val);
            counter++;
            tmp=tmp->next;
        }

        cout<<"Final Results \n";
         while(tmp!=nullptr){
            
            cout<<tmp->val<<"\n";
            v.push_back(tmp->val);
            tmp=tmp->next;
        }
        tmp=head;
        


        return head;
    }
};