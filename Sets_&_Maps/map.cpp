#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
     unordered_map<string, int> m;
     // map mai poora ka poora pair insert hoga, that's why we make pairs
      pair<string, int> p1;
      p1.first = "raghav";
      p1.second = 76;
      m.insert(p1);

      pair<string, int> p2;
      p2.first = "vinayak";
      p2.second = 77;
      m.insert(p2);

      pair<string, int> p3;
      p3.first = "Piwush";
      p3.second = 78;
      m.insert(p3);

    //   for( pair<string, int> p: m)
       for(auto p: m) 
       // auto identifies the type by itself
       {
        cout<<p.first<<" "<<p.second<<endl;
      }


    return 0;
}   