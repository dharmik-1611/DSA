#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int d;
    node *next;
    node()
    {
        d = 0;
        next = NULL;
    }
    node(int data)
    {
        d = data;
    }
};
class SortedSinglyLinkedList
{
public:
    node *head;
    SortedSinglyLinkedList()
    {
        head = NULL;
    }
    // SortedSinglyLinkedList(node *n)
    // {
    //     head = n;
    // }
    void insertNode(node *n)
    {
        // when list is empty
        if (head == NULL)
        {
            head = n;
            cout << "Head node inserted: " << endl;
            cout << "head node address is " << head << endl;
        }
        else
        {
            // when list have only one node and upcoming node is greater then the first node
            node *temp = head;
            if (temp->next == NULL && temp->d < n->d)
            {
                temp->next = n;
                cout << endl;
                cout << " node to be inserted after head node in ascending order" << endl;
            }
            // when list is have only one node  and upcoming node is smaller then first node
            else if (temp->next == NULL && temp->d > n->d)
            {
                n->next = head;
                head = n;
                cout << " node to be inserted " << endl;
            }
            else if (n->d < temp->d)
            {
                n->next = head;
                head = n;
                cout << " node to be inserted " << endl;
            }
            else
            {
                int flag = 0;
                node *prevNode = head;
                node *nextNode = head->next;
                while (nextNode != NULL)
                {
                    if (n->d <= nextNode->d)
                    {
                        prevNode->next = n;
                        n->next = nextNode;
                        cout << " node to be inserted in between " << endl;
                        flag = 1;
                        break;
                    }
                    prevNode = prevNode->next;
                    nextNode = nextNode->next;
                }
                if (flag == 0)
                {
                    prevNode->next = n;
                    cout << "node to be inserted at last " << endl;
                }
            }
        }
    }
    void deletedFromBeginning()
    {
        if (head == NULL)
        {
            cout << " Linked list is already empty" << endl;
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
        cout << " front node is deleted successfully " << endl;
    }
    void deletionFromTheEnd()
    {
        if (head == NULL)
        {
            cout << "Linked list is already empty" << endl;
            return;
        }

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            cout << "Last node deleted successfully" << endl;
            return;
        }

        node *prev = head;
        node *nextNode = head->next;
        while (nextNode->next != NULL)
        {
            nextNode = nextNode->next;
            prev = prev->next;
        }
        delete nextNode;
        prev->next = NULL;
        cout << "Last node deleted successfully" << endl;
    }
    void deleteSpecifically(int n)
    {
        if (head == NULL)
        {
            cout << " Linked list is empty" << endl;
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            cout << "Last node deleted successfully" << endl;
            return;
        }
        node *prev = head;
        node *nextNode = head->next;
        while (nextNode != NULL)
        {
            if (nextNode->d == n)
            {
                break;
            }
            else
            {
                nextNode = nextNode->next;
                prev = prev->next;
            }
        }
        if (nextNode->next == NULL)
        {
            prev->next = NULL;
            delete nextNode;
            cout << "Specific node deleted successfully " << endl;
            return;
        }
        else
        {
            prev->next = nextNode->next;
            delete nextNode;
            cout << "Specific node deleted successfully " << endl;
            return;
        }
    }
    void printList()
    {
        node *temp = head;
        if (head == NULL)
        {
            cout << "Linked list is empty" << endl;
            return;
        }
        while (temp != NULL)
        {
            // cout << "print list " << endl;
            cout << temp->d << "-->";
            temp = temp->next;
        }
    }
};
int main()
{
    int d;
    int op;
    SortedSinglyLinkedList s;
    do
    {
        cout << endl;
        cout << "Enter 0 for exit \n Enter 1 for inserting node \n Enter 2 for printing the list \n Enter 3 for deletionoffrontnode a \n Enter 4 for deleting last node \n Enter 5 for delete specific node" << endl;
        cin >> op;
        node *n1 = new node();
        switch (op)
        {
        case 1:
            cout << "Enter the data for the node " << endl;
            cin >> d;
            n1->d = d;
            s.insertNode(n1);
            break;
        case 2:
            s.printList();
            break;
        case 3:
            s.deletedFromBeginning();
            break;
        case 4:
            s.deletionFromTheEnd();
            break;
        case 5:
            int n;
            cout << "Enter the node value which you want to delete." << endl;
            cin >> n;
            s.deleteSpecifically(n);
            break;
        default:
            cout << "Enter proper option " << endl;
            break;
        }
    } while (op != 0);
    return 0;
}