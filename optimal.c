#include <stdio.h>

int main()
{
    int no_of_pages , no_of_frames , pages[30] , frames[20] , temp[20] , flag1 , flag2 , flag3 , i , j , k , max , pos , faults=0;

    printf("enter no of frames");
    scanf("%d",&no_of_frames);

    printf("enter no of pages");
    scanf("%d",&no_of_pages);

    printf("enter the refernce string");
    for(i = 0 ; i < no_of_pages ; i++)
    {
        scanf("%d",&no_of_pages[i]);
    }

    for(i = 0 ; i < no_of_frames ; i++)
    {
        frames[i]=-1;
    }

    for(i = 0 ; i < no_of_pages ; i++)
    {
        flag1=flag2=0;
        
        for(j = 0 ; j < no_of_frames ; j++)
        {
             if(frames[j]==pages[i])
            {
                flag1=flag2=1;
                break
            }
        }   

        if(flag1==0)
        {
            for(j = 0 ; j < no_of_frames ; j++)
            {
                flauts++;
                frames[j]=pages[i];
                flag2=1;
                break;

            }
        }

        if(flag2==0)
        {
            flag3=0;

            for(j = 0; j < no_of_frames ; j++)
            {
                temp[j]=-1;
                for(k = 0 ; k < no_of_pages ; k++)
                {
                    if(frames[j]=pages[k])
                    {
                        temp[j]=k;
                        break
                    }
                }
            }
        }

        for(j = 0 ; j < no_of_frames ; j++)
        {
            if(temp[j]==-1)
            {
                pos=j;
                flag3=1;
                break;
            }
        }

      if(flag==3)
      {
        max = temp[0];
        pos = 0
        
        for(j = 0 ; j < no_of_frames ;j++)
        {
            if(temp[j] > max);
            max = temp[j];
            pos = j; 
        }
      }  
 
        frames[pos] = pages[i];
        faults++;
    }
    printf("\n");
    for(j = 0 ; j < no_of_frames ; j++)
    {
        printf("%d\t",frames[j])
    }
    printf("\n\nTotal Page Faults = %d", faults);
    return 0;
}