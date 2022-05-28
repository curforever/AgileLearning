# KMP程序

```c++
// KMP算法
// next数组 = 前缀表 版本

void getNext(int* next, string& s) {
	int j=0;
	next[0] = 0;
	for(int i=1; i<s.size(); i++) {
		while(j>0 && s[i]!=s[j]) 
			j = next[j-1];
		if(s[i]==s[j]) 
			j++;
		next[i] = j;
	}
}

int strStr(string& hayStack, string& needle) {
	if(needle.size()==0)	return 0;
	int next[needle.size()];
	getNext(next, needle);
	int j = 0;
	for(int i=0; i<hayStack.size(); i++) {
		while(j>0 && hayStack[i]!=needle[j]) 
			j = next[j-1];
		if(hayStack[i]==needle[j]) 
			j++;
		if(j == needle.size()-1)
			return (i-j+1);
	}
	return -1;
}
	

```

