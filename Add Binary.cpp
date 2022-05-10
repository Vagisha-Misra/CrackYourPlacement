class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int alen = a.size();
        int blen = b.size();
        char carry = '0';
        int i = alen-1;
        int j = blen-1;
        while(i>=0 || j>=0){
            if(i>=0 && j>=0){
                ans = ans + char((int(a[i]) ^ int(b[j])) ^ int(carry));
                carry = char((int(a[i]) & int(b[j])) | (int(carry) & ((int(a[i]) ^ int(b[j])))));
                // cout<<ans<<endl;
                
            }else if(i>=0 && j<0){
                ans = ans + to_string(a[i]^carry);carry=char(a[i]&carry);
                // cout<<ans<<endl;
            }else{
                ans = ans + to_string(b[j]^carry);carry=char(b[j]&carry);
                // cout<<ans<<endl;
            }
            i--;j--;
        }
        if(carry == '1'){ans=ans+'1';}
        reverse(ans.begin(),ans.end());
        return ans;
    }
};