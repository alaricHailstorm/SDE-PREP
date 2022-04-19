#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;

    public:
        Node *next;
        Node(int val){
            data = val;
            next = nullptr;
        }

        int getData()
        {
            return data;
        }
};

class List{
    Node *head;

    public:
        List(){
            head = NULL;
        }

        void insertFront(int data)
        {
            Node * n = new Node(data);
            if(head == nullptr)
            {
                head = n;
            }else{
                n->next = head;
                head = n;
            }
        }

        void insertBack(int data)
        {
            Node *n = new Node(data);
            if(head == nullptr)
            {
                head = n;
            }else{
                Node * tmp = head;
                while(tmp->next != nullptr)
                {
                    tmp=tmp->next;
                }
                tmp->next=n;
            }
        }

        void printList()
        {
            Node *tmp= head;
            while(tmp!=nullptr)
            {
                cout<<tmp->getData();
                if(tmp->next != nullptr)
                    cout<<"->";
                tmp = tmp->next;
            }
            cout<<endl;
        }

        int findIndex(int data)
        {
            Node *tmp= head;
            int idx = 0;
            while(tmp->getData() != data and tmp!=nullptr)
            {
                tmp = tmp->next;
                idx++;
            }
            if(tmp==nullptr)
                return -1;
            else
                return idx+1;
        }

        Node * getHead()
        {
            return head;
        }
};

int main()
{

    int arr[] = {1,2,3,5,3,1};

    List *root = new List();
    root->insertFront(arr[0]);
    root->printList();
    root->insertBack(arr[1]);
    root->printList();
    root->insertBack(arr[2]);
    root->printList();
    root->insertFront(arr[3]);
    root->printList();

    int index = root->findIndex(2);
    cout<<index<<"\n";
    Node *head = root->getHead();
    return 0;
}