void main(int argc,char *argv[])
{
    int i,s=0;
    for(i=1;i<argc;i++)
    {
        s=s+(argv[i]);
    }
    printf("Sum is %d=%s :",s);
    getch();
}
