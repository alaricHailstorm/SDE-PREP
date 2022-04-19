#include<bits/stdc++.h>
#include "../Implementation/linkedList.h"
using namespace std;

/**
 * @brief 
 * Given a Linked list, we need to find where cycle entry point in the given linked list.
 * If it exist, print the node which is the entry point.
 * else print No cycle detected.
 * @param head 
 * @return ** Node* 
 */

Node * findCyclePoint(Node *head)
{
    Node *slow = head, *fast = head;
    do{

        if(fast->next == nullptr || fast-> next->next == nullptr)
            return nullptr;

        slow = slow->next;
        fast = fast->next->next;
    }while(slow != fast);

    slow = head;
    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    List *l = formLinkedList(arr,5);

    Node *x = l->findIndex(3);
    Node *y = l->findIndex(5);

    y->next = x;

    Node *point = findCyclePoint(l->getHead());
    if(point == nullptr)
        cout<<"No Cycle detected\n";
    else
        cout<<"Cylce entry at: "<<point->getData()<<"\n";
}