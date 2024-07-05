// #include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;

int main(){
    // In map same key cannot points to the two or more different values but two or more different may have same values.
    // map - Implimentation by balanced tree. In search operation, time complexity is O(log n).
    // unordered_map - Implimentation is done by hash table. In search operation, time complexity is O(1).
    // differend types of map - map, unordered_map, multimap, unordered_multimap

    map<int, string> m;
    m[1] = "Babbar";
    m[13] = "Prakash";
    m.emplace(2, "Love");
    m.insert({5, "Thor"});

    cout << "m: ";
    for(auto it : m){
        cout << "{ " << it.first  << ", " << it.second << " }" << " "; 
    }
    cout << endl;
    cout << "key '13' is present or not: " << m.count(13) << endl;
    cout << "key '-13' is present or not: " << m.count(-13) << endl;

    m.erase(13);
    cout << "After erase; " << "m: ";
    for(auto it : m){
        cout << "{ " << it.first  << ", " << it.second << " }" << " "; 
    }
    cout << endl;

    auto it = m.find(2);
    cout << "From m.find(2): ";
    for(auto i = it; i != m.end(); i++){
        cout << "{ " << (*i).first  << ", " << (*i).second << " }" << " "; 
    }
    cout << endl;

    cout << "------------------------------------------------\n";
    map<string, int> m2;
    m2["One"] = 1;
    m2["Five"] = 5;
    m2["Three"] = 3;
    m2.insert(pair<string, int> ("Nine", 9));   //second way to store in pair

    map<string, int>::iterator it2 = m2.begin();
    // Iterate through the map and print the elements
    while(it2 != m2.end()){
        cout << "key: " << (*it2).first << " : " << "value: " << it2->second << endl;
        it2++;
    }
    cout << "Size of m2: " << m2.size() << endl;

    int num = m2.erase("Three");
    cout << num << " true removed" << endl;
    for(auto it2 : m2){
        cout << "key: " << it2.first << " : " << "value: " << it2.second << endl;
    }

    // lower and upper bound start
    cout << "m2.lower_bound(\"Nine\")->first: " << m2.lower_bound("Nine")->first << "\t" << "m2.lower_bound(\"Nine\")->second: " << m2.lower_bound("Nine")->second << endl;
    cout << "m2.upper_bound(\"Nine\")->first: " << m2.upper_bound("Nine")->first << "\t" << "m2.upper_bound(\"Nine\")->second: " << m2.upper_bound("Nine")->second << endl;

    // lower and upper bound end

    m2.erase(m2.begin(), m2.find("One"));
    cout << "Size of m2: " << m2.size() << endl;
    for(auto it2 : m2){
        cout << "key: " << it2.first << " : " << "value: " << it2.second << endl;
    }
    return 0;
}