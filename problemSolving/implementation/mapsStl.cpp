#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int querycount,query,marks; string studentName;
    map<string,int>map;  //declare map
    cin>>querycount;
    for(int i = 0;i<querycount;i++){
      cin>>query>>studentName;
      switch(query){
        case 1:cin>>marks;map[studentName]+=marks;break;
        case 2:map.erase(studentName); break;
        case 3:cout<<map[studentName]<<"/n";
      }
    }
    return 0;
}