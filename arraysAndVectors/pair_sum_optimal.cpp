#include <iostream>
#include <vector>
using namespace std;

vector<int> answer (vector<int> num , int target){

    int n = num.size();
    int start = num[0];
    int end = num[n-1];
    int sum = 0;
    vector<int> ans;

    for(int i =1; i <= n; i++){
        sum = start + end;
        if(sum > target){
            end = num[n-1 -i];
        }else if(sum < target){
            start = num[i];
        }else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }

    return ans;
}

int main(){

    vector<int> num = {2,7,11,15};
    int target = 26;

    vector<int> output = answer(num,target);
    cout << output[0] << " "  << output[1] << endl;

    return 0;

}