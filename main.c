

#include<stdio.h>

void cube(int side)
{
    int r,c;
    int len = side, bre = side, ht = side;
    int tlen = len+(len/2)-1, tht = ht + (ht/2)-1;
    printf("CUBE :\n\n");
    
    for (r=1;r<=tht;r++)
    {
        
        for (c=1; c<=tlen; c++)
        {
            
            if (
                (r==1&&c>len/2)||(r==len&&c>len/2) || (c==tlen&&r<=ht)||(c==len/2&&r<=ht)  ||
                (c==1&&r>ht/2)||(c==ht&&r>ht/2) || (r==tht&&c<=ht)||(r==ht/2&&c<=len)  ||
                (r+c==(len/2)+1)||(r+c==tlen+1&&(c<=bre/2||c>=bre)) || (r+c==(tlen+ht))
            )
                printf(" *");
            else
                printf("  ");
            
        }
        
        printf("\n");
    }
    
}

void cuboid(int len, int bre, int ht)
{
    int r,c;
    int tlen = len+(len/2), tht = ht + (ht/2);
    int dlen = tlen-len, dht = tht - ht;
    printf("CUBOID :\n\n");
    
    for (r=1;r<=tht;r++)
    {
        
        for (c=1; c<=tlen; c++)
        {
            
            
            if
            (
                (r==1&&c>dlen)||(r==ht&&c>dlen) || (c==tlen&&r<ht)||(c==dlen&&r<=ht)
                || (c==1&&r>dht)||(r==dht+1&&c<=len) || (r==tht&&c<=len)||(c==len&&r>dht)
                
            )
                
                printf(" *");
            else
                printf("  ");
            
        }
        
        printf("\n");
    }

    
}



void main()
{
    int no = 20;
    cube(15);
    cuboid(10,10,5);
}

