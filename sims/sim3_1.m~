clear all;
close all;
u=rand(1000);
for i=1:10000
if(u(i)<0.5)
X(i)=sqrt(2*u(i));
end
if(u(i)>0.5)
X(i)=2-sqrt(2-2*u(i));
end
end
mean(X)
var(X)
hist(X)
