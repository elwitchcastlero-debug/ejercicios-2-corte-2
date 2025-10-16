#include<iostream>
#include<vector>
using namespace std;
class pascal{
    int n;
public:
    pascal(int x):n(x){}
    vector<vector<int>> ispascal(){
        vector<vector<int>> v1;
        vector<int> v2={1};
        for(int i=1;i<n+1;i++){
           vector<int> v3={};
           for(int j=0;j<i+1;j++){
              v3.insert(v3.begin()+j, v2[j]+v2[j-1]);

            }
            v1.push_back(v2);
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
    vector<vector<int>> rows = p.ispascal();
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