/*
		*	Author:	Charles Randall
		*	Date:	02/23/18
		*	Assignment:		Program	#3	- linked list
		*	File:	Main.cpp
		*	Description: This file implements the methods from the LinkedList.cpp file and is for user input
		*/

#include <iostream>
#include "LinkedList.h"
using namespace std;
int main(){
    LinkedList list;
    int option=0;
    string input;
    int index;

    do{
        cout<<"Linked List Menu"<<endl;                        // the command prompt to inform user on what each number does and menu continues to run until user inputs 9
        cout<<"1. Insert value into list"<<endl;
        cout<<"2. Reverse Display"<<endl;
        cout<<"3. Select index or location in list"<<endl;
        cout<<"4. Delete value from list"<<endl;
        cout<<"5. Display odd, even, or all stings in list"<<endl;
        cout<<"6.Sort list based on the length of the data values"<<endl;
        cout<<"9. Exit Program"<<endl;
        cout<<"Enter option number:";
        cin>>option;
        switch (option){
            case 1:                                                                     //user input string and calls the InsertAtEnd method from LinkedList.cpp
                cout<<"Enter word, letter, symbol, or number to add to list"<<endl;
                cin>>input;
                list.InsertAtEnd(input);
                break;
            case 2:                                                                  //calls the ReverseDisplay method from LinkedList.cpp
                list.ReverseDisplay();
                break;
            case 3:                                                           // user input index and calls the GetValueAt method from LinkedList.cpp
                cout<<"Enter index of data value in list"<<endl;
                cin>>index;
                list.GetValueAt(index);
                break;
            case 4:                                                         //user input string to delete and calls the DeleteAll method from LinkedList.cpp
                cout<<"Enter data value for deletion"<<endl;
                cin>>input;
                list.DeleteAll(input);
                break;
            case 5:                                                      //user input to show all, even, or odd strings and calls Display method from LinkedList.cpp
                cout<<"Enter in all lowercase even, odd,or all"<<endl;
                cin>>input;
                list.Display(input);
                break;
            case 6:                                                      //user input to show all, even, or odd strings and calls Display method from LinkedList.cpp
                cout<<"Enter short or long to sort list by"<<endl;
                cin>>input;
                list.Display(input);
                break;


        }
    }while (option!=9);                                          //menu continues to run until user inputs 9 to exit the program
    return 0 ;


}
