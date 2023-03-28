#include <iostream>

using namespace std;

void GuessMyNumber();
void Repetidor();

int Azar = 0, Valor = 0, Intentos = 0, Juego = 0, Repetir = 0;

int main()
{
	int Opcion = 0;
	cout << "------BIENVENIDO A MIS TAREAS------" << endl;
	cout << "------Seleciona una de las tareas------" << endl;
	cout << "1- GuessMyNumber " << endl;
	cin >> Opcion;

	switch (Opcion)
	{
	case 1:
		GuessMyNumber();
		break;
	default:
		main();
		break;
	}
}

void GuessMyNumber()
{
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
