// // // taking input and accessing of elements of an array
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[5]={1,2,3,4,5};
// //     int size=5;
// //     // linear search in an array
// //     int target=3;
// //     bool flag =0;
// //     // flag 0 -> not found 
// //     // flag 1-> found 
// //     for(int i=0;i<size;i++){
// //         if(arr[i]==target){
// //             flag =1;

// //             break;
// //         }}
// //         if(flag=1){
// //             cout<<" element found"<<endl;
// //         }
       

// //     // for(int i=0;i<size;i++){
// //     //     cout<<"Enter the element for index"<<i<<" ";
// //     //     cin>>arr[i];
// //     //     cout<<endl;
// //     // }
// //     // cout<<"The array is"<<endl;
// //     //   for(int i=0;i<size;i++){
        
// //     //     cout<<arr[i]<<" ";
        
// //     // }
// //     // arr[i]=value at(base address+data type size*index)
// // }
// // count zero's and one's 
// // #include<iostream>
// // using namespace std;
// // void printArray(int arr[],int size){
// //     int zeroCount =0;
// //     int oneCount =0;
// //     for(int i=0;i<size;i++){
// //         if(arr[i]==0){
// //             zeroCount++;
// //         }
// //         else{
// //             oneCount++;
// //         }
// //     }
// //     cout<<"The number of 0"<<" "<<zeroCount<<endl;
// //     cout<<"The number of 1 "<<" "<<oneCount<<endl;
// // }
// // int main(){
// //     int arr[]={0,1,0,1,0,1,0,1,1};
// //     int size=9;
// //     printArray(arr,size);
// // }
// // #include<iostream>
// // #include<limits.h>
// // using namespace std;
// // void printArray(int arr[],int size){
// //       int ans =INT_MAX;
// //     for(int i=0;i<size;i++){
        
// //         if(arr[i]<ans){
// //             ans=arr[i];
// //         }
        

// //     }
// //        cout<<ans;
// // }
// // int main(){
// //     int arr[5]={10,2,9,1,4};
// //     int size=5;
// //     printArray(arr,size); 
    
    
// //     }
// // reverse of an array
// // #include<iostream>
// // using namespace std;
// // void printArray(int arr[],int size){
// //     int left=0;
// //     int right =size-1;
// //     while(left<=right){
// //         // reverse
// //         // swap(arr[left],arr[right]);
// //         if(left==right){
// //             cout<<arr[left];
// //         }
// //         // printing extreme 
// //         else{
// //         cout<<arr[left]<<" ";
// //         cout<<arr[right]<<" ";
        
// //         }
// //         left++;
// //         right--;
// //     }
   
// // }

// // int main(){
// //     int arr[5]={10,20,30,40,50};
// //     int size=5;
// //     printArray(arr,size);

// // }
// // function call by refernce or by value 
// // // refernce variable it is the alias or the name given to the original variable,the new space is not created in the memory 
// // #include<iostream>
// // using namespace std;
// // void printA(int &a){
// //     a=a+1;
// //     cout<<a;

// // }

// // int main(){
// // // //     int a=5;
// // // //     int &k=a;
// // // //     cout<<k;
// // // //     cout<<a;
// // // //     a=a+1;
// // // //     cout<<a;
// // // //     cout<<k;
// // // //     k=k+1;
// // // //     cout<<k;
// // // // cout<<a;
// // // int a=2;
// // // function call by value
// // //  printA(a);

// // int a=3;
// // printA(a);
// // cout<<a;




// // }



// // find the unique elememt 
// // #include<iostream>
// // using namespace std;
// // void uniqueElement(int arr[],int size){
// //     int ans =0;
// //     for(int i=0;i<size;i++){
// //         ans=ans^arr[i];
// //     }
// //     cout<<"The Unique element is"<<ans ;
// // }
// // int main(){
// //     int arr[]={10,20,10,20,40,50,40,50,60};
// //     int size=9;
// //     uniqueElement(arr,size);
// // }


// // sort 0's and one's
// // -> zero's on the left and one 's on the right 
// // #include<iostream>
// // using namespace std;
// // void sortArray(int arr[],int size){
// //     int zeroCount =0;
// //     int oneCount =0;
// //     for(int i=0;i<size;i++){
// //         if(arr[i]==0){
// //             zeroCount++;

// //         }
// //         else if(arr[i]==1){
// //             oneCount++;

// //         }
// //     }
// //     cout<<"zeroCount"<<" "<<zeroCount<<endl;
// //     cout<<"oneCount "<<" "<<oneCount<<endl;
// //     int index=0;
// //     while(zeroCount--){
// //         arr[index]=0;
// //         index++;
// //     }
// //     while(oneCount--){
// //           arr[index]=1;
// //         index++;
// //     }
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }
// // int main(){
// //     int arr[]={0,1,0,1,0};
// //     int size=5;
// //     sortArray(arr,size);
// // }
// //  
// // // shift element of an array by one 
// // #include<iostream>
// // using namespace std;
// // void printArray(int arr[],int size){
// //     int temp=50;
// //     for(int i=size-1;i>=1;i--){
// //         arr[i]=arr[i-1];

// //     }
// //     arr[0]=temp;
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }

// // }
// // int main(){
// //     int arr[5]={10,20,30,40,50};
// //     int size=5;
// //     printArray(arr,size);
// // }
// // shift element by k bits lets say 2 bits then store last two elements in the temp variable 
// // #include<iostream>
// // using namespace std;
// // void printArray(int arr[],int size){
// //     int temp=50;
// //     int temp2=40;
// //     for(int i=size-1;i>=1;i--){
// //         arr[i]=arr[i-2];

// //     }
// //     arr[0]=temp;
// //     arr[1]=temp2;
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }

// // }
// // int main(){
// //     int arr[5]={10,20,30,40,50};
// //     int size=5;
// //     printArray(arr,size);
// // }


// // // dynamic array creation 
// // #include<iostream>
// // using namespace std;
// // void printArray(int arr[],int n){
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }


// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     int *arr=new int[n];
// //     for(int i=0;i<n;i++){
// //         int data =0;
// //         cin>>data;
// //         arr[i]=data ;

// //     }
// //     printArray(arr,n);
// // }

// // Vector -dynamic array
// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // void printVector(vector<int>arr){
// //     int size=arr.size();
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";

// //     }
// // }

// // int main(){
// //     vector<int>arr={10,20,30,40};
// //     arr.clear();
// //     printVector(arr);

// // }



// // 2-D array
// // #include<iostream>
// // using namespace std;
// // void printArray(int arr[3][3],int row,int col){
// //     for(int i=0;i<row;i++){
// //         for(int j=0;j<col;j++){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// // }


// // int main(){  
// //       int arr[3][3];
    
// //     int row=3;
// //     int col=3;
// //     for(int i=0;i<row;i++){
// //         for(int j=0;j<col;j++){
// //             cout<<"Enter the value for  row index"<<i<<" "<<"col index"<<j<<" ";
// //             cin>>arr[i][j];
// //         }
    
   
// //     }
// //      printArray(arr,row,col);
// // }
// // 
// // 
// // Find the maximum element in the 2-D array
// // transpose of a 2-D array
// #include<iostream>
// #include<vector>
// using namespace std;
// // void printArray(int arr[2][2],int row,int col){
    

// // //     int maxAns=INT_MIN;
// // //     for(int i=0;i<row;i++){
// // //         for(int j=0;j<col;j++){
// // //             if(arr[i][j]>maxAns){
// // //                 maxAns=arr[i][j];

// // //             }
// // //         }
// // //     }
// // //     cout<<"The max is "<<maxAns<<" "
// // for(int i=0;i<row;i++){
// //     for(int j=i;j<col;j++){
// //         swap(arr[i][j],arr[j][i]);
// //     }
// //     cout<<endl;
// // }
// //     for(int i=0;i<row;i++){
// //         for(int j=0;j<col;j++){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// // }



// // int main(){
// //     int arr[2][2]={
// //         {10,20},
// //         {30,40}
// //     };
// //     int row=2;
// //     int col=2;
// //     printArray(arr,row,col);

// // }

// // 2d vector 
// // vector<vector<int>>arr;

// int main(){
// vector<vector<int>>arr(5,vector<int>(10,2));
// for(int i=0;i<arr.size();i++){
//     for(int j=0;j<arr[i].size();j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }



// }

// // Jagged array using 2-D vector 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>>arr;
//     // we create 1-d vector here 
//     vector<int>arr1={1,2,3,4,5,6,7};
//     vector<int>arr2={8,9};
//     vector<int>arr3{10,11,12,13,14};
//     arr.push_back(arr1);
//      arr.push_back(arr2);
//       arr.push_back(arr3);
//     for(int i=0;i<arr.size();i++){
//         // us ith row ka size 
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }



// }  


//              YOU ALL DESERVE TO BE HAPPY!!!




// Shift element by 2 bit on the right
// #include<iostream>
// using namespace std;
// void shiftElement(int arr[],int size){
//     // start loop from the size-1;
//     // int temp=50;
//     // int b=60;
//     for(int i=size-1;i>=1;i--){
//         arr[i]=arr[i-2];

//     }
//     arr[0]=50;
//     arr[1]=60;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;
//     shiftElement(arr,size);
// }



// Jaggged array printing using 2-d vector 


// vector<vector<int>>arr;


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr;
    vector<int>arr1={10,20,30};
    vector<int>arr2={40,50,60,70,80};
    vector<int>arr3{100,110,120,130,140,150};
    arr.push_back(arr1);
    arr.push_back(arr2);
    arr.push_back(arr3);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}