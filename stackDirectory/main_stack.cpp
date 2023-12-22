#include "iostream"
#include "stack.h"

using namespace std;

int main (){
    stack stackInstance;
    itemType item;
    int option;
    cout << "Starting stack program \n";

    do {
        cout << "Put zero(0) to stop program \n";
        cout << "Put one(1) to push one item on stack \n";
        cout << "Put two(2) to pop one item on stack \n";
        cout << "Put three(3) to show stack items \n";
        cout << "Put four(4) to check isFull\n";
        cout << "Put five(5) to check isEmpty\n";
        cin >> option;

        if(option == 1){
            cout << "Enter with element to push \n";
            cin >> item;
            stackInstance.push(item);
        } else if (option == 2){
            item = stackInstance.pop();
            cout << "Removeds: " << item << endl;
        } else if (option == 3){
            stackInstance.print();
        } else if (option == 4){
            cout << "The stack is full ? " << stackInstance.isFull() << "\n";
        } else if (option == 5){
            cout << "The stack is empty ? " << stackInstance.isEmpty() << "\n";
        }
    } while(option != 0);
}