#include <iostream>
#include <cctype>
using namespace std;

int main() {

    int t;
    cin >>t;

    for(int i=0;i<t;i++){
    string s;
    cin >>s;

    for(int j=0;j<3;j++){
        s[j]=tolower(s[j]);
    }

    if(s=="yes"){
        cout <<"YES"<<endl;
    }else{
        cout <<"NO"<<endl;
    }
    }
  return 0;
}
