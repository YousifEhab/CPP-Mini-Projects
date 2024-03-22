# Q1 
what is the output of the following program. Explain your answer. 
```
int main() {
int x = 10;
for ( int i = 3; i > 1; --i)
x += x--;
cout << x;
return 0;
}
```
# Q2 
What is the output of the following program. run the program twice, one with x = 11 and one with x = 20. Explain your answer.
```
int main () {
  int x ;
  cin >> x ;
  int a=4 , b=2;
  int d = 0;
  switch(--x){
    case 10:
      d+= (++a > b || a++ != a*b ) * a;
    case 7:
      d+= (a*a < b && ++a > b) -2 * a;
      break;
    default:
      d+= 3*b;
  }
  cout << "x=" << x << endl << "a=" << a << endl << "b=" << b << endl << "d=" << d;
  return 0;
}
```
# Q3 
Write a program to check whether a triangle is Equilateral ( all sides are equal ) , isosceles ( only two sides are equal ) or scalene ( no sides are equal ). 
Sample Output:
```
input three sides of triangle:
50
50
60
This is an isoceles triangle.
```
# Q4 
Write a program to read from the user two numbers and computes their Highest Common Factor (HCF). 
HCF of two integers is the largest positive integer that divides each of the integers. For example, HCF of 32 and 12 is 4.
Sample Output:
```
input two numbers:
32
12
The highest common Factor is: 4
```
# Good luck :)
