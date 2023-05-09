#include<bits/stdc++.h>
using namespace std;
class MyHashSet {
   public:
    vector<list<int>> m;
    int size;
    MyHashSet() {
        size = 100;
        m.resize(size);
    }
    int hash(int key) {
        return key % size;
    }
    list<int>::iterator search(int key) {
        int i = hash(key);
        return find(m[i].begin(), m[i].end(), key);
    }

    void add(int key) {
        if (contains(key)) return;
        int i = hash(key);
        m[i].push_back(key);
    }

    void remove(int key) {
        if (!contains(key)) return;
        int i = hash(key);
        m[i].erase(search(key));
    }

    bool contains(int key) {
        int i = hash(key);
        if (search(key) != m[i].end()) {
            return true;
        }
        return false;
    }
};