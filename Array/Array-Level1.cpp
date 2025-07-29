// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // //     // // int a=5;it create a memory block of 4 byte in memory and store 5 in it nd the name of variable is a but is have a memory addrress.
// // // // // // //     // // int a=5;
// // // // // // //     // // cout<<"The base address of a is :"<<&a<<endl;
// // // // // // //     // // cout<<"The size of a is"<<sizeof(a)<<endl;
// // // // // // //     // // int arr[10]; the array is created in memory having 10 memory block nd having size of 40 bytes and the name of array is arr nd it store only int values .
// // // // // // //     // int arr[10];
// // // // // // //     // cout<<"The base address of arr is :"<<&arr<<endl;
// // // // // // //     // cout<<"The base address of arr is :"<<arr<<endl;
// // // // // // //     // cout<<"The size of array is :"<<sizeof(arr);
// // // // // // //     // break loop
// // // // // // //     int n;
// // // // // // //     cin>>n;
// // // // // // //     for(int i=0;i<n;i++){
// // // // // // //         if(i==0){
// // // // // // //         cout<<"p"<<endl;
// // // // // // //         }
// // // // // // //         else{
// // // // // // //             cout<<i<<" ";
// // // // // // //         }
       

// // // // // // //     }


// // // // // // // }

// // // // // // // 23 JAN 2025 


// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // //     int arr[5];
// // // // // // //     int n=5;
// // // // // // //     cout<<"The elements of an array is"<<"  "<<endl;
// // // // // // //     for(int i=0;i<n;i++){
// // // // // // //         cout<<"The Element at position "<<i<<" "<<endl;
// // // // // // //         cin>>arr[i];

// // // // // // //     }
// // // // // // // // Doubling each element of an array
// // // // // // // for(int i=0;i<n;i++){
// // // // // // //     arr[i]=2*arr[i];

// // // // // // // }
// // // // // // // // Printing the array
// // // // // // // for(int i=0;i<n;i++){
// // // // // // //     cout<<arr[i]<<" ";
// // // // // // // }
// // // // // // // }



// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // // int main(){ 
// // // // // // //     int arr[5]={1,2,3,4,5};
// // // // // // //     int n=5;
// // // // // // //     int sum=0;
// // // // // // //     for(int i=0;i<n;i++){
// // // // // // //         sum=sum+arr[i];
// // // // // // //     }
// // // // // // //     cout<<"The sum of the elemnts is"<<sum<<endl;




// // // // // // // }
// // // // // // // Linear searching in an Array
// // // // // // int main(){
// // // // // //         int arr[5]={10,20,30,40,50};
// // // // // //         int n =5;
// // // // // //         int target=30;
// // // // // //         for(int i=0;i<n;i++){
// // // // // //             if(arr[i]==target){
// // // // // //                 cout<<"Element Found at postion "<<i<<endl;
// // // // // //                 break;

// // // // // //             }
// // // // // //             else{
// // // // // //                 continue;
// // // // // //                 cout<<"Element not found"<<endl;

// // // // // //             }
// // // // // //         }
 
// // // // // // }
// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     int arr[5]={10,20,30,40,50};
// // // // // //     int n=5;
// // // // // //     int target=20;
// // // // // //     for(int i=0;i<n;i++){
// // // // // //         if(arr[i]==target){
// // // // // //             cout<<"Element is found"<<endl;
// // // // // //             break;

// // // // // //         }
// // // // // //         else{
// // // // // //             continue;
// // // // // //             cout<<"not present "<<endl;

// // // // // //         }
// // // // // //     }
// // // // // // }
// // // // // // passing an array to the function
// // // // // // void printArray(int arr[],int n){
// // // // // //     for(int i=0;i<n;i++){
// // // // // //         cout<<arr[i]<<" ";
// // // // // // //     }

// // // // // // // }
// // // // // // // int main(){
// // // // // // //     int arr[5]={10,20,30,40,50};
// // // // // // //     int n=5;
// // // // // // //     printArray(arr,n);
// // // // // // // }


// // // // // // // count zero's and one's
// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // // void countNumber(int arr[],int n){
// // // // // // //     int zerocount=0;
// // // // // // //     int onecount=0;
// // // // // // //     for(int i=0;i<n;i++){
// // // // // // //         if(arr[i]==1){
// // // // // // //             onecount++;
// // // // // // //         }
// // // // // // //         else{
// // // // // // //             zerocount++;
// // // // // // //         }
// // // // // // //     }
// // // // // // //     cout<<"The number of zero's are"<<zerocount<<endl;
// // // // // // //     cout<<"the number of one's count"<<onecount;
   

// // // // // // // }
// // // // // // // int main(){
// // // // // // //     int arr[5]={1,0,1,0,1};
// // // // // // //     int n=5;
// // // // // // //     countNumber(arr,n);


// // // // // // // }
// // // // // // // finding minimum element in an array
// // // // // // #include<limits.h>

// // // // // // int minElement(int arr[],int n){
// // // // // //     int minAns=INT_MAX;
// // // // // //     for(int i=0;i<n;i++){
// // // // // //         if(arr[i]<INT_MAX){
// // // // // //             minAns=arr[i];

// // // // // //         }
// // // // // //     }
// // // // // //     return minAns;
// // // // // // }
// // // // // // int main(){
// // // // // //     int arr[5]={10,20,30,40,50};
// // // // // //     int n=5;
// // // // // //     minElement(arr,n);
// // // // // //     cout<<"The minimum element is"<<" "<<minElement<<endl;
// // // // // // }

// // // // // // Finding the miniumn element of an array
// // // // // 3
// // // // // #include<iostream>
// // // // // #include<limits.h>
// // // // // using namespace std;
// // // // // int minElement(int arr[],int n){
// // // // //     int minElement=INT_MAX;
// // // // //     for(int i=0;i<n;i++){
// // // // //         if(arr[i]<minElement){
// // // // //             minElement=arr[i];
            
// // // // //         }
        
// // // // //     }
// // // // //     cout<<"Min element"<<" "<<minElement<<endl;

// // // // // }
// // // // // int main(){
// // // // //     int arr[5]={10,20,30,40,50};
// // // // //     int n=5;
// // // // //     minElement(arr,n);


// // // // // }
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // void reverseArray(int arr[],int n){
// // // // //     int left=0;
// // // // //     int right=n-1;
// // // // //     while(left<=right){
// // // // //         swap(arr[left],arr[right]);
// // // // //         left++;
// // // // //         right--;

// // // // //     }
// // // // //     for(int i=0;i<n;i++){
// // // // //         cout<<arr[i]<<" ";
// // // // //     }
// // // // // }
// // // // // int main(){
// // // // //     int arr[5]={10,20,30,40,50};
// // // // //     int n=5;
// // // // //     reverseArray(arr,n);

// // // // // }


// // // // //reverse an array:- two pointer approach
// // // // #include<iostream>
// // // // using namespace std;
// // // // // int reverseArray(int arr[],int n){
// // // // //     // defining two pointer's
// // // // //     int left=0;
// // // // //     int right=n-1;
// // // // //     while(left<=right){
// // // // //         swap(arr[left],arr[right]);
// // // // //         left++;
// // // // //         right--;

// // // // //     }
// // // // //     cout<<"Printing an reverse array"<<endl;
// // // // //     for(int i=0;i<n;i++){
// // // // //         cout<<arr[i]<<" ";

// // // // //     }
// // // // // }
// // // // // printing an exterme element of an array
// // // // // int printExtreme(int arr[],int n){
// // // // //     int left=0;
// // // // //     int right=n-1;
// // // // //     while(left<=right){
// // // // //         if(left==right){
// // // // //             cout<<arr[left];
// // // // //         }
// // // // //         else{
// // // // //         cout<<arr[left]<<" "<<arr[right]<<" ";
// // // // //         left++;
// // // // //         right--;
// // // // //     }
 
// // // // // }}

// // // // // int main(){
// // // // //     int arr[5]={10,20,30,40,50};
// // // // //     int n=5;
// // // // //     // reverseArray(arr,n);
// // // // //     printExtreme(arr,n);


// // // // // }

// // // // // finding the unique element in an array

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int uniqueElement(int arr[],int n){
// // // // //     int ans=0;
// // // // //     for(int i=0;i<n;i++){
// // // // //         ans=ans^arr[i];
// // // // //     }
// // // // //     cout<<"Unique Element"<<" "<<ans;
// // // // // }
// // // // // int main(){
// // // // //     int arr[5]={1,2,1,2,3};
// // // // //     int n=5;
// // // // //     uniqueElement(arr,n);
// // // // // }
// // // // // sort zero's and one's in an array:-> 1 :- Count zero's and one's 
// // // // // 2:- place the zero's and one's

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int countValues(int arr[],int n){
// // // // //     int zerocount=0;
// // // // //     int onecount=0;
// // // // //     for(int i=0;i<n;i++){
// // // // //         if(arr[i]==0){
// // // // //             zerocount++;

// // // // //         }
// // // // //         else if(arr[i]==1){
// // // // //             onecount++;

// // // // //         }
// // // // //     }
// // // // //     cout<<"zero's"<<" "<<zerocount;
// // // // //     cout<<"one's count"<<" "<<onecount;
// // // // //     // place zero's and one's
// // // // //     int index=0;
// // // // //     while(zerocount--){
// // // // //         arr[index]=0;
// // // // //         index++;
// // // // //     }
// // // // //     while(onecount--){
// // // // //         arr[index]=1;
// // // // //         index++;
// // // // //     }


// // // // // }
// // // // // int main(){
// // // // //     int arr[5]={0,1,0,1,0};
// // // // //     int n=5;
// // // // //     countValues(arr,n);
    

// // // // // }
// // // // // = assignment operator 
// // // // // == equality o/p

// // // // // shifting of an element by one 
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // // int shiftElement(int arr[],int n){
// // // // // //     int temp=50;
// // // // // //     for(int i=n-1;i>=1;i--){
// // // // // //         arr[i]=arr[i-1];
// // // // // //     }
// // // // // //     arr[0]=temp;
// // // // // //     cout<<" ";
// // // // // //     for(int i=0;i<n;i++){
// // // // // //         cout<<arr[i]<<" ";
// // // // // // //     }
// // // // // // int shiftElement(int arr[],int n){
// // // // // //     int temp=50;
// // // // // //     int temp2=40;
// // // // // //     for(int i=n-1;i>=1;i--){
// // // // // //         arr[i]=arr[i-2];
// // // // // //     }
// // // // // //     arr[0]=temp2;
// // // // // //     arr[1]=temp;


// // // // // //     cout<<" ";
// // // // // //     for(int i=0;i<n;i++){
// // // // // //         cout<<arr[i]<<" ";
// // // // // //     }
// // // // // // }
// // // // // // int main(){
// // // // // //     int arr[5]={10,20,30,40,50};
// // // // // //     int n=5;
// // // // // //     shiftElement(arr,n);
// // // // // // }
// // // // // // // shift by k bits let's say 2 bits

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // void shiftElement(int arr[],int n){
// // // // //     int temp=5;
// // // // //     for(int i=n-1;i>=1;i--){
// // // // //         swap(arr[i],arr[i-1]);

// // // // //     }
// // // // //     arr[0]=temp;
// // // // //     for(int i=0;i<n;i++){
// // // // //         cout<<arr[i]<<" ";
// // // // //     }

// // // // // }
// // // // // int main(){
// // // // //     int arr[5]={1,2,3,4,5};
// // // // //     int n=5;
// // // // //     shiftElement(arr,n);
// // // // // }


// // // // // stl :-standard template library provides the collection of template class and function that offers common data structure and algorithm to make programmming more efficeint and convinent 


// // // // // Vector:-in C++ it is the dynamically array that grow or shrink in the size making it effective for storing and manipulating sequence of element 
// // // // // dynamic array
// // // // // int n;
// // // // // cin>>n;
// // // // // int *arr=new int[n];
// // // // // int *arr=new int[n];

// // // // // // In vector don't tell the size of vector just keep inserting element,I will manage the allocation's
// // // // // #include<iostream>
// // // // // #include<vector>
// // // // // using namespace std;
// // // // // void print(vector<int>v){
// // // // //     int size=v.size();
// // // // //     for(int i=0;i<size;i++){
// // // // //         cout<<v[i]<<" ";
// // // // //     }
// // // // // }
// // // // // int main(){
// // // // //     // vector<int>v;
// // // // //     // v.push_back(1);
// // // // //     //  v.push_back(2);
// // // // //     //  print(v);
// // // // //     // vector<int>v;
// // // // //     vector<int>v(5,-1);
// // // // //     // vector<int>v={1,2,3};
// // // // //     print(v);
// // // // //     cout<<v.size();

// // // // // }


// // // // // 2 D array c*i+j
// // // // #include<iostream>
// // // // using namespace std;
// // // // void printArray(int arr[3][4],int row,int col){
// // // //     for(int i=0;i<row;i++){
// // // //         for(int j=0;j<col;j++){
// // // //             cout<<arr[i][j]<<" "; 

// // // //         }
// // // //         cout<<endl;
// // // //     }

// // // // }
// // // // int main(){
// // // //     int arr[3][4]={{10,20,30,40},
// // // //     {50,60,70,80},
// // // //     {90,100,110,120}};
// // // //     int row=3;
// // // //     int col=4;
// // // //     printArray(arr,row,col);
// // // // }
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int arr[5]={1,2,3,4,5};
// // // //     cout<<sizeof(arr)/sizeof(arr[0])<<" ";1

// // // // }

// // // // finding maximum Element from 2D array using the Linear Search

// // // // #include<iostream>
// // // // #include<limits.h>

// // // // using namespace std;
// // // // void maxElement(int arr[3][4],int row,int col){
// // // //     int maxAns=INT_MIN;
// // // //     for(int i=0;i<row;i++){
// // // //         for(int j=0;j<col;j++){
// // // //             if(arr[i][j]>maxAns){
// // // //                 maxAns=arr[i][j];
// // // //             }
// // // //         }
// // // //     }
// // // //     cout<<maxAns;
// // // // }
// // // // int main(){
// // // //     int arr[3][4]={{1,2,3,4},
// // // //     {5,6,7,8},{9,10,11,12}
// // // //     };
// // // //     int row=3;
// // // //     int col=4;
    
// // // //     maxElement(arr,row,col);
    
// // // // }

// // // // // Printing the transpose of an Array
// // // // #include<iostream>
// // // // using namespace std;
// // // // void transposeArray(int arr[3][3],int row,int col){
// // // //     for(int i=0;i<row;i++){
// // // //         for(int j=i;j<col;j++){
// // // //             swap(arr[i][j],arr[j][i]);
// // // //         }
// // // //     }
// // // // }
// // // // void printArray(int arr[3][3],int row,int col) {
// // // //     for(int i=0;i<row;i++){
// // // //         for(int j=0;j<col;j++){
// // // //             cout<<arr[i][j]<<" ";
// // // //         }
// // // //         cout<<endl;
// // // //     }
// // // // }


// // // // int main(){
// // // //     int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
// // // //     int row=3;
// // // //     int col=3;
// // // //     transposeArray(arr,row,col);
// // // //     printArray(arr,row,col);
// // // // }



// // // // 2-D Vector 
// // // // vector<vector<int>>arr;
// // // // vector<vector><int>arr;
// // // // vector<vector><int>arr;
// // // // #include<iostream>
// // // // using namespace std;
// // // // #include<vector>
// // // // int main(){
// // // //     vector<vector<int>>arr(5,vector<int>(10,0));
// // // //     for(int i=0;i<arr.size();i++){
// // // //         for(int j=0;j<arr[i].size();j++){
// // // //             cout<<arr[i][j];

// // // //         }
// // // //         cout<<endl;

// // // //     }

// // // // }


// // // // Jagged Array
// // // // #include<iostream>
// // // // #include<vector>
// // // // using namespace std;
// // // // int main(){
// // // //     vector<vector<int>>arr;
// // // //     vector<int>arr1={1,2,3};
// // // //     vector<int>arr2={4,5,6,7,8,9};
// // // //     vector<int>arr3={10,11,12,13,14,15,17};
// // // //     arr.push_back(arr1);
// // // //     arr.push_back(arr2);arr.push_back(arr3);
// // // //     for(int i=0;i<arr.size();i++){
// // // //         for(int j=0;j<arr[i].size();j++){
// // // //             cout<<arr[i][j]<<" ";
// // // //         }
// // // //         cout<<endl;
// // // //     }

// // // // // }
// // // // #include<iostream>
// // // // #include<vector>
// // // // using namespace std;
// // // // int main(){
// // // //     vector<int>v={1,23,22};
// // // //     cout<<v.size();
// // // // }

// // // // 3-2-25
// // // #include<iostream>           
// // // using namespace std;
// // // // void transposeArray(int arr[3][3],int row,int col){
// // // //     for(int i=0;i<row;i++){
// // // //         for(int j=i;j<col;j++){
// // // //             swap(arr[i][j],arr[j][i]);

// // // //         }
// // // //     }


// // // // }
// // // // void printArray(int arr[3][3],int row,int col){
// // // //     for(int i=0;i<row;i++){
// // // //         for(int j=0;j<col;j++){
// // // //             cout<<arr[i][j]<<" ";
// // // //         }
// // // //         cout<<endl;
// // // //     }
// // // // }
// // // // int main(){
// // // //     int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
// // // //     int row=3;
// // // //     int col=3;
// // // //     transposeArray(arr,row,col);
// // // //     printArray(arr,row,col);
// // // // }


// // // // sorting the element of an array :- same problem as a sorting colors red ,blue ,green 1:- Counting method 2:- 2-Pointer approach  3:- Sorting 
// // // void sortArray(int arr[],int size){
// // //     int left=0;
// // //     int right=size-1;
// // //     int index=0;

// // //     while(index<=right){
// // //         if(arr[index]==0){
// // //             swap(arr[index],arr[left]);
// // //             index++;
// // //             left++;
// // //         }
// // //         else if(arr[index]==2){
// // //             swap(arr[index],arr[right]);
// // //             right--;   

// // //         }
// // //         else{
// // //             index++;    // this is when arr[index]==1 and we also want sorted array in the form 0,0,0,1,1,2,2

// // //         }
// // //     }
// // // }
// // // void printArray(int arr[],int size){ 
// // //     for(int i=0;i<size;i++){
// // //         cout<<arr[i]<<" "; 
       
// // // // }
// // // //     }




// // // // int main(){
// // // //     int arr[]={0,1,0,1,0,1,2};
// // // //     int size=7;
// // // //     sortArray(arr,size);
// // // //     printArray(arr,size);

// // // // }
// // // // rotate array by k bits using modulus 
// // // #include<iostream>
// // // using namespace std;
// // // void rotateArray(int arr[],int size){
// // //     int arr2[5];
// // //     // using the moudlus
// // //     for(int i=0;i<size;i++){
// // //         int newIndex=(i+2)%size;
// // //         arr2[newIndex]=arr[i];


// // //     }
// // //     arr=arr2;
// // //     for(int i=0;i<size;i++){
// // //         cout<<arr[i]<<" "; 
       
// // // }
// // // }

// // // void printArray(int arr[],int size){
// // //     cout<<"Orignial Array"<<endl;
// // //     for(int i=0;i<size;i++){
// // //         cout<<arr[i]<<" ";
// // //     }
// // // }    
    





// // // int main(){
// // //     int arr[]={10,20,30,40,50};
// // //     int size=5;

// // //     rotateArray(arr,size);
// // //     printArray(arr,size);
// // // }


// // // // find missing element of an array
// // // #include<iostream>
// // // using namespace std;
// // // void totalArray(int arr[],int size){
// // //     int totalsum=(size*(size+1)/2);
// // //     int sum=0;
// // //     for(int i=0;i<size;i++){
// // //          sum=sum+arr[i];
// // //     }
// // //     cout<<endl;
// // //     cout<<"Missing term is"<<totalsum-sum<<" ";


// // // }



// // // int main(){
// // //     int arr[5]={1,3,2,4};
// // //     int size=5;
// // //     totalArray(arr,size);

    
// // // }


// // // 12-03-2025
// // // passing an array to the function
// // // #include<iostream>
// // // using namespace std;
// // // void printArray(int arr[],int size){
// // //     for(int i=0;i<size;i++){
// // //         cout<<arr[i]<<" ";
// // //     }
// // // }

// // // int main(){
// // //     int arr[5]={10,20,30 ,40,50};
// // //     int size =5;
// // //     printArray(arr,size);
// // // }



// // // Count 0's and 1's in the Array


// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int arr[]={0,1,0,1,0,1};
// // //     int size=6;         // it is the number of elements in the array
// // //     int zeroCount=0;
// // //     int oneCount=0;
// // //     for(int i=0;i<size;i++){
// // //         if(arr[i]==0){
// // //             zeroCount++;
// // //         }
// // //         else{
// // //             oneCount++;
// // //         }
// // //     }


// // //     cout<<"The number of Zero's"<<zeroCount<<endl;
// // //     cout<<"The number of one's "<<oneCount<<endl;

// // // }


// // // find the minimum numbe rof element in the Arry
// // // #include<iostream>
// // // #include<limits.h>
// // // using namespace std;
// // // int main(){
// // //     int arr[]={10,2,20,30};
// // //     int size=4;
// // //     int minAns=INT_MAX;
// // //     for(int i=0;i<size;i++){
// // //         if(arr[i]<minAns){
// // //             minAns=arr[i];
// // //         }
// // //     }
// // //     cout<<"The minimum ans is"<<minAns<<endl;


    

// // // }
// // // it is the best practice always that you should make the function always

// // // #include<iostream>
// // // #include<limits.h>
// // // using namespace std;

// // // int minAns(int arr[],int size){
// // //     int minAns=INT_MAX;
// // //     for(int i=0;i<size;i++){
// // //         if(arr[i]<minAns){
// // //             minAns=arr[i];
// // //         }
// // //     }
// // //     return minAns;
// // // }


// // // int main(){
// // //     int arr[]={10,20,-3,4};
// // //     int size=4;
// // //   cout<<  minAns(arr,size)<<endl;

// // // }

// // // // Reverse of an Array using the 2 Pointer Approach
// // // #include<iostream>
// // // using namespace std;

// // // int reverse(int arr[],int size){
// // //     int left=0;
// // //     int right=size-1;
// // //     while(left<=right){
// // //         swap(arr[left],arr[right]);

// // //         left++;
// // //         right--;
// // //     }
// // //     for(int i=0;i<size;i++){
// // //         cout<<arr[i]<<" ";

// // //     }



// // // }


// // // int main(){

// // //     int arr[]={10,20,30,40,50};
// // //     int size=5;
// // //     reverse(arr,size);

// // // }

// // // // as it is using the 2 pointer try it to solve using the 1 pointer approach


// // // #include<iostream>
// // // using namespace std;

// // // int reverseArray(int arr[],int size){
// // //     int counter=size-1;
// // //     for(int i=0;i<=(size-1)/2;i++){
// // //         swap(arr[i],arr[counter]);
// // //         i++;
// // //         counter--;

// // //     }
// // //     for(int i=0;i<size-1;i++){
// // //         cout<<arr[i]<<" ";
// // //     }

// // // }
// // // int main(){
// // //     int arr[]={10,20,30,40};
// // //     int size=5;


// // // }
// // // for unique number find the XOR of the elements 

// // // shift of the elements of Array by 2 bits
// // #include<iostream>
// // using namespace std;
// // int reverseArray(int arr[],int size){
// //     int temp=50;
// //     int temp2=40;
// //     for(int i=size-1;i>=1;i--){
// //         arr[i]=arr[i-2];
// //     }
// //     arr[0]=40;
// //     arr[1
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }
// // int main(){
// //     int arr[]={10,20,30,40,50};
// //     int size=5;
// //     reverseArray(arr,size);
// // }



// // vector -dynamic array


// // dont tell the size of vector ,just keep inserting the element i will manage the allocation

// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // void printVector(vector<int>v){
// //     int size=v.size();
// //     for(int i=0;i<size;i++){
// //         cout<<v[i]<<" ";
// //         }
// // }

// // int main(){
// //     vector<int>v;
// //     v.push_back(1);
// //     v.push_back(2);
// //     v.push_back(3);
// //     v.push_back(4);
// //     printVector(v);
// // }



// // 2-D Array

// #include<iostream>
// using namespace std;
// void dArray(int arr[3][4],int row,int col){

//     // Taking input in the Array
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
            
//         cout<<"Enter the element for row"<<i<<" column"<<j<<endl;
//             cin>>arr[i][j];

//         }
//     }


//     // Printing the array
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// }
// int main(){
//     int arr[3][4];
//     int row=3;
//     int col=4;
//     dArray(arr,row,col);
// }




// printing the transpose of an Array

// #include<iostream>
// using namespace std;
// void transposeArray(int arr[3][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=i;j<col;j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }


// }

// void printArray(int arr[3][3],int row,int col){for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//        cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

    
// }



// int main(){
//     int arr[3][3]={
//         {10,20,30},
//         {40,50,60},
//         {70,80,90}
//     };
//     int row =3;
//     int col=3;
//     transposeArray(arr,row,col);
//     printArray(arr,row,col);
//     return 0;

// }


// question in  java exam

// #include<iostream>
// using namespace std;


// int main(){
//     int lastdigit=50;
//     int num=0;
//     int sum=0;
//     while(num<=50){
//         if((num%5||num%7)==0){
//             sum=sum+num;
//         }
//             num++;              // here we have not used the else and put num++ inside it because if the if condtion met then it will not go to else part and the number remains same it will not increment and resulting in the infinite loop




    

//     }
//     cout<<sum<<endl;

// }

// 2D vector

// 18-07-2025


// find the miniumum number in an Array
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int minArray(int arr[],int n){
//     int ans=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<ans ){
//             ans=arr[i];
//         }
        
       
//     }
//     return ans ;
// }
// int main(){
//     int arr[5]={10,3,20,40,50};
//     int n=5;
//   int minAns=  minArray(arr,n);
// cout<<"the minium ans is"<<minAns<<endl;
// }


// reverse of an array using 2 pointer
// i/p arr-[10,20,30,40,50]
// o/p arr=[50,40,30,20,10]

// #include<iostream>
// using namespace std;
// void reverseArray(int arr[],int size){
//     int left=0;
//     int right=size-1;
//     while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;


//     }
//     // printing the reverse array

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     int arr[5]={10,20,30,40};
//     int size=4;
//     reverseArray(arr,size);


// }



// shift element of an Array by one ?

// #include<iostream>
// using namespace std;
// void shiftArray(int arr[],int size){
//     int temp=50;
//     for(int i=size-1;i>=1;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";

//     }
// }
// int main(){
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     shiftArray(arr,size);
// }
// shift element by 2 
// #include<iostream>
// using namespace std;
// void shiftArray(int arr[],int size){
//     int temp1=40;
//     int temp2=50;
//     for(int i=size-1;i>=1;i--){
//         arr[i]=arr[i-2];
//     }
 
//     arr[0]=temp1;
//     arr[1]=temp2;
//        for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     shiftArray(arr,size);

// }



// vectors 
// STL -Standard template Library
// in vector domt tell the size of the vector just keep inserting the elements
// #include<iostream>
// using namespace std;
// void print(vector<int>v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }

// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     print(v);



// }


// vector<int>arr={10,20,30,40};



// findig the maximum element in an  2-d array
// #include<iostream>
// #include<limits.h>

// using namespace std;
// int maxElement(int arr[3][3],int row,int col){
//     int ans=INT_MIN;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]>ans){
//                 ans=arr[i][j];
//             }

//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
//     int row=3;
//     int col=3;
// cout<<"The maximum element in the 2D array is"<<maxElement(arr,row,col);


// }



// diagonal wise sum print 
// printing the transpose of the Array


// 2D vector

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>>arr(5,vector<int>(10,0));
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// jagged array
// 1 2 3
// 4 5 6 7 8
// 9 10 11 12 13 14 

// Rotate Array by Kbits using modulus apporach and previously done is swappig 

// #include<iostream>
// using namespace std;
// void shiftArray(int arr[],int size){
//     int arr2[5];


//     for(int i=0;i<size;i++){
//         int newIndex=(i+2)%size;
//         arr2[newIndex]=arr[i];

//     }
//     arr=arr2;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
        
//     }

// }
// int main(){

//     int arr[5]={10,20,30,40,50};
//     int size=5;
//     shiftArray(arr,size);

// }

// sort 0's and 1' using the 3 pointer apporach 
// #include<iostream>
// using namespace std;
// void sortArray(int arr[],int size){
//     int left=0;
//     int right=size-1;
//     int index=0;
//     while(index<=right){
//         if(arr[index]==0){
//             swap(arr[index],arr[left]);
//             left++;
//             index++;
//         }
//         else if(arr[index]==2){
//             swap(arr[index],arr[right]);
//             right--;
//         }
//         else{
//             index++;
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }int main(){
//     int arr[]={0,1,2,0,1,2};
//     int size=6;
//     sortArray(arr,size);
// }


