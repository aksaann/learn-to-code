int main()
{
    char str[20];
    printf("Enter the string:");
    fgets(str,20,stdin);
    int dcount=0,acount=0,ccount=-1,i;
    for(i=0;str[i]!=0;i++){
        if(str[i]>='0' && str[i]<='9')
        {
            dcount++;
            
        }
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            acount++;
        }
        
        else
        {
            ccount++;
        }
    }
    
       
       
    printf("digits=%d \n",dcount);
    printf("alaphabets=%d \n",acount);
    printf("characters=%d",ccount);

    return 0;
}