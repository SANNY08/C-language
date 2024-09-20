struct book
{
    int bid;
    float bprice;
    char bauthor[20];
    char bname[20];
};
void main()
{
    struct book b1;
 printf("Enter Book_id,Book_price,Book_author_name,Book_name :");
scanf("%d %f %s %s",&b1.bid,&b1.bprice,b1.bauthor,b1.bname);
printf("%d : %f : %s : %s :",b1.bid,b1.bprice,b1.bauthor,b1.bname);

  getch();
}
