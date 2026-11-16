#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
    private:
    int arr[SIZE];
    int top;
    
    public:

    //Constructor
    Stack() {
        top = -1;
    }

    //Check if Stack is empty
    bool isEmpty() {
        return top == -1;
    }

    //Checking if its full
    bool isFull() {
        return top == SIZE - 1;
    }

    //Inserting an element
    void push(int value){
        if (isFull()){
            cout << "Stack overflow! Cannot push " << value << endl;
        }
        else {
            top++;
            arr[top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    // Removing top element
    void pop() {
        if (isEmpty()){
            cout << " Stack underflow! Cannot pop from empty stack." << endl;
        }
        else {
            cout << arr[top] << "removed" << endl;
            top--;
        }
    }

    //Returning first element
    int peek() {
        if(isEmpty()) {
            cout << "Stack is empty! Cannot peek." << endl;
            return -1; // Return a sentinel value indicating an error
        }
        return arr[top];
    }

    //Destructor
    ~Stack() {
        cout << "Stack destroyed." << endl;
    }
};
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    cout << "Top element after pop is: " << s.peek() << endl;
    return 0;
}