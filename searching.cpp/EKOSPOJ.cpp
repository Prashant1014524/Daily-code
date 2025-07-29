// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool isPossibleSolution(vector<long long int>trees,long long int m,long long int mid){
//     long long woodCollected=0;
//     for(int i=0;i<trees.size();i++){
//         if(trees[i]>mid){
//             woodCollected+=trees[i]-mid;

             

//         }

//     }
//     return woodCollected>=m;

// }
// long long int maxSawBladeHeight(vector<long long int>trees,long long int m){
//     long long int start=0;
//     long long int end;
//     end=*max_element(trees.begin(),trees.end());
//     int ans=-1;
//     while(start<=end){
//         long long int mid=start+(end-start)/2;
//         if(isPossibleSolution(trees,m,mid)){
//             ans=mid;
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return ans;

// }
// int main(){
//    long long int n,m;
//    cin>>n>>m;
//    vector<long long int>trees;
//    while(n--){
//     long long int height;
//     cin>>height;
//     trees.push_back(height);

//    }
   
//    cout<<maxSawBladeHeight(trees,m)<<endl;


// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleAns(const vector<int> &rank, int n, int mid) {
    int cookedParatha = 0;
    for (int i = 0; i < rank.size(); i++) {
        int R = rank[i];
        int timeTaken = 0;
        int j = 1;
        while (true) {
            timeTaken += j * R;
            if (timeTaken > mid) {
                break;
            }
            cookedParatha++;
            if (cookedParatha >= n) {
                return true;
            }
            j++;
        }
    }
    return false;
}

int main() {
    int n, T;
    cin >> n >> T;
    vector<int> rank;
    while(T--){
        int r;
        cin>>r;
        rank.push_back(r);
        
    }

    int maxRank = *max_element(rank.begin(), rank.end());
    int start = 0;
    int end = maxRank * (n * (n + 1) / 2);  // max possible time if slowest cook cooks all parathas
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossibleAns(rank, n, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
