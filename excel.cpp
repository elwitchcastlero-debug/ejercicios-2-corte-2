#include<iostream>
#include<vector>
using namespace std;
class excel {
    string colums;
public:
    excel(string c): colums(c){}
    int isexcel() {
        string v="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int result=0;
        int rang=v.length();
        for(int i=0;i<colums.length();i++){
            for(int j=0;j<v.length();j++){
                if(colums[i]==v[j]){
                    result=result*rang+j+1;
                }

            }
        }
        return result;

    }
};
int main(){
    string s;
    cin>>s;
    excel e(s);
    cout<<e.isexcel()<<endl;
    return 0;
}
