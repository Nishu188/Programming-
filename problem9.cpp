//Unique element
int findUnique(int *arr, int size)
{
 int result=0;
    for(int i=0;i<size;i++){
     result= result^arr[i];
    }
    return result;
}