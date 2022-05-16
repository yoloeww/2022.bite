int my_strlen(char *str)
{
    int count = 0;
    if(*str!='\0')
    {
        str++;
        count++;
    }
   return count;
}
int main()
{
    char arr[]="abc";
    int len = my_strlen(arr);
    printf("%d\n",len);
    return 0;

}
