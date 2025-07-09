int main()
{
    int arr[5];
    int min, i;
    min = 0;
    
    printf("Digite aqui os valores da array: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    
    for(i = 1; i < 5; i++){
        if(arr[i] < arr[min]){
            min = i;
            
        }
    }
    
    printf("O menor valor é: %d", arr[min]);
}
