#include <iostream>
#include <fstream>
#include <string>
#include <cstring>  
#include <sstream>
using namespace std;


void spliter(string s, char del)
{
    stringstream ss(s);
    string word;
    int i=0;
    while (!ss.eof()) {
        getline(ss, word, del);
        if (i%2==0){
            cout << word << endl;
        }
        i++;   
    }
}

void likeTxt(){
    string myText;
    ifstream MyReadFile("Fruits.yaml");
    while (getline (MyReadFile, myText)) {
        spliter(myText, '#');
        cout << endl;
        }
    MyReadFile.close();

}

void yamlReader(){

    

}



int main () {
    likeTxt();
    

}

