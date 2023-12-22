#include "iostream"

#include "stack.h"

using namespace std;

stack::stack()
{
    range = 0;
    structure = new itemType[MAX_ITEMS_STACK];    
}
stack::~stack()
{
    delete [] structure;
}

bool stack::isFull()
{
    return (range == MAX_ITEMS_STACK);
}
bool stack::isEmpty()
{
    return (range == 0);
}

void stack::push(itemType item)
{
    if(isFull()){
        cout << "The stack is full";
    } else {
        structure[range] = item;
        range++;
    }   
}
itemType stack::pop()
{
    if(isEmpty() == 1){
        cout << "Nothing to remove here!";
        return 0;
    } else {
        range--;
        return structure[range];
    }
}
int stack::length()
{
   return range;
}
void stack::print() 
{
     cout << "Stack range [ ";
    for (int i=0; i<range; i++ ){
        cout << structure[i] << " ";
    }     
    cout << "]\n";
} 