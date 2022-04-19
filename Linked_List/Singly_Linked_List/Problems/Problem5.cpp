#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;

/**
 * @brief Problem Statement
 * Given a sorted linked list, we need to insert the data into linked iist, such that it is sorted
 * after the insertion of the new node.
 * @return ** int 
 */
Node * sortedInsertion(Node *head, int data)
{
    Node *node = new Node(data);
    if(head==nullptr)
    {
        head = node;
    }else{

        Node *prev = nullptr, *cur = head;
        while( cur != nullptr and cur->getData()<data)
        {
            prev = cur;
            cur = cur->next;
        }

        if(prev == nullptr)
        {
            node->next = head;
            head = node;
        }else{
            node->next = prev->next;
            prev->next = node;
        }
    }
    return head;
}

void printList(Node* head)
{
    if(head==nullptr)
        return;
    
    while(head!=nullptr)
    {
        cout<<head->getData()<<" ";
        head= head->next;
    }
    cout<<endl;
}

int main()
{
    int arr[]= {1,2,4,5,6,7,8,9};

    List *l = formLinkedList(arr,8);
    Node *head = l->getHead();

    printList(head);

    head = sortedInsertion(head,3);

    printList(head);

    head = sortedInsertion(head,0);

    printList(head);

}