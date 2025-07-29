// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // //     // array creation 
// // // // // // //     // int arr[10];
// // // // // // //     // cout<<"array created sucessfully"<<endl;
// // // // // // //     // cout<<"adresss of arr"<<&arr<<endl;
// // // // // // //     // cout<<"adress of arr is "<<arr<<endl;
// // // // // // //     // cout<<"size of arr"<<sizeof(arr)<<endl;
// // // // // // //     int a=5;
// // // // // // //      cout<<"array created sucessfully"<<endl;
// // // // // // //     cout<<"adresss of a"<<&a<<endl;
    
// // // // // // //     cout<<"size of a"<<sizeof(a)<<endl;


// // // // // // // }
// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     // int arr[]={1,2,3,4,5};
// // // // // //     // int brr[5]={1,2,3,4,5};
// // // // // //     // int crr[4]={1,2};
// // // // // //     // int zrr[3]={1,2,34};


// // // // // //     // acessing elements of array using index 
// // // // // //     int arr[5]={1,2,3,4,5};
// // // // // //     // cout<<arr[0]<<endl;
// // // // // //     //     cout<<arr[1]<<endl;    cout<<arr[2]<<endl;
// // // // // //     // acessing all the elements in the single line
// // // // // //     int n=5;
// // // // // //     for(int i=0;i<n;i++){
// // // // // //         cout<<arr[i]<<" "; 
// // // // // //     }

// // // // // // }
// // // // // // input taking and printing element of array using for loop

// // // // // // #include<iostream>
// // // // // // using namespace std;


// // // // // // int main(){
// // // // // //     int arr[10];
// // // // // //     int n=10;
// // // // // //     for(int i=0;i<n;i++){
// // // // // //         cout<<"enter the value in array for index "<<i<<endl;
// // // // // //         cin>>arr[i];


// // // // // //     }
// // // // // //     cout<<"The array is"<<endl;
// // // // // //     for(int i=0;i<n;i++){
// // // // // //         cout<<arr[i]<<" ";


// // // // // //     }
   

// // // // // // }
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int arr[10];
// // // // //     int n=10;
// // // // //     for(int i=0;i<n;i++){
// // // // //         cout<<"Enter the value of array in index"<<i<<endl;
// // // // //         cin>>arr[i];
// // // // //     }
// // // // //      cout<<"Doubling the value of array"<<endl;
// // // // //     for(int i=0;i<n;i++){
       
// // // // //         arr[i]=2*arr[i];
// // // // //     }
// // // // //     cout<<"The array is"<<endl;
// // // // //       for(int i=0;i<n;i++){
// // // // //         cout<<arr[i]<<"   ";
        
// // // // //     }
// // // // //     return 0;

// // // // // }
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int arr[3];
// // // //     int n=3;
// // // //     for(int i=0;i<n;i++){
// // // //         cout<<"Enter the value for index"<<" "<<i<<endl;
// // // //         cin>>arr[i];
// // // //         cout<<endl;
// // // //     }
// // // //     cout<<"Doubling each element of an Array"<<endl;
// // // //     for(int i=0;i<n;i++){
// // // //         arr[i]=2*arr[i];
// // // //     }
// // // //     cout<<"The array is"<<endl;
// // // //     for(int i=0;i<n;i++){
// // // //         cout<<arr[i]<<" ";
// // // //     }
// // // //     return 0;

// // // // }
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int arr[5];
// // //     int n=5;
// // //     for(int i=0;i<n;i++){
// // //         cout<<"Enter the value of an array for index"<<i<<" "<<endl;
// // //         cin>>arr[i];
// // //         cout<<endl;

// // //     }
// // //     cout<<"Printing the values of an array"<<endl;
// // //     for(int i=0;i<n;i++){
// // //         cout<<arr[i]<<" ";
        

// // //     }
// // //     cout<<endl;
// // //     // printing sum of all the values of an array
// // //     int sum=0;
// // //     for(int i=0;i<n;i++){
// // //         sum=sum+arr[i];
// // //     }
// // //     cout<<"The sum is"<<sum;
// // //     return 0;

// // // }
// // // // linear search in an array
// // // #include<iostream>
// // // using namespace std;
// // // // int main(){
// // // //     int arr[5]={1,2,3,4,5};
// // // //     int target=4;
// // // //     int n=5;
// // // //     for(int i=0;i<n;i++){
// // // //         if(arr[i]==target){
// // // //             cout<<"Element found"<<endl;
// // // //             break;
// // // //         }
// // // //         else{
// // // //             cout<<"Element not found"<<endl;
// // // //         }

// // // //     }
  
// // // // }
// // // int main(){
// // //     int arr[5]={1,2,3,4,5};
// // //     int target=6;
// // //     int n=5;
// // //     bool flag=0;
// // //     // flag =0->not found;
// // //     // flag =1->found;

// // //     for(int i=0;i<n;i++){
// // //         if(arr[i]==target){
// // //             flag=1;
// // //             break;

// // //         }

// // //     }
// // //     if(flag==1){
// // //         cout<<"found"<<endl;

// // //     }
// // //     else{
// // //         cout<<"not found";
// // //     }
// // // }
// // // passing an array to the function
// // // #include<iostream>
// // // using namespace std;

// // // void printArray(int arr[],int size){
// // //     for(int i=0;i<size;i++){
// // //         cout<<arr[i]<<" ";
// // //     }
// // //     cout<<endl;
// // // }
// // // // return true ->target found
// // // // return false->target not found
// // // bool linearSearch(int arr[],int size,int target){
// // //       for(int i=0;i<size;i++){
// // //         if(arr[i]==target){
// // //             return true;

// // //         }    }
// // //         return false;

// // // }



// // // int main(){
// // //     int arr[5]={1,2,3,4,5};
// // //     int size=5;
// // //     int target =3;
// // //   printArray(arr,size);
// // //  bool ans= linearSearch(arr,size,target);
// // //  if(ans==1){
// // //     cout<<"Element found";
// // //  }
// // //  else{
// // //     cout<<"Not found";
// // //  }
  
// // //   return 0;

// // // }



// // // COUNT NUMBER OF O'S AND 1'S IN AN ARRAY
// // // #include<iostream>
// // // using namespace std;
// // // void countZeroOne(int arr[],int size){
// // //     int zeroCount=0;
// // //     int oneCount=0;
// // //     for(int i=0;i<size;i++){
// // //         if(arr[i]==0){
// // //             zeroCount=zeroCount+1;
// // //         }
// // //         else if(arr[i]==1){
// // //             oneCount=oneCount+1;
// // //         }

// // //     }
// // //     cout<<"Total Number of zero's in an Array is"<<zeroCount<<endl;
// // //      cout<<"Total Number of One's in an Array is"<<oneCount<<endl;

// // // }




// // // int main(){
// // //     int arr[]={0,1,0,1,1,0,1,0,1,0,1,0,1};
// // //     // zero->6
// // //     // one->7
// // //     int size=13;
// // //     countZeroOne(arr,size);
// // //     return 0;

// // // }
// // // Finding Minimum element of an array
// // // #include<iostream>
// // // #include<limits.h> 
// // // using namespace std;
// // // int minAns=INT_MAX;
// // // int minimumElement(int arr[],int size){
// // //     for(int i=0;i<size;i++){
// // //         if(arr[i]<minAns){
// // //             minAns=arr[i];

// // //         }
    
    


// // //     }
// // //     return minAns;
// // // }
// // // int main(){
// // //     int arr[5]={1,10,-89,4,5};
// // //     int size=5;
// // //    int ans= minimumElement(arr,size);
// // //    cout<<"The minimum element is "<<ans<<endl;
// // //    return 0;
// // // }

// // // reverse of an array
// // // #include<iostream>
// // // using namespace std;
// // // void reverseArray(int arr[],int size){
   
// // //     for(int left=0,right=size-1;left<=right;left++,right--){
// // //         swap(arr[left],arr[right]);
// // //     }

// // //     // while(left<=right){
// // //     //     swap(arr[left],arr[right]);
// // //     //     left++;
// // //     //     right--;
// // //     // }
// // //     for(int i=0;i<size;i++){
// // //         cout<<arr[i]<<' ';
// // //     }


// // // }
// // // int main(){
// // //     int arr[5]={1,2,3,4,5};
// // //     int size=5;
// // //     reverseArray(arr,size);

// // // }
// // // 




// // Printing extreme of an array
// // #include<iostream>
// // using namespace std;
// // int printExtreme(int arr[],int size){
// //     int left=0;
// //     int right=size-1;
// //     while(left<=right){
// //         if(left==right){
// //             cout<<arr[left];
// //         }
// //         else{
// //         cout<<arr[left]<<" ";
// //         cout<<arr[right]<<" "; 
        
// //         }
// //          left++;
// //         right--; 
// //          }
      
// //     }
        
      



   


// // int main(){
// //     int arr[5]={1,2,3,4,5};
// //     int size=5;
// //     printExtreme(arr,size);
// //     return 0;

// // }




// // print reverse of an array
// #include<iostream>
// using namespace std;
// int reverseArray(int arr[],int size){
//     // int left=0;
//     // int right=size-1;
//     // while(left<=right){
//     //             if(left!=right){
//     //   swap(arr[left],arr[right]);
//     // }
//     // else{ cout<<"@";
//     //   }
//     //     left++;
//     //     right--;
    
//     // }
//     // using temporary variable 
// //     while(left<=right){
// //     int temp=arr[left];
// //    arr[left]=arr[right];
// //    arr[right] =temp;
// //     left++;
// //     right--;
// //     }
//     // using addition
//     // while(left<=right){
//     //     arr[left]=arr[left]+arr[right];
//     //     arr[right]=arr[left]-arr[right];
//     //     arr[left]=arr[left]-arr[right];
//     //     left++;
//     //     right--;
//     // }
// // using xor function
// // while(left<=right){
// //         if(left==right){
// //         cout<<"p"<<" ";
// //     }
// //     arr[left]=arr[left]^arr[right];
// //     arr[right]=arr[left]^arr[right];
// //     arr[left]=arr[left]^arr[right];
// //     left++;
// //     right--;


// // }
// for(int left=0,right=size-1;left<=right;left++,right--){
   
// swap(arr[left],arr[right]);
   

// }


//     for(int i=0;i<size;i++){
//         if(i==2){
//             cout<<" @";
//         }
//         else{
//         cout<<arr[i]<<" ";
      
//         } 
//         }


// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     reverseArray(arr,size);
   
// }
// reverse of an array
#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    reverseArray(arr,size);    


}