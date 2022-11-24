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
    // YAML::Node config = YAML::LoadFile("Fruits.yaml");
    // std::cout << config;
    YAML::Node node;
    YAML::Node _baseNode = YAML::LoadFile("Fruits.yaml");
}

// int yaml_parser_initialize(yaml_parser_t *)
// void yaml_parser_delete(yaml_parser_t *)

// int main(void)
// {

//   FILE *fh = fopen("Fruits.yaml", "r");
//   yaml_parser_t parser;

//   /* Initialize parser */
//   if(!yaml_parser_initialize(&parser))
//     fputs("Failed to initialize parser!\n", stderr);
//   if(fh == NULL)
//     fputs("Failed to open file!\n", stderr);

//   /* Set input file */
//   yaml_parser_set_input_file(&parser, fh);

//   /* CODE HERE */

//   /* Cleanup */
//   yaml_parser_delete(&parser);
//   fclose(fh);
//   return 0;
// }