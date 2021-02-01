int main() {
    
    int x,y,z,temp;
    char SortOrder[5];
    printf("Enter the 3 numbers:");
    scanf("%d%d%d",&x,&y,&z);
    printf("Enter the sort order (asc/desc): ");
    scanf("%s",&SortOrder);
    if(x>y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if(x>z)
    {
        temp = x;
        x = z;
        z = temp;
    }
    
    if(y>z)
    {
        temp = z;
        z = y;
        y = temp;
    }
    
    if(strcmp(SortOrder,"asc")==0)
    {
        printf("Ascending Order: %d,%d,%d",x,y,z);
    }
    else
    {
        printf("Ascending Order: %d,%d,%d",z,y,x);
    }
    return 0;
}