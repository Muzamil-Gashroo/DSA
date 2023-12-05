// Recursion 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void recur(int x){

     if(x>0){
     
     cout<<x<<endl;
     recur(x-1);
  
  }
}
void reverse(int n){
      
      if(n>0){
      
      reverse (n-1);
      cout<<n<<endl;
      
      }

}

int main(){

    int abc =5;
    recur(abc);
    cout<<"----"<<endl;
    reverse(abc);
    
return 0;}