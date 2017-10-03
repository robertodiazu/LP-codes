#include <iostream>
#include <vector>

using namespace std;

int operator* (const vector<int> &a, const vector<int> &b)
{
  int len = a.size()<b.size()?a.size():b.size();
  int sum = 0;
  for (int i = 0; i < len; i++)
    sum += a[i] * b[i];
  return sum;
}


int main(){
  vector<int> x, y;
  x.push_back(0); x.push_back(1); x.push_back(2);
  y.push_back(0); y.push_back(10); y.push_back(20);

  printf("%i", x * y); // producto punto

}
