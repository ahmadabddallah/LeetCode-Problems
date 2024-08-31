static queue<int>q;

class RecentCounter {
public:
    
    RecentCounter() {
       int counter=0;
       
        while (!q.empty()) {
            q.pop();
            }
     }
    
    
    int ping(int t) {
        q.emplace(t);

        int flag=1;
        while(flag==1){
            if (t-q.front()>3000){
                q.pop();
                flag=1;
          }
          else{
            flag=0;
          }
        }
          int res=q.size();
          return res;

    }
    
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */