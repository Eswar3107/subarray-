//  We can analyse that if we take all subarrays (even and odd length), then in that case a particular element at index i will occur in all subarrays whose starting index is less than equal to i, and ending index is greater than equal to i.

// Therefore we can say that total number of those subarrays which contains arr[i] (0-indexed) will be equal to (i+1)*(n-i).
// Let this value to be x.
// Out of which there are (x+1)/2 odd length subarrays which contains arr[i].
// And x/2 even length subarrays which contains arr[i].
// Hence a[i] will contribute (x+1)/2 times in the total sum in our solution.
       
       
 #include <bits/stdc++.h>
using namespace std;
int sumOddLengthSubarrays(vector<int>& arr) 
{
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int contribution= ((i+1)*(n-i) +1)/2;
        sum+= contribution* arr[i];
    }
    return sum;
}
int main() 
{
    vector<int> arr = {1,4,2,5,3};
  
  cout<<sumOddLengthSubarrays(arr)<<endl;
  return 0; 
}
