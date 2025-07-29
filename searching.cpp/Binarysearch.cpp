// // #include<iostream>
// // using namespace std;
// // int binarySearch(int arr[],int target,int size){
// //     int start=0;
// //     int end=size-1;
// //     int mid=(start+end)/2;
// //     while(start<=end){
// //         if(arr[mid]==target){
// //             return mid;
// //         }
// //         else if(target>arr[mid]){
// //             start=mid+1;

// //         }
// //         else if(target<arr[mid]){
// //             end =mid-1;
// //         }
// //         // mid update yha mai glti krunga isko update krna haii!!!!
// //       mid=(start+end)/2;


// //     }
// //     return -1;


// // }

// // int main(){
// //     int arr[]={10,20,30,40,50,60,70,80,90};
// //     int target=90;
// //     int size=9;
// //     int ansIndex=binarySearch(arr,target,size);
// //     if(ansIndex==-1){
// //         cout<<"Element not found"<<endl;

// //     }
// //     else{
// //         cout<<"elemet found "<<" "<<ansIndex<<endl;
// //     }

// // }


// // find the first occurenece of the element in the sorted array
// // #include<iostream>
// // using namespace std;
// // int binarySearch(int arr[],int size,int target){
// //     int s=0;
// //     int e=size-1;
// //     int ans =-1;
// //     int mid=(s+e)/2;
// //     while(s<=e){
// //         if(arr[mid]==target){
// //             ans=mid;
// //             e=mid-1;

// //         }
// //         else if(target>arr[mid]){
// //             s=mid+1;
// //         }
// //         else if(target<arr[mid]){
// //             e=mid-1;
// //         }
// //         mid=(s+e)/2;

// //     }
// // return ans;

// // }

// // int main(){
// //     int arr[]={10,20,30,30,30,30,40,50};
// //     int size=8;
// //     int target=30;
// //    int ansIndex= binarySearch(arr,size,target);
// //    if(ansIndex==-1){
// //     cout<<"Element not found"<<endl;
// //    }
// //    else{
// //     cout<<"The first occurence is at "<<ansIndex;
// //    }

// // }


// // find last occurence of the element :-Sorted array

// // #include<iostream>
// // using namespace std;
// // int binarySearch(int arr[],int size,int target){
// //     int s=0;
// //     int e=size-1;
// //     int ans =-1;
// //     int mid=(s+e)/2;
// //     while(s<=e){
// //         if(arr[mid]==target){
// //             ans=mid;
// //             s=mid+1;

// //         }
// //         else if(target>arr[mid]){
// //             s=mid+1;
// //         }
// //         else if(target<arr[mid]){
// //             e=mid-1;
// //         }
// //         mid=(s+e)/2;

// //     }
// // return ans;

// // }

// // int main(){
// //     int arr[]={10,20,30,30,30,30,40,50};
// //     int size=8;
// //     int target=30;
// //    int ansIndex= binarySearch(arr,size,target);
// //    if(ansIndex==-1){
// //     cout<<"Element not found"<<endl;
// //    }
// //    else{
// //     cout<<"The first occurence is at "<<ansIndex;
// //    }

// // }



// // find the total occurence 
// // #include<iostream>
// // using namespace std;
// // int firstOccurence(int arr[],int size,int target){
// //     int s=0;
// //     int e=size-1;
// //     int ans =-1;
// //     int mid=(s+e)/2;
// //     while(s<=e){
// //         if(arr[mid]==target){
// //             ans=mid;
// //             e=mid-1;

// //         }
// //         else if(target>arr[mid]){
// //             s=mid+1;
// //         }
// //         else if(target<arr[mid]){
// //             e=mid-1;
// //         }
// //         mid=(s+e)/2;

// //     }
// // return ans ;

// // }
// // int lastOccurence(int arr[],int size,int target){
// //     int s=0;
// //     int e=size-1;
// //     int ans =-1;
// //     int mid=(s+e)/2;
// //     while(s<=e){
// //         if(arr[mid]==target){
// //             ans=mid;
// //             s=mid+1;

// //         }
// //         else if(target>arr[mid]){
// //             s=mid+1;
// //         }
// //         else if(target<arr[mid]){
// //             e=mid-1;
// //         }
// //         mid=(s+e)/2;

// //     }
// //     return ans;

// // }
// // int totalOccurence(int arr[],int size,int target){
// //     int f=firstOccurence(arr, size, target);
// //      int l=lastOccurence(arr, size, target);
// //      int total=l-f+1;
// //      return total;
// // }



// // int main(){
// //     int arr[]={10,20,30,30,30,30,40,50};
// //     int size=8;
// //     int target=30;
// //     int ansIndex=totalOccurence(arr,size,target);
// //     cout<<ansIndex;


// // }



// // find missing element in the array
// // #include<iostream>
// // using namespace std;
// // int missingNumber(int arr[],int size){
// //     int s=0;
// //     int e=size-1;
// //     int ans =-1;
// //     // use best practice 
// //     int mid=s+(e-s)/2; 
// //     while(s<=e){
// //         int diff=arr[mid]-mid;
// //         if(diff==1){
// //             s=mid+1;

// //         }
// //         else{
// //             ans =mid;
// //             e=mid-1;
            
// //         }
// //         mid=(s+e)/2;
// //     }
// //     return ans+1 ;


// // }
// // int main(){
// //     int arr[]={1,2,3,4,6,7,8,9};
// //     int size=8;
// //     int app=missingNumber(arr,size);
// //     cout<<app;
// // }



// // Peak Element in the Mountain Array
// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int peakElement(vector<int>arr){
// //     int size=arr.size();
// //     int s=0;
// //     int e=size-1;
// //     int mid=s+(e-s)/2;
// //     while(s<e){
// //         if(arr[mid]<arr[mid+1]){
// //             // right mai move kroo
// //             s=mid+1;


// //         }
// //         else{
// //             // arr[mid]>arr[mid+1]
// //             //  yha to hm b pr haii pr ya toh hm peak pr haii;
// //             e=mid;
// //             // iss se hmaara peak bhi lost nhi hua orr hm left bhi chl liye
// //         }
// //         return e;
// //     }
// // }
// // int main(){
// //     vector<int>arr={10,20,50,40,30};

// //   int ans=  peakElement(arr);
// //   cout<<ans;
// // }



// // Pivot Element
// #include<iostream>
// #include<vector>
// using namespace std;
// int pivotIndex(vector<int>arr){
//     int n =arr.size();
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(s==e){
//             return s;
//         }
//         if(arr[mid+1]<=n&&arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         else if(arr[mid-1]>=0&&arr[mid]<arr[mid-1]){
//             return mid-1;
//         }
//         else if(arr[s]>arr[mid]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;

// }


// int main(){
//     vector<int>arr={16,1};
//     int ans=pivotIndex(arr);
//     cout<<ans;


// }



// Binary Search in a 2D matrix 
#include<iostream>
using namespace std;
int binarySearch(int arr[3][3],int row,int col,int target){
    int n=row*col;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int rowIndex=mid/col;
        int colIndex=mid%col;
        int number=arr[rowIndex][colIndex];
        if(target==number){
            return 1;
        }
        else if(target>number){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        // yha pr mai glti kri isko yaad rkho ki mid ko bhi update krna .


    }
    return -1;

}
int main(){
    int arr[3][3]={{10,20,30},
    {40,50,60},
    {70,80,90},
    
    
    };
    int row=3;
    int col=3;
    int target=100;
  int ans=  binarySearch(arr,row,col,target);
cout<<ans ;
}

