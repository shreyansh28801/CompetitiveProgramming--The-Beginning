#include <bits/stdc++.h>
using namespace std;

void printBinaryNumber(int num){
    cout<<endl;
    for (int i = 31; i >=0; i--)
    {
        cout<<((num>>i)&1);
    }
 
    cout<<endl;
    
}


/*
Consider this problem: There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30], representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.
*/



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;//n denotes the number of worhers
    cin>>n;
    vector<int> availableDays;
    while (n--)
    {
        int d;
        cin>>d;
        int bitMaskForAvailableDays=0;

        while (d--)
        {
            int i;
            cin>>i;
            bitMaskForAvailableDays=bitMaskForAvailableDays|(1<<i);
        }
        availableDays.push_back(bitMaskForAvailableDays);
        printBinaryNumber( bitMaskForAvailableDays);
        cout<<bitMaskForAvailableDays<<"\n";
        
    }
    int mx=0;int p1,p2;p1=p2=-1;
    n=availableDays.size(); 
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int intersection = availableDays[i]&availableDays[j];
            int commonDays=__builtin_popcount(intersection);
            if (mx<commonDays)
            {
                p1=availableDays[i];
                p2=availableDays[j];        
                mx=commonDays;        
            }
            
        }
        
    }
    cout<<"\n\n";
    cout<< mx<<"   "<<p1<<"   "<<p2;
    printBinaryNumber(p1);
    printBinaryNumber(p2);
    


    return 0;
}