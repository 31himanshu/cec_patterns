#include <iostream>

using namespace std;

int main()
{  
    int n=5;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i-1){
                cout<<" ";
            }else{
                cout<<n-j+1;
            }
        }
        cout<<endl;
    }


    return 0;
}
