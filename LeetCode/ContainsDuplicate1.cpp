//
//  ContainsDuplicate1.cpp
//  LeetCode
//
//  Created by CYBERHOAX on 01/01/22.
//
/*
 Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 Example 1:

 Input: nums = [1,2,3,1]
 Output: true
 Example 2:

 Input: nums = [1,2,3,4]
 Output: false
 Example 3:

 Input: nums = [1,1,1,3,3,4,3,2,4,2]
 Output: true
 */

#include <stdio.h>
#include <iostream>
#include <vector>
#include <Unordered_set>

using namespace std ;

int main() {
    vector < int >nums = {1,2,3,0} ;
    return nums.size() > unordered_set<int> (nums.begin(), nums.end()).size();
}
