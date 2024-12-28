#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;


struct CityRecord{
    std::string Name;
    uint64_t Population;
    double Latitude, Longitude;

    bool operator< (const CityRecord& other) const{
        return Population < other.Population;
    }
};

namespace std {
    template <>
    struct hash<CityRecord>{
        size_t operator() (const CityRecord& key){
            return hash<std::string>()(key.Name);
        }
    };

}


int main(){

    /**
    std::vector<CityRecord> cities;

    cities.emplace_back("Melbourne", 5000000, 2.4, 9.4);
    cities.emplace_back("linda", 5000000, 2.4, 9.4);
    cities.emplace_back("zhang", 5000000, 2.4, 9.4);
    cities.emplace_back("hot", 5000000, 2.4, 9.4);
    cities.emplace_back("yum", 5000000, 2.4, 9.4);

    for (const auto& city : cities){
        if (city.Name == "Berlin"){
            int pop = city.Population;
            break;
        }
    }**/

    //std::map<CityRecord, uint32_t> foundedMap;
    //foundedMap[CityRecord{"Melbourne", 5000000, 2.4, 9.4}] = 1850;

    std::map<std::string, CityRecord> cityMap;
    //std::unordered_map<std::string, CityRecord> cityMap;
    cityMap["Melbourne"] = CityRecord {"Melbourne", 5000000, 2.4, 9.4};
    cityMap["linda"] = CityRecord{"linda", 5000000, 2.4, 9.4};
    cityMap["zhang"] = CityRecord{"zhang", 5000000, 2.4, 9.4};
    cityMap["hot"] = CityRecord{"hot", 5000000, 2.4, 9.4};
    cityMap["yum"] = CityRecord{"yum", 5000000, 2.4, 9.4};

    CityRecord& berlindata = cityMap["Berlin"];
    int pops = berlindata.Population;

    const auto& cities = cityMap;

    if (cities.find("Berlin") != cities.end()){
        const CityRecord& berlinData = cities.at("Berlin");
    } 

    //cityMap.erase("Paris");

    //iteration + printing
    for (auto& [name, city] : cityMap){
        cout << name << " || "  <<  city.Population << endl;
    }

    cin.get();
    }