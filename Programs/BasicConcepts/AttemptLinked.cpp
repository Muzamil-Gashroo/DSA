// ATTEMPT LINKEDLIST
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
   
   int value;
   int *link;

};

void NewNode(){

    struct node *linked;
    linked = (struct node *)malloc(sizeof(struct node));
    linked->value=10;
    linked->link=NULL;
    cout<<linked->value<<endl<<linked->link;

}

int main(){

    NewNode();
    
return 0;}