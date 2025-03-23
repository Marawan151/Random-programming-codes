#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class node{
    public:
        int data;
        node* next;
        node (int value);
};

class linkedlist
{
private:
    node*first;
    int size;
public:
    linkedlist();
    void insert(int value, int pos);
    void remove(int pos);
    void reverse();
    int getsize();
    void getAt(int pos);
    void display();
    void search(int value);
    void middle();
    ~linkedlist();
};




#endif // LINKEDLIST_H
