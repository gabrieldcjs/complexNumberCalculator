#include<stdio.h>


struct complex 
{
    int real, img;

};
    int main()
    {
        
        int op, x, y, z;
        struct complex a, b, c, mul;

      
    {
        printf("aperte 1 para somar dois numeros complexos\n");
        printf("aperte dois para subtrair dois numeros complexos.\n");
        printf("aperte 3 para multiplicar dois numeros complexos\n");
        printf("aperte 4 para dividir dois numeros complexos.\n");
        printf("escolha!\n");
        scanf("%d", &op);

        if(op >= 1 && op <=4)
    {
        printf("entre a + ib real e imaginario, 1 numero complexo.\n");
        scanf("%d%d", &a.real, &a.img);
        printf("entre c e d onde c + id é o segundo numero complexo.\n");
        scanf("%d%d", &b.real, &b.img);
    
    }
    if (op == 1)
    {
      c.real = a.real + b.real;
      c.img = a.img + b.img;

        printf("Soma de dois numeros compplexos = %d + %di", c.real, c.img);
    }
    else if (op == 2)
    {
      c.real = a.real - b.real;
      c.img = a.img - b.img;
      
        printf("subtracao de dois numeros complexos = %d + %di", c.real, c.img);
    }
    else if (op == 3)
    {
      c.real = a.real*b.real - a.img*b.img;
      c.img = a.img*b.real + a.real*b.img;

        printf("multiplicacao de dois numeros complexos = %d + %di", c.real, c.img);
    }
    else if (op == 4)
    {
      if (b.real == 0 && b.img == 0)
        printf("divisao por 0 nao e permitido");
      else
      {
        x = a.real*b.real + a.img*b.img;
        y = a.img*b.real - a.real*b.img;
        z = b.real*b.real + b.img*b.img;

         if (x%z == 0 && y%z == 0)
        {
          if (y/z >= 0)
            printf("divisao de numeros complexos = %d + %di", x/z, y/z);
    
        }
        else if (x%z == 0 && y%z != 0)
        {
          if (y/z >= 0)
            printf("divisao de numeros complexos = %d + %d/%di", x/z, y, z);
    
        }
        else if (x%z != 0 && y%z == 0)
        {
          if (y/z >= 0)
            printf("divisao de numeros complexos = %d/%d + %di", x, z, y/z);
         
        }
        else
        {
          if (y/z >= 0)
            printf("divisao de numeros complexos = %d/%d + %d/%di",x, z, y, z);
    }
      
      }
    }
    else
      printf("ESCOLHA O NUMERO!");

    printf("\ntecle qualquer coisa para ir denovo...\n");
  }
}

