/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int c;
     for(int i=1;i<=n;i++){
         c=i;
        for(int j=1;j<=n;j++){
           if(j<=n-i){
               cout<<" ";
           }else{
               cout<<c<<" ";
               c--;
           }
           
        }
        cout<<endl;
    }
   
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i-1){
                cout<<" ";
            }else{
                cout<<n-j+1<<" ";
            }
        }
        cout<<endl;
    }



    return 0;
}
