#include <iostream>
using namespace std;

int main() {
  int N, C, loc, smallestI;
  cin >> N;
  int sort[N];
  for (int i = 0; i < N; i++) {

    cin >> sort[i];
  }
  for (int index = 0; index < N; index++) {
    int temp;
    smallestI = index;

    for (loc = index+1; loc < N; loc++) {

      if (sort[index] == sort[loc]) {
        smallestI = loc;
      }
    }
    temp = sort[smallestI];
    sort[smallestI] = sort[index];
    sort[index] = temp;
  }
  for (int j = 0; j < N; j++) {

    cout << sort[j] << " ";
  }
  return 0;
}