#include <iostream>
using namespace std;

int main() {
    int nilai[4] ={}; 
   
    for (int i = 0; i < 4; i++) {
        cin >> nilai[i];
    }
    
    for (int j = 0; j < 4; j++) {
        cout << "nilai array ke " << j+1 << nilai[j]<< endl;
    }


    return 0;
}