#include<bits/stdc++.h>
using namespace std;


struct Node{
    Node * links[26];
    bool flag = false;

    bool containKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }

    Node *get(char ch)
    {
        return links[ch-'a'];
    }

    void put(char ch, Node * node)
    {
        links[ch-'a'] = node;
    }

    void setEnd()
    {
        flag = true;
    }

    bool isEnd()
    {
        return flag;
    }
};

class Trie{
    Node * root;

    public :
		Trie(){
        root= new Node();
    }

    void insert(string word){
        Node *node = root;

        for(int i=0;i<word.size();i++){
            if(!node->containKey(word[i]))
            {
                node->put(word[i],new Node());
            }
            node = node->get(word[i]);
        }

        node->setEnd();
    }

    bool search(string word){
        Node * node = root;
        for(int i=0;i<word.size();i++)
        {
            if(!node->containKey(word[i]))
            {
                return false;
            }
            node= node->get(word[i]);
        }

        return node->isEnd();
    }

    bool startsWith(string word){
    	Node * node= root;
        for(int i=0;i<word.size();i++)
        {
            if(!node->containKey(word[i]))
            {
                return false;
            }
            node= node->get(word[i]);
        }
        return true;        
    }
};

int main()
{
	int n;
	cin>>n;

	string s[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	
	Trie * root = new Trie();
	
	for(int i=0;i<n;i++)
	{
		root->insert(s[i]);
	}
	
	int q;
	cin>>q;
	while(q--)
	{
		string p;
		cin>>p;
		
		bool hasWord = root->search(p);
		if(hasWord)
		{
			cout<<"Yes\n";
		}else
		{
			cout<<"No\n";
		}
	}
}