## 1- Consider the following snippet of the code.
```
switch ( x*2){
default : cout <<” d efault , ” ;
case 4: cout <<” 4 , ” ;
case 2: cout <<” 2 , ” ; break ;
case 10: cout <<” 10 , ” ;
}
```
## What is the output when:
#### (a) x = 0
- ”no thing will be printed”
- default,4,2,
- default,4,2,10,
- 4,2,
- 10,
- 10,default,
#### (b) x = 2
- ”no thing will be printed”
-  default,4,2,
-   default,4,2,10,
-   4,2,
-   10,
-   10,default,
# 2- Write a C ++ condition to express the following:
## (a) n is between 0 and 20 but not odd 
## (b) n is divisible by 7 or divisible by 3
# 3- Assuming int x = 4, what is the value of x after executing each of the following (each one should be run individually)?
#### (a) x+ = 2+ ++ x;
- 12
- 14
- 13
- 11
#### (b) x = x%3 ∗ 5;
- 10
- 5
- 0
(c) x = 10/x && x − 7;
- 1
- 0
- True
- False
(d) x = x%5 ∥ x ++ −5;
- 1
- 0 
- True 
- False 
- 6
# 4-  Consider the following program:
```
int input;
cin >> input;
if (input<10) {
    if (input!=8)
        cout << ”wow ”;
    else
        input++;
} else {
    if (input==12)
        input+=10;
    else
        cout << ”whoa ”;
}
cout << input << endl;
```
## What will the program print if the user provides the following input?
(a) 8
(b) 12
(c) 11
# 5- What is the output of the following
```
int x = 10;
if ( x > 0)
    if ( x < 8)
        cout << ”Here you go \t”;
        cout<<”WOW.”;
```
