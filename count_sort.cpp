#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(i=a; i<b; ++i)
#define f(i,n) for(i=0; i<n; ++i)
#define Fa(i,a,b) for(i=a; i>=b; --i)
#define fa(i,n) fa(i,n,0)
#define wt while(t)
#define SWS ios_base::sync_with_stdio(false)
#define N "\n"
#define c(t) cin>>t
void count_sort(int nums[],int n){
  int max1=0; int i;
      f(i,n){ max1=max(max1,nums[i]); }
      int temp[max1+1]={0};
       f(i,n){ temp[nums[i]]++;}
       F(i,1,max1+1){ temp[i]=temp[i]+temp[i-1];}
      int r[n];
      f(i,n){ r[temp[nums[i]]-1]=nums[i];
               temp[nums[i]]--;}
      f(i,n){ nums[i]=r[i];}
}
int main(){
    SWS;
    int t; c(t);
    wt{
    int n; int i;
    c(n);
    int nums[n];
    f(i,n){ c(nums[i]);}
    count_sort(nums,n);
    f(i,n){ cout<<nums[i]<<" ";}
    cout<<N;
    t--;
}
}
