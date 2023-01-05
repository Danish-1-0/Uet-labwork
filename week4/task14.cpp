#include <iostream>
#include <windows.h>
using namespace std;

void menu();
void studentdetails(string name, int matricMarks, int interMarks, int ecatMarks);
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, int ecatMarks, string nameStd2, int ecatMarks2);

main(){
    string student1, student2;
    float matricMarks, interMarks, ecatMarks;
    float matricMarks2, interMarks2, ecatMarks2;
    int choice;
while (true){
    system("cls"); 
    menu();

    cin>>choice;
    if (choice == 1){
        system("cls");
        cout << "You chose option 1"<<endl;
        cout<<"Enter student name: ";
    cin >> student1;
    cout<<"Enter student's matric marks: ";
    cin >> matricMarks;
    cout<<"Enter student's inter marks: ";
    cin>>interMarks;
    cout<<"Enter student's ecat marks: ";
    cin>>ecatMarks;
    }
    if (choice == 2){
        system("cls");
      cout << "You chose option 2"<<endl;
    cout<<"Enter student name: ";
    cin >> student2;
    cout<<"Enter student's matric marks: ";
    cin >> matricMarks2;
    cout<<"Enter student's inter marks: ";
    cin>>interMarks2;
    cout<<"Enter student's ecat marks: ";
    cin>>ecatMarks2;
    }
    if (choice == 3){
        system("cls");
        cout << "You chose option 3"<<endl;
        calculateAggregate(student1,matricMarks,interMarks,ecatMarks);
    }
    if (choice == 4 ){
        system("cls");
        cout << "You chose option 4"<<endl;
        calculateAggregate(student2,matricMarks2,interMarks2,ecatMarks2);
        
    }
    if (choice == 5){
        system("cls");
        cout << "You chose option 5"<<endl;
        compareMarks(student1,ecatMarks,student2,ecatMarks2);
    } 




}


}

void menu(){

   
    cout<<"---------------------------------------------------------------------------------"<<endl;
    cout<<"-                                                                               -"<<endl;
    cout<<"-                                                                               -"<<endl;
    cout<<"-                                                                               -"<<endl;
    cout<<"-                                                                               -"<<endl;
    cout<<"-                     University admission system                               -"<<endl;
    cout<<"-                                                                               -"<<endl;
    cout<<"-                                                                               -"<<endl;
    cout<<"-                                                                               -"<<endl;
    cout<<"-                                                                               -"<<endl;
    cout<<"---------------------------------------------------------------------------------" <<endl;

    cout<< "Choose an option"<<endl;
    cout<<"Enter 1 to provide details of student 1 "<<endl;
    cout<<"Enter 2 to provide details of student 2 "<<endl;
    cout<<"Enter 3 to calculate the aggregate of student 1  "<<endl;
    cout<<"Enter 4 to calculate the aggregate of student 2  "<<endl;
    cout<<"Enter 5 to display the student with roll number 01 "<<endl;
    


}



void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks){
    float aggregatestd;
    aggregatestd = ((matricMarks/1100)*0.3) +  ((interMarks/550)*0.3) + ((ecatMarks/400)*0.4);
     cout <<"Your aggregate is: "<<aggregatestd * 100;
     Sleep(2000);

}


void compareMarks(string student1, int ecatMarks, string student2, int ecatMarks2){
    if (ecatMarks > ecatMarks2){
        cout << "The student with roll no 01 is : " << student1; 
       Sleep(2000);

    }
    if (ecatMarks < ecatMarks2){
        cout << "The student with roll no 01 is : " << student2; 
        Sleep(2000);

    }
     
}


