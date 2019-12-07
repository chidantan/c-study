#include <iostream>
#include <vector>
#include "algorithm/sort/MergeSort.h"
#include "algorithm/sort/SortUtil.h"


using namespace std;

int main() {
    MergeSort s;
    SortUtil sortUtil;
    using namespace std;
    vector<int> vs = sortUtil.getIntVector();
    int end = vs.size() - 1;
    s.execute(vs, 0, end);
    for (int i = 0; i < vs.size(); i++) {
        cout << vs[i] ;
    }

    cout << "Hello World";
    // 输出 Hello World
    return 0;
}

