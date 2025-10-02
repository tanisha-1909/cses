#include<bits/stdc++.h>
#define int long long
using namespace std;
 
struct Node{
    Node* links[2];
    bool flag=false;
 
    bool containskey(int val){
        return (links[val]!= NULL);
    }
    void put(int val, Node* node){
        links[val]=node;
    }
    void setend(){
        flag=true;
    }
    Node* get(int val){
        return links[val];
    }
};
class Trie{
    Node*root;
    public:
        Trie(){
            root= new Node();
        }
        void insert(int num){
            Node* node=root;
            for(int i=31;i>=0;i--){
                int bit= (num>>i) &1;
                if(!node->containskey(bit)){
                    node->put(bit,new Node());
                    
                }
                node=node->get(bit);
            }
            node->setend();
            return;
        }
 
        int getmax(int num){
            Node* node=root;
            int maxi=0;
            for(int i=31;i>=0;i--){
                int bit= (num>>i) &1;
                if(node->containskey(1-bit)){
                    maxi= maxi | (1<<i);
                    node=node->get(1-bit);
                }
                else{
                    node=node->get(bit);
                }
            }
            return maxi;
        }
};
signed main(){
	int n;
	cin>>n;
 
	vector<int>nums(n);
 
	Trie trie;
	vector<int>prefix(n);
	int val=0;
	int maxi=0;
	trie.insert(0);
 
	for(int i=0;i<n;i++){
		cin>>nums[i];
		prefix[i]=val ^ nums[i];
		val=prefix[i];
		maxi=max(maxi, trie.getmax(prefix[i]));
		trie.insert(prefix[i]);
	}
 
	
	cout<<maxi<<endl;
 
 
}