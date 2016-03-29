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
char c;
while (input){
        input.get(c);
        if(input) {
                cout << c;
        }
}
input.close();
return 0;
}
