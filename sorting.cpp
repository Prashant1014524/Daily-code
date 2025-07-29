// #include<iostream>
// #include<vector>
// using namespace std;
// int bubbleSort(vector<int>arr,int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);

//             }
//         }

//     }
//     // printing the array
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     vector<int>arr={5,4,3,2,1};
//     int size=arr.size();
//     bubbleSort(arr,size);
// }

// Selection Sort 
// #include<iostream>
// using namespace std;
// int selectionSort(int arr[],int n){
//     // Step 1 find the min eleemt then swap it with the first element 
  
//     for(int i=0;i<n-1;i++){
//         int minIndx=i;
        
        

//         for(int j=i+1;j<n;j++){
//             if(arr[minIndx]>arr[j]){
//                 minIndx=j;
//             }
//         }
//         swap(arr[i],arr[minIndx]);
        
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }


// int main(){
//     int arr[]={44,22,11,33,55};
//     int size=5;
//     selectionSort(arr,size);

// }


// // Insertion Sort 
// #include<iostream>
// using namespace std;






