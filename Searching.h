#pragma once
#include <array>
#include <vector>

template <typename T, unsigned long N>
int binarySearchFirst(std::array<T, N> arr, T target) {
    int left = 0, right = N - 1;
    int result = -1;

    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == target) {
            result = middle;
            right = middle - 1;
        }
        else if (target < arr[middle]) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }
    return result;
}

template <typename T>
int binarySearchFirst(std::vector<T> arr, T target) {
    int left = 0, right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == target) {
            result = middle;
            right = middle - 1;
        }
        else if (target < arr[middle]) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }
    return result;
}