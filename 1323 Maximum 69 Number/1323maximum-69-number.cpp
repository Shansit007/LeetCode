class Solution {
public:
    int maximum69Number (int num) {
        int n= to_string(num).size();
        int digit = num;
        int maxx=0;
        vector<int>temp;
        for(int i=0; i<n; i++){
            temp.push_back(digit%10);
            digit/=10;
        }
        reverse(temp.begin(),temp.end());
        for(int i=0; i<n; i++){
            int oldDigit= temp[i];
            //flipping 9 to 6 is nopoint
            if(temp[i]==6) temp[i]=9; 

            int newNum=0;
            for(int d: temp){
                newNum= newNum*10+d;
            }
            maxx=max(maxx,newNum);
            temp[i]= oldDigit;
        }
        return maxx;
    }
};