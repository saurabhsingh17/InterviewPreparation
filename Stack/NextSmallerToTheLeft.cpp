#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterToTheLeft(vector<int>vec){
    stack<int> st;
    vector<int> v;
    for(int i=0;i<vec.size();i++){
        if(st.empty()){
            v.push_back(-1);
            st.push(vec[i]);
        }
        else if(st.top()<vec[i]){
            v.push_back(st.top());
            st.push(vec[i]);
        }
        else if(st.top()>=vec[i]){
            while(!st.empty() && st.top()>=vec[i])
            st.pop();
            if(st.empty()){
                v.push_back(-1);
                st.push(vec[i]);
            }
            if(st.top()<vec[i]){
                v.push_back(st.top());
                st.push(vec[i]); 
            }
        }
    }
return v;
}
int main(){
vector<int>vec={0,0,0,1,1,1,1,1,111,1,2,1,1};
        vector<int>v=nextGreaterToTheLeft(vec);
        cout<<" ";
        for(int i=0;i<v.size();i++){
            cout<<vec[i]<<"  ";
        }
        cout<<"\n";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;



    return 0;
}