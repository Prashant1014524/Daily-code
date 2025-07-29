// // // // find the pivot index
// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;

// // // int findPivotIndex(vector<int>nums,int n){
// // //     vector<int>lSum(nums.size(),0);
// // //     vector<int>rSum(nums.size(),0);
// // //     for(int i=1;i<nums.size();i++){
// // //         lSum[i]=lSum[i-1]+nums[i-1];

// // //     }
// // //     for(int i=n-2;i>=0;i--){
// // //         rSum[i]=rSum[i+1]+nums[i+1];
// // //     }
// // //     for(int i=0;i<n;i++){
// // //         if(lSum[i]==rSum[i]){
// // //             return i;
// // //         }
// // //         else{
// // //             return -1;
// // //         }
// // //     }
    


// // // }
// // // int main(){
// // //     vector<int>nums={1,7,3,6,5,6};
// // //     int n=nums.size();
// // //     findPivotIndex(nums,n);


// // // }
// // // //
// // // Sort colors :- 1 method is by counting the zero's and one's then using while loop assign them the positions 
// // // 3 pointer Approach
// // // 21 march 2025
// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;
// // // int sortArray(vector<int>&nums,int n){
// // //     int left=0;
// // //     int right=n-1;
// // //     int index=0;
// // //     while(index<=right){
// // //         if(nums[index]==0){
// // //             swap(nums[index],nums[left]);
// // //             index++;
// // //             left++;

// // //         }
// // //         else if(nums[index]==2){
// // //             swap(nums[index],nums[right]);
// // //             right--;
// // //         }
// // //         else{
// // //             index++;
// // //         }






       


// // //     }

    


// // // }

// // // int main(){
// // //     vector<int>nums={0,0,2,1,1,2,0};
// // //     int n=nums.size();
// // //  cout<< sortArray(nums,n);


// // // }


// // // Find the Missing Element 
// // // #include<iostream>
// // // using namespace std;

// // // int missingElement(int arr[], int n) {  // Corrected parameter type
// // //     int sum = 0;
// // //     for (int i = 0; i < n; i++) {
// // //         sum += arr[i];  // Fixed sum update
// // //     }
    
// // //     int total = (n + 1) * (n + 2) / 2;  // Formula corrected
// // //     int ans = total - sum;
// // //     return ans;
// // // }

// // // int main() {
// // //     int arr[] = {1, 2, 4, 5};
// // //     int n = 4;
// // //     cout << "Missing Element: " << missingElement(arr, n);
// // // }
// // // using the XOR function 
// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;
// // // int missingElement(vector<int>nums,int n){
// // //     int ans =0;
// // //     // taking xor of the elments of nums
// // //     for(int i=0;i<n;i++){
// // //         ans=ans^nums[i];
// // //     }
// // //     // taking the xor of the range[0,5]
// // //     for(int i=0;i<=n;i++){
// // //         ans=ans^i;
// // //     }
// // //     return ans;


// // // }
// // // int main(){
// // //     vector<int>nums={0,1,2,3,5};
// // //     int n=5;
// // //    cout<< missingElement(nums,n);
    

// // // }

// // // move all the negative number to the left of an array
// // #include<iostream>
// // using namespace std;
// // void sort(int arr[],int n){
// //     int left=0;
// //     int index=0;
// //     while(index<=n){
// //         if(arr[index]<arr[left]){
// //             swap(arr[index],arr[left]);
// //         }
// //         // index++;
// //         index++;
        
            

       
    
// // }
// // }
// // void printArray(int arr[],int n){
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }
// // int main(){
// //     int arr[]={1,2,-3,-4,-5,6};


// //     int n=6;
// //     sort(arr,n);
// //     printArray(arr,n);
// // }



// // remove the duplicate from the sorted array


// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // int removeDuplicate(vector<int>arr,int n){
// //     int i=1;
// //     int j=0;                        // j is the postiton where before and at j poistion unique element is placed.
// //     while(i<n){
// //         if(arr[i]==arr[j]){
// //             i++;
// //         }
// //         else{
// //             j++;
// //             arr[j]=arr[i];
// //             i++;
// //         }
// //     }
// //     return j+1;

// // }

// // int main(){
// //     vector<int>arr={0,0,1,1,2,2,3,3,4};
// //     int n=arr.size();
// //     cout<<removeDuplicate(arr,n);

// // }



// // Wave print of the matrix 
// #include<iostream>
// #include<vector>
// using namespace std;
// void printwavePrintArray(vector<vector<int>>arr){
//     int p=arr.size();       // the number of rows
//     int m=arr[0].size();        //number of col
//     for(int startCol=0;startCol<m;startCol++){
//         if((startCol&1)==0){
//             // print top to bottom
//             for(int i=0;i<p;i++){
//                 cout<<arr[i][startCol]<<" ";
//             }
            
//             }
//             else{
//                 for(int i=p-1;i>=0;i--){
//                     cout<<arr[i][startCol]<<" ";
//                 }
//         }
//     }


// }
// int main(){
//     vector<vector<int>>arr{{10,20,30,40},{50,60,70,80},{90,100,110,120}};
//     printwavePrintArray(arr);

// }

// //  Binary Search in an Array
// #include<iostream>
// #include<vector>
// using namespace std;
// int binarySearch(vector<int>arr,int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid=(s+e)/2;
//     while(s<=e){
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(target>arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=(s+e)/2;

//     }
//     return -1;


// }
// int main(){
//     vector<int>arr={10,20,30,40,50,60,70};
//     int n=7;
//     int target=10;
//   cout<<  binarySearch(arr,n,target);
// //   if(ans==1){
// //     cout<<"Element found";

// //   }
// //   else{
// //     cout<<"Element not found ";
// //   }

// // }
// }

// // find the first occureence of the element 
// #include<iostream>

// using namespace std;



// int lastOccurrence(int arr[],int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int Lans =0;
//     while(s<=e){
//         if(arr[mid]==target){
//             Lans=mid;
//             s=mid+1;

//         }
//         else if(target>arr[mid]){
//             s=mid+1;

//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
       
//     }
//     return Lans ;

// }

// int firstOccurrence(int arr[],int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans =0;
//     while(s<=e){
//         if(arr[mid]==target){
//             ans=mid;
//             e=mid-1;

//         }
//         else if(target>arr[mid]){
//             s=mid+1;

//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
       
//     }
//     return ans ;

// }

// int main(){
//     int arr[]={10,20,30,30,30,30,40,50};
//     int n=8;
//     int target=30;
//   int a= firstOccurrence(arr,n,target);
//   int b=lastOccurrence(arr,n,target);
//   int y=b-a+1;
//   cout<<"The total occcurence of the element is"<<y;


// }


// first occurence of the element 
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int size,int target){
//     int s=0;
//     int e=size-1;
//     int firstO=0;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if(arr[mid]==target){
//             firstO=mid;
//             e=mid-1;

//         }
//         else if(target>arr[mid]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;      
//           }
//           mid=s+(e-s)/2;

//         }
//         return firstO;


//     }



// int main(){
//     int arr[]={10,20,30,30,30,40};
//     int size=6;
//     int target=30;
//   cout<<  binarySearch(arr,size,target);




// }


// Find the peak mountain element in the array
