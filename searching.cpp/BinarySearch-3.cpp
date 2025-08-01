// #include<iostream>
// using namespace std;
// int binarySearch(int dividend ,int divisor){
//     int s=0;
//     int e=dividend;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(mid*divisor==dividend){
//             return mid;
//         }
//         else if(mid*divisor>dividend){
//             e=mid-1;

//         }
//         else {
//             ans=mid;
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans ;
// }

// int main(){
//     int divisor=7;
//     int dividend=-29;
//     int ans =binarySearch(abs(dividend),abs(divisor));
//     if((divisor>0 && dividend<0)||(divisor<0 && dividend>0)){
//         ans=0-ans ;
//     }
//     cout<<ans;

// // }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int findElement(int arr[],int n){
//     int first=INT_MIN;

//     for(int i=0;i<n;i++){
//         if(arr[i]>first){
//            first =arr[i];
//         }
//     }
//         int second=INT_MIN;
//         for(int j=0;j<n;j++){
//             if(arr[j]>second&&arr[j]<first){
//             second=arr[j];

//         }
//     }
//         int third=INT_MIN;
//         for(int i=0;i<n;i++){
//             if(arr[i]>third&&arr[i]<second){
//             third=arr[i];
//         }

//     }
//     return third;
// }
// int main(){
//     int arr[]={10,30,40,50};
//     int size=4;
//    cout<< findElement(arr,size);

// }