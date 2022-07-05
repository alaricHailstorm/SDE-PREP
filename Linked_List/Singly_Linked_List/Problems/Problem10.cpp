#include<bits/stdc++.h>
#include "../Implementation/linkedList.h"
using namespace std;

/**
 * @brief 
 * Problem Statement
 * Given an Linked list, we have to delete Nth node from the end.
 * i/p : 1->2->3->4->5->6->%
 *     : 2
 * o/p : 
 */

Node * deleteNthfromEnd(Node *head, int n){
    Node * dummy = new Node(0);
    dummy->next = head;
    Node *first = dummy, *second = dummy;

    int i=0;
    while(i<=n)
    {
        first = first->next;
        i++;
    }

    while(first!=NULL)
    {
        second = second->next;
        first = first->next;
    }

    second->next = second->next->next;
    return dummy->next;
}

int main()
{
    int b[] = {4,5,6,7,8,9};
    List *l1 = formLinkedList(b,6);

    Node *h1 = l1->getHead();

    Node *ans = deleteNthfromEnd(h1,2);

    while(ans)
    {
        cout<<ans->getData()<<" ";
        ans=ans->next;
    }
    cout<<endl;

}