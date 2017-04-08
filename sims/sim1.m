clear all;
close all;
prob=0;
n=0;
while(n<1000)
n=n+1;
l=1;
p1=rand();
l1=l-p1;

p2=rand();
p2=p2*l1;

l2=l1-p2;

a=p1;
b=p2;
c=l2;

if(a>=b && a>=c && b+c>=a)
prob++;
end

if(b>=a && b>=c && a+c>=b)
prob++;
end

if(c>=a && c>=b && b+a>=c)
prob++;
end

end
sum1=1000
prob
