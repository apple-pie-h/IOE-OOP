//details from a "student_info.txct"

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char line[100];
    char name[20],add[20];
    int roll;
    long int tel;
    ifstream in;
    in.open("student_info.txt",ios::in);
    in>>name>>roll>>add>>tel;
while(in)
{
    cout<<name<<'\t'<<roll<<'\t'<<add<<'\t'<<tel<<endl;
    in>>name>>roll>>add>>tel;
}
in.close();
return 0;
}
