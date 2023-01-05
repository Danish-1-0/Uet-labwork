#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void name(int x , int y);

main(){
system("cls");


int x =2;
int y =2;
  name(x,y);
  
  
  
  


}





void gotoxy(int x, int y){
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void name(int x, int y){
   
   gotoxy(x,y);
    cout<<"##            #       #          #     #       ######     #    #   "<<endl;
    cout<<"#   ##        #  #      # #        #     #      ##     ##   #    #"<<endl;
    cout<<"#     #     #     #     #   #      #     #         ##       #    #"<<endl;
    cout<<"#      #    #######     #     #    #     #           ##     ######"<<endl;
    cout<<"#      #    #     #     #      #   #     #            ##    #    #"<<endl;
    cout<<"#     #     #     #     #       #  #     #    ##      ##    #    #"<<endl;
    cout<<"#  #        #     #     #        # #     #      ## ##       #    #"<<endl;


    Sleep(250);


}