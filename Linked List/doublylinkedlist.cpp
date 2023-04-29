#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
    node(int d)
    {
        data = d;
    }
};
class DoublyLinkedList
{
public:
    node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }
    DoublyLinkedList(node *n)
    {
        head = n;
    }
    void insertAtFront(node *n)
    {
        n->next = head;
        head->prev = n;
        head = n;
        cout << endl
             << "inserted node at front " << endl;
    }
    void insertAtTail(node *n)
    {
        node *tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = n;
        n->prev = tail;
        tail = n;
        cout << endl
             << " insert node at tail " << endl;
    }
    void printList()
    {

        if (head == NULL)
        {
            cout << "DoublyLinkedList is empty!" << endl;
        }
        else
        {
            node *temp = head;
            while (temp != NULL)
            {
                cout << " " << temp->data << "<-->"
                     << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    int getLength()
    {
        int length = 0;
        if (head == NULL)
        {
            return 0;
        }
        else
        {
            node *temp = head;
            while (temp != NULL)
            {
                length++;
                temp = temp->next;
            }
            return length;
        }
    }
};
int main()
{
    node *n1 = new node();
    n1->data = 78;
    DoublyLinkedList d(n1);
    node *n2 = new node();
    n2->data = 5465;
    d.insertAtFront(n2);
    node *n3 = new node();
    n3->data = 90;
    d.insertAtFront(n3);
    node *n4 = new node();
    n4->data = 212;
    d.insertAtTail(n4);
    d.printList();

    cout << "Length is " << d.getLength() << endl;
}

// #include <bits/stdc++.h>
// using namespace std;

// class node
// {
// public:
//     int key;
//     int data;
//     node *next;
//     node *prev;
//     node()
//     {
//         key = 0;
//         data = 0;
//         next = NULL;
//         prev = NULL;
//     }
//     node(int k, int d)
//     {
//         key = k;
//         data = d;
//     }
// };
// class DoublyLinkedList
// {
// public:
//     node *head;
//     DoublyLinkedList()
//     {
//         head = NULL;
//     }
//     DoublyLinkedList(node *n)
//     {
//         head = n;
//     }
//     // 1 . check if node is a exists or not
//     node *nodeExists(int k)
//     {
//         node *temp = NULL;
//         node *ptr = head;
//         while (ptr != NULL)
//         {
//             if (ptr->key == k)
//             {
//                 temp = ptr;
//             }
//             ptr = ptr->next;
//         }
//         return temp;
//     }
//     // 2 . append a node to the end of the list
//     void appendNode(node *n)
//     {
//         if (n->data % 2 == 0)
//         {
//             even.push_back(n->data);
//         }
//         else
//         {
//             odd.push_back(n->data);
//         }
//         if (nodeExists(n->key) != NULL)
//         {
//             cout << " node already exists with key value " << n->key << " append another node with key value " << endl;
//         }
//         else
//         {
//             if (head == NULL)
//             {
//                 head = n;
//                 cout << " node is appended as head node" << endl;
//             }
//             else
//             {
//                 node *ptr = head;
//                 while (ptr->next != NULL)
//                 {
//                     ptr = ptr->next;
//                 }
//                 ptr->next = n;
//                 n->prev = ptr;

//                 cout << " node is appended" << endl;
//             }
//         }
//     }
//     // 3 . prepend a node to the list
//     void prependNode(node *n)
//     {
//         if (nodeExists(n->key) != NULL)
//         {
//             cout << " node already exists with key value " << n->key << " append another node with key value " << endl;
//         }
//         else
//         {
//             if (head == NULL)
//             {
//                 head = n;
//                 cout << " node is Prepend " << endl;
//             }
//             head->prev = n;
//             n->next = head;
//             head = n;
//             cout << "node prepend successfully " << endl;
//         }
//     }
//     // 4 . insert a node after a particular node in the list
//     void insertNodeAfter(int k, node *n)
//     {
//         node *ptr = nodeExists(k);
//         if (ptr == NULL)
//         {
//             cout << " no node exist with this key " << k << endl;
//         }
//         else
//         {
//             if (nodeExists(n->key) != NULL)
//             {
//                 cout << " node already exists with key " << n->key << " . Append another node with different key value " << endl;
//             }
//             else
//             {
//                 node *nextNode = ptr->next;
//                 // inserting to the end of the list
//                 if (nextNode == NULL)
//                 {
//                     ptr->next = n;
//                     n->prev = ptr;
//                     cout << " node inserted to the end " << endl;
//                 }
//                 // inserting in betwen
//                 else
//                 {
//                     n->next = nextNode;
//                     nextNode->prev = n;
//                     n->prev = ptr;
//                     ptr->next = n;
//                     cout << " node to be inserted in between " << endl;
//                 }
//             }
//         }
//     }
//     // 5 . delete a node by key
//     void deleteNodeByKey(int k)
//     {
//         node *ptr = nodeExists(k);
//         if (ptr == NULL)
//         {
//             cout << " no node exist with key value " << k << endl;
//         }
//         else
//         {
//             if (head->key == k)
//             {
//                 head = head->next;
//                 cout << " node unlinked with key value " << k << endl;
//             }
//             else
//             {
//                 node *nextNode = ptr->next;
//                 node *prevNode = ptr->prev;
//                 // deleting at the end
//                 if (nextNode == NULL)
//                 {
//                     prevNode->next = NULL;
//                     cout << " node is deleted from the end " << endl;
//                 }
//                 // deleting in between
//                 else
//                 {
//                     prevNode->next = nextNode;
//                     nextNode->prev = prevNode;
//                     cout << " node deleted in between " << endl;
//                 }
//             }
//         }
//     }
//     // 6. update the node
//     void updateNodeByKey(int k, int d)
//     {
//         node *ptr = nodeExists(k);
//         if (ptr != NULL)
//         {
//             ptr->data = d;
//             cout << " Node data updated successfully " << endl;
//         }
//         else
//         {
//             cout << " node doesn't exist with key value " << k << endl;
//         }
//     }
//     // 7 . printing
//     void printList()
//     {
//         if (head == NULL)
//         {
//             cout << " no node in the doublyLinkedList" << endl;
//         }
//         else
//         {
//             cout << endl
//                  << " Doubly linked list values are " << endl;
//             node *temp = head;
//             while (temp != NULL)
//             {
//                 cout << " ( " << temp->key << " , " << temp->data << " ) <-->";
//                 temp = temp->next;
//             }
//         }
//     }
// };

// int main()
// {
//     DoublyLinkedList obj;
//     int option;
//     int key1, k1, data1;
//     do
//     {
//         cout << "\n what operation do you want to perform ? select option number . Enter 0 for exist ." << endl;
//         cout << "1. AppendNode()" << endl;
//         cout << "2. prependNode()" << endl;
//         cout << "3. insertNodeAfter()" << endl;
//         cout << "4. deleteNodeByKey()" << endl;
//         cout << "5. updateNodeByKey()" << endl;
//         cout << "6. print()" << endl;
//         cout << "7 . clear screen " << endl
//              << endl;
//         cin >> option;
//         node *n1 = new node();
//         switch (option)
//         {
//         case 0:
//             break;

//         case 1:
//             cout << "\n Append node operation \n Enter  key and data of the node to be appended" << endl;
//             cin >> key1;
//             cin >> data1;
//             n1->key = key1;
//             n1->data = data1;
//             obj.appendNode(n1);
//             break;
//         case 2:
//             cout << "prependNode operation \n Enter key & data of the node to be prepended " << endl;
//             cin >> key1;
//             cin >> data1;
//             n1->key = key1;
//             n1->data = data1;
//             obj.prependNode(n1);
//             break;
//         case 3:
//             cout << " insert node after operation \n Enter key of existing node after which you want to insert new node : " << endl;
//             cin >> k1;
//             cout << "Enter key & data of the new node first : " << endl;
//             cin >> key1;
//             cin >> data1;
//             n1->key = key1;
//             n1->data = data1;
//             obj.insertNodeAfter(k1, n1);
//             break;
//         case 4:
//             cout << " delete node by key operation\n Enter key of the node to be deleted" << endl;
//             cin >> k1;
//             obj.deleteNodeByKey(k1);
//             break;
//         case 5:
//             cout << "update node by key operation\n Enter key and data of the node to be updated" << endl;
//             cin >> key1;
//             cin >> data1;
//             obj.updateNodeByKey(key1, data1);
//             break;
//         case 6:
//             obj.printList();
//             break;
//         case 7:
//             system("cls");
//             break;
//         default:
//             cout << " Enter proper option " << endl;
//             break;
//         }
//     } while (option != 0);
//     cout << " Odd number list are " << endl;
//     oddNode *n1 = new oddNode();
//     for (int i = 0; i < odd.size(); i++)
//     {
//     }

//     return 0;
// }