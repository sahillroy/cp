 #include <bits/stdc++.h>
 using namespace std;
 
using state=pair<int,int>;
class LFUCache {
public:
    int t; //time
    map<int,pair<int,int>> mpp1;  //< key, <number of times used, last used time> >
    multiset<pair<pair<int,int>, int>> mst;  /*
    used for insertion and deletion, it stores
    < <number of times used, last used time>,key >
    What it stores is exactly opposite to mpp1;
    */
    map<int,int> mpp2; //key,value 
    int capacity;

    LFUCache(int capacity) {
        this->capacity=capacity;
        t=1;
    }
    
    int get(int key) {
        if(mpp2.find(key)!=mpp2.end()){
            state s1=mpp1[key];
            mst.erase(mst.find(make_pair(s1,key)));

            mpp1[key].first=mpp1[key].first+1;  //increment the number of times used
            mpp1[key].second=t;  //change the time of last used
            s1=mpp1[key]; //get the new state for reinserting in mst
            mst.insert(make_pair(s1,key));

            t++;
            return mpp2[key];
        }
        else {
            return -1;
        }
    }
    
    void put(int key, int value) {
        
        if(mpp2.size()==capacity && mpp2.find(key)==mpp2.end()){
            int keyToRemove=mst.begin()->second;
            state s1=mpp1[keyToRemove];
        
            mst.erase(mst.find(make_pair(s1,keyToRemove)));
            mpp1.erase(keyToRemove);
            mpp2.erase(keyToRemove);
            
        }

        if(mpp2.find(key)!=mpp2.end()){
            mpp2[key]=value;

            state s1=mpp1[key];
            mst.erase(make_pair(s1,key));
            mpp1[key].first++;
            mpp1[key].second=t;
            s1=mpp1[key];
            mst.insert(make_pair(s1,key));
            t++;
            
        }
        else{
            mpp2[key]=value;
            mpp1[key].first=1;
            mpp1[key].second=t;
            state s2=mpp1[key];
            mst.insert(make_pair(s2,key));
            t++;
         
        }
    }
};
int main() {
     int capacity;
     cout<<"Enter the capacity of LFU Cache: "; 
        cin>>capacity;
    LFUCache* obj = new LFUCache(capacity);
    int n;  
    cout<<"Enter the number of operations: ";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        string op;
        cout<<"Enter the operation (get/put): ";
        cin>>op;
        if(op=="get"){
            int key;
            cout<<"Enter the key to get: ";
            cin>>key;
            int result = obj->get(key);
            cout<<"Value for key "<<key<<": "<<result<<endl;
        }
        else if(op=="put"){
            int key, value;
            cout<<"Enter the key and value to put: ";
            cin>>key>>value;
            obj->put(key, value);
            cout<<"Inserted/Updated key "<<key<<" with value "<<value<<endl;
        }
        else{
            cout<<"Invalid operation. Please enter 'get' or 'put'."<<endl;
        }
     return 0;
 }
}
/*
In this implementation, we define a class LFUCache that has three main data structures:
1. mpp1: A map that stores the key and a pair of values (number of times used, last used time) for each key.
2. mst: A multiset that stores pairs of (number of times used, last used time) and the corresponding key. This is used to quickly 
find the least frequently used key.
3. mpp2: A map that stores the key and its corresponding value.
The LFUCache class has two main methods: get and put. The get method retrieves the value for a given key and updates the usage information.
The put method inserts or updates a key-value pair in the cache. If the cache is at capacity and a new key is being inserted, it 
removes the least frequently used key before inserting the new key-value pair. The main function demonstrates how to use the 
LFUCache class by allowing the user to perform get and put operations interactively.

*/