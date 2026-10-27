#include <iostream>
using namespace std;

int main(){
    int data[] = {5,4,3,2,1};
    int n = 5;

    for (int =0; i< n-1; i++){
        for(int j = 0; j < n - -i ; j++){
            if(data[j] >  data [j+1]){
                swap(data[j], data [j+1]);
            }
        }
    }

    cout << "Hasil Bubble sort: ";
    for (int i = 0; i < n ; i++){
        cout << data [i] << " ";
    }
    return 0;
}