#include<iostream>
#include<fstream>
using namespace std;
int main() {
ofstream andri;
andri.open("put.txt");
if(!andri) {
    cout << "file tidak ada ..." << endl;
    return 1;
}
string a;
(while cin >> a;
cout << a << endl; {
andri.put(string(a));
}
andri.close();
return 0;
}
