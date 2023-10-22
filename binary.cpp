#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Element found at index 'mid'
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found in the array
}

int main() {
    std::vector<int> sortedArray = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 10;

    int result = binarySearch(sortedArray, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
