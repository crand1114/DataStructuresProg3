/*
		*	Author:	Charles Randall
		*	Date:	02/23/18
		*	Assignment:		Program	#3	- linked list
		*	File:	LinkedList.cpp
		*	Description: This file implements the methods from the LinkedList.h file
		*/

#include"LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() {                                  //creates an empty list with a pointer pointing to the first node
    first=new Node;
    first->data="NULL";
}
bool LinkedList::isEmpty() {                              //checks to see if the first node in the linked list is empty
    if(first->data=="NULL")
        return true ;                                    //method is used in the InsertAtEnd method
    else return false;
}
void LinkedList::InsertAtEnd(ElementType x) {                //user inputs a data value into the linked list
Node*newptr=new Node;
newptr->data=x;
    newptr->next=NULL;
    if(isEmpty()) {                                      //checks to see if the list is empty
        first=newptr;
    }else{
        Node*p=first;
        Node*q=NULL;
        while(p!=NULL&&p->data<x){
            q=p;
            p=p->next;
        }
        newptr->next=p;
       q->next=newptr;
    }
}

void LinkedList::ReverseDisplay() {                                  //displays the data values in the linked list in reverse order
    Node*nxtNode=first->next;
    Node*prev=NULL;
    Node*dummy=new Node;
    while(nxtNode->next!=NULL){                                     //goes to the last node in the linked list
        nxtNode=nxtNode->next;
    }
    while(nxtNode!=first){                                         //prints out the nodes going from the last to the node before the first node
        cout<<nxtNode->data<<endl;
        prev=first;
        while(prev->data==first->data||prev->data!=first->data){        //dummy node is used to change the value of the prev node at the end of the loop
            if(prev->data!=nxtNode->data){
                dummy=prev;
                prev=prev->next;
            }else{
                prev = dummy;
                nxtNode=prev;
                break;
            }
        }
    }
    if(first==nxtNode)                                     //prints the first node at the end after the loop
        cout<<nxtNode->data<<endl;
}
void LinkedList::GetValueAt(int n) {                         //user inputs the number node in which they want to display in the linked list
    Node*nxtNode=first;
    Node*prev=NULL;
    for(int i=0;i<=n;i++){                                  //using a for loop increments the number data values in the linked list
        prev=nxtNode;
        nxtNode=nxtNode->next;
        if(i==n)
            cout<<prev->data<<endl;
    }
}
void LinkedList::DeleteAll(ElementType x) {                    //deletes all instances of the data value that equals the user input
    Node*nxtNode=first;
    Node*dummy=NULL;
    while(nxtNode!=NULL){
        dummy=nxtNode;
        if(nxtNode->data==x){                                 //checks to see if data value equals the user input
            nxtNode=nxtNode->next;
            delete dummy;
        }
        nxtNode=nxtNode->next;
}
}
void LinkedList::Display(string type){                         //method displays the data values in the linked list depending on user input
Node*nxtNode=first;
Node*dummy=NULL;
string numChar;
    if(type=="odd"){                                         //goes through linked list to find even data values
        while(nxtNode!=NULL){                                 //if the length of the data value has a remainder of 1 then it is odd
            numChar+=nxtNode->data;
            if(numChar.length()%2==1&&numChar.length()%2!=0){
                cout<<numChar<<endl;
            }
            nxtNode=nxtNode->next;
            numChar="";
        }
    }
    if(type=="even"){
        while(nxtNode!=NULL){                                   //goes through linked list to find even data values
            numChar+=nxtNode->data;                             //if the length of the data value has a remainder of 0 then it is even
            if(numChar.length()%2==0&&numChar.length()%2!=1){
                cout<<numChar<<endl;
            }
            nxtNode=nxtNode->next;
            numChar="";
        }
    }
    if(type=="all") {                                            //prints out all data values
        while (nxtNode != NULL) {
            cout << nxtNode->data << endl;
            nxtNode = nxtNode->next;
        }
    }
}