#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Given the head of a singly linked list,
return true if it is a palindrome or false otherwise.
*/

/*
---------------DETAILS----------------
RUNTIME = 813ms
MEMORY USAGE = 149.5mb
*/
struct linkList
{
    int head;
    struct linkList *next;
};
void lLtraversal(struct linkList *ptr)
{
    cout << "[";
    while (ptr != NULL)
    {
        cout << ptr->head;
        ptr = ptr->next;
        if (ptr != NULL)
        {
            cout << " ,";
        }
    }
    cout << "]" << endl;
}
int isPalindrome(struct linkList *ptr)
{
    int size = 0;
    struct linkList *store;
    store = ptr;
    while (ptr != NULL)
    {
        size++;
        ptr = ptr->next;
    }
    ptr = store;
    struct linkList *compare[size];
    for (int i = 0; i < size; i++)
    {
        compare[i] = (struct linkList *)malloc(sizeof(struct linkList));
    }

    for (int i = (size-1); i >= 0; i--)
    {
        (compare[i]->head) = (ptr->head);
        ptr = ptr->next;
        if (i != 0)
        {
            ((compare[size-i-1])->next) = (compare[size-i]);
        }
        else
        {
            (compare[size-i-1]->next) = NULL;
        }
    }
    ptr = store;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if ((compare[i]->head) == (ptr->head))
        {
            count++;
        }
        ptr = ptr->next;
    }
    if (count == size)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int size;
    cout << "Enter the size of the link list : ";
    cin >> size;
    linkList *arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = (struct linkList *)malloc(sizeof(struct linkList));
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the head of linklist of index No." << i << " : ";
        cin >> ((arr[i])->head);
        if (i != (size - 1))
        {
            ((arr[i])->next) = (arr[i + 1]);
        }
        else
        {
            arr[i]->next = NULL;
        }
    }
    cout << "Entered head of link list is : ";
    lLtraversal(arr[0]);
    int ans = isPalindrome(arr[0]);
    if (ans==1)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    
    return 0;
}