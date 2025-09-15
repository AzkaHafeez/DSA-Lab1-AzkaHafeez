#include <iostream>
#include<string>
using namespace std;

void searchpattern(string str){
    string pattern = "";
    size_t found = str.find(pattern);
    if (pattern.empty())
        cout << "Pattern is empty" << endl;
    else if (found != string::npos)
        cout << "Pattern found at index: " << found << endl;
    else
        cout << "-1" << endl;
}

int main (){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    searchpattern(str);

    return 0;
}