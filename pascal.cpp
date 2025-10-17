#include<iostream>
#include<vector>
using namespace std;
class pascal{
    long long n;
public:
    pascal(long long x):n(x){}
    vector<vector<long long>> ispascal(){
        vector<vector<long long>> v1;
        vector<long long> v2={1};
        for(int i=1;i<=n;i++){
           vector<long long> v3={};
           for(int j=0;j<i;j++){
                if(j==0 || j==i-1){
                    v3.push_back(1);
                }
                else{
                    v3.push_back(v2[j-1]+v2[j]);
                }
           }
            v1.push_back(v3);
            v2=v3;
            
        }
     
          return v1;  
    }
        
    
};
int main(){
    int numRows;
    cout<<endl;
    cout<<"Digite el numero de filas: ";
    cin>>numRows;
    cout<<endl;
    pascal p(numRows);
    vector<vector<long long>> rows = p.ispascal();
    cout<<"{ ";
    for (int i=0;i<rows.size();i++){
        cout<<"{ ";
        for(int j=0;j<rows[i].size();j++){
            cout<<rows[i][j]<<" ";
        }
        cout<<"} ";
    }

    cout<<" }"<<endl;
    return 0;
}