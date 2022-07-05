#include<bits/stdc++.h>
#include "../Implementation/linkedList.h"
using namespace std;


/**
 * @brief Problem statement:
 * Given a two sorted linked list of N elements, We have to merge both linked list 
 * to form a new linked list, which will be in sorted order.
 */

List * mergeLinkedList(Node *list1, Node *list2)
{
    Node *head1 = list1, *head2 = list2;
    List *l = new List();
    while(head1 && head2)
    {
        if(head1->getData() > head2->getData())
        {
            l->insertBack(head2->getData());
            head2=head2->next;
        }else{
            l->insertBack(head1->getData());
            head1=head1->next;
        }
    }

    while(head1)
    {
        l->insertBack(head1->getData());
        head1=head1->next;
    }

    while(head2)
    {
        l->insertBack(head2->getData());
        head2 = head2->next;
    }

    return l;  
}

int main()
{
    int a[] = {1,3,5};
    int b[] = {2,4,6,7,8,9};
    List *l1 = formLinkedList(a,3);
    List *l2 = formLinkedList(b,6);

    Node *h1 = l1->getHead();
    Node *h2 = l2->getHead();

    List *ans = mergeLinkedList(h1,h2);
    Node *ans_head = ans->getHead();

    while(ans_head)
    {
        cout<<ans_head->getData()<<" ";
        ans_head= ans_head->next;
    }
    cout<<endl;

    return 0;
}