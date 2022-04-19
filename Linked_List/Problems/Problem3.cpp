#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;

bool checkSnakeOrSnail(Node * head)
{
    Node *slow = head, *fast = head->next;
    while(fast != nullptr and slow != fast)
    {
        // cout<<slow->getData()<<" "<<fast->getData()<<endl;
        if(fast->next == nullptr || fast->next->next == nullptr)
            return 0;

        fast = fast->next->next;
        slow = slow->next;
    }
    return 1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    List *l = formLinkedList(arr,8);

    Node *x = l->findIndex(3);
    Node *y = l->findIndex(8);

    y->next = x;

    bool ans = false;

    ans = checkSnakeOrSnail(l->getHead());
    cout<<"Answer "<<ans<<"\n";

    return 0;
}