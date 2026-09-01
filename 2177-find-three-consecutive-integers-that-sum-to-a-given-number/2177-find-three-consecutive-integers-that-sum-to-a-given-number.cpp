class Solution {
public:
    vector<long long> sumOfThree(long long num) {
   vector<long long> a;
       if(num%3==0){
         a.resize(3);
         long long h=num/3;
         a[0]=h-1;
         a[1]=h;
         a[2]=h+1;
       }
         return a;
    }
};