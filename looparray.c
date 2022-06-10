int main()
{
    double A[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    
    int i;
    for (i=0; i<5; i++)
    {
        printf("%f + %f is %f\n", A[i], A[i], A[i]+A[i]);
    }
}