void main(int argc,char *argv[])
{
    int i,s=0;
    for(i=1;i<argc;i++)
    {
        s=s+atoi(argv[i]);
    }
    printf("Sum is %d :",s);
    getch();
}
