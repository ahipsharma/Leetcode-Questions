class Solution {
public:
    int binarySearch(vector <int> &arr , int target)
    {
        int l = 0 , r = arr.size() - 1 , mid , idx = -1;
        while(l <= r)
        {
            mid = (l+r)/ 2;
            if(arr[mid] == target)
                return mid;
            if(arr[mid] < target){
                l = mid + 1;
                idx = mid + 1;
            }
            else{
                idx = mid;
                r = mid - 1;
            }
        }
    return idx;
    }
    int searchInsert(vector<int>& arr, int target)
    {
        return binarySearch(arr , target);
    }
};