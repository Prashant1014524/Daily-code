// // function
// // #include<iostream>
// // using namespace std;
// // void printLine(){
// //     for(int i=0;i<5;i++){
// //         cout<<"hey!duniya"<<endl;
// //     }
// // }
// // int main(){
// //     // printLine(); function call
// //     printLine();

// // }
// // FUNCTION STACK CALL -STACK:-last in first out 
// #include<iostream>
// using namespace std;
// void PrintA(){
//     cout<<"Inside A"<<endl;
//     cout<<"going back to main"<<endl;

// }
// int main(){
//     cout<<"inside main"<<endl;
//     PrintA();
//     cout<<"again in main";
//     return 0;


// // }
// Ques 1:- Write a function to give the sum of three numbers 
// #include<iostream>
// using namespace std;
// int SumOfThreeNumbers(int a,int b,int c){
//     cout<<"The sum is:"<<endl;
//     return a+b+c;
// }


// int main(){
//     int a,b,c;
//     cout<<"enter three numbers"<<endl;
//     cin>>a>>b>>c;
//  cout<< SumOfThreeNumbers(a,b,c);
//     return 0;



// }
// // using void function
// #include<iostream>
// using namespace std;
// void printSum(int a,int b,int c){
//     cout<<"The Sum is"<<a+b+c<<endl;
// }
// int main(){
//     printSum(1,2,3);
//     return 0;

// }
// Q-2 : FIND MAXIMUM OF THREE NUMBER
// #include<iostream>
// using namespace std;
// void printMaximum(int a,int b,int c){
//     if(a>b&&a>c){
//         cout<<"the maximum is a"<<a<<endl;
//     }
//     else if(b>a&&b>c){
//          cout<<"the maximum is b"<<b<<endl;
//     }
//     else{
//          cout<<"the maximum is c"<<c<<endl;
//     }
// }
// int main(){
//     printMaximum(10,2,20);
//     return 0;

// }
// Q 3:-COUNTING 1 TO N
// #include<iostream>
// using namespace std;
// void printCount(int n){
//     for(int i=0;i<=n;i++){
//         cout<<i<<endl;
//     }
// }
// int main(){
//     printCount(10);
//     return 0;

// }
// Q 4:- Check even or odd
// #include<iostream>
// using namespace std;
// void printNumber(int n){
//     if(n%2==0){cout<<"The number is prime"<<n<<endl;
//     }
//     else{
//         cout<<"not prime ";
//     }
    
// }
// int main(){
//     printNumber(4);

// }
// Using bitwise operations 
// #include<iostream>
// using namespace std;
// void checkNumber(int n){
//     if(n&1){
//         cout<<"odd";
//     }
//     else{
//         cout<<"even";
//     }
    
// }
// int main(){
//     checkNumber(2);
// }
//sum of number 1 to n
// #include<iostream>
// using namespace std;
// void printSum(int n){
//     int sum=0;
    
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<sum;
// }
// int main(){
//     printSum(4);}
// check whether the given number is prime 
// #include<iostream>
// using namespace std;
// void checkPrime(int n){
//     if(n==2){
//         cout<<"prime" ;

//     }
//     else if(n%2==0){
//         cout<<"not Prime";

//     }
//     else{
//         cout<<"prime"<<endl;
//     }
// }
// int main(){
//     checkPrime(1);
//     return 0;

// }
// PRINT PRIME NUMBER FROM 1 TO N
// #include<iostream>
// using namespace std;
// bool checkPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){

//     int n;
//     cin>>n;

//     for(int i=2;i<=n;i++){
//         bool isPrime=checkPrime(i);
//         if(isPrime){
//             cout<<i<<endl;
//         }


        
//     }
//     return 0;
// }
// Set k bits code 
// #include<iostream>
// using namespace std;
// void setKBit(int n,int k){
//     int mask=1<<k;
//     int ans =mask|n;
//     cout<<ans;
// }

// int main(){
//     setKBit(10,2);

// }
// Creating a number from digit 
// #include<iostream>
// using namespace std;
// int printNumber(int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum*10+i;
//         cout<<"the number formed so far:"<<" "<<sum<<endl;

//     }
//     return sum;

// }




// int main(){
//     int n;
//     cout<<"enter the total number of digits of number you want to make"<<endl;
//     cin>>n;
//     cout<<printNumber(n);



// }
// print all digits of an integer 
#include<iostream>
using namespace std;
void printDigits(int number){
    while(number>0){
        int digits=number%10;
        cout<<digits <<endl;
 
    }

}




int main(){
    int number ;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    printDigits(number);
   

}