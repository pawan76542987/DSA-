#include <iostream>
using namespace std;

int main() {
    int n=7;
    

    int mid = 3; 
    
    for (int i = 0; i < n; i++) {

       
        for (int j = 0; j < n; j++) {

           
            if (i == 0) {
                if (j == 0 or j >= mid){
                    cout << "* ";
                }
                else{
                    cout << "  ";}
            }

           
            else if (i == mid) {
                cout << "* ";
            }

            
            else if (i == n - 1) {
                if (j <= mid or j == n - 1){
                    cout << "* ";}
                else{
                    cout << "  ";}
            }

           
            else if (j == 0 and i <= mid) {
                cout << "* ";
            }

           
            else if (j == mid) {
                cout << "* ";
            }

           
            else if (j == n - 1 and i >= mid) {
                cout << "* ";
            }


            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}