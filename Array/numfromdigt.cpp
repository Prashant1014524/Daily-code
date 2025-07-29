#include<iostream>
using namespace std;
int createNum(int n){
    int num=0;
    for(int i=0;i<n;i++){
        
        int digit;
        cout<<"Enter the digit"<<i<<endl;
        cin>>digit;
    
        num=num*10+digit;
        cout<<num<<endl;
    }
    return num;

}







int main(){
    int n;
    cout<<"Enter the digits of number you want to make"<<endl;
    cin>>n;
    createNum(n);
    



}