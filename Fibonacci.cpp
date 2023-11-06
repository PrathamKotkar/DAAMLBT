#include<iostream>
#include<vector>
using namespace std;

int iStepFibonacci(int n){

    vector<int> f;

    f.push_back(0);
    f.push_back(1);

    int count = 2;
    for (int i = 2; i <= n; i++){
        count++;
        f.push_back(f[i-1] + f[i-2]);
    }
    return n;
}

int r_steps = 0;
int rStepFibonacci(int n){

    r_steps++;
    if(n == 0 || n == 1){
        return n;
    }
    else {
        return rStepFibonacci(n-1) + rStepFibonacci(n-2);
    }
}

int main(){
    int n;
    cout<<"Enter the index: "<<endl;
    cin>>n;
    cout<<"Fibonacci value: "<<rStepFibonacci(n)<<endl;
    cout<<"Steps for Iterative Fibonacci: "<<iStepFibonacci(n)<<endl;
    cout<<"Steps for Recursive Fibonacci: "<<r_steps<<endl;
}

