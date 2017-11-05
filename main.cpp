#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void setInput(string inputFileName);
void farmBuilder(int floors);

int main()
{
    setInput("in.txt");
    return 0;
}

void setInput(string inputFileName) {
    freopen(inputFileName.c_str(), "r", stdin);
    string outputFileName;
    cin>>outputFileName;
    int len = outputFileName.length();
    outputFileName += ".mcfunction";
    freopen(outputFileName.c_str(), "w", stdout);
}
void farmBuilder(int floors){

}
