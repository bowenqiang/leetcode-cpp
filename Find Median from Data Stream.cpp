class MedianFinder {
public:
    // Adds a number into the data structure.
    void addNum(int num) {
        minHeap.push(num);
        maxHeap.push(minHeap.top());
        minHeap.pop();
        if(minHeap.size()<maxHeap.size())
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }

    }

    // Returns the median of current data stream
    double findMedian() {
        return minHeap.size()>maxHeap.size()?minHeap.top():0.5*(minHeap.top()+maxHeap.top());
        
    }
private:
    priority_queue<int, vector<int>, greater<int> > maxHeap;
    priority_queue<int> minHeap;
};

// Your MedianFinder object will be instantiated and called as such:
// MedianFinder mf;
// mf.addNum(1);
// mf.findMedian();
