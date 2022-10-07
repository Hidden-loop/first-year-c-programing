void main()
{
    clrscr();
    int a[3][3];                             //={1,2,1,2,1,2,3,1,3};
    int b[3][3];                             //={3,2,3,2,1,2,1,3,1};
    int c[6][6];
    int x,y,z;

   printf("enter value for first array\n");
    for (x=0;x<3;x++)                         
    {                                         
	    for (y=0;y<3;y++)                         
	    {                                         
	        scanf("%d",&a[x][y]);                 
	    }                                         
    }                                         

    printf("enter values for second array\n");
    for (x=0;x<3;x++)                         
    {                                         
	        for (y=0;y<3;y++)                         
	        {                                         
	                scanf("%d",&b[x][y]);                 
	        }                                         
    }                                         
    

    printf("values of first array are:\n");   
    for (x=0;x<3;x++)                         
    {                                         
	for (y=0;y<3;y++)                         
	{                                         
	    printf("\t%d",a[x][y]);               
	}                                         
	printf("\n");                             
    }                                         

    printf("values of second array are:\n");  
    for (x=0;x<3;x++)                         
    {                                         
	    for (y=0;y<3;y++)                         
	    {                                         
	        printf("\t%d",b[x][y]);              
	    }                                         
	printf("\n");                             
    }                                         

    for (x=0;x<3;x++)
    {                                         
	    for (y=0;y<3;y++)                         
	    {                                          
		   c[x][y]=a[x][y]+b[x][y];     
	    }           
    }                                         

    printf("value in the third array are:\n");
    for (x=0;x<3;x++)
    {
	for (y=0;y<3;y++)
	{
	    printf("\t%d",c[x][y]);
	}
	printf("\n");
    }


 getch();

}

