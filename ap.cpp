#include<iostream>
using namespace std;
int main (){
     int x;
    cin>>x;
  int count=0;
  int n=1;
     
     while(count<=n && count<x){
         int term=(3*n+2);
         if(term%4!=0){
            cout<<term<<endl;
            count++;
            n++;

         }
         else{
             n++;

         }
     }

    return 0;
}