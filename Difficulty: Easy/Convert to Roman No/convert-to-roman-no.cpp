class Solution {
  public:
    string convertToRoman(int n) {
        int arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans = "";
        while(n>0){
            for(int i=0;i<13;i++){
                if(n>=arr[i]){
                n -=arr[i];
                ans +=roman[i];
                break;
            }
          }
        }
        return ans;
        
    }
};