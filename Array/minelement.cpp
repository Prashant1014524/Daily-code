#include<iostream>
#include<limits.h>
using namespace std;
int minElement(int arr[],int n){
    int minElement=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<minElement){
            minElement=arr[i];
            
        }
        
    }
    cout<<"Min element"<<" "<<minElement<<endl;

}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    minElement(arr,n);


}