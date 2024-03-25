# 1. Write a C ++ condition to express the following:
- (a) y is odd but not 13
- (b) n is divisible by 7 or divisible by 5
# 2. Consider the following snippet of the code:
```
switch (x*3){
    case 9: cout <<” 9, ”;
    default : cout <<” default , ”;
    case 6: cout <<” 6, ” ; break;
    case 12: cout <<” 12, ”;
}
```
What is the output when:
(a) x = 6
⃝ ”no thing will be printed” ⃝ 9,default,6, ⃝ default, ⃝ 12, ⃝ default,6 ⃝ 12,default,
(b) x = 4
⃝ ”no thing will be printed” ⃝ 9,default,6, ⃝ default, ⃝ 12, ⃝ default,6 ⃝ 12,default,
# 3. Assuming int x = 5, what is the value of x after executing each of the following (each one should be run
individually)?
(a) x+ = 5+ −−x;
⃝ 12 ⃝ 14 ⃝ 13 ⃝ 11
(b) x = x ∗ 5%3;
⃝ 10 ⃝ 5 ⃝ 1
(c) x = 5/x && x − 10;
⃝ 1 ⃝ 0 ⃝ True ⃝ False
(d) x = x++ %5 ∥ x − 5;
⃝ 1 ⃝ 0 ⃝ True ⃝ False ⃝ 6
# 4. What is the output of the following:
```
int y = 10;
if ( y++ > 6)
    if ( y−− < 20)
        cout <<” This group\ t ” ;
        cout <<” Perfect. ” ;
```
# 5. Consider the following program:
```
int y ;
cin >> y ;
    if ( y < 15) {
        if ( y != 9)
            cout << ” cond1 ” ;
        else
            −−y ;
} else {
    if ( y == 21)
        y *= 2;
    else
        cout << ” cond2 ” ;
}
cout << y << endl ;
```
What will the program print if the user provides the following input?
(a) 21
(b) 9
(c) 32
