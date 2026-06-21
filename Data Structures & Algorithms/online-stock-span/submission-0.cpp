class StockSpanner {
public:
vector<int> a;
    StockSpanner() {
        
    }
    
    int next(int price) {
        a.push_back(price);
        int i=a.size()-1;
        int cnt=0;
        while(i>=0 && price>=a[i]){
            i-- ;
            cnt++ ;
        }
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */