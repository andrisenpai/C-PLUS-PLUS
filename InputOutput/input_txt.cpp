#include<iostream>
#include<fstream>
using namespace std;
int main() {
ifstream input;
input.open("andri.txt");
if(!input) {
    cout << "file input" << endl;
    return 1;
}
char s[100];
input >> s; cout << s << endl;
input >> s; cout << s << endl;
input >> s; cout << s << endl;
input.close();
return 0;
}
