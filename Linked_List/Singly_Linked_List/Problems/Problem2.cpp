#include<bits/stdc++.h>
using namespace std;

/**
 * @brief Problem Statement
 * Implement Stack using linked list.
 * 
 * Stack is a DS, which store data in LIFO format.
 * The last element inserted will be removed first.
 * @return ** int 
 */

class Node{
    int data;
    public:
        Node * next;
        Node(int val){
            data=val;
            next = NULL;
        }

        int getData(){
            return data;
        }
};

class Stack{
    Node *top;
    public:
        Stack()
        {
            top = NULL;
        }

        void push(int data)
        {
            Node * node = new Node(data);
            if(top==NULL){
                top = node;
            }else
            {
                node->next = top;
                top = node;
            }
        }

        int getTop()
        {
            return top->getData();
        }

        bool isEmpty()
        {
            return top==nullptr ? true : false;
        }

        void pop()
        {
            Node * node = top;
            top = top->next;
            int val = node->getData();
            free(node);
        }
};

int main(){
    int arr[] = {1,2,3,4,5,6};

    Stack st;

    cout<<st.isEmpty()<<"\n";

    for(int i=0;i<6;i++)
    {
        st.push(arr[i]);
    }
    
    cout<<st.getTop()<<endl;
    st.pop();
    cout<<st.getTop()<<endl;
    st.pop();
    st.pop();
    cout<<st.getTop()<<endl;


}