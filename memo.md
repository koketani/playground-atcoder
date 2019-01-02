* hello world
```cpp
#include <string>

int main() {
  std::cout << "hello world" << std::endl;
  return 0;
}
```
* cin/cout
  * cin >> a;
  * cout << a << endl;
* string type
  * a.at(i)
  * a.size()
  * s.substr(i)
  * string s(w+2, '#');
* char type
  * string a = "abc"; a[0]
  * a == '+'
  * a - '0'
* if statement
```
if (a>100) {
  a++;
}
```
* while statement
```
while (a>100) {
  a++;
}
```
* reverse list
  * reverse(s.begin(), s.end())
* vector
  * vector<string> a(h+2);
  * vector<string> a(n, "0");
  * vector<string, int> s{}, t{};
  * a.push_back(make_pair(x,y));
  * a[0].first, a[0].second
  * vector<int> a{1,2,3};
* function
```
int hoge() {
  return 0;
}
```
* set type
  * set<int> s;
  * s.insert(1)
  * s.siez()
  * s.at(2)
* max, min
  * max({1,2}), min({b, c})
* accumulate(a.begin(), a.end(), 0)
