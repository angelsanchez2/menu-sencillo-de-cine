
#include <math.h>
#include <stdio.h>

int main()
{
    int n, opcion,x;

    do
    {
		printf( "\n   BIENVENIDO A CINEMEX EN LINEA ." );
        printf( "\n   1. CARTELERA.");
        printf( "\n   2. CINES.");
        printf( "\n   3. CINES PLATINO.");
        printf( "\n   4. TAQUILLA.");
        printf( "\n   5. PROMOCIONES.");
        printf( "\n   6. BUZON CINEMEX.");
        printf( "\n   7. DULCERIA.");
        printf( "\n   8. Salir." );
        printf( "\n\n   Introduzca opciocn (1-8): ");

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: 
				
			
			printf( "\n   BIENVENIDO A LAS CARTELERAS DE CINEMEX A CONTINUACION SE MUESTRAN LAS PALICULAS DISPONIBLES: ");
                     printf( "\n   1. AVENGERS ENDGAME.");
                      printf( "\n   2. PANTERA NEGRA.");
                       printf( "\n   3. IRON MAN.");
                        printf( "\n   4. DEADPOOL.");
                         printf( "\n   5. SALIR.");
                           printf( "\n\n   Introduzca opcion (1-5): ");

                    break;

            case 2: printf( "\n   BIENVENIDO A LA OPCION CINE, A CONTINUACION SE MUESTRAN LOS CINES DISPONIBLES DE LA REGION" );
                     printf( "\n   1. CENTRO.");
                      printf( "\n   2. NOR-ORIENTE.");
                       printf( "\n   3. NORTE.");
                        printf( "\n   4. ORIENTE.");
                         printf( "\n   5. PONIENTE.");
                          printf( "\n   6. SUR.");
                           printf( "\n\n   Introduzca opcion (1-6): ");
                    break;

            case 3: printf( "\n   BIENVENIDO A LA OPCION CINES PLATINO , A CONTINUACION SE MUESTRAN LOS CINES PLATINO DISPONIBLES DE LA REGION" );
                     printf( "\n   1. CENTRO.");
                      printf( "\n   2. NOR-ORIENTE.");
                       printf( "\n   3. NORTE.");
                        printf( "\n   4. ORIENTE.");
                         printf( "\n   5. PONIENTE.");
                          printf( "\n   6. SUR.");
                           printf( "\n\n   Introduzca opcion (1-6): ");
                    break;
                    
            case 4: printf( "\n   BIENVENIDO A LA OPCION TAQUILLA"  );
                     printf( "\n   1. PELICULA.");
                      printf( "\n   2. HORARIO.");
                       printf( "\n   3. BOLETOS.");
                        printf( "\n   4. ASIENTOS.");
                         printf( "\n   5. PAGO.");
                          printf( "\n   6. IMPRIMIR BOLETO.");
                           printf( "\n\n   Introduzca opcion (1-6): ");
                    break;        
                    
            case 5: printf( "\n   BIENVENIDO A LA OPCION PROMOCIONES"  );
                     printf( "\n   1. PROMO 2X1.");
                      printf( "\n   2. PROMO REFRESCOS.");
                       printf( "\n   3. PROMO PALOMITAS.");
                        printf( "\n   4. PROMO DULCES.");
                           printf( "\n\n   Introduzca opcion (1-4): ");
                    break;         
					
			case 6: printf( "\n   BIENVENIDO A LA OPCION BUZON CINEMEX"  );
                     printf( "\n   1. DEJAR UNA QUEJA.");
                      printf( "\n   2.DEJAR UNA SUGERENCIA.");
                           printf( "\n\n   Introduzca opcion (1-2): ");
                    break;  
			
			case 7: printf( "\n   BIENVENIDO A LA OPCION DULCERIA DONDE ENCONTRARAS VARIOS DE LOS PAQUETES PARA VER TU FUNCION"  );
                     printf( "\n   1. COMBO AMIGOS.");
                      printf( "\n   2. COMBO PAREJA.");
                       printf( "\n   3. COMBO FAMILIA.");
                        printf( "\n   4. COMBO NACHOS.");
                           printf( "\n\n   Introduzca opcion (1-4): ");
                    break;  	
                    
                    
         }

         /* Fin del anidamiento */

    } while ( opcion != 8 );

    return 0;
}
