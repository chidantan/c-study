//
// Created by Administrator on 2019/12/7.
//

#ifndef UNTITLED_SORTUTIL_H
#define UNTITLED_SORTUTIL_H

#include <vector>

using namespace std;

class SortUtil {
public:
    void swapTwoInt(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    vector<int> getIntVector() {
        int is[] = {9, 4, 8, 3, 2, 6, 5, 7, 2, 1};
        vector<int> vs;
        for (int i = 0; i < 10; i++) {
            vs.push_back(is[i]);
        }
        return vs;
    }
};


#endif //UNTITLED_SORTUTIL_H
