
// // // // // // Char Array are faster than the string 



// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //  char ch[100];
// // // // // //  cin>>ch;   // it will only read the input stream upto enter ,space ,tab
// // // // // // //  .getLine() is used to take the inputs in the 

// // // // // // cout<<ch;  


// // // // // // }


// // // // // // getting the length of the char array
// // // // // #include<iostream>
// // // // // using namespace std;

// // // // // int findLength(char ch[100],int size){
// // // // //     int length=0;
// // // // //     for(int i=0;i<size;i++){
        
// // // // //         if(ch[i]=='\0'){
// // // // //             break;


// // // // //         }
// // // // //         else{
// // // // //             length++;
// // // // //         }
// // // // //     }
// // // // //     return length;
// // // // // }
// // // // // int main(){
// // // // //     char ch[100];
// // // // //     cin>>ch;
// // // // //     int len=findLength(ch,100);
// // // // //     cout<<len;

// // // // // }


// // // // // Reverse of an String
// // // // #include<iostream>
// // // // #include<string.h>
// // // // using namespace std;
// // // // // void reverseString(char ch[100],int len){
// // // // //     int left=0;
// // // // //     int right=len-1;
// // // // //     while(left<=right){
// // // // //         swap(ch[left],ch[right]);
// // // // //         left++;
// // // // //         right--;


// // // // //     }
// // // // //     for(int i=0;i<len;i++){
// // // // //         cout<<ch[i];
// // // // //     }

    
    
// // // // // }



// // // // // void upperCase(char ch[100],int len){
// // // // //     int i=0;
// // // // //     while(ch[i]!='\0'){
// // // // //         // my string can have lower & upper case values then i must hve check first that the char is in lower case and i should convert it into upper case
// // // // //         if(ch[i]>='a'&&ch[i]<='z'){
// // // // //             ch[i]=ch[i]-'a'+'A';


// // // // //         }
// // // // //         else {
// // // // //             i++;
// // // // //         }


// // // // //     }
// // // // // }


// // // // // insert space in the string when @came in the String 
// // // // // void insertSpace(char ch[100],int len){
// // // // //     int index=0;
// // // // //     while(ch[index]!='\0'){
// // // // //         if(ch[index]=='@'){
// // // // //             ch[index]=' ';
// // // // //         }
// // // // //         index++;

// // // // //     }
// // // // // }
// // // // int  checkPalindrome(char ch[100],int len){
// // // //     int left=0;
// // // //     int right=len-1;
// // // //     while(left<=right){
// // // //         if(ch[left]==ch[right]){
// // // //             left++;
// // // //             right--;


// // // //         }
// // // //         else {
// // // //             return -1;
// // // //         }
    
        

        
       
// // // //     }
// // // //     return 1;
// // // // }
// // // // int main(){
// // // //     char ch[100];
// // // //     cin.getline(ch,100);
// // // //     int len=strlen(ch);
// // // //     // reverseString(ch,len);
// // // // // cout<<ch;
// // // // // Converting the lower case () to upper case()
// // // // // upper case =lowercase-'a'+'A'
// // // // // upperCase(ch,len);
// // // // // cout<<ch;

// // // // // insert space in the string when @came 
// // // // // insertSpace(ch,len);
// // // // // cout<<ch;
// // // // // }
// // // // // Check Palindrome 
// // // // // int ans =checkPalindrome(ch,len);
// // // // // if (ans ==1){
// // // // //     cout<<"palindrome";
// // // // // }
// // // // // else {
// // // // //     cout<<"not palidrome";}

// // // // // }


// // // // strings :- they are dynamic in nature like the vector 
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // // // string str;     //you dont have to specify the length /size of the string '

// // // //     cin>>str;
// // // //     int i=0;
// // // //     while(str[i] != '\0'){
// // // //         cout<<"The index is"<<i<<" "<<"Element is "<<" "<<str[i]<<endl;
// // // //         i ++;



// // // //     }
// // // //     cout<<str[8];


// // // // string utilities have the varities of utitlities 

// // // // string str1=" Prashant Uniyal ";
// // // // string str2=" kumar ";
// // // // str1.insert(10,str2);
// // // // cout<<str1;

// // // string str1="yar tera super star";
// // // string str2="te";
// // // if(str1.find(str2)==string::npos){
// // //     cout<<"Not found";
// // // }
// // // else{
// // //     cout<<"found";
// // // }



// // // }
// // #include<iostream>
// // #include<string.h>
// // using namespace std;
// // int main(){
// //     int k=8;
    
// //     string str="hellloprashant";

// //     str.erase(str.end()-k,str.end());
// //     cout<<str<<endl;
// //     cout<<str.back();


// // }


// // Remove  the dupliacte from the string 


// #include<iostream>
// using namespace std;
// // void removeD(string str,int size){
// //     int index=0;
// //     string ans="";
// //     while(index<str.length()){
// //         if(ans.length()>0&&ans[ans.length()-1]==str[index]){
// //             ans.pop_back();
// //         }
// //         else{
// //             ans.push_back(str[index]);
// //         }
// //     index++;
    
// //     }

// // cout<<ans ;
// // }
// int main(){
//     // string str="abbaca";
//     // int size=str.length();
//     // removeD(str,size);

//     string s="abccab";
//     string s2="bcc";
//    cout<< s.find(s2);
// }


