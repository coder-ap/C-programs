#include <stdio.h>

int main()

{

int arr[100], freq[100];

int i, j, count;

printf("Enter elements in array:");

for(i=0; i<10; i++)

{

scanf("%d", &arr[i]);


freq[i] = -1;

}


for(i=0; i<10; i++)

{

count = 1;

for(j=i+1; j<10; j++)

{



if(arr[i]==arr[j])

{

count++;



freq[j]=0;

}

}



if(freq[i] != 0)

{

freq[i] = count;

}

}





for(i=0; i<10; i++)

{

if(freq[i] != 0)

{
		printf("%d occurs %d times\n", arr[i], freq[i]);

}
}
}
