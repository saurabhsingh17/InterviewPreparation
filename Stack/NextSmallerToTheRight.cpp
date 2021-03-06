#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterToTheRight(vector<int>vec){
    vector<int> v;
    stack<int>stack;

    for(int i=vec.size()-1;i>=0;i--){
        if(stack.empty()){
            v.push_back(-1);
            stack.push(vec[i]);
        }
        else if(vec[i]>stack.top()){
            v.push_back(stack.top());
            stack.push(vec[i]);
        }
        else if(vec[i]<=stack.top()){
            while(!stack.empty() && vec[i]<=stack.top()){
                stack.pop();
            }
            if(stack.empty()){
                 v.push_back(-1);
                stack.push(vec[i]);
            }
            if(stack.top()<vec[i]){
                v.push_back(stack.top());
                stack.push(vec[i]);
            }
        }
    }
    reverse(v.begin(),v.end());
    return v;
}
int main(){

        vector<int> vec= {5,1,3,2};
        vector<int>v=nextGreaterToTheRight(vec);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    return 0;
}