//   1      Largest Element
/*
#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,312,434,62,446,34,35};
    int max=arr[0];
    for(int b=0;b<7;b++){
if(arr[b]>max){
    max=arr[b];
}
    }
    cout<<max;
}
    */



    //  2      Find Second Smallest and Second Largest Element in an array


/*
#include<iostream>
#include<climits>
using namespace std;
int secondlargest(int arr[], int n ){
    if(n<2)return -1;
    int max=INT_MIN;
    int max2=INT_MIN;
    for(int b=0;b<n;b++){
  if(arr[b]>max){
    max2=max;
    max=arr[b];
  }
  else if(arr[b]>max2&&max2!=max){
    max2=arr[b];
  }

}
return max2;
}
int secondsmall(int arr[],int n ){
    if(n<2)return -1;
    int min=INT_MAX;
    int min2=INT_MAX;
    for(int b=0;b<n;b++){
  if(arr[b]<min){
    min2=min;
    min=arr[b];
  }
  else if(arr[b]<min2&&min2!=min){
    min2=arr[b];
  }
    }
    return min2;
}
int main(){
    int arr[7]={23,35,62,64,24,87,34};
    int max2=secondlargest(arr,7);
    int min2=secondsmall(arr,7);
    cout<<max2<<" "<<min2;
}
    */



    // 3       Check if an Array is Sorted






    /*
    #include<iostream>
    using namespace std;
    bool sort(int arr[],int n){
        if(n==1)return true;
        for(int b=1;b<n;b++){
if(arr[b-1]>arr[b])return false;

        }
    return true;
}
    int main(){
        int arr[7]={1,2,3,4,5,6,7};
        if(sort(arr,7)){
            cout<<"sort";
        }
        else{
            cout<<"not";
        }
    }
        */



        	
//  4      Remove duplicates from Sorted array






/*
#include<iostream>
using namespace std;
int remove(int arr[],int n ){
    if(n ==0)return 0;
    int i=1;
    for(int b=1;b<n;b++){
        if(arr[b-1]!=arr[b]){
            arr[i]=arr[b];
            i++;
        }
    }
    return i;
}
int main(){
    int arr[7]={1,1,2,2,3,4,4};
    int size=remove(arr,7);
    for(int b=0;b<size;b++){
        cout<<arr[b];
    }
}
    */




    //   5      Left Rotate the Array by One




/*
    #include<iostream>
    using namespace std;
    int main(){
        int arr[7]={1,2,3,4,5,6,7};
        int temp[7];
        int k=0;
        for(int b=1;b<7;b++){
        temp[k]=arr[b];
        k++;
        }
        temp[6]=arr[0];
        for(int b=0;b<7;b++){
            cout<<temp[b];
        }
    }
        */



        //  6   	Left Rotate Array by K Places




/*
  #include<iostream>
    using namespace std;
    int main(){
        int arr[7]={1,2,3,4,5,6,7};
          int n ;
          cin>>n;
          int k=0;
          int temp[7];
          for(int b =n;b<7;b++){
              temp[k]=arr[b];
              k++;
          }   
          for(int b=0;b<n;b++){
            temp[k]=arr[b];
            k++;
          }
          for(int b=0;b<7;b++){
            cout<<temp[b];
          }
    }   //  optimal by reverse (space is optimize)
       */




       //    7     Move Zeros to End





/*
       #include<iostream>
       using namespace std;
       int main(){
        int arr[5]={0,1,3,0,6};
        int i=0;
        int j =4;
        for(int b=0;b<5;b++){
   if(arr[b]==0&&i<j){
swap(arr[i],arr[j]);
j--;
b--;
   }
   else{
    i++;
   }
        }
        for(int b=0;b<5;b++){
            cout<<arr[b];
        }
       }
        */




        //  8    Linear Search


/*

        #include<iostream>
        using namespace std;
        int main(){
            int arr[7]={1,2,3,4,5,6,7};
            int target;
            cin>>target;
            for(int b=0;b<7;b++){
         if(arr[b]==target){
            cout<<b<<" have "<<target;
            return 0;
         }
            }
            cout<<"not found ";
        }

*/




        //   9      Union of two sorted arrays


   /*

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[]  = {1,2,2,3,4};
    int arr2[] = {2,3,5};

    vector<int> temp;
    int i = 0, j = 0;

    while(i < 5 && j < 3) {

        if(arr[i] <= arr2[j]) {
            if(temp.empty() || temp.back() != arr[i])
                temp.push_back(arr[i]);
            i++;
        }
        else {
            if(temp.empty() || temp.back() != arr2[j])
                temp.push_back(arr2[j]);
            j++;
        }
    }

    while(i < 5) {
        if(temp.empty() || temp.back() != arr[i])
            temp.push_back(arr[i]);
        i++;
    }

    while(j < 3) {
        if(temp.empty() || temp.back() != arr2[j])
            temp.push_back(arr2[j]);
        j++;
    }

    for(int x : temp)
        cout << x << " ";
}
        */




        //   10    Find missing number


/*

        #include<iostream>
        using namespace std;
        int main(){
            int arr[]={1,2,4,5};
            int n =5;
            int expectedsum=(n*(n+1))/2;
            
            int sum=0;
            for(int b=0;b<n-1;b++){
sum+=arr[b];
            }
            cout<<expectedsum-sum;
           
        }

        */

   

           //   11   Count Maximum Consecutive One's in the array
         

           /*
        #include<iostream>
        using namespace std;
        int main(){
            int arr[]={1,1,0,1,1,1,1};
            int count=0;
            int maxi=0;
            for(int b=0;b<7;b++){
                if(arr[b]==1){
                    count++;
                    maxi=max(maxi,count);
                }
                else{
                    count=0;
                }
            }
            cout<<maxi;
        }

        */




        //    12     single elemnet

/*
        class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int x:nums){
            ans^=x;
        }
        return ans;
    }
};

*/



        // 13      Longest Subarray with given Sum K(Positives)

/*
        #include<iostream>
        #include<algorithm>
        using namespace std;
        int main(){
            int arr[]={10, 5, 2, 7, 1, 9};
         
            int n ;
            cin>>n;
            int left=0;
            int sum=arr[0];
            int curr=0;
            int right=0;
            int maxlen;
            while(right<5){
            while(left<right&&sum>n){
                sum-=arr[left];
                left++;
            }
   if(sum==n){
    maxlen=max(maxlen,right-left+1);
   }
   right++;
   if(right<n)sum+=arr[right];
            }
            cout<<maxlen;
        }
            */




            //  14     Length of the longest subarray with zero Sum



/*
            #include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int arr[] = {9,-3,3,-1,6,-5};
    int n = 6;

    unordered_map<int,int> mp;

    int sum = 0;
    int maxlen = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        if(sum == 0)
            maxlen = i + 1;

        if(mp.find(sum) != mp.end()) {
            maxlen = max(maxlen, i - mp[sum]);
        }
        else {
            mp[sum] = i;
        }
    }

    cout << maxlen;
}

*/



          //    MEDIUM  ARRAY 

          //   15           Two Sum : Check if a pair with given sum exists in Array
/*

#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,6,5,8,11};
    int left=0;
    int right=4;
    int target;
    cin>>target;
    while(left<right){
       if(arr[left]+arr[right]==target){
        cout<<arr[left]<<" "<<arr[right];
        return 0;
       }
       else if(arr[left]+arr[right]>target){
            right--;
       }
       else{
        left++;
       }
    }
}

*/


//             16    Sort an array of 0's 1's and 2's



/*
#include<iostream>
using namespace std;

    int main(){
        int arr[]={2, 1, 2, 0, 1};
        int left=0;
        int mid=0;
        int right=4;
        while(mid<=right){
            if(arr[mid]==0){
                swap(arr[left],arr[mid]);
                left++;
                mid++;
                
            }
            else if(arr[mid]==1){
            
              mid++;
            }
            else{
                swap(arr[mid],arr[right]);
                right--;
            }
        }
        for(int b=0;b<5;b++){
            cout<<arr[b];
        }

}
        */


             // 17        Majority Element-I

/*
             #include<iostream>
             using namespace std;
             int main(){
                int arr[]={7, 0, 0, 1, 7, 7, 2, 7, 7};
                int count=0;
                int element;
                for(int b=1;b<8;b++){
                    if(count==0){
                        element=arr[b];
                        count=1;

                    }
             else   if(arr[b]==element){
                    count++;
                }
                else{
                    count--;
                }
                }
                if(count!=0){
                 cout<<element;
                }
             }

*/





//                     18           Kadane's Algorithm : Maximum Subarray Sum in an Array

/*
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[]={2, 3, 5, -2, 7, -4};
    int maxsum=arr[0];
    int n =6;
   
    for(int b=0;b<n;b++){
        sum+=arr[b];
        maxsum=max(maxsum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxsum;
}

*/



 //     19      	Print subarray with maximum subarray sum (extended version of above problem)



/*

#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    int arr[] = {2, 3, 5, -2, 7, -4};
    int maxsum = arr[0];
    int n = 6;

    int start = 0;
    int ansstt = 0;
    int ansend = 0;

    for(int b = 0; b < n; b++) {

        if(sum == 0) {
            start = b;
        }

        sum += arr[b];

        if(sum > maxsum) {
            maxsum = sum;
            ansstt = start;
            ansend = b;
        }

        if(sum < 0) {
            sum = 0;
        }
    }

    for(int i = ansstt; i <= ansend; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << maxsum;
}

*/



   // 20      Stock Buy and Sell




   /*
   
   #include<iostream>
   using namespace std;
   int main(){
    int arr[]={7,1,5,3,6,4};
    int sell=arr[0];
    int buy=arr[0];
    int sellday=0;
    int n =6;
    int buyday=0;
    int profit=0;
    int minday=0;
    for(int b =0;b<n;b++){
    if(arr[b]-buy>profit){
        profit=arr[b]-buy;
        
        sell=arr[b];
        sellday=b;
        buyday=minday;
    };
    if(arr[b]<buy){
        buy=arr[b];
        minday=b;
    }



    }
cout<<"Buy Price = "<<arr[buyday]
        <<" Day = "<<buyday<<endl;

    cout<<"Sell Price = "<<sell
        <<" Day = "<<sellday<<endl;

    cout<<"Profit = "<<profit;
   }

   */



//        21         Rearrange Array Elements by Sign



/*
#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,-3,-1,-2,3};
int i=0;
int k =1;
int temp[6];
for(int b=0;b<6;b++){
    if(arr[b]>0){
      temp[i]=arr[b];
      i=i+2;
    }
    else{
temp[k]=arr[b];
k=k+2;
    }
}
for(int b=0;b<6;b++){
    cout<<temp[b]<<" "; 
}
}


*/




  //   22    	next Permutation

/*

  #include<iostream>
  #include<algorithm>
  using namespace std;
  int main(){
    int arr[]={2,4,7,5,3,2};
    int pivot=-1;
    int n =6;
    for(int b=n-2;b>=0;b--){
      if(arr[b]<arr[b+1]){
        pivot=b;
        break;
      }
    }
    if(pivot!=-1){
    for(int b=n-1;b>pivot;b--){
        if(arr[b]>arr[pivot]){
        swap(arr[pivot],arr[b]);
        break;
        }
    }
}
    reverse(arr+pivot+1,arr+n);
 for(int b=0;b<n;b++){
    cout<<arr[b];
 }
  }

  */



     //   23     Leaders in an Array


     /*
#include<vector>
#include<algorithm>
     #include<iostream>
     using namespace std;
     int main(){
        vector<int> arr={10,22,12,3,0,6};
      vector<int> ans;
int n =arr.size();
for(int i=n-1;i>=0;i--){
    if(ans.empty() || arr[i] > ans.back()){
        ans.push_back(arr[i]);
    }
}

reverse(ans.begin(), ans.end());
for(int b=0;b<ans.size();b++){
    cout<<ans[b]<<" ";
}
        }
 */

 


 //        24      Longest Consecutive Sequence in an Array




/*
 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int main(){
    vector<int> arr={100, 4, 200, 1, 3, 2};
    sort(arr.begin(),arr.end());
    vector<int> ans;
    int maxsize=0;
    int count=1;
    for(int b=1;b<arr.size();b++){
   if(arr[b]==arr[b-1]+1){
    count++; 
    maxsize=max(maxsize,count);
   }
   else{
    count=1;
   }
    }
    cout<<maxsize;

 }
      // MORE OPTIMAL BY HASHING
      unordered_set<int> s(arr.begin(), arr.end());

int longest = 0;

for(int x : s){
    if(s.find(x-1) == s.end()){  // start of sequence
        int curr = x;
        int len = 1;

        while(s.find(curr+1) != s.end()){
            curr++;
            len++;
        }

        longest = max(longest, len);
    }
}

 

*/
 //    25       Set Matrix Zeroes

/*
#include<vector>
 #include<iostream>
 using namespace std;
 int main(){
    vector<vector<int>> arr={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int n =arr.size();
    int m =arr[0].size();
    vector<int> i,j;
   
    for(int b=0;b<n;b++){
        for(int c =0;c<m;c++){
            if(arr[b][c]==0){
                i.push_back(b);
                j.push_back(c);
            }
        }
    }
    for(int b=0;b<i.size();b++){
        int index=i[b];
        for(int c=0;c<m;c++){
  arr[index][c]=0;
        }
    }

 

    for(int b=0;b<j.size();b++){
        int index=j[b];
        for(int c=0;c<n;c++){
            arr[c][index]=0;
        }
       
    }
    for(int b =0;b<n;b++){
        for(int c=0;c<m;c++){
cout<<arr[b][c];
        }
        cout<<endl;
    }
 }

 */

    // 26            rotate array 90 degree 

/*

    #include<vector>
    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main(){
vector<vector<int>> arr={{0, 1, 1, 2}, {2, 0, 3, 1}, {4, 5, 0, 5}, {5, 6, 7, 0}};
int n =arr.size();
int m =arr[0].size();

for(int b=0;b<n;b++){
    for(int c=b+1;c<m;c++){
      swap(arr[b][c],arr[c][b]);
       
    }
}
 for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
for(int b=0;b<n;b++){
    for(int c=0;c<m;c++){
        cout<<arr[b][c];
    }
    cout<<endl;
}
    }

    */



//       27        spiral matirx




/*

    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        vector<vector<int>>arr={ { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
        int n=arr.size();
        int m =arr[0].size();
        for(int b=0;b<n;b++){
            for(int c=0;c<m;c++){
cout<<arr[b][c]<<" ";
            }
            cout<<endl;
        }

        int firstrow=0;
        int lastrow=n-1;
        int firstcol=0;
        int lastcol=m-1;
        while(firstrow<=lastrow&&firstcol<=lastcol){
        for(int b=firstcol;b<=lastcol;b++){
            cout<<arr[firstrow][b]<<" ";
        }
        firstrow++;
        for(int b=firstrow;b<=lastrow;b++){
            cout<<arr[b][lastcol]<<" ";
        }
        lastcol--;
        if(firstrow<=lastrow){
        for(int b=lastcol;b>=firstcol;b--){
            cout<<arr[lastrow][b]<<" ";
        }
        lastrow--;
    }
    if(firstcol<=lastcol){
        for(int b=lastrow;b>=firstrow;b--){
            cout<<arr[b][firstcol]<<" ";
        }
        firstcol++;
    }
}
   
    } 

    */


    

    //       28   Count subarrays with given sum



/*
    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        vector<int> arr={1,2,3};
int n =arr.size();
int left=0;
int right=0;

int target;
cin>>target;
int count=0;
int sum=0;
while(right<n){
sum+=arr[right];
if(sum==target){
    count++;
    sum -= arr[left];
            left++;
            right++;
}
else if(sum<target){
    right++;
}
else{
      sum -= arr[left];
    left++;
    right--;
}
}
cout<<count;

}

*/




//   29     Pascal's Triangle I

/*
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int b=0;b<numRows;b++){
            vector<int> row(b+1,1);
            for(int c=1;c<b;c++){
                row[c]=ans[b-1][c-1]+ans[b-1][c];
            }
        ans.push_back(row);
        }
    return ans;
    }
};
*/



//     30    Majority Element-II


/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int count1=0;
      int count2=0;
      int e1=INT_MIN;
      int e2=INT_MIN;
      vector<int >ans;
      for(int b:nums){
        if(count1==0&& b!=e2){
            e1=b;
            count1=1;
        }
      else   if(count2==0&&b!=e1){
            e2=b;
            count2=1;
        }
      else  if(b==e1){
            count1++;
        }
         else if(b==e2){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
      }
      count1 = count2 = 0;

for(int x : nums){
    if(x == e1) count1++;
    else if(x == e2) count2++;
}
      if(count1>nums.size()/3){
        ans.push_back(e1);
      }
      if(count2>nums.size()/3){
        ans.push_back(e2);
      }
      return ans;
    }
};

*/




//  31     3 sum



/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
       vector<vector<int>> s;
       sort(arr.begin(),arr.end());
       for(int b=0;b<arr.size();b++){
        int left=b+1;
if(b>0&&arr[b]==arr[b-1])continue;
        int right=arr.size()-1;
        while(left<right){
            int sum=arr[b]+arr[left]+arr[right];
            if(sum==0){
                s.push_back({arr[b],arr[left],arr[right]});
                left++;
                right--;
                while(left<right&& arr[left]==arr[left-1]){
                    left++;
                }
                while(left<right&&arr[right]==arr[right+1]){
                    right--;
                }
            }
                else if(sum<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return s;
       } 
    };

    */



    //    32        4   sum



    /*
    class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n =nums.size();
        if(n<4)return res;
        for(int b=0;b<n-3;b++){
            if(b>0&&nums[b]==nums[b-1])continue;
            if ((long long)nums[b] + nums[b+1] + nums[b+2] + nums[b+3] > target) break;
            if ((long long)nums[b] + nums[n-3] + nums[n-2] + nums[n-1] < target) continue;
            for(int c=b+1;c<n-2;c++){
                if(c>b+1&&nums[c]==nums[c-1])continue;
                if ((long long)nums[b] + nums[c] + nums[c+1] + nums[c+2] > target) break;
                if ((long long)nums[b] + nums[c] + nums[n-2] + nums[n-1] < target) continue;
        int left=c+1;
        int right=n-1;
                while(left<right){
                long long sum=(long long)nums[b]+(long long)nums[c]+(long long)nums[left]+(long long)nums[right];
                if(sum==target){
                   res.push_back({nums[b],nums[c],nums[left],nums[right]});
                    ++left;
                    --right;
                    while(left<right&&nums[left]==nums[left-1]){
                        ++left;
                    }
                    while(left<right&&nums[right]==nums[right+1]){
                        --right;
                    }
                }
                else if(sum<target){
                    ++left;

                }
                else{
                    --right;
                }
            }
        }

        }
        return res;
    }
};

*/



//    33          Largest Subarray with Sum 0


/*

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] = {9, -3, 3, -1, 6, -5}  ;
    int count=1;
    int sum=0;
 unordered_map<int, int> mpp;
    int maxi=0;
    for(int b=0;b<6;b++){
        sum+=arr[b];
        count++;
        if(sum==0){
         maxi=b+1;
        }
        else{
         if (mpp.find(sum) != mpp.end()) {
        // maximize length
        maxi = max(maxi, b - mpp[sum]);
      }
      else{
        mpp[sum]=b;
      }
        }
    }
    cout<<maxi;
}        

*/



//   34     Merge Overlapping Subintervals



/*
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (auto interval : intervals) {

            if (ans.empty() || ans.back()[1] < interval[0]) {
                ans.push_back(interval);
            }
            else {
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
        }

        return ans;
    }
};
*/





//   35   Merge two sorted arrays without extra space





/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=m-1;
 int right=n-1;
 int b = m+n-1;
 while(left>=0&&right>=0){
    if(nums1[left]>=nums2[right]){
        nums1[b]=nums1[left];
        b--;
        left--;
    }
    else{
        nums1[b]=nums2[right];
        b--;
        right--;
    }
 }
 while(right>=0){
    nums1[b]=nums2[right];
    b--;
    right--;
 }
    }
};
*/







//      36    Find the repeating and missing numbers


/*



#include<vector>
#include<iostream>
using namespace std;
int main(){
    int b=0;
int sum=0;
int sumsq=0;
int sumn=0;
int sumsqn=0;
vector<int> arr={3,4,5,1,1};
int n =arr.size();
 for(int b=0;b<n;b++){
    sum+=arr[b];
 }   
 for(int b=0;b<n;b++){
    sumsq+=arr[b]*arr[b];
 }
    for(int b=1;b<=n;b++){
        sumn+=b;
    }
    for(int b =1;b<=n;b++ ){
        sumsqn+=b*b;
    }
    cout<<sum<<endl;
    cout<<sumsq<<endl;
    cout<<sumn<<endl;
    cout<<sumsqn<<endl;
    
    int num1=sum-sumn;
    int num2=sumsq-sumsqn;
    int val=num2/num1;
    int missing = (val-num1)/2;
    cout<<" missing "<<missing<<endl;
    cout<<"repeating "<<missing+num1;

}

*/



//      37     Count inversions in an array




#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {5,3,2,1,4}; 
    
    int n = arr.size();
    int count=0;
    int left=0;
   int right=n;
   int curr=1;
      while(left<right){
        if(arr[left]>arr[curr]){
            count++;      
        }
curr++;
        if(curr>right){
            left++;
            curr=left+1;
        }
      }
      cout<<count;
     
   }