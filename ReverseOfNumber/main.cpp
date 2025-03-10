#include <iostream>
using namespace std;

void reverse(int n){
    int rem;
    int num = n;
    
    while(num!=0){
        if(num%10 == 0){
            num /= 10;
        }else{
            rem = num % 10;
            cout << rem;
            num /= 10;
        }
        
    }
}


int main(){
    int n;
    cin >> n;
    reverse(n);
    return 0;
}