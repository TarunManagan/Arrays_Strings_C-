# Name: S.Tarun Managan
# PRN: 22070123118

# Arrays_Strings_C++
In C++, an array is a data structure that is used to store multiple values of similar data types in a contiguous memory location.
For example, if we have to store the marks of 4 or 5 students then we can easily store them by creating 5 different variables but what 
if we want to store marks of 100 students or say 500 students then it becomes very challenging to create those numbers of variables and manage them. 
Now, arrays come into the picture that can do it easily by just creating an array of the required size.

# Properties of Arrays in C++:
* An Array is a collection of data of the same data type, stored at a contiguous memory location.
* Indexing of an array starts from 0. It means the first element is stored at the 0th index, the second at 1st, and so on.
* Elements of an array can be accessed using their indices.
* Once an array is declared its size remains constant throughout the program.
* An array can have multiple dimensions.
* The number of elements in an array can be determined using the sizeof operator.
* We can find the size of the type of elements stored in an array by subtracting adjacent addresses.

# Array Declaration in C++:
In C++, we can declare an array by simply specifying the data type first and then the name of an array with its size.
      
      data_type array_name[Size_of_array];
      
# Initialization of Array in C++:

1. Initialize Array with Values in C++:
   int arr[5] = {1, 2, 3, 4, 5};
2. Initialize Array after Declaration (Using Loops)
   for (int i = 0; i < N; i++) {
    arr[i] = value;
}

# EXPERIMENT NO: 1

AIM: Print something using arrays
ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare and Initializie an array with its size
--> STEP 3: Using FOR loop print the elements
    for(int i=0; i<5; i++){ 
        cout<<a1[i]<<endl;
    }
--> STEP 4: Print the output
--> STEP 5: STOP

OUTPUT
19	10	8	45	32

# EXPERIMENT NO: 2

AIM: Binary search using arrays
ALGORITHM: 

--> STEP 1: START
--> STEP 2: Declare and Initializie an array with its size and take a number as an input from the user
--> STEP 3: Using FOR loop and if-else statement we can check whether the number is present or not
   for(int i=0; i<10; i++){
        if(a==a1[i]){ //Compares whether the given number is present in the array
            // If present then it prints its position and as the indexing starts from 0 we do 'i+1'
            cout<<a<<" is present in the array at position "<<i+1<<endl; 
        }else{
            count++;
        }
    }
    if(count==10){ //If the number is not present, then the count will be equal to the total number of elements in the array
        cout<<"The number is not present in the array";
    }
--> STEP 4: Print the output
--> STEP 5: STOP

OUTPUT
Enter the value to find in the array: 45
45 is present in the array at position 5
45 is present in the array at position 10

Enter the value to find in the array: 67
The number is not present in the array

# EXPERIMENT NO: 3

AIM: Find Maximum and Minimum element of the array
ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare and Initializie an array with its size and take its elements as input from the user 
--> STEP 3: Using FOR loop and if-else statement we can find the min and max values
   for(int i=0; i<n;i++){
        int Max=0,Min=0;
        for(int j=0;j<n;j++){
            if(a1[i]>=a1[j]){ //Keeps on checking whether a number is greater than the rest
                Max++; //If a number is greater than the rest, then MAX will be equal to the total number of elements of the array
            }
            if(a1[i]<=a1[j]){
                Min++; //If a number is smaller than the rest, then MIN will be equal to the total number of elements of the array
            }
        }
        if(Max==n){
            cout<<"The Max value is: "<<a1[i]<<endl;
        }
        if(Min==n){
            cout<<"The Min value is: "<<a1[i]<<endl;
        }
    }
--> STEP 4: Print the Min and Max values
--> STEP 5: STOP

OUTPUT
Enter the size of array: 5
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
The Min value is: 1
The Max value is: 5

# EXPERIMENT NO: 4

AIM: Reverse an array
ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare and Initializie an array with its size and take its elements as input from the user 
--> STEP 3: Using FOR loop and the logic for swapping, we can reverse the array
    for(int i=0; i<n;i++){
        for(int j=0; j<i;j++){
            //Swapping of elements of the array
            temp=a1[i];
            a1[i]=a1[j];
            a1[j]=temp;
        }
    }
   
--> STEP 4: Print the original and reversed array
--> STEP 5: STOP

OUTPUT
Enter the size of array: 5
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
The elements of the array before swaping: 1	2	3	4	5	
The elements of the array after swaping: 5	4	3	2	1

# EXPERIMENT NO: 5

AIM: Find whether the string is a palindrome or not
ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare and Initializie an array with its size and take its elements as input from the user 
--> STEP 3: First we can reverse the original string
     for(int i=n; i>=0; i--){
        str2[n-i] = str1[i]; //Reverse string
        cout<<str2[n-i];//Reverse string
    }
--> STEP 4: Compare the original string and reversed string. If both are same than it is a palindrome otherwise it is not a palindrome.
   for(int i=0; str1[i]!='\0' && str2[i]!='\0'; i++){ 
        if(str1[i]==str2[i]){ //Compares both strings
            count++; 
        }
    }
    if(count==n){
        cout<<endl<<"It is a Palindrome";
    }else{
        cout<<endl<<"It is not a Palindrome";
    }
   
--> STEP 5: Print the original and reversed array
--> STEP 6: STOP

OUTPUT
Enter a string: malayalam
The original string is: malayalam
The reverse string is: malayalam
It is a Palindrome

Enter a string: tarun
The original string is: tarun
The reverse string is: nurat
It is not a Palindrome

# EXPERIMENT NO: 6

AIM: Matrix Addition using 2-D array
ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare and Initializie an array with its size and take its elements as input from the user 
--> STEP 3: Create 2 matrix using FOR loop: Outer loop for ROWS and Inner loop for COLUMNS
     for(int i=0; i<r;i++){ //Loop for ROWS of the matrix
        for(int j=0; j<c;j++){// Loop for COLUMNS of the matrix
            cin>>A[i][j];
        }
    }
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>B[i][j];
        }
    }
--> STEP 4: Create third matrix such that its elements will be the sum of corresponding elements of other two matrix
   for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            X[i][j]=A[i][j] + B[i][j]; //It adds each element present at corressponding index
            cout<<X[i][j]<<" ";
        }
        cout<<endl;
    }
   
--> STEP 5: Print the resultant matrix
--> STEP 6: STOP

OUTPUT
Enter the number of rows and column of the matrix: 3 3 
Enter the elements of Matrix A: 
1 2 3 4 5 6 7 8 9
Enter the elements of Matrix B: 
9 8 7 6 5 4 3 2 1
The resultant Matric X is: 
10 10 10 
10 10 10 
10 10 10 

# EXPERIMENT NO: 7

AIM: Matrix Multiplication using 2-D array
ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare and Initializie an array with its size and take its elements as input from the user 
--> STEP 3: Create 2 matrix using FOR loop: Outer loop for ROWS and Inner loop for COLUMNS: NOTE: Remember the multiplication condition
     for(int i=0; i<r;i++){ //Loop for ROWS of the matrix
        for(int j=0; j<c;j++){// Loop for COLUMNS of the matrix
            cin>>A[i][j];
        }
    }
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>B[i][j];
        }
    }
--> STEP 4: Create third matrix such that its elements will be the product of elements of other two matrix
   for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
   
--> STEP 5: Print the resultant matrix
--> STEP 6: STOP


OUTPUT
Enter rows and column for first matrix: 3
2
Enter rows and column for second matrix: 3
2
Error! column of first matrix not equal to row of second.

Enter rows and column for first matrix: 2
3
Enter rows and column for second matrix: 3
2

Enter elements of matrix 1:
Enter elements a11: 3
Enter elements a12: -2
Enter elements a13: 5
Enter elements a21: 3
Enter elements a22: 0
Enter elements a23: 4

Enter elements of matrix 2:
Enter elements b11: 2
Enter elements b12: 3
Enter elements b21: -9
Enter elements b22: 0
Enter elements b31: 0
Enter elements b32: 4

Output Matrix:
24 29
6  25

# EXPERIMENT NO: 8

AIM: Transpose of a matrix
ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare and Initializie an array with its size and take its elements as input from the user 
--> STEP 3: Create a matrix using FOR loop: Outer loop for ROWS and Inner loop for COLUMNS
     for(int i=0; i<r;i++){ //Loop for ROWS of the matrix
        for(int j=0; j<c;j++){// Loop for COLUMNS of the matrix
            cin>>A[i][j];
        }
    }
    
--> STEP 4: Create another matrix such that b[i][j] = a[j][i]
    for(int i=0; i<c;i++){
        for(int j=0; j<r;j++){
            cout<<A[j][i]<<"\t"; // In this the rows becomes columns and columns become rows.
        }
        cout<<endl;
    }
   
--> STEP 5: Print the resultant matrix
--> STEP 6: STOP


OUTPUT
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

# EXPERIMENT NO: 9

AIM: To find the length of the string
Theory: a sequence of characters as an object of the class. This class is called string. 
The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character.

ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare a variable of string data type and another variable of type int count=0
--> STEP 3: Take its value from the user using getline() function
--> STEP 4: Using FOR loop we can find the length of the string
   for(int i=0; str1[i]!='\0';i++){ //String terminates at '\0'
        count++; //Counts the total numbers of characters present in the string
    }
--> STEP 5: Print the length of the string which is equal to count
--> STEP 6: STOP

OUTPUT
Enter a string: Hi My Name is Tarun
The lenght of the string is: 19

# EXPERIMENT NO: 10

AIM: String Conatenation
Theory: a sequence of characters as an object of the class. This class is called string. 
The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character.

ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare 2 variable of string data type 
--> STEP 3: Take their values from the user using getline() function
--> STEP 4: Using '+' operator we can concatenate these strings
   cout<<"Concatenated string is: "<<str1 + str2; 
--> STEP 5: Print the conactenated string
--> STEP 6: STOP

OUTPUT
Enter first string: Hello 
Enter second string: World!
Concatenated string is: Hello World!

# EXPERIMENT NO: 11

AIM: Convert all lowercase characters to uppercase
Theory: a sequence of characters as an object of the class. This class is called string. 
The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character.

ALGORITHM:

--> STEP 1: START
--> STEP 2: Declare a variable of string data type 
--> STEP 3: Take its value from the user using getline() function
--> STEP 4: Using FOR loop we can do it
    for(int i=0; str1[i]!='\0'; i++){
        cout<<char(str1[i]-32); //Converts all the lowercase to uppercase 
    }
--> STEP 5: Print the new string
--> STEP 6: STOP

OUTPUT
Enter a string: tarun
The original string is: tarun
The new string is: TARUN



