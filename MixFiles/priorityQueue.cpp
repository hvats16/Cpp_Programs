#include <bits/stdc++.h>

class PriorityQueue {
    vector<int> pq;

   public:
    PriorityQueue() {}
    bool isEmpty() {
        return pq.size() == 0;
    }
    int getSize() {
        return pq.size();
    }
    int getMin() {
        if (isEmpty()) {
            return 0;
        }
        return pq[0];
    }
    void insert(int element) {
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;
            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            childIndex = parentIndex;
        }
    }
    int removeMin() {
        if (isEmpty())
            return 0;
        int min = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        int parentIndex = 0;
        while (parentIndex < pq.size()) {
            int leftChildIndex = 2 * parentIndex + 1;
            int rightChildIndex = 2 * parentIndex + 2;
            int minIndex;
            if (leftChildIndex < pq.size() && rightChildIndex < pq.size())
                minIndex = (pq[leftChildIndex] <= pq[rightChildIndex]) ? leftChildIndex : rightChildIndex;
            else if (leftChildIndex < pq.size())
                minIndex = leftChildIndex;
            else
                break;
            if (pq[minIndex] < pq[parentIndex]) {
                int temp = pq[minIndex];
                pq[minIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } 
            else
                break;
            parentIndex = minIndex;
        }
        return min;
    }

    int removeMin() {
       if (isEmpty())
            return 0;
        int min = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        int parentIndex = 0;
        while (parentIndex < pq.size())
        {
            int leftChildIndex = 2 * parentIndex + 1;
            int rightChildIndex = 2 * parentIndex + 2;
            int minIndex;
            if (leftChildIndex < pq.size() && rightChildIndex < pq.size())
                minIndex = (pq[leftChildIndex] <= pq[rightChildIndex]) ? leftChildIndex : rightChildIndex;
            else if (leftChildIndex < pq.size())
                minIndex = leftChildIndex;
            else
                break;
            if (pq[minIndex] < pq[parentIndex])
            {
                int temp = pq[minIndex];
                pq[minIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else
                break;
            parentIndex = minIndex;
        }
        return min;
    }
}
