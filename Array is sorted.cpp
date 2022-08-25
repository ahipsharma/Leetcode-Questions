class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        if (n == 1 || n == 0)
            return 1;
        if (arr[n - 1] < arr[n - 2])
            return 0;
        return arraySortedOrNot(arr, n - 1);
    }
};