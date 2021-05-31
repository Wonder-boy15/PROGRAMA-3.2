/ * Dep3_Prog6:
Un cuente el numero de veces que ahorras y nos diga el acumulado de ahorro * /
# incluye  < stdio.h >
int  main ()
{
    int banco;
    int monto;
    int numerodedeposito;
    char opc;


    numerodedeposito = 0 ;
    banco = 0 ;
    monto = 0 ;
    opc = ' s ' ;


    hacer
    {
        printf ( " \ n Monto a depositar: " );
        scanf ( " % d " , & monto);
        banco = banco + monto;
        numerodedeposito = numerodedeposito + 1 ;

        printf ( " ¿Quieres realizar otro deposito? (s / n): " );
        scanf ( " % s " , & opc);


    } while (opc! = ' n ' );

    printf ( " Dinero que tienes en el banco % d " , banco);
    printf ( " Numero de depositos % d " , numerodedeposito);
    return  0 ;
} 
© 2021 GitHub, Inc.