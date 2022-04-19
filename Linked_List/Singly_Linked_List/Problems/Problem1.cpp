#include<bits/stdc++.h>
#include "../Implementation/linkedList.h"
using namespace std;
/**
    Given a linked list, your task is to reverse the given linked list;
    i/p: 1->2->3->4->5->%
    O/p: 5->4->3->2->2->1->%
**/

Node * reverse(Node *head)
{
    Node *prev = NULL, *cur=head, *next=NULL;

    while(cur!=NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev= cur;
        cur = next;
    }
    head = prev;
    return head;
}
int main()
{
    int arr[]={1,2,3,4,5};
    List *l = formLinkedList(arr,5);
    Node * head = l ->getHead();
    head = reverse(head);

    Node *tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->getData()<<" ";
        tmp=tmp->next;
    }

    return 0;
}