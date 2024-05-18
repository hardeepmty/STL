#include <iostream>

using namespace std;

void explainList() {
    list<int> ls ;
    ls.push_back(2) ;
    ls.emplace_back(3);

    ls.push_front(4)
}

int main() {
    explainList();
    return 0;
}
