clear all;
close all;

prob=0;
n=0;
while(n<10000)
n=n+1;
x=rand;
y=rand;
if(y>x)
a=x;
b=y-x;
c=1-y;
end

if(x>y)
a=y;
b=x-y;
c=1-x;
end

if(a+b>=c && b+c>=a && a+c>=b)
prob=prob+1;
end

end
a
b
c
prob=prob/10000
