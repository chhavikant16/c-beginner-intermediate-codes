#include <iostream>
using namespace std;

int main() {
   cout<<"enter basic salary:"<<endl;
   float BS,HRA,TA,PT,GS;
   cin>>BS;
   HRA= 0.1*BS;
   TA= 0.05*BS;
   PT= 0.02*BS;
   GS= BS+HRA+TA+PT;
   cout<<"gross salary is:"<<GS<<endl;
    return 0;
}

