// // Binary Search 
// #include<iostream>
// using namespace std;
// int binarySearch2D(int arr[3][3],int row,int col,int target){
//     int n=row*col;
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         int rowIndex=mid/col;
//         int colIndex=mid%col;
//         int number=arr[rowIndex][colIndex];
//         if(target==number){
//             return 1;
//         }
//         else if(target>number){
//             s=mid+1;

//         }
//         else{
//             e=mid-1;

//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;

// }


// int main(){
//     int arr[3][3]={{10,20,30},
// {40,50,60},
// {70,80,90}};
// int row=3;
// int col=3;

// int target=20;
// int ans =binarySearch2D(arr,row,col,target);
// cout<<ans;

// }


// find the quotient and the remainder
#include<iostream>
using namespace std;
int binarySearch(int dividend ,int divisor){
    int s=0;
    int e=dividend ;
    int mid=s+(e-s)/2;
    int ans1 =-1;
    while(s<=e){
        if(dividend ==divisor*mid){
            return mid;

        }
        else if(dividend>mid*divisor){
            ans1=mid;
            s=mid+1;

        }
        else {
            e=mid-1;
            
        }
        mid=s+(e-s)/2;
    }
    
}
int main(){
    int dividend =24;
    int divisor=3;
    int ans=binarySearch(dividend,divisor);
    cout<<ans;

}-