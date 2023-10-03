#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){ //Takes each character of the string one by one
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    for(int i=0; i<n; i++){
        cout<<a1[i]<<"\t"; //Print each character of the string one by one
    }
return 0;
}
/*OUTPUT
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
1	2	3	4	5	
*/
