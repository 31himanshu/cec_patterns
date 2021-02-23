

#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int c;
    for(int i=n;i>=1;i--){
        c=i;
        for(int j=1;j<=i;j++){
            cout<<c;
            c--;
        }
        cout<<endl;
    }

    return 0;
}
