#include <iostream>
using namespace std;
int main(){
    int r,c,sum=0,count=0;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>r>>c;
    int A[r][c];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            if(i==j){ // LEFT --> RIGHT //Diagonal elements are present at i=j index
                sum = sum+A[i][j];
            }else if(i+j==r-1){ //RIGHT --> LEFT // Diagonal elements are present at i+j==r-1 index
                count= count+A[i][j];
            }
            
        }
    }
    cout<<"The sum of diagonal elements (from left to right) of Matrix A is: "<<sum<<endl;
    cout<<"The sum of diagonal elements (from right to left) of Matrix A is: "<<count;
    return 0;
}
/*OUPUT
Enter the number of rows and columns of the matrix: 3 3
Enter the elements of Matrix A: 
1 2 3 4 5 6 7 8 9
The sum of diagonal elements (from left to right) of Matrix A is: 15
The sum of diagonal elements (from right to left) of Matrix A is: 10
*/
