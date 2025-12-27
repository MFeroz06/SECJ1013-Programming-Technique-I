#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
 string name;
 int id;
 double fee;
 // TODO 1: Ask user to enter student name
 cout <<"Enter student name: ";
 // TODO 2: Read full name using getline
 getline(cin,name);
 // TODO 3: Ask user to enter student ID
 cout<<"Enter student ID: ";
 // TODO 4: Read student ID using cin
 cin >>id;
 // TODO 5: Ask user to enter total fee paid
 cout << "Enter total fee paid: ";
 // TODO 6: Read fee using cin
 cin >> fee;
 // TODO 7: Create an ofstream object named outFile
 ofstream outFile;
 // TODO 8: Open a file named "payment.txt"
 outFile.open("payment.txt");
 cout << "----------------------------------------" << endl;
 cout << "Student Payment Summary" << endl;
 cout << "----------------------------------------" << endl;
 // TODO 9: Display name on screen
 cout << "Name		: "<<name<<endl;
 // TODO 10: Display ID on screen
 cout << "ID		: "<<id<<endl;
 // TODO 11: Display fee using setw(), fixed, setprecision(2)
 cout<<"Total Fee 	: "<<setw(9)<<fixed<<setprecision(2)<<fee<<endl;
 cout << "----------------------------------------" << endl;
 
 
 // TODO 12: Write the SAME formatted output into the file
 if (outFile.is_open()){
 	outFile <<"Name		: "<<name<<endl;
 	outFile << "ID		: "<<id<<endl;
 	outFile <<"Total Fee 	: "<<setw(9)<<fixed<<setprecision(2)<<fee<<endl;
 }
 outFile.close();
 // TODO 13: Close the file
 return 0;
}
