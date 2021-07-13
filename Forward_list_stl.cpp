#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int>l1={15,30,45};
    //Use Push_front
    l1.push_front(10);
        l1.push_front(5);

        for(auto x:l1){
            cout<<x<<" ";
        }
        cout<<endl;

        // Pop
        l1.pop_front();
        
        for(auto x:l1){
            cout<<x<<" ";
        }
        cout<<endl;

        // Insert After
        auto it=l1.insert_after(l1.begin(),11);
          
        for(auto x:l1){
            cout<<x<<" ";
        }
        cout<<endl;
        it=l1.insert_after(it,{12,13,14});
          
        for(auto x:l1){
            cout<<x<<" ";
        }
        cout<<endl;

    return 0;
}