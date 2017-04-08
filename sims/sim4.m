clear all;
close all;
f=zeros([22,52]);
f(2,2)=1;
i=2;
n=0;
n++;
sum=0;
while(i<=20)
j=2;
while(j<=50)
westwind=rand;
if(rand<=0.8)
f(i,j+1)=1;
sum=sum++;
end
restwind=rand;
if(rand<=0.3)
f(i+1,j)=f(i-1,j)=f(i,j-1)=1;
sum+3;
end
j++;
end
i++;
end
sum

for i=1:21
i
end
