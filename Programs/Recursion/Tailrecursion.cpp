// Recursion 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int numb=0;


// Static Variable Recursion;
int  recurStat(int n)
{
     numb++;
     if(n>0)
  {
     return recurStat(n-1)+numb;
  };
  return 0;
}


// General Recursion Time : 11:17 p.m
int tailRecur(int x){
     
     if(x>0)
  {
     return tailRecur(x-1)+x;
  };
  return 0;
}



int main()
{
    int a=5,b=5;
    cout<<recurStat(a)<<endl;
    cout<<tailRecur(b)<<endl;
    cout<<numb<<endl;
}