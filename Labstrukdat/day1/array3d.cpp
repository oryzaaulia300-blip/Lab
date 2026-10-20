#include <iostream>
using namespace std;

int main(){
    system("cls");

    int nilai[2][3][4];


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                cout << "  ";
                cin >> nilai[i][j][k];
            }
        }
    }

    
    cout << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                cout << nilai[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}