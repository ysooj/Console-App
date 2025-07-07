#include <iostream>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main()
{

#pragma region unordered set
    //  std::unordered_set<const char*> unordered_set;
    // 
    //  //  unordered set은 중복값을 허용하지 않므로 같은 것을 insert할 수 없다.
    //  // 아래에서 "Messi"를 넣었는데 또 "Messi"를 넣을 수는 없는 것이다.
    //  unordered_set.max_load_factor(2.0);
    //  
    //  unordered_set.insert("Messi");
    //  unordered_set.insert("Hazard");
    //  unordered_set.insert("Ronaldo");
    //  unordered_set.insert("Alisson");
    //  unordered_set.insert("Van Dijk");
    //  unordered_set.insert("Harry Kane");
    //  unordered_set.insert("Toni Kroos");
    //  unordered_set.insert("Kyle Walker");
    //  unordered_set.insert("Son Heung Min");
    //  
    //  if (unordered_set.find("Jisung Park") != unordered_set.end())
    //  {
    //      cout << "the data exists..." << endl;
    //  }
    //  
    //  else
    //  {
    //      cout << "the data does not exist..." << endl;
    //  }
    //  
    //  unordered_set.erase("Messi");
    //  
    //  cout << "Load Factor : " << unordered_set.load_factor() << endl;
    //  cout << "Bucket Count : " << unordered_set.bucket_count() << endl;
    //  
    //  // [낮은 부하율]
    //  // 테이블의 공간이 많이 남아서 충돌 가능성은 낮아졌지만,
    //  // 많은 메모리들을 사용하고 있지 않은 상태
    //  // 부하율이 낮다고 좋은 것만은 아니다.
    //  
    //  // [높은 부하율]
    //      // 충돌 가능성이 높기 때문에
    //  // 검색과 삽입 속도가 느려질 수 있습니다.
    //  
    //  // 가장 이상적인 부하율 : 0.75~0.8
    //  
    //  for (const char* element : unordered_set)
    //  {
    //      cout << element << endl;
    //  }
    //  
    //  // '연관 컨테이너'로 깃허브에 commit하기
#pragma endregion

#pragma region unordered map
//  // set은 key만, map은 key와 value를 다 저장할 수 있다.
//  
//  // unordered set과 같이 중복된 키값이 들어가지 않는다.
//  std::unordered_map<const char*, int> unordered_map;
//  
//  // {} => '블레이스'라고 부른다.
//  unordered_map.insert({ "Zhonya's Hourglass", 2900 });
//  unordered_map.insert({ "Sterak's Gage", 3100 });
//  unordered_map.insert({ "Trinity Force", 3333 });
//  unordered_map.insert({ "Gargoyle Stoneplate", 3300 });
//  unordered_map.insert({ "BloodThirster", 3400 });
//  
//  unordered_map.insert({ "BloodThirster", 3400 });
//  
//  cout << "Load Factor : " << unordered_map.load_factor() << endl;
//  cout << "unordered_map size : " << unordered_map.size() << endl;
//  
//  unordered_map.erase("Trinity Force");
//  
//  for (const auto & element : unordered_map)
//  {
//      // first가 key
//      cout << "Key : " << element.first << endl;
//      // second가 value
//      cout << "Value : " << element.second << endl;
//  }
//  
//  if (unordered_map.find("Gargoyle Stoneplate") != unordered_map.end())
//  {
//      cout << "the data exists..." << endl;
//  }
//  
//  else
//  {
//      cout << "the data does not exist..." << endl;
//  }
//  
//  unordered_map.clear();
//  
//  cout << "Load Factor : " << unordered_map.load_factor() << endl;

#pragma endregion

#pragma region 이진 탐색 트리
    // 이진 트리의 검색 및 삽입 삭제하는 데 걸리는 시간복잡도 => 0(log n)

    // 전위 순회 : root -> left child -> right child
    // 중위 순회 : left child -> root -> right child
    // 후위 순회 : left child -> right child -> root

    //              10
    //        6            20
    //   4         8

    // 전위 순회 => 10, 6, 4, 8, 20
    // 중위 순회 => 4, 6, 8, 10, 20
    // 후위 순회 => 4, 8, 6, 20, 10

// [레드 블랙 트리]도 있다.
// 단순히 색깔만 추가되는 것이 아니라
// 리스트럭터링, 리컬러링 등의 개념들이 추가된다.
// 레드 블랙 트리 이전에 AVL 트리,높이(-1~1 사이의 값을 유지해야 한다.)에 대해 먼저 이해해야 한다.
#pragma endregion

#pragma region set
    //  std::set<const char*> set;
    //  
    //  set.insert("Overwatch2");
    //  set.insert("League of Legends");
    //  set.insert("Roblox");
    //  set.insert("Catch Mind");
    //  set.insert("Maple Story");
    //  
    //  for (const auto & element : set)
    //  {
    //      cout << element << endl;
    //  }
    //  
    //  cout << "set empty : " << set.empty() << endl;
    //  set.clear();
    //  
    //  cout << "set size : " << set.size() << endl;
    //  cout << "set max size : " << set.max_size() << endl;
#pragma endregion

#pragma region map
    //  std::map<const char*, const char*> map;
    //  
    //  map.insert({ "월요일", "Monday" });
    //  map.insert({ "화요일", "Tuesday" });
    //  map.insert({ "수요일", "Wednesday" });
    //  map.insert({ "목요일", "Thursday" });
    //  map.insert({ "금요일", "Friday" });
    //  map.insert({ "토요일", "Saturday" });
    //  map.insert({ "일요일", "Sunday" });
    //  
    //  if (map.find("월요일") != map.end())
    //  {
    //      cout << "the data exists..." << endl;
    //  }
    //  
    //  else
    //  {
    //      cout << "the data does not exists..." << endl;
    //  }
    //  
    //  for (const auto & element : map)
    //  {
    //      cout << "Key : " << element.first << endl;
    //      cout << "Value : " << element.second << endl;
    //  }
    // 
    //  // count는 () 안의 key가 존재하면 1, 존재하지 않으면 0을 반환.
    //  cout << map.count("화요일") << endl;
#pragma endregion

    return 0;
}

// STL에는 이외에도 string, array, multi set, multi map 등이 있다.
// 혼자서 공부해보자.