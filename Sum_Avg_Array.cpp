#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    float avg;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    for(int i=0; i<n; i++){
        sum=sum+a1[i]; // Sum of elements of the array
        avg=sum/n; // Average of elements of the array
    }
    cout<<"The sum of elements is: "<<sum<<endl;
    cout<<"The average of elements is: "<<avg;
return 0;
}
/*OUTPUT
Enter the size of array: 5
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
The sum of elements is: 15
The average of elements is: 3	
*/
