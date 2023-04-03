
%{
    #include<stdio.h>
    int lc=1, ch=0, wd=0; 
    %}
     
    /*Rule Section*/
    %%
    [\n] {lc++;wd++;}
    [\t] wd++;
    [" "] wd++;
    [^\n\t] {ch++;}
    %%
     
    int main(int argc, char *argv[])
    {
        yyin= fopen(argv[1],"r");
        yylex();
        
        printf("File: %s",argv[1]); 
        printf("\nNumber of lines=%d", lc); 
        printf("\nNumber of words=%d", wd);
        printf("\nNumber of characters=%d \n", ch);
        lc=1, ch=0, wd=0; 
        
        yyin= fopen(argv[2],"r");
        yylex();
        
        printf("File: %s",argv[2]); 
        printf("\nNumber of lines=%d", lc); 
        printf("\nNumber of words=%d", wd);
        printf("\nNumber of characters=%d \n", ch);
        lc=1, ch=0, wd=0; 
        
        yyin= fopen(argv[3],"r");
        yylex();
        
        printf("File: %s",argv[3]); 
        printf("\nNumber of lines=%d", lc); 
        printf("\nNumber of words=%d", wd);
        printf("\nNumber of characters=%d \n", ch);
        
        return 0; 
    }