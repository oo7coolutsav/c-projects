#include<iostream>

using namespace std;

class Student{
    private:
        char name[50];
        int rollno;

    protected:
        void printStudentData(){
            cout<<"Name :"<<name<<"Roll Number: "<<rollno<<"\n";
        }

    public:
        void getStudentData(){
            cout<<"Enter Name: ";
            cin.getline(name,50);
            cout<<"Enter Roll No.: ";
            cin>>rollno;
        }
    
};

class Sports{
    private:
        char gameName[30];
        int positionAchieved;

    protected:
        void printSportsData(){
            cout<<"Game Name: "<<gameName<<"Position Achieved: "<<positionAchieved<<"\n";
        }

    public:
        void getSportsData(){
            cout<<"Enter Game Name: ";
            cin>>gameName;
            cout<<"Enter Position Achieved: ";
            cin>>positionAchieved;
        }

};

class Marks: public Sports, public Student{

    protected:
        int marksInSubject[6];
        void printSubjectData(){
            for (int i = 0; i < 6; i++)
            {
                cout<<"Marks in subject "<<i+1<<" :"<<marksInSubject[i]<<"\n";
            }
        }

    public:
        void getSubjectData(){
            cout<<"Marks obtaned in 6 subjects (out of 100)"<<"\n";
            for (int i = 0; i < 6; i++)
            {
                cout<<"Enter Marks of subject "<<i + 1<<" :";
                cin>>marksInSubject[i];
            }
        }
};

class Result : public Marks{

    public:

        void getAllData(){
            getStudentData();
            getSportsData();
            getSubjectData();
        }

        void printResult(){
            cout<<"**************************************"<<"\n";
            printStudentData();
            printSportsData();
            printSubjectData();
            for (int i = 0; i < 6; i++)
            {
                if(marksInSubject[i]>33){       
                        cout<<"Subject" << i <<" :" << "Pass"<<"\n";
                    }
                    else
                    {
                        cout<<"Subject" << i <<" :" << "Fail"<<"\n";
                    }
            }
        }      
};

int main(void){
    Result student1,student2;

    student1.getAllData();

    student1.printResult();

}