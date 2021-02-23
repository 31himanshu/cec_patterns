

#include <iostream>

using namespace std;

int main()
{
    int n=3;
    int c;
    for(int i=1;i<=n;i++){
        c=1;
        for(int j=i;j<=n;j++){
            
                cout<<" ";
            
            }
            for(int k=1;k<=2*i-1;k++){
                cout<<c++;
                
            }
        
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        c=1;
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<c++;
        }
        cout<<endl;
    }

    return 0;
}
