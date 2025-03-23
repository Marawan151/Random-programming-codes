#include <iostream>
#include "linkedlist.h"
using namespace std;

node::node (int value){
    next=nullptr;
    data=value;
}

linkedlist::linkedlist(){
    first=nullptr;
    size=0;
}
void linkedlist::insert(int value, int pos){
    if (pos<0 || pos>size)
    {
        cout<<"invalid position"<<endl;
        return;
    }
    if (pos==0)
    {
        node*p=new node(value);
        p->data=value;
        p->next=first;
        first=p;
        size++;
        return;
    }
    if (pos==size)
    {
        node*q=first;
        node*p=new node(value);
        p->data=value;
        for (int i = 0; i < size; i++)
        {
            q=q->next;
        }
        q->next=p;
        size++;
        return;
    }
    node*p=new node(value);
    p->data=value;
    node*q=first;
    for (int i = 0; i < pos; i++)
    {
        q=q->next;
    }
    p->next=q->next;
    q->next=p;
    size++;
}
void linkedlist::remove(int pos){
    if (pos<0 || pos>=size)
    {
        cout<<"invalid position"<<endl;
        return;
    }
    if (pos==0)
    {
        node*q=first;
        first=first->next;
        delete q;
        size--;
        return;
    }
    if (pos==size-1)
    {
        node*q=first;
        for (int i = 0; i < size-1; i++)
        {
            q=q->next;
        }
        node*p=q->next;
        q->next=nullptr;
        delete p;
        size--;
        return;
    }
    node*q=first;
    node*p=first->next;
    for (int i = 0; i < pos-1; i++)
    {
        q=q->next;
        p=p->next;
    }
    q->next=p->next;
    delete p;
    size--;
}
void linkedlist::reverse(){
    if (first==nullptr)
    {
        cout<<"empty list cant reverse"<<endl;
        return;
    }
    if (first->next==nullptr)
    {
        cout<<"list is only 1 element"<<endl;
        return;
    }
    node *q = first;
    node *p = first->next;
    first->next = nullptr;

    while (p) { 
        first = p;          
        p = first->next;    
        first->next = q;    
        q = first; 


}
}
int linkedlist::getsize(){
    return size;
}
void linkedlist::getAt(int pos){
    node*q=first;
    for (int i = 0; i < pos; i++)
    {
        q=q->next;
    }
    cout<<"value at pos "<<pos<<" is "<<q->data<<endl;
    
}
void linkedlist::display(){
    if (size==0)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    node*q=first;
    for (int i = 0; i < size; i++)
    {
        cout<<q->data<<"->";
        q=q->next;
    }
    cout<<"null"<<endl;
    
}
void linkedlist::search(int value){
    node*q=first;
    int counter=0;
    bool found=false;
    while (q != nullptr)
    {
        if (q->data==value)
        {
            cout<<"value "<<value<<" found at position "<<counter<<endl;
            found=true;
        }
        q=q->next;
        counter+=1;   
    }
    if (found==false)
    {
        cout<<"not found"<<endl;
    }
    
}
void linkedlist::middle(){
    if (first == nullptr) {
        cout << "List is empty" << endl;
        return;}
    node*q=first;
    for (int i = 0; i < size/2; i++)
    {
        q=q->next;
    }
    cout<<q->data<<endl;

}
linkedlist::~linkedlist(){

}
