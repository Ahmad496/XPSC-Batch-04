class Solution{
public:
	int search(string pat, string txt) {
	    vector<int>fq1(26,0);
	    vector<int>fq2(26,0);
	    for(char ch:pat)
	    fq1[ch-'a']++;
	    int res = 0;
	    int w_size = pat.size();
	    int i=0,j=0,tsize = txt.size();
	    while(j<tsize)
	    {
	        fq2[txt[j]-'a']++;
	        if(j-i+1<w_size)
	        {
	            j++;
	        }
	        else if(j-i+1 == w_size)
	        {
	            if(fq1 == fq2)
	            res++;
	            fq2[txt[i]-'a']--;
	            i++;
	            j++;
	        }

	    }
	    return res;
	}

};
