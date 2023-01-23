#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Given the head of a singly linked list,
return true if it is a palindrome or false otherwise.
*/

/*
---------------DETAILS----------------
RUNTIME = 564ms
MEMORY USAGE = 118.9mb
(not good yet)
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
    struct linkList *temp[size];
    int t=0,count=0;
    while(ptr != NULL ){
        temp[t]=ptr;
        ptr = ptr->next;
        t++;
    }
    for (int i = 0; i < (size/2); i++)
    {
        if (temp[i]->head == temp[(size-i-1)]->head)
        {
            count++;
        }
        
    }
    if (count==(size/2))
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