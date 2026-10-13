/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
            if(head==nullptr){
                return head;
            }
           Node *t=new Node(head->val);Node *p = t;  
           for( Node *n=head->next;n!=nullptr;n=n->next){
               t->next=new Node(n->val);
               
               t=t->next;
                   
           }  Node *u=head;
             for( Node *k=p;k!=nullptr;k=k->next){
                  Node *i=p;
                  if(u->random==nullptr){
                      k->random=nullptr;
                  }else{
                    Node *o=head;
                  while(o!=u->random){
                        o=o->next;      
                        i=i->next;

                  }
                  k->random=i;

                  }
                  u=u->next;
                 
           }
           
      return p;
           }
    
};