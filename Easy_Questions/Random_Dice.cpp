#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(nullptr));
  const short max_dice_num {6};
  const short min_dice_num {1};
  short dice =(rand() %(max_dice_num-min_dice_num+1))+min_dice_num;
  cout << dice;
  system("pause");
  return 0;
}
