//find power of (a,b) using of functions.
//fuction which tells you a number is a even or odd
//fuch which gives you a ncr value.
//Given an AP is 3*n+7 find nth term .
#include<iostream>
#include<math.h>
using namespace std;
int fibonacci(int n){
    int nextTerm=0;
int t1=0;
int t2=1;
for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
}
//total number of 1 in integer a and b.
int issetbit(int a, int b){
    int count=0,bcount=0;
  while(a!=0){
     if(a&1 ){
        count++;
     }
     a=a>>1;
  }
  while(b!=0){
    if(b&1){
      bcount++;
    }
   b=b>>1;
  }
  return count+bcount;
}
int isAP(){
int n;
cout<<"Enter the value for which u want to find a value"<<endl;
cin>>n;
// return 3*n+7;
//print the series of an AP
for(int i=1;i<=n;i++){
  cout<<" "<<"Series is" <<" "<<3*i+7;
}
}
int fact(int n){
    int num=1;
    if(n==0){
        return 1;
    }
    for(int i=1;i<=n;i++){
        num= num*i;
    }
    return num;
}
int isncr(int n , int r){
 int numerator=fact(n);
 int denomenator=fact(r)*fact(n-r);
 int ans=numerator/denomenator;
 return ans;
}
int ispower(int a , int b){
  int ans=1;
  for(int i=1;i<=b;i++){
    ans= ans*a;
  }
  return ans;
}
bool isevenodd(){
int a;
cin>>a;
if(a%2==0){
    return true;
}
else{
    return false;
}
}
int main(){
//   int a,b;
//   cin>>a>>b;
  int n;
cin>>n;
//   int answer = ispower(a,b);
//   cout<<"Number a to power b is :"<<answer<<endl;
//   cout<<isevenodd()<<endl;
//   cout<<isncr(a,b)<<endl;
// cout<<isAP()<<endl;
// cout<<issetbit(a,b)<<endl;
cout<<fibonacci(n)<<endl;
}