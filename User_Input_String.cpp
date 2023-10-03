#include <iostream>
#include<string.h> // Necessary to use getline function
using namespace std;

int main() {
    string name;
    cout<<"Enter your name: ";
    getline(cin,name); //getline is used to take input from the user // It even includes any " " in any string
    cout<<"My name is: "<<name;
    
return 0;
}
/*OUTPUT
Enter your name: Tarun
My name is: Tarun
*/
