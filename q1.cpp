//Name Ananya Verma
//Roll no 2010990956
//set no. 5
//q1
#include <unordered_map>
#include <iostream>
using namespace std;
int lenOfLongSubarr(int arr[],  int n, int k)
 {
        unordered_map<int,int> mp;
        int len=0,sum=0;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.find(sum-k)!=mp.end()){
                len=max(len,i-mp[sum-k]);
            }
            if(mp.find(sum)==mp.end())
            mp[sum]=i;
        }
        return len;
    }
int main() {
  int n;
  cout<<"Enter the length of array:";
  cin>>n;
  int k;
  cout<<"Enter the target sum:";
  cin>>k;
  int arr[n];
  cout<<"Enter the elements in array:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maxLength=lenOfLongSubarr(arr,n,k);
  cout<<maxLength<<endl;
  return 0;

}
