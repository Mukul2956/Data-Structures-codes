#include<bits/stdc++.h>
using namespace std;

int funcN(int mid,int n,int m){
    int ans = 1;
    for(int i = 0;i < n;i++){
        ans = ans * mid;  //multilying mid for n number of times to get mid^n
        if(ans == m){  //then checking if it is greater than, equal to, or less than m
            return 0;
        }
        else if(ans > m){
            return 1;
        }
    }
    return 2;
}
int nthRoot(int n,int m){
    int low = 1, high = m;
    while(low <= high){
        int mid = (low+high)/2;
        int midN = funcN(mid,n,m);  //got mid from previous line and did mid^n by this function
        if(midN == 0){
            return mid;
        }
        else if(midN == 1){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n, m;
    cin >> m;
    cin >> n;
    int nthRootOfNum = nthRoot(n,m);
    cout << nthRootOfNum;
    return 0;
}