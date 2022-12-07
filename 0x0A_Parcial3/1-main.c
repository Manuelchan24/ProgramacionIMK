#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main()

{
    char filas[9][9];
    for(int j=0;j<9;j++)
        
        {
            for(int i=0;i<9;i++)
            
            {
                filas[i][j]=' ';
            }

        }   

    for(int j=1;j<8;j++)
        
        {
            for(int i=1;i<8;i++)
                
                {
                    int num = rand () % 8;
                        if(num%2==0)
                            
                            {
                                filas[i][j]='*';
                            }else{
                                    filas[i][j]=' ';
                                 }

                    printf(" %c ",filas[i][j]);
                }
        printf("\n");
        }
    printf("\n");
    int noresult=1;
    char columnas[9][9];





    while(noresult<10)
    
    {
        int m=0;
        int c=0;
        for(int j=1;j<8;j++)
            
            {
                for(int i=1;i<8;i++)
                    
                    {
                        columnas[i][j]=filas[i][j];
                        if(filas[i][j]=='*')
                            
                            {
                                if(filas[i-1][j-1]=='*')
                                    
                                    {
                                        m++;
                                    }
                                
                                if(filas[i][j-1]=='*')
                                    
                                    {
                                        m++;
                                    }

                                if(filas[i+1][j-1]=='*')
                                    
                                    {
                                        m++;
                                    }

                                if(filas[i-1][j]=='*')
                                    
                                    {
                                        m++;
                                    }

                                if(filas[i+1][j]=='*')
                                    
                                    {
                                        m++;
                                    }

                                if(filas[i-1][j+1]=='*')
                                    
                                    {
                                        m++;
                                    }

                                if(filas[i][j+1]=='*')
                                    
                                    {
                                        m++;
                                    }

                                if(filas[i+1][j+1]=='*')
                                    
                                    {
                                        m++;
                                    }
                                    
                                if(m==2 || m==3)
                                    
                                    {
                                        columnas[i][j]='*';
                                    }

                                if(m<2 || m>3)
                                    
                                    {
                                        columnas[i][j]=' ';
                                    }

                                        m=0;
            
                                    }else if(filas[i][j]==' '){
                                        if(filas[i-1][j-1]=='*')
                                           
                                            {
                                                m++;
                                            }

                                        if(filas[i][j-1]=='*')
                                            
                                            {
                                                m++;
                                            }

                                        if(filas[i+1][j-1]=='*')
                                            
                                            {
                                                m++;
                                            }

                                        if(filas[i-1][j]=='*')
                                            
                                            {
                                                m++;
                                            }

                                        if(filas[i+1][j]=='*')
                                            
                                            {
                                                m++;
                                            }

                                        if(filas[i-1][j+1]=='*')
                                            
                                            {
                                                m++;
                                            }

                                        if(filas[i][j+1]=='*')
                                            
                                            {
                                                m++;
                                            }

                                        if(filas[i+1][j+1]=='*')
                                            
                                            {
                                                m++;
                                            }

                                        if(m==3)
                                            
                                            {
                                                columnas[i][j]='*';
                                            }

                                    m=0;
                            }
        
                    }
    
            }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("###############################\n");

    for(int j=1;j<8;j++)
        
        {
            for(int i=1;i<8;i++)
               
                {
                    printf(" %c ",columnas[i][j]);
                }

            printf("\n");
        }

    for(int j=1;j<8;j++)
        
        {
            for(int i=1;i<8;i++)
                
                {
                    filas[i][j]=columnas[i][j];
                }

        }

    noresult++;
    printf("\n");
    }
    

    
}