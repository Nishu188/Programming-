//alternate swapping of elements in array
#include<iostream>
using namespace std;

int main(){
    int arr[10000];
    int n;
    cout<<"entered the size for array"<<endl;
    cin>>n;
    cout<<"your entered array is followiing"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }cout<<endl;
    cout<<"updated array"<<" "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
