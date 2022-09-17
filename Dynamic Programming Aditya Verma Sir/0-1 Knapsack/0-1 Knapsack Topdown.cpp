#include<iostream>
using namespace std;
int Knapsack(int wt[], int val[], int W, int n){
    int t[n+1][W+1];

    for(int i = 0;i<n+1;i++){
        for(int j = 0;j<W+1;j++){
            if(i == 0 || j == 0)
                t[i][j] = 0;
        }
    }
    for(int i = 0;i<n+1;i++){
        for(int j = 0;j<W+1;j++){
            if(wt[i-1]<= j)
                t[i][j] = max((val[i-1] + t[i-1][j - wt[i-1]), t[i-1][j]);
            if(wt[i-1]>j)
                t[i][j] = t[i-1][j];
        }
    }
    return t[n][W];
}
int main(){
    int n;
    cin>>n;
    int wt[n];
    int val[n];
    int W;

    for(int i = 0;i<n;i++)
        cin>>wt[i];
    
    for(int i = 0;i<n;i++)
        cin>>val[i];
    cout << Knapsack(wt, val, W, n);
<<<<<<< HEAD
}
=======
}
>>>>>>> e0cad02a4a8acc8c145c0ff7cf171ea7c5c3b531
