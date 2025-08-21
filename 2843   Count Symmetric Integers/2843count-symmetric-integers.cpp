class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count= 0;
        int digit;
        for(int i=low; i<=high; i++){
            int num= i;
            vector<int>temp;
            while(num>0){
                digit= num%10;
                num/=10;
                temp.push_back(digit);
            }
            if(temp.size()%2!=0) continue;
            int sum=0;
            int summ=0;
            for(int i=0; i<temp.size()/2; i++){
                sum+=temp[i];
            }
            for(int i=temp.size()/2; i<temp.size(); i++){
                summ+=temp[i];
            }
            if(sum==summ) count++;
        }
        return count;
    }
};