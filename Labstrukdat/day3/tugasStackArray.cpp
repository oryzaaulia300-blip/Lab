#include<iostream>
using namespace std;

#define MAX 50

int main(){
    char stack[MAX];
    int top = -1;
    string kata;

    cout << "Masukkan Huruf: ";
    getline(cin,kata);

    //Push
    for (int i = 0; i < kata.length(); i++) {
        top++;
        stack[top] = kata[i];
    }

    cout << "\ninformasi stack" << endl;

    // Top
    if(top != -1){
        cout << "Top: " << stack[top] << endl;
    }

    // Size
    cout << "Size: " << top + 1 << " huruf" << endl;

    //Empty
    if (top == -1) {
        cout << "Kondisi: Stack kosong" << endl;
    } else {
        cout << "Kondisi: Stack tidak kosong" << endl;
    }

    cout << "\nBalikan kata" << endl;
    cout << "Kata yg terbalik: ";

    //Pop
    while (top >= 0) {
        cout << stack[top]; 
        top--;              
    }
    
    cout << endl;

    cout << "Size setelah di-POP semua: " << top + 1 << endl;

}