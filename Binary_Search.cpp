#include <iostream>
using namespace std;

int main() {
    int a1[10]={1,100,73,26,45,92,34,12,1,45},a,count=0;
    cout<<"Enter the value to find in the array: ";
    cin>>a;
    for(int i=0; i<10; i++){
        if(a==a1[i]){
            cout<<a<<" is present in the array at position "<<i+1<<endl;
        }else{
            count++;
        }
    }
    if(count==10){
        cout<<"The number is not present in the array";
    }
return 0;
}

/*OUTPUT
Enter the value to find in the array: 45
45 is present in the array at position 5
45 is present in the array at position 10

Enter the value to find in the array: 67
The number is not present in the array
*/
