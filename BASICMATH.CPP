             //countiong number
    
             /**
#include<iostream>
using namespace std;
int main(){
    int n ;
    int count=0;
    cin>>n;
    while(n!=0){
        int num=n%10;
        n=n/10;
        count++;
    }
    cout<<count;
}



//    optimal

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int ans=(int)(log10(n)+1);
    cout<<ans;
}
    */




    //  REVERSE NUMBER


/*
    #include<iostream>
    using namespace std;
    int main(){
        int n ;
        cin>>n;
        int ans=0;
   while(n!=0){
    int num=n%10;
    n=n/10;
ans=ans*10+num;
   }
   cout<<ans;
    }
   */


   //  palindrome   
/*
   #include<iostream>
   using namespace std;
   int main(){
    int n ;
    int ans=0;
    cin>>n;
    int p=n;
    while(n!=0){
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    if(ans==p)cout<<"true";
    else{
        cout<<"not";
    }
    
}
    */

 


    //   gcd


    /*
    #include<iostream>
    using namespace std;
    int gcd(int num1,int num2){
        if(num2==0)return num1;
        return gcd(num2,num1%num2);
    }
    int main(){
        int num1;
        int num2;
        cin>>num1;
        cin>>num2;
        int ans=gcd(num1,num2);
cout<<ans;
    }

*/



   //  ARMSTRONG NUMBER 

/*
   #include<iostream>
   #include<cmath>
   using namespace std;
   int power(int base, int exp) {
    int ans = 1;
    while(exp--) {
        ans *= base;
    }
    return ans;
}
   int main(){
       int n;
       cin>>n;
    int p=n;
    int ans=0;
    int count=0;
    while(n!=0){
        int digit=n%10;
        count++;
        n=n/10;
    }
    n=p;
   while(n != 0) {
        int digit = n % 10;
        ans += power(digit, count);
        n /= 10;
    }
    if(p==ans){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
    cout<<endl;
    cout<<ans<<endl;
    cout<<p;
   }
    */


            //   Print all Divisors

/*
           # include<iostream>
           #include <bits/stdc++.h>
            using namespace std;
            int main(){
                vector<int> s;
                int n ;
                cin>>n;
                for(int i=1;i*i<=n;i++){
             if(n%i==0){
s.push_back(i);
if(i!=n/i){
s.push_back(n/i);
}
             }
                }
                for(int b=0;b<s.size();b++){
                    cout<<s[b]<<" ";
                }
            }

            */




            //   PRIME NUMBER



/*
          #  include<iostream>
            using namespace std;
            int main(){
                int n ;
               
                cin>>n;
                if(n <= 1) {
        cout << "not";
        return 0;
    }

                for(int b=2;b*b<=n;b++){
              if(n%b==0){
                cout<<"no";
                return 0;
              }
            }
                    cout<<"yes";
                }
            
        */
       
        
