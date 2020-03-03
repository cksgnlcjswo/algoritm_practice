#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
    int T;
    cin>>T;
    for(int i = 0;i < T;i++){
        int N;
        cin>>N;
        vector<pair<string,int>> category;

        for(int k = 0;k < N;k++){
            string temp1, temp2;
            cin >> temp1 >> temp2;
        
            if(category.empty())
                category.push_back(pair<string,int>(temp2,1));
            else{
		int flag=1;
                int size = category.size();
                for(int j = 0;j < size;j++){
                    if(temp2 == category[j].first){
                        category[j].second++;
			flag=0;
		    	break;
		    }
		}
			if(flag)
                        category.push_back(pair<string,int>(temp2,1)); 
		}
            }
        
        int answer = 1;
        for(int j = 0;j < category.size();j++)
            answer *= category[j].second + 1;
        
        answer -= 1;

        cout<<answer<<'\n';
        
        category.clear();
    }
    
    return 0;
}
