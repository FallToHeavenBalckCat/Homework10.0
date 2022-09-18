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
 /*不能用int来存储，因为可能最多有一百位数字会爆int*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=new ListNode;
        int stk[110],top=-1;
        ListNode* i=l1;
        ListNode* j=l2;
        int tmp=0,flag=0,cnt=0;
        while(1){
            int t=(i->val+j->val+tmp)%10;
            tmp=(i->val+j->val+tmp)/10;
            stk[++top]=t;
            if(i->next==nullptr){
                flag=1;
                break;
            }
            if(j->next==nullptr){
                flag=2;
                break;
            }
            i=i->next,j=j->next;
        }
        if(flag==1)
        {
            j=j->next;
            while(j)
            {
                int t=(j->val+tmp)%10;
                tmp=(j->val+tmp)/10;
                stk[++top]=t;
                j=j->next;
            }
        }
        else if(flag==2)
        {
            i=i->next;
            while(i)
            {
                int t=(i->val+tmp)%10;
                tmp=(i->val+tmp)/10;
                stk[++top]=t;
                i=i->next;
            }  
        }
        if(tmp) stk[++top]=tmp;
        while(top!=-1)
        {
            int t=stk[top];
            top--;
            ListNode*node=new ListNode(t);
            node->next=res->next;
            res->next=node;
        }
        res=res->next;
        return res;
    }
};