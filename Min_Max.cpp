#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    for(int i=0; i<n;i++){
        int Max=0,Min=0;
        for(int j=0;j<n;j++){
            if(a1[i]>=a1[j]){
                Max++;
            }
            if(a1[i]<=a1[j]){
                Min++;
            }
        }
        if(Max==n){
            cout<<"The Max value is: "<<a1[i]<<endl;
        }
        if(Min==n){
            cout<<"The Min value is: "<<a1[i]<<endl;
        }
    }
return 0;
}
/*OUTPUT
Enter the size of array: 5
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
The Min value is: 1
The Max value is: 5	
*/
