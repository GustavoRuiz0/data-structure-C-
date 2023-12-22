typedef int itemType;
const int MAX_ITEMS_STACK = 1;
class stack {
    private: 
    int range; 
    int* structure;

    public: 

    stack();
    ~stack();

    bool isFull();
    bool isEmpty();

    void push(itemType item);
    itemType pop();
    int length();

    void print();


};