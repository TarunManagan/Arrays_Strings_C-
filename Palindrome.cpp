#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1,str2;
    int n,count=0;
    cout<<"Enter a string: ";
    getline(cin,str1);
    for(int i=0; str1[i]!='\0'; i++){
        n++;
    }
    cout<<"The original string is: "<<str1<<endl;
    cout<<"The reverse string is: ";
    for(int i=n; i>=0; i--){
        str2[n-i] = str1[i];
        cout<<str2[n-i];
    }
    for(int i=0; str1[i]!='\0' && str2[i]!='\0'; i++){ 
        if(str1[i]==str2[i]){
            count++; 
        }
    }
    if(count==n){
        cout<<endl<<"It is a Palindrome";
    }else{
        cout<<endl<<"It is not a Palindrome";
    }
    
return 0;
}

/*OUTPUT
Enter a string: malayalam
The original string is: malayalam
The reverse string is: malayalam
It is a Palindrome

Enter a string: tarun
The original string is: tarun
The reverse string is: nurat
It is not a Palindrome
*/
