//read file using the concept of character input from file 


#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
    char ch;
    ifstream in;
    in.open("character.txt",ios::in);
    if (in.fail())
    {
        cout<<"Error opening file, exiting..."<<endl;
        exit(1);
    }
    cout<<"Contents of the file: "<<endl;
    while (in.get(ch))
    {
        cout<<ch<<endl;
    }
    in.close();
    return 0;
}
