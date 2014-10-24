#include<stdio.h>
int main()
{
    int i,j,k,l,m,score[2],cnt,l1,l2,y=1;
    char a[3][3],p1[20],p2[20],temp[20],n[10],c,q[10];
    printf("Tic Tac Toe\nCreated by: Gaurav Chandak\n\n");
    printf("Player 1,Enter your name: ");
    scanf("%s",p1);
    printf("Player 2,Enter your name: ");
    scanf("%s",p2);
    score[0]=0;
    score[1]=0;
    while(1)
    {
        printf("\nGame %d:\n\n",y);
        printf(" -------------\n");
        for(i=0;i<3;i++)
        {
            printf(" | ");
            for(j=0;j<3;j++)
            {
                a[i][j]=' ';
                printf("%d | ",3*i+j+1);
            }
            printf("\n -------------\n");
        }
        for(k=0;k<5;k++)
        {
            while(1)
            {
                printf("%s's Turn\n",p1);
                scanf("%s",&n);
                if(n[0]>'9' || n[0]<'1' || strlen(n)>1)
                {
                    printf("Invalid no.\nEnter a different no.\n");
                    printf("\a");
                }
                else
                {
                    i=(n[0]-'0'-1)/3;
                    j=(n[0]-'0'-1)%3;
                    if(a[i][j]!=' ')
                    {
                        printf("Already in use\nEnter a different no.\n");
                        printf("\a");
                    }
                    else break;
                }
            }
            a[i][j]='X';
            printf(" -------------\n");
            for(l=0;l<3;l++)
            {
                printf(" | ");
                for(m=0;m<3;m++)
                if(a[l][m]==' ')
                printf("%d | ",3*l+m+1);
                else
                printf("%c | ",a[l][m]);
                printf("\n -------------\n");
            }
            if((a[i][0]=='X' && a[i][1]=='X' && a[i][2]=='X') || (a[0][j]=='X' && a[1][j]=='X' && a[2][j]=='X') || (a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[2][0]=='X' && a[1][1]=='X' && a[0][2]=='X'))
            {
                printf("%s wins\n",p1);
                score[0]++;
                break;
            }
            if(k==4)
            {
                printf("Draw\n");
                break;
            }
            while(1)
            {
                printf("%s's Turn\n",p2);
                scanf("%s",&n);
                if(n[0]>'9' || n[0]<'1' || strlen(n)>1)
                {
                    printf("Invalid no.\nEnter a different no.\n");
                    printf("\a");
                }
                else
                {
                    i=(n[0]-'0'-1)/3;
                    j=(n[0]-'0'-1)%3;
                    if(a[i][j]!=' ')
                    {
                        printf("Already in use\nEnter a different no.\n");
                        printf("\a");
                    }
                    else break;
                }
            }
            a[i][j]='0';
            printf(" -------------\n");
            for(l=0;l<3;l++)
            {
                printf(" | ");
                for(m=0;m<3;m++)
                if(a[l][m]==' ')
                printf("%d | ",3*l+m+1);
                else
                printf("%c | ",a[l][m]);
                printf("\n -------------\n");
            }
            if((a[i][0]=='0' && a[i][1]=='0' && a[i][2]=='0') || (a[0][j]=='0' && a[1][j]=='0' && a[2][j]=='0') || (a[0][0]=='0' && a[1][1]=='0' && a[2][2]=='0') || (a[2][0]=='0' && a[1][1]=='0' && a[0][2]=='0'))
            {
                printf("%s wins\n",p2);
                score[1]++;
                break;
            }
        }
        printf("\nCurrent Scoreboard:\n");
        printf("%s : %d\n",p1,score[0]);
        printf("%s : %d\n\n",p2,score[1]);
        printf("Press 0 to exit\n1 to start a new tournament\n2 to continue: ");
        scanf("%d",&cnt);
        if(cnt==0)
        {
            if(score[0]>score[1])
            printf("\n%s won the tournament %d:%d\n",p1,score[0],score[1]);
            else if(score[0]<score[1])
            printf("\n%s won the tournament %d:%d\n",p2,score[0],score[1]);
            else printf("\nIt was a draw\n\n");
            printf("Good Bye\n");
            printf("\a");
            break;
        }
        else if(cnt==1)
        {
            if(score[0]>score[1])
            printf("\n%s won the tournament %d:%d\n\n",p1,score[0],score[1]);
            else if(score[0]<score[1])
            printf("\n%s won the tournament %d:%d\n\n",p2,score[0],score[1]);
            else printf("\nIt was a draw\n\n");
            printf("Is %s playing this game?\nY:Yes,N:No\n",p1);
            scanf("%s",q);
            if(q[0]=='N' || q[0]=='n')
            {
                printf("Who's the new player?\n");
                scanf("%s",p1);
            }
            else
            printf("Ok!\n\n");
            printf("Is %s playing this game?\nY:Yes,N:No\n",p2);
            scanf("%s",q);
            if(q[0]=='N' || q[0]=='n')
            {
                printf("Who's the new player?\n");
                scanf("%s",p2);
            }
            else
            printf("Ok!\n\n");
            score[0]=0;
            score[1]=0;
            y=1;
        }
        else
        {
            l1=strlen(p1);
            l2=strlen(p2);
            for(i=0;i<=l1;i++)
            temp[i]=p1[i];
            for(i=0;i<=l2;i++)
            p1[i]=p2[i];
            for(i=0;i<=l1;i++)
            p2[i]=temp[i];
            score[0]=score[0]+score[1];
            score[1]=score[0]-score[1];
            score[0]=score[0]-score[1];
            y++;
        }

    }
    return 0;
}
