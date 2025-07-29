// 


// find the odd occuring element 
#include<iostream>
using namespace std;
int binarySearch(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid&1){
            if(arr[mid]==arr[mid-1]){
                s=mid+1;

            }
            else{
                if(arr[mid]==arr[mid+1]){
                    s=mid+2;

                }

            }
           
        }
         else{
                if(arr[mid]==arr[mid+1]){
                    s=mid+2;
                }
                else{
                    e=mid;
                }
            }

    }
    return -1;
}
int main(){
    int arr[]={0,0,1,1,2,2,3,4,4};
    int size= 9;
  cout<<  binarySearch(arr,size);

}