#include <iostream>
#include <windows.h>
using namespace std;


string checkcase(char letter);

main(){
    char letter;
    cout << "Enter letter: ";
    cin >> letter;
    cout << "The letter entered is in "<< checkcase(letter);



}

string checkcase(char letter){
    if (letter == 'A'){
        return "Uppercase";
    }
    if (letter == 'a'){
        return "Lowercase";
    }


}