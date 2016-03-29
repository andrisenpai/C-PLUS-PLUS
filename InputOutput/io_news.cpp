#include <fstream>
#include <iostream>
using namespace std;
int main() {
char FirstName[30], LastName[30];
int Age; char FileName[20];
cout << "Enter First Name: "; cin >> FirstName;
cout << "Enter Last Name: "; cin >> LastName;
cout << "Enter Age: "; cin >> Age;
cout << "Enter the name of the file you want to create: ";
cin >> FileName;
ofstream Students(FileName, ios::out);
Students << FirstName << "\n" << LastName << "\n" <<
Age;
cout << "\n\n";
return 0;
}
