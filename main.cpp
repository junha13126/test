#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100] = {0};
    int x,y ;

    for(int i=1; i<=10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<10; i++)
    {
        for(int j=i+1; j<=10; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d", arr[3]);
    return 0;
}
