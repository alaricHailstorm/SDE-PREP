/**
 * @brief Contains the class representation of linked list.
 * Can change the variable type of data as per the problem needs.
 * 
 */
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

        Node * findIndex(int data)
        {
            Node *tmp= head;
            int idx = 0;
            while(tmp->getData() != data and tmp!=nullptr)
            {
                tmp = tmp->next;
                idx++;
            }
            return tmp;
        }

        Node * getHead()
        {
            return head;
        }
};

List * formLinkedList( int arr[],int n)
{
    List *l = new List();
    for(int i=0;i<n;i++)
    {
        l->insertBack(arr[i]);
    }
    return l;
}