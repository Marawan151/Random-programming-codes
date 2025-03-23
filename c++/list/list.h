#ifndef LIST_H
#define LIST_H

class List
{
private:
    int* arr;
    int capacity;
    int size;
public:
    List(int cap);
    ~List();
    void insert(int value, int pos);
    void remove(int pos);
    int getsize();
    void display();
    void getAt(int pos);
};




#endif // LIST_H
