#include <iostream>
using namespace std;
int main() {
   int mtx1[3][3];
   int mtx2[3][3];
   
   cout<<"first matrix:"<<endl;
            
   for (int i=0;i<3;i++){
       for (int j=0;j<3;j++){
          cout<<"enter a"<<(i+1)<<(j+1)<<" element:";
           cin>>mtx1[i][j];
           }}
           cout<<"first matrix is:"<<endl;
         
           cout<<mtx1[0][0]<<" "<<mtx1[0][1]<<" "<<mtx1[0][2]<<endl;
           cout<<mtx1[1][0]<<" "<<mtx1[1][1]<<" "<<mtx1[1][2]<<endl;
           cout<<mtx1[2][0]<<" "<<mtx1[2][1]<<" "<<mtx1[2][2]<<endl;
           
 cout<<"second matrix:"<<endl;
            
   for (int i=0;i<3;i++){
       for (int j=0;j<3;j++){
          cout<<"enter b"<<(i+1)<<(j+1)<<" element:";
           cin>>mtx2[i][j];
           }}
           cout<<"second matrix is:"<<endl;
         
           cout<<mtx2[0][0]<<" "<<mtx2[0][1]<<" "<<mtx2[0][2]<<endl;
           cout<<mtx2[1][0]<<" "<<mtx2[1][1]<<" "<<mtx2[1][2]<<endl;
           cout<<mtx2[2][0]<<" "<<mtx2[2][1]<<" "<<mtx2[2][2]<<endl;
           
           int SumOfMtx[3][3];
           int operation;
           cout<<"\npress 1 to add the two matrices\npress 1 to add the two matrices\npress 1 to add the two matrices\npress 1 to add the two matrices"<<endl;
           cin>>operation;
           switch(operation){
               
               case 1: 
               
                       for(int i=0;i<3;i++){
                           
                           for(int j=0;j<3;j++){
                               
                               SumOfMtx[i][j]=(mtx1[i][j]+mtx2[i][j]);
                               cout<<"sum of matrix is:"<<endl;
    cout<<SumOfMtx[0][0]<<" "<<SumOfMtx[0][1]<<" "<<SumOfMtx[0][2]<<endl;
    cout<<SumOfMtx[1][0]<<" "<<SumOfMtx[1][1]<<" "<<SumOfMtx[1][2]<<endl;
    cout<<SumOfMtx[2][0]<<" "<<SumOfMtx[2][1]<<" "<<SumOfMtx[2][2]<<endl;
    break;
                           }
                       }
                       
               case 2: if(mtx1[i][0]<mtx1[i][1] && mtx1[i][0]<mtx1[i][2]){
                           
               }
           }            
              
                       
                       
                      return 0;}