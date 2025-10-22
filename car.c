#if 1
#include<stdio.h>
#include<string.h>
struct Database
{
    char Brand[100];
    char Model[100];
    int Year;
    long int Price;
    int Mileage;
    char Fuel_type[100];
    char Transmission[100];
    char Color[100];
    int Seat;
    int EngineCC;
};
struct Database s[6]={{"Maruti","Swift",2021,600000,22,"Petrol","Manual","Red",5,1197},
                        {"Hyundai","Creta",2020,1250000,17,"Diesel","Automatic","White",5,1497},
                        {"Tata","Nexon EV",2022,1490000,300,"Electric","Automatic","Blue",5,0},
                        {"Honda","City",2019,1020000,18,"Petrol","Manual","Grey",5,1498},
                        {"Mahindra","Thar",2023,1600000,15,"Diesel","Manual","Black",4,2184},
                        {"Toyota","Innova",2021,1850000,12,"Diesel","Automatic","Silver",7,2393}};
//---------------------------------------------------Function Definition----------------------------
void fun(void)
{
    for(int i=0;i<6;i++)
    {
        if(!(strcmp(s[i].Model,"Swift")))
        {
            s[i].Price=s[i].Price+50000;
            printf("| ID |   Brand    |    Model     |  Price(₹)  |\n");
            printf("| %2d | %-10s | %-12s | %10ld |\n",i+1,s[i].Brand,s[i].Model,s[i].Price);
        }
    }
}

void fun1(void)
{
   
    printf("Brand      Model      Year\n");
    for(int i=0;i<6;i++)
    {
        if(s[i].Year<2021)
        {
            printf("%-10s %-10s %-4d\n",s[i].Brand,s[i].Model,s[i].Year);
        }
    }
}

void fun2(void)
{
    
    printf("Brand      Model       Price (₹)   Seats  Price/Seat (₹)\n");
    for(int i=0;i<6;i++)
    {
        printf("%-10s %-12s %-12ld %-8d %-15ld\n",s[i].Brand,s[i].Model,s[i].Price,s[i].Seat,(s[i].Price/s[i].Seat));
    }
}

void fun3(void)
{
   
    printf("Brand  Model    fuel\n");
    for(int i=0;i<6;i++)
    {
        if(!(strcmp(s[i].Transmission,"Automatic")))
        {
            printf("%-10s %-12s %-10s\n",s[i].Brand,s[i].Model,s[i].Fuel_type);
        }
    }
}

void fun4(void)
{
    
    printf("Brand     Model     Mileage\n");
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6-1;j++)
        {
            if(s[j].Mileage<s[j+1].Mileage)
            {
                int temp=s[j].Mileage;
                s[j].Mileage=s[j+1].Mileage;
                s[j+1].Mileage=temp;
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        printf("%-10s %-12s %-10d\n",s[i].Brand,s[i].Model,s[i].Mileage);
    }
}

void fun5(void)
{
    
    printf("Brand        Model        Price (₹)   Mileage\n");
    for(int i=0;i<6;i++)
    {
        if(s[i].Price>1000000 && s[i].Mileage>15)
        {
            printf("%-12s %-12s %-12ld %-5d\n",s[i].Brand,s[i].Model,s[i].Price,s[i].Mileage);
        }
    }
}

void fun6(void)
{
    for(int i=0;i<6;i++)
    {
        if(!strcmp(s[i].Brand,"Honda"))
        {
            strcpy(s[i].Color,"Black");
            printf("| ID | Brand      |   Model      |   Color |\n");
            printf("| %2d | %-10s | %-12s | %-7s |\n",i+1,s[i].Brand,s[i].Model,s[i].Color);
        }
    }
}

void fun7(void)
{
   
    printf("Brand      Model        Price (₹)\n");
    for(int i=0;i<6;i++)
    {
        printf("%-10s %-12s %ld\n",s[i].Brand,s[i].Model,s[i].Price);
    }
}

void fun8(void)
{
    int cheaper_price;
    for(int i=0;i<6;i++)
    {
        if(strcmp(s[i].Brand,"Thar"))
        {
            cheaper_price=s[i].Price;
        }
    }
    printf("Brand      Model        Price\n");
    for(int i=0;i<6;i++)
    {
        if(cheaper_price>s[i].Price)
        {
            printf("%-10s %-12s %-10ld\n",s[i].Brand,s[i].Model,s[i].Price);
        }
    }
}

void fun9(void)
{
    printf("----------------------------Petrol:\n");
    printf("Brand      Model      Year\n");
    for(int i=0;i<6;i++)
    {
        if(!strcmp(s[i].Fuel_type,"Petrol"))
        {
            printf("%-10s %-10s %-4d\n",s[i].Brand,s[i].Model,s[i].Year);
        }
    }
    printf("---------------------------Diesel:\n");
    printf("Brand      Model      Year\n");
    for(int i=0;i<6;i++)
    {
        if(!strcmp(s[i].Fuel_type,"Diesel"))
        {
            printf("%-10s %-10s %-4d\n",s[i].Brand,s[i].Model,s[i].Year);
        }
    }
    printf("--------------------------Elctrical:\n");
    printf("Brand       Model     Year\n");
    for(int i=0;i<6;i++)
    {
        if(!strcmp(s[i].Fuel_type,"Electric"))
        {
            printf("%-10s %-10s %-4d\n",s[i].Brand,s[i].Model,s[i].Year);
        }
    }
}
    
int main()
{
    
    int i=0;
    printf("| ID |   Brand    |    Model     | Year |   Price(₹)  | Mil |  Fuel    | Transmission |  Color  | Seats | CC  |\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<6;i++)
    {
        printf("| %2d | %-10s | %-12s | %4d | %10ld | %3d | %-8s | %-12s | %-7s | %5d | %4d |\n",i+1,s[i].Brand,s[i].Model,s[i].Year,s[i].Price,s[i].Mileage,s[i].Fuel_type,s[i].Transmission,s[i].Color,s[i].Seat,s[i].EngineCC);
    }
    int option;
    
    do
    {
        printf("-------------------------------------------Choose your option from 1 to 11----------------------------------------------\n");
        printf("1.Increase the price of Swift by ₹50,000?'\n
                2.Show all cars manufactured before 2021?\n
                3.List all cars along with price per seat (Price ÷ Seats)\n
                4.Print all Automatic cars with brand, model, and fuel type?\n
                5.Print cars sorted by mileage?\n
                6.Print cars with price greater than ₹1,000,000 and mileage above 15?\n
                7.Change the color of Honda City to “Black”?\n
                8.Print all cars that cost more than Swift?\n
                9.Print all cars cheaper than Thar?\n
               10.Print all cars grouped by fuel type (Petrol, Diesel, Electric)?\n
               11.Exiting");

        /* code */
        printf("Enter your option:\n");
        scanf("%d",&option);
        switch (option)
        {
            case 1:
            fun();
            break;
            case 2:
            fun1();
            break;
            case 3:
            fun2();
            break;
            case 4:
            fun3();
            break;
            case 5:
            fun4();
            break;
            case 6:
            fun5();
            break;
            case 7:
            fun6();
            break;
            case 8:
            fun7();
            break;
            case 9:
            fun8();
            break;
            case 10:
            fun9();
            break;
            case 11:
            printf("Exiting");
            break;
            default:
            printf("Enter correct option:\n");
        }
    } while (option!=11);
    
}

#endif