// // // // // print all the negative elements on the left and all the postive on the right 
// // // // #include<iostream>
// // // // using namespace std;
// // // // void printArray(int arr[],int size){
// // // //     int left=0;
// // // //     int right=size-1;
// // // //     while(left<=right){
// // // //         if(arr[left]>arr[right]){
// // // //         swap(arr[left],arr[right]);}
// // // //         left++;
// // // //         right--;
// // // //     }
    
// // // //     for(int i=0;i<size;i++){
// // // //         cout<<arr[i]<<" ";
// // // //     }
    
// // // // }
// // // // int main(){
// // // //     int arr[]={-10,20,-80,-40,50};
// // // //     int size=5;
// // // //     printArray(arr,size);
// // // // }


// // // // 
// // // // 0's to the left ,1's in the mid and 2's on the right


// // // // //Approaches 
// // // // 1-> Counting 
// // // // 2-> sorting 
// // // // 3-> 2 pointer approach 



// // // // #include<iostream>
// // // // using namespace std;
// // // // void printArray(int arr[],int size){
// // // //     int left=0;
// // // //     int right=size-1;
// // // //     while(left<=right){
// // // //     //     if(arr[index]==0){
// // // //     //         swap(arr[index],arr[left]);
// // // //     //         left++;
// // // //     //         index++;        }
    
// // // //     // else if(arr[index]==2){
// // // //     //     swap(arr[index],arr[right]);
// // // //     //     right--;

// // // //     // }
// // // //     // else{
// // // //     //     index++;
// // // //     // }
// // // // if (arr[left>arr[right]]){
// // // //     swap(arr[left],arr[right]);
// // // // }
// // // // else{
// // // // left++;
// // // // right--;
// // // // }



// // // //     }    for(int i=0;i<size;i++){
// // // //         cout<<arr[i]<<" ";
// // // //     }

// // // //        }

// // // // int main(){
// // // //     int arr[]={0,2,1,2,1,0};
// // // //     int size=6;
// // // //     printArray(arr,size);

// // // // }

 
// // // // rotate array to the right by k bits 
// // // //  #include<iostream>
// // // //  using namespace std;
// // // //  void printArray(int arr[],int size){
// // // //     int temp1=7;
// // // //     int temp2=6;
// // // //     int temp3=5;
// // // //     for(int i=size-1;i>=1;i--){
// // // //         arr[i]=arr[i-3];
        
// // // //     }
// // // //     arr[0]=temp3;
// // // //     arr[1]=temp2;
// // // //     arr[2]=temp1;
// // // //     for(int i=0;i<size;i++){
// // // //         cout<<arr[i]<<" ";
// // // //     }



// // // //  }
// // // // int main(){
// // // //     int arr[]={1,2,3,4,5,6,7};
// // // //     int size=7;
// // // //     printArray(arr,size);
// // // // }

// // // // rotate array to the right by k bits 


// // // // using modulus 
// // // // #include<iostream>
// // // // using namespace std;
// // // // void printArray(int arr[],int size){
// // // //     int arr2[6];

// // // //     for(int i=0;i<size;i++){
// // // //         int newIndex=(i+2)%size;
// // // //         arr2[newIndex]=arr[i];

// // // //     }
// // // //     arr=arr2;

// // // //     for(int i=0;i<size;i++){
// // // //         cout<<arr[i]<<" ";
// // // //     }
// // // // }
// // // // int main(){
// // // //     int arr[]={10,20,30,40,50};
// // // //     int size=5;
// // // //     printArray(arr,size);
// // // // }

// // // // #include<iostream>
// // // // using namespace std;
// // // // void printArray(int arr[],int size){
// // // //     for(int i=0;i<size;i++){
// // // //         if(arr[i]!=i+1){
// // // //             cout<<arr[i]<<" ";
            
// // // //         }
// // // //     }
// // // // }
// // // // // int main(){
// // // // //     int arr[5]={1,2,3,4,6};
// // // // //     int size=5;
// // // // //     printArray(arr,size);

// // // // // }



// // // // int main(){

// // // // }


// // // // //  rotate 2D vector by 90 degree
// // // // #include<iostream>

// // // // using namespace std;
// // // // void rotateArray(int arr[3][3],int row,int col){
// // // //     // to rotate any array by 90 degree 1-> take trasnpose ,2-> reverse it
// // // // // transpose 
// // // //     // for(int i=0;i<row;i++){
// // // //     //     for(int j=i;j<col;j++){
// // // //     //         swap(arr[i][j],arr[j][i]);
// // // //     //     }
// // // //     // }
// // // //     // reverse of an array
// // // //     int left=0;
// // // //     int right=row-1;
// // // //     while(left<=right){
// // // //         swap(arr[left],arr[right]);
// // // //         left++;
// // // //         right--;
// // // //     }
// // // //     for(int i=0;i<row;i++){
// // // //         for(int j=0;j<col;j++){
// // // //             cout<<arr[i][j]<<" ";
// // // //         }
// // // //         cout<<endl;
// // // //     }


// // // // }
// // // // int main(){
// // // //     int arr[3][3]={
// // // //         {1,2,3},
// // // //         {4,5,6},
// // // //         {7,8,9},
// // // //     };
// // // //     int row =3;
// // // //     int col=3;
// // // //     rotateArray(arr,row,col);
// // // // }



// // // // rotate an array by 90 degree's
// // // // #include<iostream>
// // // // using namespace std;
// // // // void rotateArray(int arr[3][3],int row,int col){
// // // //     // for rotation of an array by 90 degree first we have to take transpose of it and then revsrse the array
// // // //     // transpose of an array
    
// // // // }
// // // // int main(){
// // // //     int arr[3][3]={
// // // //         {10,20,30},
// // // //         {40,50,60},
// // // //         {70,80,90},
// // // //     };
// // // //     int row =3;
// // // //     int col=3;
// // // //     rotateArray(arr,row,size)
// // // // }

// // // // key value ,two sum
// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;

// // // void sortingArray(int arr[],int size,int target){


// // // void printArray(int arr[],int size,int target){
// // //     int left=0;
// // //     int right=size-1;
    
// // //     while(left<right){
// // //        int  sum=arr[left]+arr[right];
// // //         if(sum==target){
// // //             cout<<"done"<<endl;

// // //         }
// // //         else if(sum>target){
// // //             right--;

// // //         }
// // //         else{
// // //             left++;
// // //         }
        
// // //     }
// // // }

// // // int sortArray(int arr[],int size,int target){
// // //      sort(arr,arr+size);
// // //    return  printArray(arr,size,target);
// // // }

// // // // void printArray(int arr[],int size,int target){
// // // //     int left=0;
// // // //     int right=size-1;
    
// // // //     while(left<right){
// // // //        int  sum=arr[left]+arr[right];
// // // //         if(sum==target){
// // // //             cout<<"done"<<endl;

// // // //         }
// // // //         else if(sum>target){
// // // //             right--;

// // // //         }
// // // //         else{
// // // //             left++;
// // // //         }
        
// // // //     }


// // // }

// // // int main(){
// // //     int arr[4]={10,20,30,40};
// // //     int size=4;
// // //        int target=40;
// // //     sortingArray(arr,size,target);

// // // }

// // // // remove duplicate from the array
// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;
// // // void removeDuplicate(vector<int>&nums){
// // //     int size=nums.size();
// // //     int i=1;
// // //     int j=0;
// // //     while(i<size){
// // //         if(nums[j]==nums[i]){
// // //             i++;
// // //         }
// // //         else{
// // //            j++;
// // //            nums[j]=nums[i];
// // //            i++; 
// // //         }
// // //     }
// // //     cout<< j+1;

// // //     // for(int i=0;i<size;i++){
// // //     //     cout<<nums[i]<<" ";
// // //     // }
// // //     }
// // // int main(){
// // //     vector<int>nums={0,0,1,1,2,2,3,3,4};
// // //     removeDuplicate(nums);


// // // }


// // // find first repeating value with minimum index
// // #include<iostream>
// // using namespace std;
// // int printArray(int arr[],int size){
// //     for(int i=0;i<size;i++){
// //         for(int j=1;j<size;j++){
// //             if(arr[i]==arr[j]){
// //                 return i+1;
// //             }
// //         }
// //     }
// //     return -1;

// // }
// // int main(){
// //     int arr[]={1,2,3,1,2,4};
// //     int size=6;
// //   int n=  printArray(arr,size);
// //   cout<<n;


// // }



// // Wave print form 
// #include<iostream>
// #include<vector>
// using namespace std;
// void wavePrint(vector<vector<int>>arr){
//     int n=arr.size();
//     int p=arr[0].size();
//     for(int startCol=0;startCol<p;startCol++){
//         if((startCol &1)==0){
//             for(int i=0;i<n;i++){
//                 cout<<arr[i][startCol]<<" ";
//             }
//         }
//         else{
//             for(int i=n-1;i>=0;i--){
//                 cout<<arr[i][startCol]<<" ";
//             }
//         }
//     }
// }


// int main(){
//     vector<vector<int>>arr {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},

//     };
//     wavePrint(arr);

// }


// find max subarray from the array
#include<iostream>
using namespace std;
void maxArray(int arr[],int size,int k){
    int sum=0;
    int j=k-1;
    for(int i=0;i<=j;i++){
        sum=sum+arr[i];
        j++;
        while(j<size){
            sum=sum-arr[i++];
            sum=sum+arr[j++];
        }


    }
    cout<<sum;
}

int main(){

    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    int k=4;
    maxArray(arr,size,k);


}