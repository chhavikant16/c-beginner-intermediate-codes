#include<iostream>
using namespace std;
int main(){
    float num1, num2, result;
    int operation;
    char input;
    cout<<"\nEnter two numbers:";
    cin>>num1>>num2;
    cout<<"\nPress 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division\n";
    do
    {
        cin>>operation;
        switch (operation)
        {
            case 1: result= num1+num2;
                    cout<<"The result of addition is: "<<result<<endl;
                break;
            case 2: result= num1-num2;
                    cout<<"The result of subtraction is: "<<result<<endl;
                break;
            case 3: result= num1*num2;
                    cout<<"The result of multiplication is: "<<result<<endl;
                break;
            case 4: result= num1/num2;
                    cout<<"The result of division is: "<<result<<endl;
                break;
            default: cout<<"Invalid input"<<endl;
                break;
        } 
        cout<<"Press y to use other operation or any other key to exit: ";
        cin>>input;
    } while (input == 'y');

    return 0;
}
