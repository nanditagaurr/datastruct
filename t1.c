#include<stdio.h>
#include<math.h>
void main()
{
    int N,A[100000],i,p,s,t,pr=1,beg,mid,end,e;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {scanf("%d",&A[i]);
        pr*=A[i];
        }
    for(p=0;p<N;p++)
        for(s=0;s<N-p-1;s++)
        if(A[s]>A[s+1])
        {
            t=A[s];
            A[s]=A[s+1];
            A[s+1]=t;
        }
    beg=0;
    end=N-1;
    mid=(beg+end)/2;
    while(end>beg)
    {
        if(A[mid]>pr)
            end=mid-1;
        else
            beg=mid+1;
        if(pow(A[mid],N)>mid && pow(A[mid-1],N)<pr)
        {e=A[mid];
        break;
        }
        mid=(beg+end)/2;
    }
    printf("%d",e);
}
