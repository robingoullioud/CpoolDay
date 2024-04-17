void print_char(char c);
void my_print_n_ascii(int howMany);

void my_print_n_ascii(int howMany)
{
    int a = 33;
    if ( (a < howMany+33) &&(127 > howMany+33) )
        for(int a=33; a<howMany+33; a=a+1)
        {
            char c=a ;
            print_char(c);
        }
    
        
}

