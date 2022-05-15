#include <iostream>
#include<vector>
using namespace std;

int main()
{
  //write your code here
  int T,q;
  vector<int> N;
  cin>>T;
  
  for (int i=0;i<T;i++){
    cin>>q;
    N.push_back(q);
  }
  for(int i=0;i<T;i++){
    for (int j=0;j<=N[i];j++){
      if((j*(j+1))/2 >=N[i]){
        cout<<j<<endl;
        break;
      }
      continue;
    }
  }
  return 0;
}