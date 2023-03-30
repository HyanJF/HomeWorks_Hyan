#include <iostream>

using namespace std;

void GuessMyNumber();
void Repetidor();
void Tarea1();

int Azar = 0, Valor = 0, Intentos = 0, Juego = 0, Repetir = 0;

int main()
{
	int Opcion = 0;
	cout << "------BIENVENIDO A MIS TAREAS------" << endl;
	cout << "------Seleciona una de las tareas------" << endl;
	cout << "0- GuessMyNumber " << endl;
	cout << "1- Tarea 1 " << endl;
	cin >> Opcion;

	switch (Opcion)
	{
	case 0:
		GuessMyNumber();
		break;
	case 1:
		Tarea1();
		break;
	default:
		main();
		break;
	}
}

void GuessMyNumber()
{
	srand(static_cast<unsigned int>(time(0)));
	Intentos = 0;
	Azar = 1 + (rand() % 99);
	system("cls");
	if (Repetir == 0)
	{
		cout << "Hola jugador" << endl;
		cout << "Este es el juego de adivinar el numero" << endl;
	}
	else
	{
		cout << "Valla veo que se animo a jugar otra vez" << endl;
		cout << "Mucha suerte" << endl << "UwU" << endl;
	}

	Repetidor();

	system("cls");
	cout << "Felicidades logro adivinar el numero" << endl;
	cout << "El numero era " << Azar << endl;
	cout << "Con un total de " << Intentos << " fallos" << endl;

	cout << endl << endl << endl;

	if (Intentos == 1)
	{
		cout << "PERO QUEEEEEE" << endl;
		cout << "Encerio ha ganado tan facil" << endl;
		cout << "Debe hacer trampa TnT" << endl << "O suerte" << endl;
	}
	else if (Intentos < 3)
	{
		cout << "Sin duda tiene mucha habilidad" << endl;
	}
	else if (Intentos > 4)
	{
		cout << "Bueno puede ser mas dificil de lo que parece" << endl;
	}
	if (Repetir > 1)
	{
		cout << "Ha jugado mi juego " << Juego << " veces" << endl;
	}
	cout << endl << "Quiere volver a jugar" << endl << "0 = No / 1 = Si" << endl;
	cin >> Juego;
	if (Juego == 1)
	{
		Repetir++;
		GuessMyNumber();
	}
}

void Repetidor()
{
	cout << "Elija un numero entre el 1 y 100" << endl;
	cout << Azar << endl;
	cin >> Valor;
	Intentos++;

	if (Valor < 1 || Valor > 100)
	{
		cout << "Ese numero esta fuera del limite" << endl << endl;
		Repetidor();
	}
	else
	{
		if (Valor != Azar)
		{
			if (Valor == Azar - 3 || Valor == Azar - 2 || Valor == Azar - 1)
			{
				cout << " El valor es mas alto y muy cerca UwU " << endl;
			}
			else if (Valor < Azar)
			{
				cout << " El valor es mas alto " << endl;

			}
			else if (Valor == Azar + 3 || Valor == Azar + 2 || Valor == Azar + 1)
			{
				cout << " El valor es mas bajo y muy cerca UwU " << endl;
			}
			else if (Valor > Azar)
			{
				cout << " El valor es mas bajo " << endl;
			}
			Repetidor();
		}
		else
		{

		}
	}
}

void Tarea1()
{
	int N1 = 0, NA = 0, NA1 = 0, NA2 = 0, Suma = 0, NB = 0, NB1 = 0, NB2 = 0, NB3 = 0, NMAX = 0, NC = 0, NC1 = 0, NC2 = 0, ND = 0, NDA = 0;

	cout << "Introdusca un Numero. " << endl;
	cin >> N1;

	if (N1 < 0)
	{
		cout << "Su numero es " << N1 << " y es negativo" << endl;
	}
	else
	{
		cout << "Su numero es " << N1 << " y es positivo" << endl;
	}

	do
	{
		cout << endl << "Agregue un numero de dos digitos " << endl;
		cin >> NA;

	} while (NA < 10 || NA > 99);

	NA1 = NA % 10;
	NA2 = NA / 10;
	Suma = NA1 + NA2;

	cout << "Su numero es " << NA << " y sus digitos son " << NA2 << " Y " << NA1 << endl;
	cout << "La suma de sus dos numeros es " << Suma << endl;

	do
	{
		cout << endl << "Agregue un numero de dos digitos " << endl;
		cin >> NC;

	} while (NC < 10 || NC > 99);

	NC1 = NC % 10;
	NC2 = NC / 10;

	if (NC1 % 2 == 0)
	{
		cout << "Tu numero " << NA1 << " es par " << endl;
	}
	else
	{
		cout << "Tu numero " << NA1 << " es impar " << endl;
	}
	if (NC2 % 2 == 0)
	{
		cout << "Tu numero " << NA1 << " es par " << endl;
	}
	else
	{
		cout << "Tu numero " << NA1 << " es impar " << endl;
	}

	do
	{
		cout << endl << "Agregue un numero de tres digitos" << endl;
		cin >> NB;

	} while (NB < 100 || NB > 999);

	NB1 = NB % 10;
	NB2 = (NB / 10) % 10;
	NB3 = NB / 100;

	if (NB1 > NB2 || NB1 > NB3)
	{
		NMAX = NB1;
	}
	else if (NB2 > NB1 || NB2 > NB3)
	{
		NMAX = NB2;
	}
	else
	{
		NMAX = NB3;
	} 
	cout << endl << "El numero mas alto es " << NMAX << endl;

	do
	{
		cout << endl << "Agregue un numero, el min y el max " << endl;
		cin >> ND;
		cin >> NDA;
	} while (ND > NDA);

	for (int i = ND; i < NDA; i++)
	{
		if (i % 2==0)
		{
			cout << i << endl;
		}
	}
	cout << "Son los numero pares entre " << ND << " y " << NDA << endl;
	




}
