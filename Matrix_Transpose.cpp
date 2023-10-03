#include <iostream>
using namespace std;
int main(){
    int r,c,sum=0;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>r>>c;
    int A[r][c];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>A[i][j];
        }
    }
    cout<<"The original Matrix A is: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"The transpose of the Matrix A is: "<<endl;
    for(int i=0; i<c;i++){
        for(int j=0; j<r;j++){
            cout<<A[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
/*OUPUT
Enter the number of rows and columns of the matrix: 2 3
Enter the elements of Matrix A: 
1 2 3 4 5 6
The original Matrix A is: 
1	2	3	
4	5	6	
The transpose of the Matrix A is: 
1	4	
2	5	
3	6
*/
