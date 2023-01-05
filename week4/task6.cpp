#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void letterA(int x, int y);
void letterW(int x, int y);
void letterI(int x, int y);
void letterS(int x, int y);


main(){
system("cls");
int x = 50;
int y = 25;
letterA(x,y);
letterW(x,y+1);
letterA(x,y+2);
letterI(x,y+3);
letterS(x,y+4);






  
  
  


}


void letterA(int x,int y)
  {
	gotoxy(x,y);
	Sleep(300);
	cout<<"A";
   }
void letterW(int x,int y)
  {
	gotoxy(x,y);
	Sleep(300);
	cout<<"W";
   }

void letterI(int x,int y)
  {
	gotoxy(x,y);
	Sleep(300);
	cout<<"I";
   }
void letterS(int x,int y)
  {
	gotoxy(x,y);
	Sleep(300);
	cout<<"S";
   }



/*void letterA(){
cout << "       #" <<;
cout << "    #    #" <<;
cout << "  #        #" <<;
cout << " #          #" <<;
cout << " #######" <<;
cout << " #           #" <<;
cout << " #           #" <<;
cout << " #           #" <<;

}*/











void gotoxy(int x, int y){
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}





