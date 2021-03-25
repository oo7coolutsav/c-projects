#include <iostream>
using std::cerr;
using std::endl;
#include <fstream>
using std::ofstream;
#include <cstdlib> 

using namespace std;
class StudentData
{
private:
    ofstream outdata;
    char name[50];
    int rollNo;
    char section[5];
    int standard;
    char contactNo[12];

public:
    StudentData(){
        
        outdata.open("data.txt",ios::app); 
        if( !outdata ) { 
            cerr << "Error: file could not be opened" << endl;
            exit(1);
        }
    }
    void getData(){
        cout<<"Enter the Name of student: ";
        cin.getline(name,50);
        cout<<"Enter Roll number of the studen: ";
        cin>>rollNo;
        cout<<"Enter the Section Ex-<CS31>: ";
        cin>>section;
        cout<<"Enter the Class Number Ex-<10>: ";
        cin>>standard;
        cout<<"Enter the contact number of the student: ";
        cin>>contactNo;
    }
    void writeData(){
        outdata<<name<<","<<rollNo<<","<<section<<","<<standard<<","<<contactNo<<"\n";
        outdata.close();
    }
};


int main(){
    StudentData student1;
    student1.getData();
    student1.writeData();
}