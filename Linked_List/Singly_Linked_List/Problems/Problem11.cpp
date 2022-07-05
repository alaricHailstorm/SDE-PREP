#include<bits/stdc++.h>
#include "../Implementation/linkedList.h"
using namespace std;

/**
 * @brief 
 * Problem Statement: Given a linked list, we need to remove all the duplicates from the linked list.
 * i/p :   1->1->1->2->3->3->4->4->5->%
 * o/p :   2->5->%
 */

Node *removeDuplicates(Node *head)
{
    Node *dummy = new Node(0,head);
    Node *prev = dummy;

    while(head)
    {
        if(head->next and head->getData()==head->next->getData())
        {
            while(head->next and head->getData() == head->next->getData())
            {
                head=head->next;
            }
            prev->next = head->next;
        }else{
            prev = prev->next;
        }
        head=head->next;
    }
    return dummy->next;
}
int main()
{
    int b[] = {1,1,2,3,4,4,5};
    List *l1 = formLinkedList(b,7);

    Node *h1 = l1->getHead();

    Node *ans= removeDuplicates(h1);
    while(ans)
    {
        cout<<ans->getData()<<" ";
        ans=ans->next;
    }
    cout<<endl;

}