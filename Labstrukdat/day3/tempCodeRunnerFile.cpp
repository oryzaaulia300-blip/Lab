#include <iostream>
using namespace std;

#define MAX 5

int main(){
    system("cls");
    int stack[MAX];
    int top = -1;
    
    //push
    top++;
    stack[top] = 10;

    top++;
    stack[top] =20;
    
    top++;
    stack[top] = 30;

    //tampilkan isi stack

    cout << "isi stack: ";
    for(int i = top; i >= 0; i--){
        cout <<stack[i] <<" ";
    }
    cout << endl;

    // Top
    cout << "Top: "<< stack[top] << endl; //indeks 2 = 30

    //size
    cout <<"Size: " << top+1 << endl; // 2+1

    //empty
    if(top == -1)
        cout <<"stack kosong" << endl;
    else 
        cout <<"Stack tidak kosong" << endl;

    // POP
    cout << "Pop: " << stack[top] << endl;
    top--; // 2-1 =1

    cout <<"Isi stack setelah pop: ";
    for (int i = top; i >= 0; i--){
        cout << stack[i] << " ";
    }
    cout << endl;


}