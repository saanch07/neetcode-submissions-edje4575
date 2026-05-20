class TrieNode{
    public:
    TrieNode* children[26];
    bool end;
    TrieNode()
    {
        for(int i=0;i<26;i++)
        {
            children[i]=nullptr;
        }
        end=false;
    }
};


class PrefixTree {
public:
TrieNode* root;
    PrefixTree() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        int len=word.length();
        TrieNode* curr=root;
        for(char c:word)
        {
            int i=c-'a';
            if(curr->children[i]==nullptr)
            {
                curr->children[i]=new TrieNode();
            }
            curr=curr->children[i];
        }
        curr->end=true;
        
    }
    
    bool search(string word) {
        TrieNode* curr=root;
        for(char c:word)
        {
            int i=c-'a';
            if(curr->children[i]==nullptr)
            return false;
            else 
            curr=curr->children[i];
        }
        return curr->end;
        
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr=root;
        for(char c:prefix)
        {
            int i=c-'a';
            if(curr->children[i]==nullptr)
            return false;

            curr=curr->children[i];
        }
        return true;
    }
};
