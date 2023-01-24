#include <iostream>
using namespace std;

int main() {
    cout<<"enter a number whose multiplication table you need:"<<endl;
    int Num;
    cin>>Num;
    for(int i{1};i<=10;i++)
    {
        cout<<Num<<" x "<<i<<" = "<<i*Num<<endl;
        }
    
    return 0;
}