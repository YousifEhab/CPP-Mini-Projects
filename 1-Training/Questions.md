## 1- Return Negative.

### Ask the user to enter a positive integer and the system prints the negative value of the same integer.

Input:
```
5
```
Output:
```
Negative value of 5 is -5
```
## 2- Shapes Area Calculator 
### Ask the user to choose between three different shapes (Rectangle - Circle - Triangle ) and based on his choice ask for the data needed to calculate the area of the shape he chooses.

## 3- average of 3 numbers
### ask the user to input 3 integers and calculate the average of the three numbers.

Input
```
2

4

6
```
Output
```
the average of the three numbers is equal to 4
```

## 4- triangles
### Write a program to check whether a triangle is Equilateral ( all sides are equal ) , isosceles ( only two sides are equal ) or scalene ( no sides are equal ).

Input
three sides of triangle: 
```
50

50

60
```
Output
```
This is an isosceles triangle.
```
 
## 5- Max and Min 
### Write a C++ program that requests four integer values from the user. It then prints the maximum and minimum values entered. 
### If the user enters the values 3, 2,5, and 0, the program would indicate that 5 is the maximum and 0 is the minimum.

# 6- Seconds to (hh:mm:ss)
### Write a C++ program that reads a large number of seconds, then convert this number into time format (hh:mm:ss).i.e., (hours:minutes:seconds).
# 7-
### Write a C++ program that requests an integer value from the user. If the value is between 1 and 100 inclusive, print "OK"; otherwise, print "Out of range".

# 8-
### Write a C++ program that requests from the user a value representing the month, which is a number between 1 and 12. Then, the program prints the corresponding name of the month. For example, if the user enters 2 the program displays "February". If the number is less than 1 or greater than 12 the program displays an error message. ( write two answers one with if statements only and the other with switch statements only )

# 9-
### Write a program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

# 10-
### Write a program to read any day number in integer and display the day name in word format.




# 11-
### Consider the following section of C++ code:

```

#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;
    if (input < 10)
    {
        if (input != 5)
            cout << "wow ";
        else
            input++;
    }
    else
    {
        if (input == 17)
            input += 10;
        else
            cout << "whoa ";
    }
    cout << input << endl;
    return 0;
}
```


### What will the program print if the user provides the following input?

- (a) 3
- (b) 21
- (c) 5
- (d) 17
- (e) -5

# 12-
### Why does the following section of code always print "ByeHi"?
```
int x;
cin >> x;
if (x < 0);
cout << "Bye";
cout << "Hi" << endl;
```

# 13- simple calculator
### Write and run a program that simulates a simple calculator. It reads two integers and a character. 
#### If the character is a +, the sum is printed; if it is a -, the difference is printed; if it is a *, the product is printed; if it is a /, the quotient is printed; and if it is a %, the remainder is printed. Use a switch Statement.


# 14- Rock Paper Scissors 
### Write and run a program that plays the game of “Rock, Paper, Scissors”. In this game, two players simultaneously say (or display a hand symbol representing) either “rock,” “paper,” or “scissors.” The winner is the one whose choice dominates the other. The rules are: paper dominates (wraps) rock, rock dominates (breaks) scissors, and scissors dominate (cut) paper. 

# 15-
### Write and run a program that reads a six-digit integer and prints the sum of its six digits. Use the quotient operator / and the remainder operator % to extract the digits from the integer. For example, if n is the integer 876,543, then n/1000%10 is its thousands digit 6.

# 16-
### Write a C++ program to find the roots of a quadratic equation using the if else statement. There are three cases based on the determinant (b^2 - 4ac).
![image](https://github.com/YousifEhab/CPP-Mini-Projects/assets/145108594/29bba875-df03-4167-a35a-f6285815b453)





# 17- 
### Using switch statement Write a C++ program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
### Calculate percentage and grade according to following:
- Percentage >= 90% : Grade A+
- Percentage >= 85% : Grade A
- Percentage >= 80% : Grade B+
- Percentage >= 75% : Grade B
- Percentage >= 70% : Grade C+
- Percentage >= 65% : Grade C
- Percentage >= 60% : Grade D
- Percentage < 60% : Grade F
# 18- Time Converter:
### Create a program that takes an input time in 24-hour format (hh:mm:ss) and converts it to 12-hour format (hh:mm:ss AM/PM).
##### tip: use 3 variable h,m,s to store hours,minutes,seconds respectively.
# 19- Alarm Clock:
### Create a program that takes the current time in 24-hour format (hh:mm:ss) as input and sets off an alarm after a specified number of hours and minutes.
### display the time when the alarm will ring.

# 20 - Distance Converter:
### Write a program that converts distances between different units (e.g., kilometers to miles, meters to feet) as following.
### Allow the user to choose the conversion they want to perform.
###### 1- Km to miles
###### 2- miles to Km
###### 3- ft to cm
###### 4- cm to ft

### table of conversions
##### 1 mile is 0.62 kilometer 
##### 1 foot is 30.48 centimeters

# 21 - Star box
### Write a C++ program that accepts a single integer value entered by the user. If the value entered is less than one, the program prints nothing. If the user enters a positive integer, n, the program prints an n * n box drawn with '*' character.

# 22 - Pi finder
### An approximate value of π can be calculated using the series given below:
##### π = 4 (1-1/3+1/5 - 1/7 + 1/9 + ... + (-1)^n/(2n+1)). 
### Write a program to calculate the approximate value of using this series. The program takes an input n that determines the number of terms in the approximation of the value of π and outputs the approximation. Include a loop that allows the user to repeat this calculation for new values n until the user says she or he wants to end the program.

# 23 - Summation
### Write a program that prints the summation of every number from 1 to num. if the number entered is less than 1 output "invalid input". 
```
2 -> 3 (1 + 2)
8 -> 36 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8)
```
# 24 - Count Odd Numbers below n
### Given a number n, print the number of positive odd numbers below n.
```
7  -> 3 (because odd numbers below 7 are [1, 3, 5])
15 -> 7 (because odd numbers below 15 are [1, 3, 5, 7, 9, 11, 13])
```
# 25 - Get Nth Even Number
### Return the Nth Even Number
```
1 --> 0 (the first even number is 0)
3 --> 4 (the 3rd even number is 4 (0, 2, 4))
100 --> 198
1298734 --> 2597466
```
# 26 - Factorial Calculation
### Write a program that calculates the factorial of a given positive integer using a loop (e.g., 5! = 5 * 4 * 3 * 2 * 1).
```
5
120
```
# 27 - Prime Number Checker
### Create a program that checks if a given number is prime using a loop. The user inputs the number, and the program verifies whether it is prime or not.
```
7
7 is a prime number
```

# 28 - Print Triangle of Stars
### Print Triangle of Stars: Design a program that prints a triangle of stars (e.g., for input 5, print the following pattern):
```
*
**
***
****
*****
```
# 29 - Table of Powers
### Create a program that generates a table of powers for a given base and No. of repetetions:
##### input
```
2
6
```
### output
```
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
```
# 30 - Collatz Conjecture
### Write a program that demonstrates the Collatz conjecture. Start with a positive integer, and repeatedly apply the following rules:
* If the number is even, divide it by 2.
* If the number is odd, multiply it by 3 and add 1. Continue until the number becomes 1.
##### input
```
5
```
##### output
```
5*3+1 = 16 
16/2 = 8 
8/2 = 4 
4/2 = 2 
2/2 = 1
```
