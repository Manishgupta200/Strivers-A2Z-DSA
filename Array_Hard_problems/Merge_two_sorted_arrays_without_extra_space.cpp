// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1?company[]=Synopsys&company[]=Synopsys&page=1&query=company[]Synopsyspage1company[]Synopsys&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-two-sorted-arrays
// https://leetcode.com/problems/merge-sorted-array/description/
// https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays-without-extra-space_6898839?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    private:
        void swapGreater(long long arr1[], long long arr2[], int ind1, int ind2){
            if(arr1[ind1] > arr2[ind2]){
                swap(arr1[ind1], arr2[ind2]);
            }
        }
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            // TC -> O(n + m) + O(n + m)
            // SC -> O(n + m)
            // vector<int> ans;
            // int left = 0;
            // int right = 0;
            // while(left < n && right < m){
            //     if(arr1[left] <= arr2[right]){
            //         ans.push_back(arr1[left]);
            //         left++;
            //     }
            //     else{
            //         ans.push_back(arr2[right]);
            //         right++;
            //     }
            // }
            // while(left < n){
            //     ans.push_back(arr1[left]);
            //     left++;
            // }
            // while(right < m){
            //     ans.push_back(arr2[right]);
            //     right++;
            // }
        
            // for(int i = 0; i < n; i++){
            //     arr1[i] = ans[i];
            // }
            // for(int i = n; i < m+n; i++){
            //     arr2[i-n] = ans[i];
            // }
            
            
            // 2nd method
            // TC -> O(min(n, m)) + O(n log n) + O(m log m)
            // SC -> O(1)
            // int left = n-1;
            // int right = 0;
            // while(left >= 0 && right < m){
            //     if(arr1[left] > arr2[right]){
            //         swap(arr1[left], arr2[right]);
            //         left--, right++;
            //     }
            //     else{
            //         break;
            //     }
            // }
            // sort(arr1, arr1+n);
            // sort(arr2, arr2+m);
            
            
            
            // 3rd method
            // TC -> O(log(n+m)) * O(n+m)
            // sc -> O(1)
            int len = (n + m);
            int gap = (len / 2) + (len % 2);
            while(gap > 0){
                int left = 0;
                int right = left + gap;
                while(right < len){
                    // arr1 and arr2
                    if(left < n && right >= n){
                        swapGreater(arr1, arr2, left, right - n);
                    }
                    // arr2 and arr2
                    else if(left >= n){
                        swapGreater(arr2, arr2, left - n, right - n);
                    }
                    // arr1 and arr1
                    else{
                        swapGreater(arr1, arr1, left, right);
                    }
                    left++, right++;
                }
                if(gap == 1) break;
                gap = (gap / 2) + (gap % 2);
            }
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends