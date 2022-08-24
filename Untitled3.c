 #include<stdio.h>
void main()
{
    char com[1000];
    int i=0,j=0,len,l=0;
    printf("\n Enter the line :\n\n");
    gets(com);
    len= strlen(com);
    printf("\n\nInput contains string ");
    for (i = 0; i < len; i++)
    {
        if(com[i]=='"')
        {
            l++;
            char res[1000]="/0";
            int k=0;
            for (j = i; j < len; j++)
            {
                res[k]=com[j];
                k++;
                if(com[j+1] == '"')
                {
                    res[k]=com[j+1];
                    if(l>1){
                    printf(" & ");}
                    printf(res);

                    break;
                }
            }
            i=j+1;
        }
    }
    printf(" \n ");
}

