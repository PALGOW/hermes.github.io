Variables
x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11
y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11
z;


binary variables
x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11
y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11;


Equations
amac
kisit1
kisit2
kisit3
kisit4
kisit5
kisit6
kisit7
kisit8
kisit9
kisit10
kisit11
kisit12;



amac.. z =e= 10*y1+50*y2+40*y3+60*y4+30*y5+40*y6+50*y7+20*y8+30*y9+20*y10+10*y11;
kisit1.. x1 =g= y1;
kisit2.. x2+x3+x4+x6+x7+x8+x9+x10+x11 =g= y2;
kisit3.. x2+x3+x4+x10 =g= y3;
kisit4.. x2+x3+x4+x5+x8 =g= y4;
kisit5.. x4+x5+x6+x7+x8+x9+x10+x11 =g= y5;
kisit6.. x2+x6+x7+x8+x9+x11 =g= y6;
kisit7.. x2+x5+x6+x7+x8+x9+x10+x11 =g= y7;
kisit8..  x2+x4+x5+x6+x7+x8+x9+x10+x11 =g= y8;
kisit9.. x2+x5+x6+x7+x8+x11 =g= y9;
kisit10.. x2+x3+x5+x7+x8+x9+x10+x11 =g= y10;
kisit11.. x2+x5+x6+x7+x8+x9+x10+x11 =g= y11;
kisit12.. x1+x2+x3+x4+x5+x6+x7+x8+x9+x10+x11 =e= 1;

model makp /all/;

solve makp using mip maximizing z;
