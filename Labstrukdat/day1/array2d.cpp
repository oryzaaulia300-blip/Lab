// #include <iostream>
// using namespace std;

// int main(){
//     system("cls");
//     int nilai[3][5] = {
//         {100,90,80,70,30},
//         {0,70,50,80,40},
//         {100,100,100,100,100}
//     };

//     for (int i = 0; i < 3; i++){
//         for(int j = 0; j < 5; j++){
//             cout << nilai[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    system("cls");

    int nilai[3][5];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cin >> nilai[i][j];
        }
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}