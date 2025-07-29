// // 18-03-2025
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<vector<int>>arr(5,vector<int>(10,0));
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr.size();j++){
//             cout<<arr[i][j]<<" ";

//         }
//         cout<<endl;
//     }

0// }
// Jagged Vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr;
    vector<int>arr1={1,2,3,4};
    vector<int>arr2={5,6,7};
    vector<int>arr3={8,9};
    arr.push_back(arr1);
    arr.push_back(arr2);
    arr.push_back(arr3);
    // printing the elements of the Jagged Array
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

}