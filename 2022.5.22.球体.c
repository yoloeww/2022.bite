int main()
{
    float r;
        double V;//因为float只占四个字节，有效位是7位 需要用double
    scanf("%f",&r);
    V=(4.000*3.1415926*r*r*r)/3.000;
         printf("%.3f",V);
    return 0;
}
