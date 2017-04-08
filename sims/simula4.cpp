#include<iostream>
#include<time.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int forest[22][52];
void show();
double number();
int main()
{
	 int m = 0;
	 int l = 0;
	 double avg[1000];
	 double total = 0;
	 for (int i=0;i<1000;i++)
	 avg[i] = 0;
	
	
	 //unsigned seed;
	 srand(time(0));
    for (int k=0 ; k<1000;k++)
    {
       //srand(seed);
       //seed++;
    
       double north=0,south=0,west=0,east=0;
       // Initial State 0 means unburnt for all the trees.
    
       for(int i=0;i<22;i++)
       {
          for(int j=0;j<52;j++)    
          forest[i][j]=0;
       }
    
       // First State top north-west corner starts to burn,means converts to 1
       forest[1][1]=1;
    
       // Next State :Propulsion of fire.Assuming that fire can catch in different directions simultaneously.
       for(int i=1;i<21;i++)
       {
          for(int j=1;j<51;j++)    
          {
              if(forest[i][j]==1)
              {
                  north=(double)(rand()%100)/100;
                  south=(double)(rand()%100)/100;
                  east=(double)(rand()%100)/100;
                  west=(double)(rand()%100)/100;
                  cout<<north<<"\n"<<east<<"\n"<<south<<"\n"<<west<<"\n";
                  if(east <= 0.8)
                  forest[i][j+1]=1;
                  if(west <= 0.3)
                  forest[i][j-1]=1;
                  if(north <= 0.3)
                  forest[i-1][j]=1;
                  if(south <= 0.3)
                  forest[i+1][j]=1;
                   
             }
          }
       }
    
       //cout<<"The Percentage of trees that caught fire is"<<percentage();            
       // Eventually the status of the forest is shown below.
   
       avg[k] = number();
       if(number() >= 300)
       l++;
	    if (forest[1][51] == 1)
	    m++;
	    //cout<<percentage()<<"\n";
       // cout<<avg[k]<<"\n";
       total = total+avg[k];
     }
	  cout<<"No. of trees burning on a whole :: \n"<<(double)total/1000<<"\n";
	  cout<<"Probability of 30% or more trees burning ::\n"<<(double)l/1000<<"\n";
     cout<<"Probability that the house will burn ::\n"<<(double)m/1000<<"\n";
 	  show();   
     return 0;
}

//To display the forest status
void show()
{
    cout<<"\n This is the current status of the forest \n";
    for(int i=1;i<21;i++)
    {
        for(int j=1;j<51;j++)    
        cout<<forest[i][j]<<" ";
        cout<<endl;
    }
}

//To find the percentage of the trees burnt eventually.
   
double number()
{
    int count=0;
    for(int i=1;i<21;i++)
    {
        for(int j=1;j<51;j++)    
        {
            if(forest[i][j]==1)
            count++;
        }
    }
    return (double)count;
} 
