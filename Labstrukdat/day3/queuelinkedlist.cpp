#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    system("cls");
    Node* front = nullptr;
    Node* rear = nullptr;

    // Enqueue
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = nullptr;
    front = node1;
    rear = node1;

    Node* node2 = new Node();
    node2->data = 20;
    node2->next = nullptr;
    rear->next = node2;
    rear = node2;

    Node* node3 = new Node();
    node3->data = 30;
    node3->next = nullptr;
    rear->next = node3;
    rear = node3;

    // Tampilkan queue
    Node* temp = front;
    cout << "Isi Queue: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Front
    cout << "Front: " << front->data << endl;

    // Rear
    cout << "Rear: " << rear->data << endl;

    // is Empty
    if (front == nullptr)
        cout << "Queue kosong" << endl;
    else
        cout << "Queue tidak kosong" << endl;

    // Dequeue
    Node* hapus = front;
    cout << "Dequeue: " << front->data << endl;
    front = front->next;
    delete hapus;

    // Tampil hasil Dequeue
    temp = front;
    cout << "Queue setelah dequeue: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}