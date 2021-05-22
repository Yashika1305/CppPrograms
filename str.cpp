#include <iostream>
#include <string.h>
 
using namespace std;
 
char* rem(char *str, char *lr)
{
     
   
    if (str[0] == '\0' || str[1] == '\0')
        return str;
 
    
    if (str[0] == str[1])
    {
        *lr = str[0];
        while (str[1] && str[0] == str[1])
            str++;
        str++;
        return rem(str, lr);
    }
 
   
    char* rem_str = rem(str+1, lr);
                               
     if (rem_str[0] && rem_str[0] == str[0])
    {
        *lr = str[0];
        return (rem_str+1); 
    }
 
    
    if (rem_str[0] == '\0' && *lr == str[0])
        return rem_str;
 
   
    rem_str--;
    rem_str[0] = str[0];
    return rem_str;
}
 

char *remove(char *str)
{
    char lr = '\0';
    return rem(str, &lr);
}
 
int main()
{	
	char strg[10];
	cout<<"Enter The string";
	cin>>strg;
	cout<< rem(strg[10])<<endl;
    return 0;
}

