// Circular tour
// https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1
// https://leetcode.com/problems/gas-station/description/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
        // Expected Time Complexity: O(N)
        // Expected Auxiliary Space : O(1)
    //   int balance = 0;
    //   int deficit = 0;
    //   int start = 0;
       
    //   for(int i = 0; i < n; i++){
    //       balance += p[i].petrol - p[i].distance;
    //       if(balance < 0){
    //           deficit += balance;
    //           start = i+1;
    //           balance = 0;
    //       }
    //   }
    //   if(deficit + balance >= 0){
    //       return start;
    //   }
    //   else{
    //       return -1;
    //   }
       
       
    //   another approach
        // int totalPetrol = 0, totalDistance = 0;
        // for(int i = 0; i < n; i++){
        //     totalPetrol += p[i].petrol;
        //     totalDistance += p[i].distance;
        // }
        // if(totalPetrol < totalDistance){
        //     return -1;
        // }
        
        // int start = 0;
        // int balance = 0;
        
        // for(int i = 0; i < n; i++){
        //     balance += p[i].petrol - p[i].distance;
        //     if(balance < 0){
        //         start = i+1;
        //         balance = 0;
        //     }
        // }
        // return start;
        
        
       int balance = 0;
       int start = 0;
       int totalDiff = 0;

       for(int i = 0; i < n; i++){
           int diff = p[i].petrol - p[i].distance;
           balance += diff;
           totalDiff += diff;
           if(balance < 0){
               start = i+1;
               balance = 0;
           }
       } 
       if(totalDiff < 0){
           return -1;
       }
       return start;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends