clear all;
close all;
n=2;
T=0.001;
R=1000;
C=0.000001;
y(1)=1;
%for n=2:1:100
p=y(n-1);
k=sin(2*pi*1000*T);
y(n)=((T./(R.*C)).*k) + (1-(T./(R.*C)).*p);
plot(y(n),'*');
hold on;
%end
