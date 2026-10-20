#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

void tambah (Node* root, int data) {
    if (root == NULL) {
        root = new Node();
        root->data = data;
        root->kiri = NULL;
        root->kanan = NULL;
    }

    // inputan lebih besar 
    if (data > root->data) {
        tambah(root->kiri, data);
    }

    // inputan lebih kecil 
    if (data < root->data) {
        tambah(root->kanan, data);
    }
}

int main () {
    system("cls");
    Node* root = NULL;
    int angka;

    cout << "Masukkan angka (0=stop) : ";
    cin >> angka;

    while (angka != 0) {
        tambah(root, angka);
        cin >> angka;
    }

    return 0;
}