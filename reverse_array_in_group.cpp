class Solution{
public:
    void reverse(vector<long long>& arr,int st,int e,int n)
    {
        if(e<n)
        {
            while(st<e)
        {
            swap(arr[st],arr[e]);
            st++;
            e--;
        }
        }
        
        else
        {
        e=n-1;
        while(st<e)
        {
            swap(arr[st],arr[e]);
            st++;
            e--;
        }
            
        }
       
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        for(int i=0;i<n;i+=k)
        {
            reverse(arr,i,i+(k-1),n);
            
        }
    }
};