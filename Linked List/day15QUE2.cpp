#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
int information;
struct node *tail;
};
struct node *strt = NULL;
void insert_at_begining()
{
struct node *npointer;
npointer = new node;
cin >> npointer->information;
npointer->tail = strt;
strt = npointer;
}
void insertion_at_ending()
{
struct node *pointer1 = strt;
struct node *nptr1;
nptr1 = new node;
cin >> nptr1->information;
while (pointer1->tail != NULL)
{
pointer1 = pointer1->tail;
}
pointer1->tail = nptr1;
nptr1->tail = NULL;
}
int traverse()
{
struct node *ptr = strt;
ptr = strt;
int max = ptr->information;
while (ptr != NULL)
{
if( max<ptr->information)
{
max=ptr->information;
}
ptr = ptr->tail;
}
return max;
}
void deletion(int p)
{
struct node *preptr =strt;
struct node *ptr = strt;
if(ptr-> information == p)
{
strt = strt->tail;
delete (ptr);
}
else
{
while(ptr->information != p)
{
preptr=ptr;
ptr=ptr->tail;
}
preptr->tail=ptr->tail;
delete(ptr);
}
}
void output()
{
struct node *ptr = strt;
if (strt == NULL)
{
cout << "link list empty";
}
else
{
ptr = strt;
while (ptr != NULL)
{
cout << ptr->information << " ";
ptr = ptr->tail;
}
}
}
int main() {
int n;
cin >> n;
insert_at_begining();
for (int i = 0; i < n - 1; i++)
{
insertion_at_ending();
}
int a = traverse();
deletion(a);