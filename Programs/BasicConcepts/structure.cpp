//pointer to structure 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
   int length, width;
};

int main(){
      
        struct node *p;
        
        p =(struct node *)malloc(sizeof(struct node));
        p->length=10;
        p->width=5;
      
       // testing 
      
       struct node hello;
       hello.length=100;
       hello.width=200;
 
       // lets see output 
       cout<<hello.length<<endl;
          cout<<hello.width<<endl;
             cout<<p->length<<endl;
                cout<<p->width<<endl;
                
                cout<<"-----------"<<endl;
                
       printf("%d\n",p->length);
        printf("%d\n",p->width);
         printf("%d\n",hello.length);
          printf("%d\n",hello.width);
          free(p);
    return 0;
}