#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1;
    int count =0;
    cout<<"Enter a string: ";
    getline(cin,str1);
    for(int i=0; str1[i]!='\0';i++){ //String terminates at '\0'
        count++; //Counts the total numbers of characters present in the string
    }
    cout<<"The lenght of the string is: "<<count;
    
return 0;
}

/*OUTPUT
Enter a string: Hi My Name is Tarun
The lenght of the string is: 19
*/
