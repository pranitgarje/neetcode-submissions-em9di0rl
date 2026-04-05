class MedianFinder {
public:
priority_queue<int,vector<int>,greater<int>> pq;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        pq.push(num);
    }
    
    double findMedian() {
        int i=0;
        vector<int> temp;
        int n=pq.size();
        if(n==1){
            return pq.top();
        }
        int upperBound=(n%2!=0)?n/2:n/2-1;
        while(i<upperBound){
            temp.push_back(pq.top());
            pq.pop();
            i++ ;
        }
        double median=(double)pq.top();
        temp.push_back(pq.top());
        pq.pop();
        if(n%2==0){
            median+=(double) pq.top();
             median/=2.0;
            temp.push_back(pq.top());
            pq.pop();
        }
       
        for(int t:temp){
            pq.push(t);
        }
        return median;
    }
};
