// A Dynamic Programming for 0-1 Knapsack problem
#include<stdio.h>
 
int max(int a, int b) { return (a>b)?a:b; }
 
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int KS[n+1][W+1];
 
   // Build table K[][] in bottom up manner
   for (i=0;i<=n;i++)
   {
       for (w=0;w<=W;w++)
       {
           if (i==0 || w==0)
               KS[i][w] = 0;
           else if (wt[i-1] <= w)
               KS[i][w] = max(val[i-1] + KS[i-1][w-wt[i-1]],  KS[i-1][w]);
           else
               KS[i][w] = KS[i-1][w];
       }
   }
   return KS[n][W];
}
 
int main()
{
	int i,n1,W;
	cout<<"Enter the number of items:\t";
	cin>>n1;
	int val[n1],wt[n1];
    cout<<"\nEnter the weights and prices associated with each item:\n";
    for (i=0;i<n1;i++){
    	cin>>val[i]>>wt[i];
    }
	//val[] = {60, 100, 120};
    //wt[] = {10, 20, 30};
    cout<<"Enter the max weight of knapsack:\t";
	cin>>W;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}

