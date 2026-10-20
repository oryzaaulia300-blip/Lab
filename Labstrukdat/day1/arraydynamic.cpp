// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Masukkan panjang array : ";
//     cin >> n;

//     int* data =  new int [n];

//     for (int i = 0; i < n; i++){
//         cin >> data[i];
//     }

//     for (int i = 0; i < n; i++){
//         cout << data[i]<<" ";
//     }
//     delete[] data;
// }
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan panjang array : ";
    cin >> n;

    int* data = new int[n];

    for (int i = 0; i < n; i++){
        data[i] = i * 5;

        cout << data[i];

        if (i < n - 1){
            cout << ", ";
        }
    }

    delete[] data;
}

