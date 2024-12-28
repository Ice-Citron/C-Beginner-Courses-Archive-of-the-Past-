#include <iostream>
#include <vector>

int countRecordBreakingDays(std::vector<int> visitors) {
  int recordBreaksCount = 0;
  int previousRecord = 0;
  for(int i = 0; i < visitors.size(); i++) {
     bool greaterThanPreviousDays = i == 0 || visitors[i] > previousRecord;
     bool greaterThanFollowingDay = i == visitors.size()-1 || visitors[i] > visitors[i+1];
     if(greaterThanPreviousDays && greaterThanFollowingDay) {
        recordBreaksCount++;
     }
     previousRecord = std::max(previousRecord, visitors[i]);
  }
  return recordBreaksCount;
}

int main(){

    int T;

    std::cin >> T;

    for(int t = 0; t <= T; t++){

        int N, Vi;

        std::cin >> N;

        std::vector<int> visitors;

        for(int i = 0; i < N; i++){

            std::cin >> Vi;

            visitors.push_back(Vi);
        }
        
        std::cout << "Case #" << t+1 << ": " << countRecordBreakingDays(visitors) << '\n';
    }


    return 0;
}