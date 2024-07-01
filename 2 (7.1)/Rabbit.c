int main() {
    int a;
    int num;
    scanf("%d", &a);
    if(20 % a == 0){
        num = 20 / a;
    }
    else{
        num = 20 / a + 1;
    }
    printf("%d", num);
}
