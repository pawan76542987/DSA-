#include<iostream>
using namespace std;
int main(){

    int n=4;
   
cout<<"Happy Diwali! 🪔 "<<endl;

cout<<"      *"<<endl;
cout<<"     ***"<<endl;
cout<<"      *"<<endl;
for (int i = 0; i < n; i++)
{
   
for (int j = 0; j < i; j++)
{
  cout<<" ";
}
for (int j = 1; j <= 3*n+1-2*i; j++)
{
    cout<<"*";
}

cout<<endl;

}


cout<<"   *******";


    return 0;
}