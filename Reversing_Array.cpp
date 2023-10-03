#include <iostream>
using namespace std;

int main() {
    int n,temp=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    cout<<"The elements of the array before swaping: ";
    for(int i=0; i<n; i++){
        cout<<a1[i]<<"\t";
    }
    
    for(int i=0; i<n;i++){
        for(int j=0; j<i;j++){
            //Swapping of elements of the array
            temp=a1[i];
            a1[i]=a1[j];
            a1[j]=temp;
        }
    }
    cout<<endl<<"The elements of the array after swaping: ";
    for(int i=0; i<n; i++){
        cout<<a1[i]<<"\t";
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
The elements of the array before swaping: 1	2	3	4	5	
The elements of the array after swaping: 5	4	3	2	1		
*/
