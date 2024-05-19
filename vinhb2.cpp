#include<bits/stdc++.h>
using namespace std;
int main(){
    set<char> tmp;
    set<char> U={'a','b','c','d','e','f','g','h'};
    cout<<U.size();
    set<char> A={'a','b','f','h','k'};
    set<char> B={'b','g','h'};
    cout<<"A: ";
    for(auto x: U){
      if(A.count(x)>0) cout<<1;
      else cout<<0;
    }
    cout<<endl; 
    // ---------------------------------------
    cout<<"B: ";
    for(auto x: U){
      if(B.count(x)>0) cout<<1;
      else cout<<0;
    }
    cout<<endl;
    // ---------------------------------------
    cout<<"A giao B: ";
    for(auto x: A){
      if(B.count(x)>0) tmp.insert(x);
    }
    for(auto x: tmp) cout<<x<<" ";
    for(auto x: U){
      if(tmp.count(x)>0) cout<<1;
      else cout<<0;
    }
    tmp.clear();
    cout<<endl;
    // ---------------------------------------
    cout<<"B giao A: ";
    for(auto x: B){
      if(A.count(x)>0) tmp.insert(x);
    }
    for(auto x: tmp) cout<<x<<" ";
    for(auto x: U){
      if(tmp.count(x)>0) cout<<1;
      else cout<<0;
    }
    tmp.clear();
    cout<<endl;
    // ---------------------------------------
    cout<<"A hop B: ";
    for(auto x: A){
      tmp.insert(x);
    }
    for(auto x: B){
      tmp.insert(x);
    }
    for(auto x: tmp) cout<<x<<" ";
    for(auto x: U){
      if(tmp.count(x)>0) cout<<1;
      else cout<<0;
    }
    tmp.clear();
    cout<<endl;
    // ---------------------------------------
    cout<<"B hop A: ";
    for(auto x: B){
      tmp.insert(x);
    }
    for(auto x: A){
      tmp.insert(x);
    }
    for(auto x: tmp) cout<<x<<" ";
    for(auto x: U){
      if(tmp.count(x)>0) cout<<1;
      else cout<<0;
    }
    tmp.clear();
    cout<<endl;
    // ---------------------------------------
    cout<<"A/B: ";
    for(auto x: A){
      if(B.count(x)==0) tmp.insert(x);
    }
    for(auto x: U){
      if(tmp.count(x)>0) cout<<1;
      else cout<<0;
    }
    tmp.clear();
    cout<<endl;
    // ---------------------------------------
    cout<<"B/A: ";
    for(auto x: B){
      if(A.count(x)==0) tmp.insert(x);
    }
    for(auto x: U){
      if(tmp.count(x)>0) cout<<1;
      else cout<<0;
    }
    tmp.clear();
    cout<<endl;
    // ---------------------------------------
    cout<<"A tam giac B: ";
    for(auto x: A){
      if(B.count(x)==0) tmp.insert(x);
    }
    for(auto x: B){
      if(A.count(x)==0) tmp.insert(x);
    }
    for(auto x: tmp) cout<<x<<" ";
    for(auto x: U){
      if(tmp.count(x)>0) cout<<1;
      else cout<<0;
    }
    cout<<endl;
    tmp.clear();
}