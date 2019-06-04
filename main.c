#include<stdio.h>
void swap(int arr[],int x, int y){
int temp;
temp=arr[x];
arr [x]=arr[y];
arr[y]=temp;

}
void sort(int arr[]){
    if(arr[0]>arr[1]){
        swap(arr,0,1);
        }
    if(arr[1]>arr[2]){
        swap(arr,1,2);
        if(arr[0]>arr[1]){
            swap(arr,0,1);
        }
    }
        }
        int go(int y, int z){
            if((y==0&&z!=1)||(y==1&&z!=1)){
            
            return 1;
            }
            else
            return 0;
        }
        int goo(int y, int z){
            if(y==0&&z==1){
            return 1;
            }
            else
            return 0;
        }
int main(){
      int x=0 ,y=0 , z=0, f=0, n=0 , j=0;
      int arr[3];
    //קליטה והדפסת החבילות
    printf("please enter 3 numbers\n");
    scanf("%d%d%d",&x,&y,&z);
    arr[0]=x;
    arr[1]=y;
    arr[2]=z;
    sort(arr);
    printf("packet sizes are: %d %d %d\n ",arr[0],arr[1],arr[2]);
    if(arr[2]==arr[1]+arr[0]){
        f=1;
    }
    while(go(arr[1],arr[2])!=1){
        if(f==0){
              printf("I turned %d " , arr[2]);
              arr[2]=arr[1]-arr[0];
                 printf("to %d\n",arr[2]);
            sort(arr);
             printf("packet sizes now are: %d %d %d\n",arr[0],arr[1],arr[2]);
                f=1;
        }
        else if(f==1){
         printf("your turn \n");
         printf("choose a puckt\n");
        scanf("%d",&n);
        printf("please state how much to take\n");
        scanf("%d",&j);
            if(n<j){
             printf("you cant make nagtive packet please try agin\n");
                }
                else{
                 if(n==arr[0]){
                printf(" %d ",arr[0]);
                arr[0]=arr[0]-j;
                printf("to %d \n",arr[0]);
                sort(arr);
                  printf("packet sizes now are: %d %d %d\n",arr[0],arr[1],arr[2]);
                    f=0;
            }
             if(n==arr[1]){
                printf(" %d ",arr[1]);
                arr[1]=arr[1]-j;
                printf("to %d \n",arr[1]);
                sort(arr);
                  printf("packet sizes now are: %d %d %d\n",arr[0],arr[1],arr[2]);
                    f=0;
            }
            if(n==arr[2]){
                printf(" %d ",arr[2]);
                arr[2]=arr[2]-j;
                printf("to %d \n",arr[2]);
                sort(arr);
                  printf("packet sizes now are: %d %d %d\n",arr[0],arr[1],arr[2]);
                    f=0;
            }
            
        }
        }
    }
    while(goo(arr[1],arr[2])!=1){
            printf("******************************\n");

        if(f==0){
            if(arr[1]==0||arr[0]==1&&arr[1]==1){
             printf("I turned %d " , arr[2]);
              arr[2]=1;
                 printf("to %d\n",arr[2]);
            sort(arr);
             printf("packet sizes now are: %d %d %d\n",arr[0],arr[1],arr[2]);
                f=1;
             }
             if(arr[0]==0&&arr[1]==1){
                  printf("I turned %d " , arr[2]);
              arr[2]=0;
                 printf("to %d\n",arr[2]);
            sort(arr);
             printf("packet sizes now are: %d %d %d\n",arr[0],arr[1],arr[2]);
                f=1;
             }
        }
             else {
               printf("your turn \n");
         printf("choose a puckt\n");
        scanf("%d",&n);
        printf("please state how much to take\n");
        scanf("%d",&j);
            if(n<j){
             printf("you cant make nagtive packet please try agin\n");
                }
                else{
                 if(n==arr[0]){
                printf(" %d ",arr[0]);
                arr[0]=arr[0]-j;
                printf("to %d \n",arr[0]);
                sort(arr);
                  printf("packet sizes now are: %d %d %d\n",arr[0],arr[1],arr[2]);
                    f=0;
                    }
                if(n==arr[1]){
                printf(" %d ",arr[1]);
                arr[1]=arr[1]-j;
                printf("to %d \n",arr[1]);
                sort(arr);
                  printf("packet sizes now are: %d %d %d\n",arr[0],arr[1],arr[2]);
                    f=0;
                 }
                     if(n==arr[2]){
                printf(" %d ",arr[2]);
                arr[2]=arr[2]-j;
                printf("to %d \n",arr[2]);
                sort(arr);
                  printf("packet sizes now are: %d %d %d\n",arr[0],arr[1],arr[2]);
                    f=0;
            }   
             }
             }
        }
        
        if(f==1){
            printf("you loss maybe next time :( ");
        }
        else
        printf("you won!!");
    return 0;
}