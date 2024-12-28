#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;



int main(){

    /**
    std::vector<int> values = { 1, 2, 3, 4, 5 };
    //range based for loop
    for (auto value : values){
        cout << value << endl;
    }

    for (std::vector<int>::iterator it = values.begin(); 
            it != values.end(); it++){
        cout << *it << endl;
    }
    **/
    using ScoreMap = std::unordered_map<std::string, int>;
    std::unordered_map<std::string, int> map;
    map["Cherno"] = 5;
    map["C++"] = 2;

    for (ScoreMap::const_iterator it = map.begin();
            it != map.end(); it++){
        auto& key = it-> first;
        auto& value = it->second;
        cout << key << "=" << value << endl;
    }

    for (auto kv : map){
        auto& key = kv.first;
        auto& value = kv.second;
        cout << key << "=" << value << endl;
    }

    for (auto [key, value] : map){
        cout << key << "=" << value << endl;
    }



    cin.get();
}