#include <bits/stdc++.h>
using namespace std;

#define paragraph cout << endl;

struct node
{
    int data;
    node *next;
};

node *root1 = NULL;
node *root2 = NULL;

// 2. Insert Last
void insertLast1(int val)
{
    cout << val << " is inserted as last node" << endl;
    node *temp;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    if (root1 == NULL)
    {
        root1 = temp;
    }
    else
    {
        node *curr_node = root1;
        while (curr_node->next != NULL)
        {
            curr_node = curr_node->next;
        }
        curr_node = curr_node->next = temp;
    }
}

// 2. Insert Last
void insertLast2(int val)
{
    cout << val << " is inserted as last node" << endl;
    node *temp;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    if (root2 == NULL)
    {
        root2 = temp;
    }
    else
    {
        node *curr_node = root2;
        while (curr_node->next != NULL)
        {
            curr_node = curr_node->next;
        }
        curr_node = curr_node->next = temp;
    }
}

// 7. Print List
void printing(node *&root)
{
    // paragraph
    node *curr_node = root;
    cout << "[ ";
    while (curr_node != NULL)
    {
        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    }
    cout << "]" << endl;
    paragraph
}

void nodeAdd()
{
    node *list1_node = root1;
    node *list2_node = root2;
    while (list1_node != NULL)
    {
        list1_node->data = (list1_node->data + list2_node->data);
        list1_node = list1_node->next;
        list2_node = list2_node->next;
    }
    printing(root1);
}

int main()
{
    int no, x;
    cout << "How many nodes?" << endl;
    cin >> no;
    for (int i = 0; i < no; i++)
    {
        cout << "Enter List 1, Node No. " << i + 1 << ": " << endl;
        cin >> x;
        insertLast1(x);
    }
    for (int i = 0; i < no; i++)
    {
        cout << "Enter List 2, Node No. " << i + 1 << ": " << endl;
        cin >> x;
        insertLast2(x);
    }
    printing(root1);
    printing(root2);
    nodeAdd();
}
