#include <iostream>
#include <String>

float savedValue = NULL;

int main()
{
	std::string calculType;
	float firstNumber;
	float secondNumber;
	float finalNumber;
	std::string remakeCalcul;
	std::string useSavedValue;

	std::cout << "Veuillez d'abord indiquer le type de calcul que vous souhaitez effectuer >>\n";
	std::cout << "('add' -> addition) ('sub' -> soustraction) ('mul' -> multiplier) ('div' -> diviser) ";
	std::cin >> calculType;
	//conditions
	if (calculType == "add")
	{
		//add------------------------------------------------------------
		std::cout << "Vous avez choisi: Addition \n";
		if (savedValue != NULL)
		{
			std::cout << "Veuillez indiquer si vous souhaitez utiliser le nombre de l'equation precedente (";
			std::cout << savedValue;
			std::cout << ") >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> useSavedValue;
			if (useSavedValue == "y")
			{
				firstNumber = savedValue;
				std::cout << ">> ";
				std::cout << savedValue<< std::endl;
			}
			else if (useSavedValue == "n")
			{
				std::cout << "Veuillez indiquer le 1e nombre ";
				std::cin >> firstNumber;
			}
			else 
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (savedValue == NULL)
		{
			std::cout << "Veuillez indiquer le 1e nombre ";
			std::cin >> firstNumber;
		}
		std::cout << "Veuillez indiquer le 2e nombre ";
		std::cin >> secondNumber;
		finalNumber = firstNumber + secondNumber;
		std::cout << "Le resultat est: ";
		savedValue = finalNumber;
		std::cout << finalNumber;
		std::cout << std::endl;
		std::cout << "Veuillez indiquer si vous souhaitez refaire un calcul >>\n";
		std::cout << "('y' -> oui) ('n' -> non) \n";
		std::cin >> remakeCalcul;
		if (remakeCalcul == "y")
		{
			main();
		}
		else if (remakeCalcul == "n")
		{
			std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
		}
		else
		{
			std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
			std::cin.ignore();
			std::cin.ignore();
			main();
		}
	}
	else if (calculType == "sub")
	{
		//sub------------------------------------------------------------
		if (savedValue != NULL)
		{
			std::cout << "Veuillez indiquer si vous souhaitez utiliser le nombre de l'equation precedente (";
			std::cout << savedValue;
			std::cout << ") >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> useSavedValue;
			if (useSavedValue == "y")
			{
				firstNumber = savedValue;
				std::cout << ">> ";
				std::cout << savedValue << std::endl;
			}
			else if (useSavedValue == "n")
			{
				std::cout << "Veuillez indiquer le 1e nombre (Affecte) ";
				std::cin >> firstNumber;
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (savedValue == NULL)
		{
			std::cout << "Veuillez indiquer le 1e nombre (Affecte) ";
			std::cin >> firstNumber;
		}
		std::cout << "Veuillez indiquer le 2e nombre (Affectant) ";
		std::cin >> secondNumber;
		finalNumber = firstNumber - secondNumber;
		std::cout << "Le resultat est: ";
		savedValue = finalNumber;
		std::cout << finalNumber;
		std::cout << std::endl;
		std::cout << "Veuillez indiquer si vous souhaitez refaire un calcul >>\n";
		std::cout << "('y' -> oui) ('n' -> non) \n";
		std::cin >> remakeCalcul;
		if (remakeCalcul == "y")
		{
			main();
		}
		else if (remakeCalcul == "n")
		{
			std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
		}
		else
		{
			std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
			std::cin.ignore();
			std::cin.ignore();
			main();
		}
	}
	else if (calculType == "mul")
	{
		//mul------------------------------------------------------------
		std::cout << "Vous avez choisi: Multiplication \n";
		if (savedValue != NULL)
		{
			std::cout << "Veuillez indiquer si vous souhaitez utiliser le nombre de l'equation precedente (";
			std::cout << savedValue;
			std::cout << ") >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> useSavedValue;
			if (useSavedValue == "y")
			{
				firstNumber = savedValue;
				std::cout << ">> ";
				std::cout << savedValue << std::endl;
			}
			else if (useSavedValue == "n")
			{
				std::cout << "Veuillez indiquer le 1e nombre ";
				std::cin >> firstNumber;
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (savedValue == NULL)
		{
			std::cout << "Veuillez indiquer le 1e nombre ";
			std::cin >> firstNumber;
		}
		std::cout << "Veuillez indiquer le 2e nombre ";
		std::cin >> secondNumber;
		finalNumber = firstNumber * secondNumber;
		std::cout << "Le resultat est: ";
		savedValue = finalNumber;
		std::cout << finalNumber;
		std::cout << std::endl;
		std::cout << "Veuillez indiquer si vous souhaitez refaire un calcul >>\n";
		std::cout << "('y' -> oui) ('n' -> non) \n";
		std::cin >> remakeCalcul;
		if (remakeCalcul == "y")
		{
			main();
		}
		else if (remakeCalcul == "n")
		{
			std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
		}
		else
		{
			std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
			std::cin.ignore();
			std::cin.ignore();
			main();
		}
	}
	else if (calculType == "div")
	{
		//div------------------------------------------------------------
		std::cout << "Vous avez choisi: Division \n";
		if (savedValue != NULL)
		{
			std::cout << "Veuillez indiquer si vous souhaitez utiliser le nombre de l'equation precedente (";
			std::cout << savedValue;
			std::cout << ") >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> useSavedValue;
			if (useSavedValue == "y")
			{
				firstNumber = savedValue;
				std::cout << ">> ";
				std::cout << savedValue << std::endl;
			}
			else if (useSavedValue == "n")
			{
				std::cout << "Veuillez indiquer le 1e nombre (Affecte / Numerateur) ";
				std::cin >> firstNumber;
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (savedValue == NULL)
		{
			std::cout << "Veuillez indiquer le 1e nombre (Affecte / Numerateur) ";
			std::cin >> firstNumber;
		}
		std::cout << "Veuillez indiquer le 2e nombre (Affectant / Denominateur) ";
		std::cin >> secondNumber;
		finalNumber = firstNumber / secondNumber;
		std::cout << "Le resultat est: ";
		savedValue = finalNumber;
		std::cout << finalNumber;
		std::cout << std::endl;
		std::cout << "Veuillez indiquer si vous souhaitez refaire un calcul >>\n";
		std::cout << "('y' -> oui) ('n' -> non) \n";
		std::cin >> remakeCalcul;
		if (remakeCalcul == "y")
		{
			main();
		}
		else if (remakeCalcul == "n")
		{
			std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
		}
		else
		{
			std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
			std::cin.ignore();
			std::cin.ignore();
			main();
		}
	}
	else
	{
		std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
		std::cin.ignore();
		std::cin.ignore();
		main();
	}

	//Made by Shaydon Gervais
}
