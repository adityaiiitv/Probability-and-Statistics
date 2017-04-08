clear all;
close all;
x=0;
sum=0;
while(x<1)
x=x+0.001;
y=sqrt(1-x*x);
sum=sum+y;
end
sum/1000
