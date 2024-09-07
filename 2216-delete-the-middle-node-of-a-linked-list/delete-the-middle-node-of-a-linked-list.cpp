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
        
        int counter=0;
        ListNode *tmp=head;

        //counter number of elements in linked list 
        while(tmp!=nullptr){
           // cout<<tmp->val;
            tmp=tmp->next;
            counter++;
        }
        //check number of elements in Linked List
        cout<<"the counter of linked list is "<<counter<<endl;

        ListNode *toDelete;
        

        //return tmp back to the head 
        tmp=head;
        
        //to handle if the array has one element 
        if(counter==1){
            head=nullptr;
        }


        int target=counter/2;
        
        counter=0;
        while(tmp!=nullptr){

            if(target-1==counter){
                tmp->next=tmp->next->next;
                break;
            }
            tmp=tmp->next;
            counter++;
        }

        return head;
       
    }
};