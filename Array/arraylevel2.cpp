// // find the unique element in the array ...e<ach element is repeated twice but only one is not repeated and that is the unique one 
// #include<iostream>
// using namespace std;
// int uniqueElement(int arr[],int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
    




// int main(){
//     int arr[]={10,20,10,20,13,14,13,15,14,15,12};
//     int size=11;
//     int finalAns=uniqueElement(arr,size);
//     cout<<"The Final Answer is"<<"  " <<finalAns<<endl;
    

// }
// #include<iostream>
// using namespace std;
// void uniqueElement(int arr[],int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans=ans^arr[i];
//     }
//     cout<<"The Unique Element in an Array is"<<" "<<ans<<endl;
// }

// int main(){
//     int arr[]={1,2,1,2,3,4,5,4,5};
//     int size=9;
//     uniqueElement(arr,size);



// }
// // find the unique element in the array
// #include<iostream>
// using namespace std;
//  int ans=0;
// void uniqueElement(int arr[],int size){
// for(int i=0;i<size;i++){
//     ans=ans^arr[i];

// }
// cout<<ans<<endl;
// }
// int main(){
// int arr[]={1,2,1,2,3,4,3,4,5};
// int size=9;
// cout<<"The unique element in the array is"<<endl;
// uniqueElement(arr,size);


// }
// sort 0's and 1's in the array



// #include<iostream>
// using namespace std;

// // count number of zero's and one's
// void sortElement(int arr[],int size){
//     int zeroCount=0;
//     int oneCount=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zeroCount++;

//         }
//         else if(arr[i]==1){
//             oneCount++;
//         }

//     }
//     cout<<zeroCount<<endl;
//     cout<<oneCount<<endl;
//     int i=0;
//     while(zeroCount--){
//         arr[i]=0;
//         i++;
//     }
//       while(oneCount--){
//         arr[i]=1;
//         i++;

//       }
 

// for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
// }



// }
// int main(){
//     int arr[]={0,0,1,0,1,0,1};
//     int size=7;
//     sortElement(arr,size);


//     return 0;

// }
// 
// shift element by 1
// #include<iostream>
// using namespace std;
// void shiftElement(int arr[],int size){
//     int temp=50;
//     for(int i=size-1;i>=1;i--){
//         arr[i]=arr[i-1];

//     }
//     arr[0]=temp;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<' ';
//     }


// }

// int main(){
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     shiftElement(arr,size);
     

// }

// shift by K

// // for an example shift element by 2
// #include<iostream>
// using namespace std;
// void shiftElement(int arr[],int size){
//     int temp=50;
//     int temp2=60;
    
//         for(int i=size;i>=1;i--){
//             arr[i]=arr[i-2];
//         }
//         arr[0]=temp;
//         arr[1]=60;
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     }




// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;;
//     shiftElement(arr,size);

// }
// print all zero's to the left,one to the middle ,2 to the right 

// #include<iostream>
// using namespace std;
// void sortElement(int arr[],int size){
//     // count number of zero,one,two
//     int zeroCount=0;
//     int oneCount =0;
//     int twoCount=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         else if(arr[i]==2){
//             twoCount++;

//         }
//         else if(arr[i]==1){
//             oneCount++;
//         }

//     }
//     cout<<"The number of one's "<<oneCount <<endl;
//     cout<<"The number of two's "<<twoCount <<endl;cout<<"The number of zero"<<" "<<zeroCount <<endl;
//     int index=0;
// while(zeroCount--){
//     arr[index]=0;
//     index++;

// }
// while(oneCount--){
//     arr[index]=1;
//     index++;
// }
// while(twoCount--){
//     arr[index]=2;
//     index++;
// }
// for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
// }

    
// }


// int main(){
// // 0's to the left ,2's to the right ,1's to the mid
// int arr[]={0,0,1,1,0,2,2,2,0,1};
// int size=10;
// sortElement(arr,size);
// }


// #include<iostream>
// using namespace std;
// int main(){


// }





