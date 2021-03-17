// Name: Joshua Lavieri
// Z#: 23477048
// Course: Data Structures
// Professor: Dr. Lofton Bullard
// Due Date: 11/18/2020
// Total Points: 25
// Assignent#: 10B

#include <iostream>
#include <string>
#include <vector>

struct node
{
public:
    int data;
    node * next;
};

//Name: fun
//Pre-condition: List has not been displayed to the screen
//Post-condition: List has been displayed to the screen
//Description: Displays list to the screen
void fun(struct node* start)
{
    if(start == NULL)
    {
        return;
    }
    std::cout << start -> data;
    if(start->next != NULL )
    {
        fun(start->next->next);
    }
    std::cout << start -> data;
}

//Name: add_back
//Pre-condition: Node has not been added to the back of the list
//Post-condition: Node has been added to the back of the list
//Description: Addes node to the back of the list
void add_back(node* & front, node* & back, int x)
{
    if(front == NULL)
    {
        front = new node;
        front -> data = x;
        front -> next = NULL;
        back = front;
    }
    else
    {
        node *p = new node;
        p -> next = NULL;
        p -> data = x;
        back -> next = p;
        back = p;
    }
}

int main()
{
    node* front = NULL;
    node* back = NULL;
    for (int i = 1; i <= 6; i++)
    {
        add_back(front, back, i);
    }
    fun(front);
    return 0;
}
