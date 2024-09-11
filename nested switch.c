#include <stdio.h>
int main()
{
    printf ("=====1: Maharashtra =====\n");
    printf ("=====2: karnataka   =====\n");
    int i,s,R,v,p,y,n;
    printf ("Enter where are you form\n");
    scanf("%d",&n);
    switch(n){
        case 1:printf("you are from Maharashtra\n ");
        printf("1:shivaji University\n ");
        printf("2:mumbai University\n");
        printf("enter your choice\n");
        scanf("%d",&i);
        switch(i){
            case 1:printf("Enter your marks\n");
                   scanf("%d",&s);
                   if(s>=90){
                       printf("you easily get this college ");
                   }
                   else {
                       printf ("less chance");
                   }
            break;
            case 2: printf("Enter your marks\n");
                    scanf("%d",&s);
                    if(s>=90){
                        printf("chances to get this college ");
                    }
                    else{
                        printf ("no chance");
                    }
        }
        break;
        case 2:printf("you are from karnataka\n");
        printf("1:KLE\n");
        printf("2: pharmacy\n");
        printf("Enter your choice\n");
        scanf("%d",&p);
        switch (p){
            case 1: printf("Enter your marks\n");
                    scanf("%d",&y);
                    if(y>=90){
                        printf("YES");
                    }
                    else{
                        printf ("No");
                    }
             break;       
            case 2: printf("Enter your marks\n");
                    scanf("%d",&v);
                    if(v>=90){
                        printf("topper");
                    }
                    else{
                        printf ("losser");
                    }
        }
        break;
        default:printf("Enter your marks\n");
                scanf("%d",&R);
                if(R>=90){
                    printf("you get any college from Maharashtra and Karnataka");
                }
                else{
                    printf("you not getting any college from Maharashtra and Karnataka");
    }
    return 0;
}
}

