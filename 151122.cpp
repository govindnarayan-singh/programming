#include<bits/stdc++.h>
using namespace std;

int main(){
    // int sum=0,n;
    // cout<<"number";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     sum+=i;
    // }
    // cout<<"the sum is "<<sum;


    int a[5];
    
    // cout<<"enter number in stack";
    // for(int i=0;i<sizeof(a)/sizeof(int);i++){
    //     cin>>a[i];
    // }
    // for(int j=sizeof(a)/sizeof(int)-1;j>=0;j--){
    //     cout<<a[j]<<" ";
    // }
    // cout<<endl;
       int j=0;
    int push(int num){
        if (j<sizeof(a)/sizeof(int)){
            a[j]=num;
            j++;
        }
        else{
            cout<<"stack is full";
        }
    }
    
    
    void pop(){
        if(j<0){
            cout<<"stack is empty";

        }
        else{
            j--;
        }
    }




 


    return 0;
}