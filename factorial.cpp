#include<iostream>
using namespace std;

int main(){
    int num,sum=1;
    cout<<"Enter Your Number:";
    cin>>num;
    for (int i = num; i >= 1; i--)
    {
        sum = sum*i;
    }
    cout<<num<<"! = "<<sum;
    
    return 0;
}