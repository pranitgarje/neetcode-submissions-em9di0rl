class Node{
public:
    int key;
    int val;
    Node* next;
    Node* prev;
    Node(int k,int v):key(k),val(v),next(nullptr),prev(nullptr){} 

};

class LRUCache {
public:
unordered_map<int,Node*> cache;
int cap;
Node* left;
Node* right;
void remove(Node* node){
    Node* prv=node->prev;
    Node* nxt=node->next;
    prv->next=nxt;
    nxt->prev=prv;
}
void insert(Node* node){
    Node* prv=right->prev;
    prv->next=node;
    node->prev=prv;
    node->next=right;
    right->prev=node;
}
    LRUCache(int capacity) {
        cap=capacity;
        cache.clear();
        left=new Node(0,0);
        right=new Node(0,0);
        left->next=right;
        right->prev=left;

    }
    
    int get(int key) {
        if(cache.find(key)!=cache.end()){
            Node* node=cache[key];
            remove(node);
            insert(node);
            return node->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
          if(cache.find(key)!=cache.end()){
           
            remove(cache[key]);
        }
        Node* newNode=new Node(key,value);
        insert(newNode);
        cache[key]=newNode;
        
        if(cache.size()>cap){
            Node* lru=left->next;
            remove(lru);
            cache.erase(lru->key);
            delete lru;
           
        }
    }
};
