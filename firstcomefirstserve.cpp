#include<iostream>
#define max 10

using namespace std;
int n, at[max],ct[max],tat[max],wt[max],et[max], total_wt, total_tat;
string process[max];
float awt;

int main()

{

cout<<"enter no. of process :\t";
cin>>n;
cout<<"enter process";
for(int i=0;i<n;i++)
{
cin>>process[i];
}
cout<<"enter arrival time ";
for(int i=0;i<n;i++)
{
cin>>at[i];		
}
cout<<"enter execution time ";	
for(int i=0;i<n;i++)
{
	cin>>et[i];
}
for(int i=0;i<n;i++)
{
	ct[0]=et[0];
	ct[i+1]= et[i+1]+ct[i];
	tat[i] = ct[i]-at[i];
}
for(int i=0;i<n;i++)
{
	tat[i] = ct[i]-at[i];
}
for(int i=0;i<n;i++)
{
	wt[i] = tat[i]-et[i];
	awt = wt[i];
}
cout<<"process\t\t"<<"arrival time\t\t"<<"execution time\t\t"<<"completion time\t\t"<<"turnaround time\t\t"<<"waiting time\n";

for(int i=0;i<n;i++)
{
cout<<process[i]<<"\t\t"<<at[i]<<"\t\t"<<et[i]<<"\t\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<"\t"<<"\n";
}
for (int  i=0; i<n; i++) 
    { 
        total_wt = total_wt + wt[i]; 
        total_tat = total_tat + tat[i]; 
        cout << "   " << i+1 << "\t\t" << et[i] <<"\t    "
            << wt[i] <<"\t\t  " << tat[i] <<endl; 
    } 
  
    cout << "Average waiting time = " 
         << (float)total_wt / (float)n; 
    cout << "\nAverage turn around time = " 
         << (float)total_tat / (float)n; 
} 
	

