#include <iostream>
#include "list.h"
using namespace std;

List::List(int cap){
    capacity=cap;
    size=0;
    arr = new int[capacity];
}

void List::insert(int value, int pos){
    if (pos<0 || size==capacity || pos>size)
    {
        cout<<"unable to add"<<endl;
        return;
    }
    
    if (pos==size)
    {
        arr[size]=value;
        size++;
        return;
    }

    for (int i = size; i>pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    size++;
}
void List::remove(int pos){
    if (pos>=size || pos<0 || size==0)
    {
        cout<<"unable to remove"<<endl;
        return;
    }

    if (pos==size-1)
    {
        size--;
        return;
    }

    for (int i = pos; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
}
int List::getsize(){
    return size;

}
void List::display(){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
void List::getAt(int pos){
    cout<<"element at position "<<pos<<" is "<<arr[pos]<<endl;

}

List::~List(){
    delete []arr;
    size=0;
    capacity=0;

}
