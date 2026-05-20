//write characters entered by the user until the user presses enter key

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    ofstream out;
    out.open("character.txt",ios::out);
    cout<<"Start writing the characters..."<<endl;
    while ((ch=cin.get())!='\n')
    {
        out.put(ch);
    }
    out.close();
    cout<<"File written!"<<endl;
    return 0;
}
