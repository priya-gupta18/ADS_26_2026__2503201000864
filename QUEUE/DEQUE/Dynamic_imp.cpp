// #include <iostream>
// using namespace std;


// struct Node {
//     int info;
//     Node *next;
//     Node*next;
// };

// Node *front = NULL;
// Node*rear=NULL;

// dq_insertfront(int x){
//     Node*newNode=newNode();
//     newNode -> info=x;
//     if(front==NULL){
//         newNode -> prev=newNode -> next=NULL;
//         rear=front= newNode;
//     }
//     else{
//         newNode->prev=NULL;
//         newNode->next=front;
//         front->prev=newNode;
//         front = newNode;
//     }
// }

// dq_insertrear(int x){
//     Node*newNode=newNode();
//     newNode -> info=x;
//     if(front==NULL){
//         newNode -> prev=newNode -> next=NULL;
//         rear=front= newNode;
// }
// else{
//     newNode->prev=rear;
//     newNode-> next=NULL;
//     rear->next=newNode;
//     rear=newNode;
//   }
// }

// dq_deletefront(){
//     Node*temp=front;
//     if(front==NULL)
//     cout<<"dq is empty";
//     else if(front==rear){
//         front=rear=NULL;
//         delete temp;
//   }
// else{
//     front=front->next;
//     front->prev=NULL;
//     delete temp;
// }
// }

// dq_deleterear(){
//      Node*temp=front;
//     if(front==NULL)
//     cout<<"dq is empty";
//     else if(front==rear){
//         front=rear=NULL;
//         delete temp;
//   }
//   else{
//     rear=rear->prev;
//     rear->next=NULL;
//     delete temp;
//   }
// }

// void peek() {
//     if (front==NULL) {
//         cout << " Queue is Empty!" << endl;
//     } else {
//         cout<< "front element:"<< front->data << endl;
//     }
// }


// void display() {
//     if (front==NULL) {
//         cout << "Queue is Empty!" << endl;

//     Node *temp = front;
//     cout << "Queue Elements: ";

//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// }
// int main() {
//     int choice, value;

//     do {
//         cout << "1. insertfront\n";
//         cout << "2. deletefront\n";
//         cout << "3. Peek\n";
//         cout << "4. Display\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter value: ";
//                 cin >> value;
//                 insertfront(value);
//                 break;

//             case 2:
//                 deletefront();
//                 break;

//             case 3:
//                 peek();
//                 break;

//             case 4:
//                 display();
//                 break;

//             default:
//                 cout << "Invalid Choice!" << endl;
//         }

//     } while (choice != 5);

//     return 0;
// }

#include <iostream>
using namespace std;

struct Node {
    int info;
    Node *prev;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;


void dq_insertfront(int x) {
    Node *newNode = new Node();
    newNode->info = x;

    if (front == NULL) {
        newNode->prev = NULL;
        newNode->next = NULL;
        front = rear = newNode;
    }
    else {
        newNode->prev = NULL;
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }
}


void dq_insertrear(int x) {
    Node *newNode = new Node();
    newNode->info = x;

    if (front == NULL) {
        newNode->prev = NULL;
        newNode->next = NULL;
        front = rear = newNode;
    }
    else {
        newNode->prev = rear;
        newNode->next = NULL;
        rear->next = newNode;
        rear = newNode;
    }
}


void dq_deletefront() {
    if (front == NULL) {
        cout << "Deque is empty!" << endl;
    }
    else {
        Node *temp = front;

        if (front == rear) {
            front = rear = NULL;
        }
        else {
            front = front->next;
            front->prev = NULL;
        }

        delete temp;
    }
}


void dq_deleterear() {
    if (front == NULL) {
        cout << "Deque is empty!" << endl;
    }
    else {
        Node *temp = rear;

        if (front == rear) {
            front = rear = NULL;
        }
        else {
            rear = rear->prev;
            rear->next = NULL;
        }

        delete temp;
    }
}


void peek() {
    if (front == NULL) {
        cout << "Deque is empty!" << endl;
    }
    else {
        cout << "Front element: " << front->info << endl;
    }
}


void display() {
    if (front == NULL) {
        cout << "Deque is empty!" << endl;
        return;
    }

    Node *temp = front;

    cout << "Deque Elements: ";

    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n--- DEQUE MENU ---\n";
        cout << "1. Insert Front\n";
        cout << "2. Insert Rear\n";
        cout << "3. Delete Front\n";
        cout << "4. Delete Rear\n";
        cout << "5. Peek Front\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter value: ";
                cin >> value;
                dq_insertfront(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                dq_insertrear(value);
                break;

            case 3:
                dq_deletefront();
                break;

            case 4:
                dq_deleterear();
                break;

            case 5:
                peek();
                break;

            case 6:
                display();
                break;

            case 7:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}