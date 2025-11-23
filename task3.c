#include <stdio.h>
#include <string.h>
int main() {
    char s[100] = "IceCreAm";
    int len = strlen(s);
    char vowels[100];
    int vCount = 0;
    for(int i=0;i<len;i++){
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
                vowels[vCount++]=s[i];
        }        
    }
    for(int i=0;i<vCount/2;i++){
        char temp=vowels[i];
        vowels[i]=vowels[vCount-i-1];
        vowels[vCount-i-1]=temp;
    }
    int index=0;
    for(int i=0;i<len;i++){
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
                s[i]=vowels[index++];
        }
    }
    printf("%s\n", s);

    return 0;
}
            
                
                
                
                
                
                
