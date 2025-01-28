#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mx;
        cin >> mx;
        arr[0]=mx;
        for(int i=1;i<n;++i)
        {
            cin >> arr[i];
            if(!(i&1) && arr[i]>mx)
            {
                mx = arr[i];
            }
        }
        cout << mx << endl;
    }
    return 0;
}