// C++ program for finding the missing number in a seies of numbers in an array
#include <bits/stdc++.h> 
using namespace std; 
    
// A function to implement bubble sort  
void Missing(int arr[], int n)  
{  
    int i, j, m;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if ((arr[j+1] - arr[j]) >1) 
              m = arr[j]+1;
             cout<<"The missing number is : ";
             cout<<m;
         
}        
 
// Driver code  
int main()  
{  
    int arr[] = {1, 2, 3, 5, 6};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    Missing(arr, n);  
    return 0;  
}  
