#include<iostream>
#include<vector>
using namespace std;
class Stock{
     vector<int> p;
public:
    Stock(vector<int> prices): p(prices) {}
    int isStock(){
      vector<int> k=p;
      int s[p.size()];
      int b=0;
      for(int i=0;i<p.size();i++){
          for(int j=i+1;j<p.size();j++){
              int a=p[j]-p[i];
              if(a>b){
                  b=a;
                }
            }
        }
        return b;
      
    }
};
int main(){
    vector<int> a={7,6,4,3,1};
    Stock s(a);
    int f =s.isStock();
    cout<<"Ganancia maxima: "<<f<<endl;
    return 0;

}