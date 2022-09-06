#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <set>

template <class T>
int easyfind(T &arr, int target){
    auto index = std::find(arr.begin(), arr.end(), target);

    if (index != arr.end())
        return (int)distance(arr.begin(), index);
    else 
        throw std::runtime_error("There is not what you are looking for");
}

#endif