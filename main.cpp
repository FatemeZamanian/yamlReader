#include <iostream>
#include <fstream>
#include <string>
#include <cstring>  
#include <sstream>
#include <yaml-cpp/yaml.h>
#include <yaml.h>
#include <stdio.h>
#include <glib.h>

#include "yaml-cpp/yaml.h"
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
int main() {
    string file;
    cout<<"Give me path and name of your Yaml file ";
    cin>>file;
    YAML::Node node;
    YAML::Node _baseNode = YAML::LoadFile(file);
    std::cout << _baseNode;
}

