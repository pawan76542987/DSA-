#include <iostream>
using namespace std;

int main() {
    int n = 4; 

    for (int i = 0; i < n; i++) {
        cout << "|"; 
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        cout<<"*";
       
         cout << endl;
    }

cout << "|---*-->"<<endl;


for (int i = n-1; i >0; i--) {
        cout << "|"; 
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        cout<<"*";
       
         cout << endl;
    }


    return 0;
}