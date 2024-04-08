## Q1) Correct the errors in the following C++ codes:
1.
```
float A(10), B{10};
for(int i=0;i<=10;i++)
cin>>A(i)>>B(i);
```
2.
```
int B[3][]={3, 4,8, 6,
10};
float
K[4]={4,3,9,10,8};
double
B[2][2]={(2,3),(1,4)};
int n =10;
int S[n];
```
3.
```
float A()=[5, 6, 9, 4];
for(int i=0;i<4;i++)
cout<<A(i)*A(i)<<endl;
```
## Q2) Write a C++ program that reads an array of 10 integers. Then
1. Print out the sum of these integers and their average
2. Print out positions of integers that are divisible by 3
3. Compute the average of even numbers
4. Compute the product of odd numbers
5. Find out the maximum and minimum and the difference
between them.
## Q3) Write a C++ program that reads two arrays A and B of length n (given by a user). Then
1. Compute the difference C[i] = A[i]-B[i].
2. Compute D[i]= A[i]^2-B[i]^2
3. Compute E[i] = A[i]^2+B[i]^2-A[i]B[i].
## Q4) Write a C++ program that reads a two dimensional array M of size (3 × 3). Then
1. Compute the sum of all elements of M
2. Print out the sum of elements in every row.
3. The largest element located in the diagonal
4. Find out the transpose of M
## Q5) Make a program that reads a tow dimensional array M of size (10 × 10).
The program will fill each location in M by its index summation (M[i][j]= i+j). Then print the summation of the elements located at the circumference.
## Q6) Trace the following C++ code and conclude the output:
1.
```cpp
int A[]={20, 13, 5, 8 , 6, 7};
int sum=0;
for (int i=0;i<6;i++)
if(A[i]%5==0)sum+=A[i]*A[i]
else if(A[i]%3==0) sum+=A[i]/3;
else if(A[i]%2==0) sum-=A[i];

cout<<”sum=”<<sum<<endl;
```
2.
```cpp
int A[]={2, 1, 3, 0 , 5, 4};
int B[]={5,9, 10,15,20,9}
int sum=0;
for (int i=1;i<6;i++)
sum+= B[A[i]] - B[A[i-1]];
cout<<”sum=”<<sum<<endl;
```   
