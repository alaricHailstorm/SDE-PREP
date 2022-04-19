#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;

bool checkSnakeOrSnail(Node * head)
{
    Node *slow = head, *fast = head;
    do{
        if(fast->next == nullptr || fast->next->next == nullptr)
            return 0;

        slow = slow->next;
        fast = fast->next->next;
    }while(slow != fast);

    return 1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    List *l = formLinkedList(arr,5);

    Node *x = l->findIndex(3);
    Node *y = l->findIndex(5);

    // y->next = x;

    bool ans = false;

    ans = checkSnakeOrSnail(l->getHead());
    cout<<"Answer "<<ans<<"\n";

    return 0;
}