#include<bits/stdc++.h>
using namespace std;

// void function will not return anything
void print(){
    cout << "Striver" << endl;
}

// return type function
int sum(int a, int b){
    return a + b;
}

void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    pair<int, int> arr[] = {{1,2}, {4,2}, {5,9}};
    cout << arr[2].first << endl;
}

void explainVector(){
    // *******************(push_back)
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    // vector<pair<int, int>> vec;
    // v.push_back({1,2});
    // v.emplace_back(1,2);    // set as pair without curly braces
    // vector<int> v(5, 100);
    // vector<int> v(5);
    // vector<int> v1(5, 20);
    // vector<int> v2(v1);


    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.emplace_back(2);
    v.push_back(53);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    it += 2;
    cout << *(it) << " ";

    cout << v[0] << " " << v.at(0) << endl;

    vector<int>::iterator it2 = v.end();
    it2--;
    cout << "it2: " << *(it2) << " ";

    cout << "back: " << v.back() << endl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << "\n";

    // for each loop (automatically iterate the data type. here int data type)
    for(auto it : v){
        cout << it << " "; 
    }
    cout << endl;

    // deletion on vector
    v.erase(v.end() - 1);
    for(auto it : v){
        cout << it << " "; 
    }
    cout << endl;

    v.erase(v.begin(), v.begin() + 2);
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // insertion on vector
    v.insert(v.begin(), 34);    //{34, 2}
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    v.insert(v.begin() + 1, 7); //{34, 7, 2}
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    
    v.insert(v.end(), 2, 9);    //{34, 7, 2, 9, 9}
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    vector<pair<int, int>> vec;
    vec.push_back({3, 4});
    vec.emplace_back(5,6);
    cout << vec[0].second << " " << vec[1].first << endl;

    vector<int> v2(5, 100);
    for(auto it = v2.begin(); it != v2.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    vector<int> v3(v2);
    cout << v3[0] << " " << v3.at(2) << endl;

    vector<int> copys(2, 50);
    v.insert(v.begin(), copys.begin(), copys.end());
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // total number of element
    cout << "Size: " << v.size() << "\n";

    // pop_back
    v.pop_back();
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // swap the vector
    vector<int> vect1 = {1, 2, 3};
    vector<int> vect2 = {4, 5, 6};

    cout << "Before:- vect1: ";
    for(auto it = vect1.begin(); it != vect1.end(); it++){
         cout << *(it) << " ";
    }
    cout << " vect2: ";
    for(auto it = vect2.begin(); it != vect2.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl << "After:- vect1: ";

    vect1.swap(vect2);

    for(auto it = vect1.begin(); it != vect1.end(); it++){
         cout << *(it) << " ";
    }
    cout << " vect2: ";
    for(auto it = vect2.begin(); it != vect2.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // erase everything
    v.clear();

    cout << v.empty() << endl;

    // sorting 
    sort(vect1.begin(), vect1.end());
}

void explainList(){
    // *******************(push_back)
    cout << "list: ";
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front();

    for(auto it : ls){
        cout << it << " ";
    }
    cout << endl;
    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swar
}

void explainDeque(){
    // *******************(push_back)
    cout << "deque: ";
    deque<int> dq;
    dq.push_back(1);    //{1}
    dq.emplace_back(2); //{1, 2}
    dq.push_front(4);   //{4, 1, 2}
    dq.emplace_front(3);//{3, 4, 1, 2}
    dq.pop_back();      //{3, 4, 1}
    dq.pop_front();     // {4, 1}
    deque<int>::iterator it;
    for(it = dq.begin(); it != dq.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    cout << dq.back() << " " << dq.front() << endl;

    // rest function are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack(){
    // *******************(push)
    cout << "stack: ";
    // LIFO
    // Time complexity O(1) i.e. constant time.
    stack<int> st;
    st.push(1);     //{1}
    st.push(2);     //{2, 1}
    st.push(3);     //{3, 2, 1}
    st.push(3);     //{3, 3, 2, 1}
    st.emplace(5);  //{5, 3, 3, 2, 1}

    cout << st.top() << endl;   //print 5
    st.pop();           //{3, 3, 2, 1}
    cout << st.top() << endl;   //print 3
    cout << st.size() << endl;
    cout << st.empty() << endl;
}

void explainQueue(){
    // *******************(push)
    cout << "queue: ";
    // FIFO
    // time complexity is O(1) i.e. constant time
    queue<int> q;
    q.push(1);      //{1}
    q.push(2);      //{1, 2}
    q.emplace(4);   //{1, 2, 4}

    q.back() += 5;  // print 9
    // q is {1, 2, 9}
    q.pop();    //{2, 9}
    
    cout << q.front() << endl;  //print 2
    // size, swap, empty as same as stack
}

void explainPQ(){
    // *******************(push)
    // implemented my tree (Not a linear container. A tree is maintained)
    // time complexity push, pop -> O(log n), top -> O(1)
    // max heap
    cout << "priority_queue: ";
    priority_queue<int> pq;
    pq.push(5);     //{5}
    pq.push(2);     //{5, 2}
    pq.push(8);     //{8, 5, 2}
    pq.emplace(10); //{10, 8, 5, 2}

    cout << pq.top() << endl;
    pq.pop();        //{8, 5, 2}
    cout << pq.top() << endl;   //print 8
    
    // min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);    //{5}
    pq2.push(2);     //{2, 5}
    pq2.push(8);     //{2, 5, 8}
    pq2.emplace(10); //{2, 5, 8, 10}
    cout << pq2.top() << endl;   //print 2
}

void explainSet(){
    // *******************(insert)
    // set stores in sorted order without repetition
    // implemented my tree (Not a linear container. A tree is maintained)
    // time complexity is in lograthmic
    cout << "set: ";

    set<int> st;
    st.insert(1);   //{1}
    st.emplace(2);  //{1, 2}
    st.insert(2);   //{1, 2}
    st.insert(4);   //{1, 2, 4}
    st.insert(3);   //{1, 2, 3, 4}

    for(set<int>::iterator it = st.begin(); it != st.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // functionality to insert in vector can be used also, that only increases efficiency
    // begin, end, rbegin, rend, size, empty, swap are same as those of above

    auto it = st.find(6);   //returns an iterator which point to the last element (because element 6 not found in set)
    // if the element is not in the set, it will always returns set.end() i.e. iterator point to right after the end
    cout << *(it) << endl;

    st.erase(3);    //erase 3   (takes algorithmic time)
    for(auto it : st){
        cout << it << " ";
    }
    cout << endl;

    int cnt = st.count(3);  //return 0 or 1;
    cout << cnt << endl;

    auto it2 = st.find(4);
    st.erase(it2);  //erase 4 (takes constant time)
    cout << st.count(4) << endl;    //print 0

    for(auto it : st){
        cout << it << " ";
    }
    cout << endl;

    st.insert(5);
    st.emplace(0);

    for(auto it : st){
        cout << it << " ";
    }
    cout << endl;

    auto it3 = st.find(1);
    auto it4 = st.find(5);
    st.erase(it3, it4);

    for(auto it : st){
        cout << it << " ";
    }
    cout << endl;   //{0, 5}

    st.insert(4);
    st.insert(9);

    for(auto it : st){ cout << it << " ";}
    cout << endl;

    auto it5 = st.lower_bound(3);
    auto it6 = st.upper_bound(5);
    cout << "lower_bound: " << *(it5) << endl;
    cout << "upper_bound: " << *(it6) << endl;
}

void explainMultiSet(){
    // Everything is same as set
    // only stores duplicate elements also
    cout << "multiset: ";

    multiset<int> ms;
    ms.insert(1);   //{1}
    ms.insert(1);   //{1, 1}
    ms.insert(1);   //{1, 1, 1}

    for(auto it : ms){
        cout << it << " ";
    }
    cout << endl;
    ms.erase(1);    //all 1's erased
    int cnt = ms.count(1);
    cout << cnt << endl;    //print 0

    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);
    ms.emplace(5);
    ms.emplace(3);

    for(auto it : ms){
        cout << it << " ";
    }
    cout << endl;

    ms.erase(ms.find(3));   //only erase one item   {2, 2, 2, 3, 5}

    for(auto it : ms){
        cout << it << " ";
    }
    cout << endl; 

    ms.erase(ms.find(2), ms.find(3));   //{3, 5}
    for(auto it : ms){
        cout << it << " ";
    }
    cout << endl;

    // rest all functions are same as set
}

void explainUnorderedSet(){
    cout << "unordered_set: " << endl;
    unordered_set<int> ust;

    // everything is similar to set
    // It stores unique (no repetition) and unsorted (random order means any order in the world)
    // In most operations time complexity is O(1)
    // worst case time complexity is O(n)
    // lower_bound and upper bound function do not work
}

void explainMap(){
    // map stores unique keys in sorted order (something similar to set data structure)
    // stores in sorted order of key    ---imp. to remember
    // Map works in O(log n) i.e. lograthmic of time
    cout << "map: " << endl;
    map<pair<int, int>, int> map2;
    map<int, int> map;

    // key-value pair
    map[1] = 2;
    map.insert({3, 1});
    map.emplace(2, 3);

    //{ 1 2 } { 2 3 } { 3 1 }
    for(auto it : map){
        cout << "{ " << it.first << " " << it.second << " } ";
    }
    cout << endl;

    map2[{2, 3}] = 10;
    cout << map2[{2, 3}] << endl;

    cout << map[1] << endl;     //print value of 1 i.e. 2
    cout << map[5] << endl;     //print 0 (if number not exist return 0)


    auto it = map.find(1);
    if(it == map.begin()){
        cout << "true" << endl;
    }
    
    auto it2 = map.lower_bound(2);
    auto it3 = map.upper_bound(3);

    // erase, swap, size, empty are same
}

void explainMultiMap(){
    cout << "multimap: " << endl;
    // everything is same as map, only it can store multiple keys
    // duplicate keys but all stored in sorted order
    // only map[key] cannot be used here
}

void explainUnorderedMap(){
    // stores unique keys and unsorted (rendom order)
    // works in O(1) i.e. at constant time
    // worst case O(n)      (this was case happen once in a blue moon not always)
    cout << "unordered_map: " << endl;
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    // assume p1 comes first and then p2
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same means p1.second == p2.second
    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra(){
    cout << "Algorithm:--------------------------------------" << "\n";
        int a[] = {1, 7, 5, 2};
        cout << "a: ";
        for(auto it : a){
            cout << it << " ";
        }
        cout << endl;
        int n = sizeof(a) / sizeof(a[0]);
        cout << "n: " << n << endl;

        // sort in increasing order (default)
        // sort(a, a + n);     //{1, 2, 3, 5}
        // sort from (a + 1) to ((a + 3) - 1)
        // sort(a + 1, a + 3);     //{1, 5, 7, 2}
        
        for(auto it : a)  {
            cout << it << " ";
        }
        cout << endl;

        pair<int, int> b[] = {{1, 2}, {2, 1}, {4, 1}};
        // sort it according to second element (means in ascending order)
        // if second element is same, then sort it according to first element but in descending order
        int m = sizeof(b) / sizeof(b[0]);
        cout << "m: " << m << endl;


        sort(b, b + m, comp);       //comp - self written comparitor (boolean function)
        // {{4, 1}, {2, 1}, {1, 2}}

        int num = 6;
        // return the number of set bits (total number of 1 in binary)
        int cnt = __builtin_popcount(num);  //print 2
        cout << cnt << endl;

        // for long integer data type
        long long num2 = 125784567875334;
        int cnt2 = __builtin_popcountll(num2);
        cout << cnt2 << endl;

        // string s = "123";     // {123, 132, 213, 231, 312, 321}
        // string s = "231";                   //  {231, 312, 321}
        string s = "231";
        sort(s.begin(), s.end());// {123, 132, 213, 231, 312, 321}

        do{
            // return in distionary order
            cout << s << " " << endl;
        }while(next_permutation(s.begin(), s.end()));

        int max = *max_element(a, a + n);
        cout << "max_element: " << max << endl;
        int min = *min_element(a, a + n);
        cout << "min_element: " << min << endl;
}       

int main(){
    cout << "Standard template library" << endl;
    print();
    cout << sum(2, 4) << "\n";
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    explainExtra();
    return 0;
}