// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number :"<<endl;
//     cin>>a;
//     if(a>0){
//         cout<<"positive"<<endl;
//     }
//     else if(a<0){
//         cout<<"negative"<<endl;

//     }
//     else{
//         cout<<"zero"<<endl;
//     }
    
//     return 0;
// }
// check even or odd number 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of number you want to check :"<<endl;
//     cin>>n;
//     if(n%2==0){
//         cout<<"even"<<endl;

//     }
//     else{
//         cout<<"odd"<<endl;
//     }
// }
// loops for loop4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;;
//     for(int i=1;i<=n;i=i+1){
//         cout<<"I am the best"<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<"A"<<" ";
    
//     }
// }
// 19 table 
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<"19"<<"*"<<i<<"="<<" "<<19*i<<endl;
//     }
// }
// print 1 to 100 all even number 
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=100;i++){
//         if(i%2==0){
//         cout<<"The Even Number is :"<<i<<endl;
//     }
//     }
// }
// pattern
// 
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<5;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int row=0;row<5;row++){
//         for(int col=0;col<5;col++){
//             if(row==0||row==4){
//                 cout<<"*";

//             }
//             else if(col==0||col==4){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//     }
// }
// inverted pyraamid 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"the number of rows "<<endl;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int rows=0;rows<n;rows++){
//         for(int col=0;col<rows+1;col++){
//             cout<<col+1;
//         }
//         cout<<endl;

//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<col+1;
        }
        cout<<endl;
    }
}

