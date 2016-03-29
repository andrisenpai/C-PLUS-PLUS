#include<iostream>
#include<fstream>
using namespace std;
int main() {
ofstream output;
output.open("andri.txt");
if(!output) {
    cout << "file Nothing . . ." << endl;
    return 1;
}
output << "selamat yah" << endl;
output << " Good Morning sir ! " << endl;
output.close();
return 0;
}
