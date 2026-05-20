//student_info file with details of n students

#include<iostream>
#include<fstream>

using namespace std;

int main()

{
    char name[20], add[20];
    int roll;
    long int tel;
    ofstream out;
    out.open("student_info.txt",ios::out);
    cout<<"Enter number of records to be stored: ";
    int n;
    cin>>n;
    for (int i=1; i<=n ; i++)
    {
        cout<<"Enter name: ";cin>>name;
        cout<<"Enter roll: ";cin>>roll;
        cout<<"Enter address: ";cin>>add;
        cout<<"Enter telephone: ";cin>>tel;
        out<<name<<"\t"<<roll<<"\t"<<add<<"\t"<<tel<<endl;
    }
    cout<<"File written.";
    out.close();
    return 0;
}
