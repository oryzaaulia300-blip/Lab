#include <iostream>
using namespace std;

#define MAX 5

int main(){
    system("cls");
    int queue[MAX];
    int front = 0;//depan
    int rear = -1;// belakang
    
    //push
    rear++;
    queue[rear] = 10;

    rear++;
    queue[rear] =20;
    
    rear++;
    queue[rear] = 30;

    //tampilkan isi stack

    cout << "isi queue: ";
    for(int i = front; i <= rear; i++){
        cout << queue [i] <<" ";
    }
    cout << endl;

    //front
    cout << "Front: "<< queue[front] << endl; //indeks 0 = 10

    //rear
    cout << "Rear: "<< queue[rear] << endl; //indeks 2 = 30

    //empty
    if(front > rear)
        cout <<"queue kosong" << endl;
    else 
        cout <<"queue tidak kosong" << endl;

    // Full
    if(rear == MAX-1)
        cout <<"queue penuh" << endl;
    else 
        cout <<"queue tidak penuh" << endl;

    //dequeue
    cout << "Dequeue: " << queue[front] << endl;
    front++; //karena front indeks nya lebih kecil

    cout << "Isi queue setelah dequeue: ";
    for (int i = front; i <= rear; i++){
        cout << queue[i] << " ";
    }
    cout << endl;


}