clear all;
close all;

prob_house=0;prob_30=0;total=0;

for k=1:1000
forest=zeros([23,53]);
forest(2,2)=1;
for i=2:22
for j=2:52
if(forest(i,j)==1)
north=rand;
south=rand;
east=rand;
west=rand;

if(east<=0.8)
forest(i,j+1)=1;
endif
if(west<=0.3)
forest(i,j-1)=1;
endif
if(north<=0.3)
forest(i-1,j)=1;
endif
if(south<=0.3)
forest(i+1,j)=1;
endif

endif
endfor
endfor

count=0;
for i=2:22
for j=2:52
if(forest(i,j)==1)
count++;
endif
endfor
endfor
if(count>=300)
prob_30++;
endif
if(forest(2,52)==1)
prob_house++;
endif
tot(i)=count;
endfor
count
prob_30=prob_30/1000;
prob_30
prob_house=prob_house/1000;
prob_house
X=std(tot);
X
