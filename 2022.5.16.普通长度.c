# include <stdio.h>
Int strlen1(const char *str)
{
    if(*str == ‘\0’) 
      return 0;
    else
      return 1+strlen1(str+1);
}
Int main()
{
    Char *p = “ abcdef” ;
    Int len=strlen1(p);
    printf(“%d\n”,len);
    return 0;
}
