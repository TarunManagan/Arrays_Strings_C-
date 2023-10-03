/*PRN: 22070123118
Experiment-no: 8(c)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1,str2;
    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<"Enter second string: ";
    getline(cin,str2);
    
    cout<<"Concatenated string is: "<<str1 + str2;
    
return 0;
}
/*OUTPUT
Enter first string: Hello 
Enter second string: World!
Concatenated string is: Hello World!
*/
