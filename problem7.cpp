//write a program to find maximum element in the guven array
#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int reversearray(int arr[],int n){
    int start=0; // start=0
    int end=n-1; //end=n-1
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int sumarray(int arr[], int n){
 int sum=0;
 for(int i=0;i<n;i++){
    sum+=arr[i];
 }
 return sum;
}

int mininum(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
          min=arr[i];
        }
    }
    return min;
}
 
int largest(int arr[], int n)
{
    int i;
     int max = INT_MIN;
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
 
// Driver Code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Largest in given array is "
         << largest(arr, n)<<endl;
         cout<<"smallest number is : "<<mininum(arr,n)<<endl;
         cout<<"sum of array element : "<<sumarray(arr,n)<<endl;
         reversearray(arr,n);
         printarray(arr,n);

    return 0;
}