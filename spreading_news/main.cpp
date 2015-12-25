#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
int tellingFriends(int day, auto start, auto end, set<int> enlightendFriend,multimap<int,int>& friendMap, map<int,int>& foundAtDay){
    cout << "\033[1;31m the day is "<< day<<"\033[0m"<< endl;
    int oldKnew=enlightendFriend.size();
    enlightendFriend.insert(start->first);
    int found=0;
    for (auto s=start; s!=end;++s){
        if (enlightendFriend.count(s->second)==0)
            found++;
    }
    cout << "found " << found<< "at day" << day<< endl;
    foundAtDay[day]+=found;
    for (auto s=start; s!=end;++s){
        cout << "friend of "<< s->first << " is "<< s->second << endl;
        cout << enlightendFriend.count(s->second)<< endl;


        if (enlightendFriend.count(s->second)==0){
            enlightendFriend.insert(s->second);
            tellingFriends(day+=1,friendMap.equal_range(s->second).first,friendMap.equal_range(s->second).second,enlightendFriend,friendMap,foundAtDay);
        }
    }
    if (oldKnew==enlightendFriend.size())
        cout << start->first << " knows noone"<< endl;
}

int main()
{
    int employes;
    cin >> employes;
    multimap<int,int> friendMap;
    for (int i = 0 ;i< employes; ++i){
        //Find friends
        int numOfFriends;
        cin >> numOfFriends;
//        cout << "there are "<< numOfFriends<< " friends.";
        for (int friendsRead = 0; friendsRead<numOfFriends;++friendsRead){
            int thisGuysFriend;
            cin >> thisGuysFriend;
            cout << i << " is friend of "<< thisGuysFriend<< endl;
            friendMap.insert(make_pair(i,thisGuysFriend));
        }
    }
    int testCases;
    cin >> testCases;
    for (int testCase =0;testCase<testCases;++testCase){
        map<int,int> foundAtDay;
        foundAtDay.clear();
        cout << "next test case" <<endl<< endl;
        int source;
        cin >> source;
        set<int> enlightenedFriend;
        enlightenedFriend.insert(source);
        cout << "source is "<< source<< endl;
        tellingFriends(0,friendMap.equal_range(source).first,friendMap.equal_range(source).second,enlightenedFriend,friendMap,foundAtDay);
        for (auto i : foundAtDay)
            cout << i.first<< endl;
    }
    return 0;
}

