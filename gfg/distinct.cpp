// Problem: Distinct
// Link: https://www.geeksforgeeks.org/problems/unique-numbers3019/1

class solution {
  public:
    vector<int> uniqueNumbers(int l, int r) {
        // code here
         vector<int> res;
         for(int i=l ; i<=r ; i++){
             int temp = i;
             bool visited[10] = {false};
             bool isUnique = true;
             
            while(temp>0){
                int digit = temp%10;
                if(visited[digit]){
                    isUnique =false;
                    break;
                }
                visited[digit] = true;
                temp /=10;
            }
            if(isUnique){
                res.push_back(i);
            }
         }
    return res;
    }
};