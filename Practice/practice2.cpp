//Show some examples of data types that can be used in C++.
#include <iostream>
using namespace std;

int main(){

    cout << "C++ --C++ Data Types Examples--"<<endl<<endl;
    
    //Integer types (for whole numbers)

    cout << "Integers"<<endl<<endl;
    int age = 30;
    long int population = 429496;
    short int temperature = -56;
    unsigned int distance = 77;

    cout << age <<" "<< population << " " << temperature <<" "<< distance << endl;

    
    // Floating Point Types ( for decimal number )
    float price = 19.99f;
    double pi = 3.14159;
    cout << price << " "<< pi << endl;

    // Character types for a single character
    char grade = 'A';
    char initial= 'F';
    cout << grade << " "<< initial << endl;

    // Boolean types (for true/false values)
    bool isStudent= true ;
    bool raining_today= false;
    bool sunny_today= false;
    cout << boolalpha; // use this word to print "true " or "false" instead of 1 or 0!!
    cout << isStudent << " "<< raining_today << " "<< sunny_today<<endl;

    // String Types (for text)
    string name = "Fairuz";
    string month = "September";
    string game = "Mobile Legends Bang Bang";
    cout << name << " "<< month << " "<< game << endl;

    int z1, z2 , y=-5;
    z1 = 8 -3 + 9/2 + 2* -y;
    z2 = 8 - (3+9/2)+ 2 * -y ;

    cout << z1 << " "<< z2 << endl;










    return 0;












}