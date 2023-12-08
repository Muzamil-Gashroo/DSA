// Recursion To Loop :
// Time complexity and space : 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Tail Recursion:
int space(int a)
{
    if(a>0)
    {
      cout<<a<<endl;  
      return space(a-1);
    }
}

//changing it to loop:
int stars(int b)
{
   while(b>0)
   {
    cout<<b<<endl;
    b--;
   }    
}

int main(){

  space(5);
  cout<<endl;
  stars(5);

}
