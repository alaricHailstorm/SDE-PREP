#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;

/**
 * @brief Problem statement: Given a linked list, we have to display the linked list from end;
 * i/p: 1->2->3->4->5->%
 * o/p: %<-5<-4<-3<-2<-1
 * @return ** int 
 * We can solve it by either using the stack or recursion.
 */


/**
 * @brief 
 * Displays the linked list from the end.
 * We are using recursion for displaying it from the end.
 * @param head 
 * @return ** void 
 */
void displayList(Node *head)
{
    if(head==nullptr)
        return;
    
    displayList(head->next);
    cout<<head->getData()<<" ";
}

/**
 * @brief 
 * Displays the linked list from the end.
 * We are using stack for displaying it from the end.
 * First we will store all the node in stack, then pop all the node and display the values.
 * @param head 
 * @return ** void 
 */
void displayListNew(Node *head)
{
    stack<Node *> st;

    while(head!=nullptr)
    {
        st.push(head);
        head=head->next;
    }

    while (!st.empty())
    {
        Node * node =st.top();
        st.pop();
        cout<<node->getData()<<' ';
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    List *l = formLinkedList(arr,10);

    Node *head = l->getHead();

    displayListNew(head);
}