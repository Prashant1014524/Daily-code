// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n=5;
// //     int&K=n;
// //     cout<<"n"<<" "<<n<<endl;
// //     cout<<"K"<<" "<<K<<endl;
// //     K++;
// //     n++;
// //      cout<<"n"<<" "<<n<<endl;
// //     cout<<"K"<<" "<<K<<endl;
// //     n++;
// //       cout<<"n"<<" "<<n<<endl;
// //     cout<<"K"<<" "<<K<<endl;
// //     int&c=n;
// //     cout<<c;

// // }
// // Function call by Value
// #include<iostream>
// using namespace std;
// // int incrementByOne(int n){
// //     n++;
// //     return n;
// // }
// void incrementByOne(int&n){
//     n=n+1;

// }


// int main(){
//     int n;
//     cin>>n;
//     incrementByOne(n);
//     cout<<"n"<<" "<<n;

// }
#include<iostream>
using namespace std;
void multiplyByOne(int&k){
    k=k*10;
}
int main(){
    int n=1;
    multiplyByOne(n);
    cout<<n;


}