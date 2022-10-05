void main()
{
    char x;
    int y;
    float z;
    clrscr();

    x='X';
    y=69;
    z=180.25;
  

    printf("%s is stored at address %u\n",x ,&x);    
    printf("%d is stored at address %u\n",y ,&y);
    printf("%f is stored at address %u\n",z ,&z);
    //prinf("% is stored at address %u\n", ,);                          //%u is used to return the location of a variable, requires &var to return the location
                                                                        /*printf("%u",&q); will return the location of variable q*/  

    getch();
}