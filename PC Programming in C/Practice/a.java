class a{
    
    int fun(){
        int j = 10;
        return (&j);
    }
    public static void main(String[] args) {
        int p = fun();
        printf("%d\n", p);
        return 0;
    }
}