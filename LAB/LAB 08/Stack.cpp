/* STACK
#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 5 // Total capacity of the stack

int arr[MAX_SIZE];
int top = -1; // -1 represents that the stack is completely empty

// 1. Push operation: Add an element to the stack
void push(int value) {
    // In zero-based indexing, the maximum valid index is (MAX_SIZE - 1)
    if (top == MAX_SIZE - 1) {
        cout << "Stack Overflow! Cannot push " << value << ".\n";
    } else {
        top++; // Move top to the next available position
        arr[top] = value; // Insert the element
        cout << value << " pushed into stack.\n";
    }
}

// 2. Pop operation: Remove the top element from the stack
void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Nothing to pop.\n";
    } else {
        cout << arr[top] << " popped from stack.\n";
        top--; // Decrease top to point to the previous element
    }
}

// 3. Peek/Top operation: View the top element
int peek() {
    if (top == -1) {
        cout << "Stack is empty!\n";
        return -1;
    } else {
        return arr[top];
    }
}

// 4. Display operation: Show all elements from Bottom to Top
void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack elements (Bottom to Top): ";
        // Loop starts from index 0 (bottom) and goes up to top
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    // Infinite loop until user decides to exit
    while (true) {
        //cout<<endl;
        //display();
        cout << "\n*** STACK OPERATIONS MENU ***\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (Top Element)\n";
        cout << "4. Display Stack\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value = peek();
                if (value != -1) {
                    cout << "Top element is: " << value << endl;
                }
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting program. Goodbye!\n";
                return 0; // Terminate the program
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
*/

/* QUEUE

#include <bits/stdc++.h>
using namespace std;

// Define the maximum capacity of the queue
const int MAX_SIZE = 5;

// Global variables for queue state management
int queueArray[MAX_SIZE];
int frontIndex = -1;
int rearIndex = -1;

// Function to check if the queue is completely full
bool isFull() {
    return rearIndex == MAX_SIZE - 1;
}

// Function to check if the queue is empty
bool isEmpty() {
    return frontIndex == -1;
}

// Function to insert an element into the queue
void enqueue(int value) {
    if (isFull()) {
        cout << "\nError: Queue Overflow! Cannot add " << value << "\n";
        return;
    }
    // If inserting the very first element, set frontIndex to 0
    if (frontIndex == -1) {
        frontIndex = 0;
    }
    rearIndex++;
    queueArray[rearIndex] = value;
    cout << "\nSuccessfully enqueued: " << value << "\n";
}

// Function to delete an element from the queue
void dequeue() {
    if (isEmpty()) {
        cout << "\nError: Queue Underflow! No elements to remove.\n";
        return;
    }
    cout << "\nDequeued element: " << queueArray[frontIndex] << "\n";
    frontIndex++;

    // Reset indicators back to -1 if the queue becomes fully empty
    if (frontIndex > rearIndex) {
        frontIndex = -1;
        rearIndex = -1;
    }
}

// Function to look at the frontmost element without removing it
void peek() {
    if (isEmpty()) {
        cout << "\nQueue is currently empty.\n";
        return;
    }
    cout << "\nFront Element: " << queueArray[frontIndex] << "\n";
}

// Function to display all active elements in the queue
void display() {
    if (isEmpty()) {
        cout << "\nQueue is currently empty.\n";
        return;
    }
    cout << "\nCurrent Queue: ";
    for (int i = frontIndex; i <= rearIndex; i++) {
        cout << queueArray[i] << " ";
    }
    cout << "\n";
}

int main() {
    int choice, value;

    // Infinite loop to keep the menu active until manually exited
    while (true) {
        //display();
        cout << "\n--- QUEUE OPERATIONS MENU ---\n";
        cout << "1. Enqueue (Add Element)\n";
        cout << "2. Dequeue (Remove Element)\n";
        cout << "3. Peek (View Front Element)\n";
        cout << "4. Display (View Entire Queue)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Switch case block to execute selected operation
        switch (choice) {
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "\nExiting the program. Goodbye!\n";
                return 0; // Terminate program execution
            default:
                cout << "\nInvalid Input! Please choose a number between 1 and 5.\n";
        }
    }
    return 0;
}

*/
