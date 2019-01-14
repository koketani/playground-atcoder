# CPP syntax note

* hello world

```cpp
#include <string>

int main() {
  std::cout << "hello world" << std::endl;
  return 0;
}
```

* cin/cout
  * `cin >> a;`
  * `cout << a << endl;`
* string type
  * `a.at(i)`
  * `a.size()`
  * `s.substr(i)`
  * `string s(w+2, '#');`
* char type
  * `string a = "abc"; a[0]`
  * `a == '+'`
  * `a - '0'`
* if statement

```cpp
if (a>100) {
  a++;
}
```

* for statement

```cpp
for (int i=0;i<100;i++){
  cout << i << endl;
}
```

* while statement

```cpp
while (a>100) {
  a++;
}
```

* reverse list
  * `reverse(s.begin(), s.end())`
* vector
  * define vector with size `vector<string> a(h+2);`
  * define vector and initialize `vector<string> a(n, "0");`
  * define vector and initialize `vector<int> a{1,2,3};`
  * define two dimentional vector `vector<vector<int>> v(10,vector<int>(10));`
  * count number of 1 `count(v.begin(), v.end(), 1)`

* struct
  * definition

```cpp
struct Point {int x, y;};
```

  * struct initialize `struct Point{ int x, y; } a={10,20};`

* pair
  * define vector with pair values `vector<int,int> s;`
  * push pairt to vector `s.push_back(make_pair(1,2))`


* function

```cpp
int hoge() {
  return 0;
}
```

* set type
  * `set<int> s;`
  * `s.insert(1)`
  * `s.siez()`
  * `s.at(2)`
* max, min
  * `max({1,2}), min({b, c})`
* sum
  * `accumulate(a.begin(), a.end(), 0)`

* stack type
  * `s.top()`
  * `s.push(3)`
  * `s.pop()`
* queue type
  * `q.front(), q.back()`
  * `q.push(3), q.pop()`
