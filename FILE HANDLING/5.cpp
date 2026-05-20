//read number of words and lines in "character.txt"

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    ifstream in;
    in.open("character.txt",ios::in);
    string line;
    int linecount=0; 
    int wordcount=0;
    while (getline(in,line)){
        linecount++;
    stringstream ss(line);
    string word;
    while (ss>>word){
        wordcount++;
    }
    }
    in.close();
    cout<<"number of words: "<<wordcount<<endl;
    cout<<"number of lines: "<<linecount<<endl;
    return 0;
}
