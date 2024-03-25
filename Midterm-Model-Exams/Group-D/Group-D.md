# 1. Consider the following program:
```
int y ;
cin >> y ;
if ( y < 20) {
    if ( y != 21)
        cout << ” cond1 ” ;
    else
        −−y ;
} else {
    if ( y == 12)
        y *= 2;
    else
        cout << ” cond2 ” ;
}
cout << y << endl ;
```
## What will the program print if the user provides the following input?
### (a) 21 
### (b) 18 
### (c) 12
# 2. Consider the following snippet of the code.
```
switch (x*3){
case 9: cout <<” 9, ” ;
default : cout <<” default , ” ;
case 6: cout <<” 6, ” ; break ;
case 12: cout <<” 12, ” ;
}
```
## What is the output when
### (a) x = 3
- ”no thing will be printed” 
- 9,default,6, 
- default, 
- 12, 
- default,6 
- 12,default,
### (b) x = 1
- ”no thing will be printed” 
- 9,default,6, 
- default, 
- 12, 
- default,6 
- 12,default,
# 3. Assuming int x = 4, what is the value of x after executing each of the following (each one should be runindividually)?
### (a) x+ = 5+ −− x;
- 12 
- 14 
- 13 
- 11
### (b) x = x ∗ 3%7;
- 10 
- 5 
- 1
### (c) x = 5/x && x − 4;
- 1 
- 0 
- True 
- False
### (d) x = x ++ %5 ∥ x − 3;
- 1 
- 0 
- True 
- False
# 4. Write a C ++ condition to express the following
### (a) z is a positive even number 
### (b) z could be 5 or more but not odd
# 5. What is the output of the following
```
int y = 12;
if (1 < ++y )
    if ( 36 > y++)
        cout <<” This group \t ” ;
        cout <<” Perfect. ” ;
```
