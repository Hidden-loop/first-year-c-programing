#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int a[3][3]={1,2,1,2,1,2,3,1,3};
    int b[3][3]={3,2,3,2,1,2,1,3,1};
    int c[6][6];
    int x,y,z;

   /* printf("enter value for first array\n");                                                      
    for (x=0;x<3;x++)                                 //to input values in array from user                                                                                                  
    {                                                 //to input values in array from user                                      
	for (y=0;y<3;y++)                                 //to input values in array from user                                              
	{                                                 //to input values in array from user                              
	    scanf("%d",&a[x][y]);                         //to input values in array from user                                  
	}                                                 //to input values in array from user                          
    }                                                 //to input values in array from user                      

    printf("enter values for second array\n");  
    for (x=0;x<3;x++)                                 //to input values in array from user                  
    {                                                 //to input values in array from user          
	for (y=0;y<3;y++)                                 //to input values in array from user                          
	{                                                 //to input values in array from user          
	    scanf("%d",&b[x][y]);                         //to input values in array from user                                      
	}                                                 //to input values in array from user              
    }                                                 //to input values in array from user                                                              
    */

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
	c[x][y]=0;                                       //sets values to 0 for error reduction                                   
		for (z=0;z<3;z++)                                                                               
		{                                                                                       
			c[x][y]+=a[x][z]*b[z][y];                         /* a[x][z] as we need to keep the x constant for first z calculations 
                                                                 b[z][y] as we need to keep the y constant while z needs changing   */
		}                                                                                           
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

