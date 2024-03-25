# Question one
## I. What is the output when the following code segment is executed?
### a)
```
int x=3,y=4, a, b;
a = ( x+1 > 5 ? 10 : 20 ); cout<<"a="<<a<<endl;
b = ( x+y > x*y/2 ? (y+3 > 5 ? 30:40 ) : 0 ); cout<<"b="<< b <<endl;
```

### b)
```
int sum =0;
for (int i=1; i < 9; i++){
if (i%2 == 0) sum+=i;
else if (i%5 == 0) break;
cout << "sum"<<sum;
}
```

### c)
```
int i=1, f=3, s=1;
switch(i%3){
case 1: f+=1; cout<<"f="<<f ;
case 2: f+=2; cout<<"f="<<f ; break;
default: f+=3; cout<<"f="<<f ;
}
```
### d)
```
int t=0;
for(int i=1;i<=2;i++)
for(int j=5;j<8;j+=2){
t+=i*j;
cout<<"i="<<i<<", j"<<j<<" ,t="<<t ;}
```

## II. rewrite the following code after correcting the C++ syntax errors:
### a)
```
FLOAT $x=1,0=sum;
While{$x not equal 0}( input x; sum+= $x*$x;)
```

### b)
```
double x=1 ,y =0;
do;[
y+= x % 3; x++;
]while{1/x > 0.01};
```
# Question Two
## Implement the following using C++ code:
### a)Write C++ for-loop to compute:
![image](https://github.com/YousifEhab/CPP-Mini-Projects/assets/145108594/2364a92d-7d28-4567-a024-64be0d36e03e)
### b)Write C++ switch-statement to compute (you can use if-statement in the body of switch-statement).
![image](https://github.com/YousifEhab/CPP-Mini-Projects/assets/145108594/18e96379-bf33-4c8d-a203-b7b6a1c7c54e)
### c)Use C++ nested loop to compute:
![image](https://github.com/YousifEhab/CPP-Mini-Projects/assets/145108594/ba30b624-d269-42a0-a972-d89a59c2a9d4)
### d) Out of Midterm scope
# Question Three
## I. Trace the following C++ code and conclude the output:
```
int i=1, f=5, s=2;
while( i <= 7){
if(i%2==0){
switch(i%3){
case 1: f+=i; break;
case 2: f+=4; break;
default: f+=2;
}
s*=f;
}
cout<<"i="<<i<<", f="<<f <<", s="<<s<<endl;
if(f > 12) break;
i++;}
```
## II.
### Write a C++ program to read two running times (as input) T1 = h1:m1:s1 and T2 = h2:m2:s2 (hours : minutes : seconds) and then finding the difference between them. For example, the difference of the two running times T1 = 90 : 1 : 6 and T2 = 92: 3 : 8 is 2 : 2 : 2 i.e., 2 hours : 2 minutes : 2 seconds. Your code must keep the run using Do-While-loop.

# Question Four
Out of Midterm scope 
