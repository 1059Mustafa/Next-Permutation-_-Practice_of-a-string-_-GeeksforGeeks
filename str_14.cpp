class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr)
    {
        vector<int>v;
        int i=N-1;
        while(i>0&&arr[i]<arr[i-1])
        {
            i--;
        }
        if(i==0)
        {
            reverse(arr.begin(),arr.end());
            return arr;
        }
        else
        {
            i--;
            int j=N-1;
            while(arr[j]<=arr[i])
            {
                j--;
            }
            swap(arr[i],arr[j]);
            reverse(arr.begin()+i+1,arr.end());
            return arr;
        }
    }
};
