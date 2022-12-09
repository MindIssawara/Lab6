#include<iostream>
using namespace std;

int main(){
    int x[20],i=0,N=0,sumEven=0,sumOdd=0;
    do{
        cout << "Enter an integer: ";
        cin >> x[i];
        i++;
        N++;
    }while(x[i-1]!=0);
    i=0;
    while(i<N){
        if(x[i]%2==0){
            sumEven++;
        } else{
            sumOdd++;
        }
        i++;
    }
    cout << "#Even numbers = "<<sumEven-1<<endl;
    cout << "#Odd numbers = "<<sumOdd;
    return 0;
}