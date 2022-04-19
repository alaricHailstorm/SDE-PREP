#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;

/**
 * @brief Problem Statement: Given a linked list, Our task is to find the middle element.
 * 
 * 
 * @return ** int 
 */

Node * findMiddle(Node *head)
{
    Node * slow = head, *fast = head;
    while(fast !=nullptr)
    {
        if(fast->next == nullptr)
            return slow;
        
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    List *l = formLinkedList(arr,10);

    Node *head = l->getHead();

    Node *middle = findMiddle(head);

    cout<<middle->getData()<<endl;
}