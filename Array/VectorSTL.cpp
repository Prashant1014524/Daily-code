// #include<iostream>
// using namespace std;
// void printArray(int arr[],int n){
//     cout<<"The element in the array are"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     // creating a dynamic array
//     cout<<"Enter the size of an array you want to create"<<endl;
    
//     int n;
//     cin>>n;
//       int*arr=new int[n];
//     //   it will create a memory block according to the user input value.
//     for(int i=0;i<n;++i){
//         int element;
//         cin>>element;
//         arr[i]=element;
    
    
//     }
  
//     printArray(arr,n);
    



// }
// // Creating a Vector 
// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(vector<int>v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){
//     vector<int>v;
//     int n;
//     cin>>n;
//     // v.push_back(1);
//     // v.push_back(2);
//     // v.push_back(3);
//     // printVector(v);
//     // v.pop_back();
//     // cout<<endl;
//     // printVector(v);
//     for(int i=0;i<n;i++){
//         int d;
//         cin>>d;
//         v.push_back(d);
//     }
//     cout<<"The vector is "<<endl;
//     printVector(v);
//     // for(int i=0;i<10;i++){
//     //     v.push_back(30);
//     // }

//     // cout<<"Now the vector is"<<endl;
//     // printVector(v);
//     // I want to clear all the elements of an vector 
//     v.clear();
//     v.push_back(10);
//     printVector(v);
  
    


// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }

// }

// int main(){
//     vector<int>v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int d;
//         cin>>d;
//         v.push_back(d);
        

//     }

//     cout<<"the vector is"<<endl;
//     print(v);
//     cout<<endl;
//     cout<<"the vector is"<<endl;
//     cout<<endl;
//     v.clear();
//     v.push_back(10);
//     cout<<"now the vector is"<<endl;
//     print(v);


// }
// Printing first and last element of an vector 
// #include<iostream>
// #include<vector>
// using namespace std;



// int main(){
//     vector<int>arr={1,2,3,4};
//     cout<<"The first element of an vector is"<<endl;
//     cout<<arr[0]<<endl;
//     cout<<arr.front()<<endl;
//     cout<<"The last element of an vector are"<<endl;
//     cout<<arr[arr.size()-1]<<endl;
//     cout<<arr.back()<<endl;



// }
