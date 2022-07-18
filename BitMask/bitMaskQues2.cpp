#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement

Let there be N workers and N jobs. Any worker can be assigned to perform any job, incurring some cost that may vary depending on the work-job assignment. It is required to perform all jobs by assigning exactly one worker to each job and exactly one job to each agent in such a way that the total cost of the assignment is minimized.

Input Format
Number of workers and job: N
Cost matrix C with dimension N*N where C(i,j) is the cost incurred on assigning ith Person to jth Job.

Sample Input
4

[
9 2 7 8
6 4 3 7
5 8 1 8
7 6 9 4
]

Sample Output
13

Constraints
N <= 20

*/

int noPersonRemaining ;

int cost[21][21];



int solution_recursive(int n,int mask)
{
    // if ((mask == noPersonRemaining)
    // {
        
    // }
    

}
int dp[21][21];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    int arr[10]={1,2,34,5};
    for (int i = 0; i < 10; i++)
    {
        cout<<"   "<<arr[i];
    }
    */
    int N;//No. of persons 
    cin>>N;

    noPersonRemaining = (1<<N)-1;

    solution_recursive(N,0);


    
    
    return 0;
}