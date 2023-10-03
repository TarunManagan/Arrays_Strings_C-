#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1;
    cout<<"Enter a string: ";
    getline(cin,str1);
    cout<<"The original string is: "<<str1<<endl;
    cout<<"The new string is: ";
    for(int i=0; str1[i]!='\0'; i++){
        cout<<char(str1[i]-32);
    }
return 0;
}

/*OUTPUT
Enter a string: tarun
The original string is: tarun
The new string is: TARUN
*/
