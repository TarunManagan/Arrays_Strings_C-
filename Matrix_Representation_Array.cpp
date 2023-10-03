#include <iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Matrix A is: "<<endl;
    for(int i=0; i<3;i++){ //Loop for rows of the matrix
        for(int j=0; j<3;j++){ // Loop for columns of the matrix
            cout<<a[i][j]<<" ";
        }
        cout<<endl; // Prints new line after each row
    }
    return 0;
}

/*OUPUT
Enter the elements of Matrix A: 
1 2 3 4 5 6 7 8 9
Matrix A is: 
1 2 3 
4 5 6 
7 8 9 
*/
