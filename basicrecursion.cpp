//Print Name N times using Recursion
/*
#include<iostream>
using namespace std;
void name(string s,int n){
    if(n==0)return;
    cout<<s<<endl;
    
    name(s,n-1);
    
}
int main(){
    int n ;
    cout<<"no";
    cin>>n;
    string s;
    cin>>s;
   name(s,n);
}
   */


//          PRINT NUMEBER 1 TO N

/*
   #include<iostream>
   using namespace std;
   void print(int n,int num){
    if(n==0)return;
    
cout<<num;
num++;
n--;
print(n,num);
   }
   int main(){
int n ;
cin>>n;
int num=1;
print(n,num);
   }



   
   // BACKTRAKING 



   
   #include<iostream>
   using namespace std;
   void print(int n){
    if(n==0)return ;
    print(n-1);
    cout<<n;
   }
   int main(){
    int n ;
    cin>>n;
    print(n);
   }

   */


   //  Print N to 1 using Recursion

   /*
   #include<iostream>
   using namespace std;
   void print(int num,int n ){
   if(n==0)return;
   cout<<num;
   print(num-1,n-1);
   }
   int main(){
    int n ;
    cin>>n;
   int num=n;
print(num,n);
   }




    //  Print N to 1 using backtraking

    
   #include<iostream>
   using namespace std;
   void print(int n){
    if(n==0)return ;
    cout<<n;
    print(n-1);
   }
   int main(){
    int n ;
    cin>>n;
    print(n);
   }
    */




    //Sum of first N Natural Numbers

/*
    #include<iostream>
   using namespace std;
   int sum(int n){
    if(n==1)return 1;
return n+sum(n-1);
   }
   int main(){
int n ;
cin>>n;
int num=1;
int ans=0;
cout<<sum(n);

   }

   */



   //  FACTORIAL




/*
   #include<iostream>
   using namespace std;
   int factorial(int n ){
    if(n==1)return 1;
    return n *factorial(n-1);
   }
   int main(){
    int n ;
    cin>>n;
    cout<<factorial(n);
   }
*/




     //     REVERSE ARRAY 





     /*
     #include<iostream>
     using namespace std;
     void print(int arr[],int n){
        if(n==0)return ;
        cout<<arr[n-1];
        print(arr,n-1);
     }
     int main(){ 
        int arr[5]={1,2,3,4,5};
int size=5;
print(arr,5);
     }

     */




     //Check if String is Palindrome or Not




/*
#include<iostream>
using namespace std;
bool palindrome(string s, int left, int right){
    if(s[left]!=s[right])return false;
    if(left<right){
        palindrome(s,left+1,right-1);
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    int left=0;
    int right=s.length()-1;
  if(  palindrome(s,left,right)){
    cout<<"yes";
  }
  else{
    cout<<"not";
  }

}

    */


//         Print Fibonacci Series up to Nth term


/*
#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1)return n;
   return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
int n ;
cin>>n;
for(int b=0;b<n;b++){
cout<<fibonacci(b)<<" ";
}
}
*/
