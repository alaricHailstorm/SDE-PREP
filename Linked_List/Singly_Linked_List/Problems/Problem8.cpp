#include<bits/stdc++.h>
#include "../Implementation/linkedList.h"
using namespace std;

/**
 * @brief Problem Statement:
 * Given a singly linked list, we need to find whether number of element in linked list is odd or even
 * 
 * @return ** int 
 */

bool checkOddEven(Node *head)
{
    Node *slow = head, *fast = head;

    while(fast!=nullptr)
    {
        if(fast->next == nullptr)
            return 0;
        
        slow = slow->next;
        fast = fast->next->next;
    }
    return 1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    List *l = formLinkedList(arr,2);

    Node *head = l->getHead();

    bool check = checkOddEven(head);

    if(check)
        cout<<"Even Length\n";
    else
        cout<<"Odd Length\n";
}