clear all;
close all;
n=0;
prob1=0;
prob2=0;
while(n<1000)
n++;
x=rand()*pi;
prob1=prob1+sin(x);

x1=rand()*2*pi;
if(x>pi/2)
x=pi-x;
end
if(x1>=(pi+x) && x1<=(2*pi-x))
prob2++;
end
end
prob1/1000
prob2/1000
