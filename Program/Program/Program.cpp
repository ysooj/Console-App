#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main() {

#pragma region unordered set
    //  std::unordered_set<const char*> unordered_set;
    //  
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

#pragma region MyRegion
    // 전위 순회 : root -> left child -> right child
    // 중위 순회 : left child -> root -> right child
    // 후위 순회 : left child -> right child -> root

    //              10
    //        6            20
    //   4         8

    // 전위 순회 => 10, 6, 4, 8, 20
    // 중위 순회 => 4, 6, 8, 10, 20
    // 후위 순회 => 4, 8, 6, 10, 20
#pragma endregion

    return 0;
}