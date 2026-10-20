#include <iostream>
using namespace std;

struct Node{ //single linked list non circular kalau ngoding
    int data;
    Node* next;
};

int main(){
    system("cls");
    // membuat node pertama
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = nullptr;

    // node kedua
    Node* node2 = new Node();
    node2->data = 20;
    node2->next = nullptr;

    node1->next = node2; // menentukan mau mulai dari awal atau akhir

    // menentukan head dan tail
    Node* head = node1;
    Node* tail = node2;

    // tammbahkan node baru diakhir
    Node* node3 = new Node();
    node3->data = 50;
    node3->next = nullptr;

    tail->next = node3; // menandakan bahwa setelah tail ditambahkan node3 (bukan tail yg pindah ke node3)
    tail = node3;
 
    // tambah node di depan
    Node* node4 = new Node();
    node4->data = 5;
    node4->next = head;
    head = node4;

    // menambahkan di tengah
    Node* node5 = new Node();
    node5->data = 30;
    node5->next = node2->next;
    node2->next = node5;

    // menampilkan linked list
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // menghapus node di akhir
    temp = head;

    while(temp->next != tail){
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = nullptr;

    cout << "Setelah hapus node paling belakang: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

// menghapus node paling depan
    temp = head;
    head = head ->next;
    delete temp;
    
    cout << "\nSetelah dihapus node paling depan: ";
    temp = head;
    
    while(temp !=nullptr){
        cout << temp ->data << " ";
        temp = temp -> next;
    }

    cout << endl;

    //menghapus node tengah
    temp = head;

    while (temp->next->data!= 20){
        temp = temp->next;
    }

    Node*hapus = temp->next;
    temp -> next = hapus->next;//node yang kaan dihapus 
    delete hapus; //node sebeleum yang dihapus 

    cout << "Setelah dihapus node tengah: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}