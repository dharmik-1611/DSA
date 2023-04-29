#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int key;
    int data;
    node *next;
    node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    node(int k, int d)
    {
        key = k;
        data = d;
    }
};
class SinglyLinkedList
{
public:
    node *head;
    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(node *n)
    {
        head = n;
    }
    // 1. check if node is exist or not
    node *nodeExists(int k)
    {
        node *temp = NULL;
        node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }
    // 2. Append a node to the list
    void appendNode(node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << " node already exists with key value " << n->key << " append another node with key value " << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << " Node Appended " << endl;
            }
            else
            {
                node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << " Node Appended " << endl;
            }
        }
    }
    // 3. prepend node - attach a node at the start
    void prependNode(node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << " node already exists " << endl;
        }
        else
        {
            n->next = head;
            head = n;
            cout << " node appended " << endl;
        }
    }
    // 4 . Insert a node after a particular node in the list
    void insertNodeAfter(int k, node *n)
    {
        node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << " no node exist with this key " << k << endl;
        }
        else
        {
            if (nodeExists(n->key) != NULL)
            {
                cout << " node already exists with key " << n->key << " . Append another node with different key value " << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << " node inserted successfully" << endl;
            }
        }
    }
    // 5 . delete a node by unique key
    void deleteNodeByKey(int k)
    {
        if (head == NULL)
        {
            cout << " Linked list is empty" << endl;
        }
        else if (head == NULL)
        {
            if (head->key == k)
            {
                head = head->next;
                cout << "node unlinked with key value " << k << endl;
            }
        }
        else
        {
            node *temp = NULL;
            node *prevPtr = head;
            node *currPtr = head->next;
            while (currPtr != NULL)
            {
                if (currPtr->key == k)
                {
                    temp = currPtr;
                    currPtr = NULL;
                }
                else
                {
                    prevPtr = prevPtr->next;
                    currPtr = currPtr->next;
                }
            }
            if (temp != NULL)
            {
                prevPtr->next = temp->next;
                cout << " node unlinked with key value " << k << endl;
            }
            else
            {
                cout << " node doesn't exist" << endl;
            }
        }
    }
    // 6 . update a node by given key
    void updateNodeByKey(int k, int d)
    {
        node *ptr = nodeExists(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << " node data updated " << ptr->data << endl;
        }
        else
        {
            cout << "node doesn't exist" << endl;
        }
    }
    // 7 . printing the list
    void printList()
    {
        if (head == NULL)
        {
            cout << " linked list is empty" << endl;
        }
        else
        {
            cout << " linked list contains " << endl;
            node *temp = head;
            while (temp != NULL)
            {
                cout << " ( " << temp->key << " , " << temp->data << " ) -->";
                temp = temp->next;
            }
        }
    }
};
int main()
{
    SinglyLinkedList s;
    int option;
    int key1, k1, data1;
    do
    {
        cout << "\n what operation do you want to perform ? select option number . Enter 0 for exist ." << endl;
        cout << "1. AppendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. print()" << endl;
        cout << "7 . clear screen " << endl
             << endl;
        cin >> option;
        node *n1 = new node();
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "\n Append node operation \n Enter  key and data of the node to be appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            break;
        case 2:
            cout << "prependNode operation \n Enter key & data of the node to be prepended " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;
        case 3:
            cout << " insert node after operation \n Enter key of existing node after which you want to insert new node : " << endl;
            cin >> k1;
            cout << "Enter key & data of the new node first : " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.insertNodeAfter(k1, n1);
            break;
        case 4:
            cout << " delete node by key operation\n Enter key of the node to be deleted" << endl;
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;
        case 5:
            cout << "update node by key operation\n Enter key and data of the node to be updated" << endl;
            cin >> key1;
            cin >> data1;
            s.updateNodeByKey(key1, data1);
            break;
        case 6:
            s.printList();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << " Enter proper option " << endl;
            break;
        }

    } while (option != 0);
    return 0;
}
