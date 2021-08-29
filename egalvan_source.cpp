//program headers
#include <iostream>
#include <fstream>

using namespace std;

//Dinosaur Structure
struct Dinosaur
{
	//declaring names of dinosaures to dinoName
	string dinoName;

	//meaning of dinosaures names declared to meaning as a string
	string meaning;

	//dinosaur heights and weights declared to height/weight as a integer
	int height;
	int weight;

};

//function prototype to  load the dinosaures into the program
void Loadinos (Dinosaur dinos[], int size);

//function prototype to display dinosaures data
void DisplayDinos (Dinosaur dinos[], int size);

//program's main function
int main()
{
	//setting the size of my array to 10
	const int SIZE = 10;

	//setting up my Structure
	Dinosaur dinos[SIZE];

	//loading Dinos.txt file into program
	Loadinos (dinos, SIZE);

	//displaying my dinosaur structure with loaded data
	DisplayDinos (dinos, SIZE);

	return 0;

}

//function to  load the dinosaures into the program
void Loadinos (Dinosaur dinos[], int size)
{
	//opening file and starting for loop to plug values from dinos file into dinos array

	//telling computer we're opening a file
	ifstream fin;

	//open dinos file
	fin.open("Dinos.txt");

	//for loop to add all contents from dinos file from 1-10
	for (int x = 0; x < size; x++)
	{
		//adding dinosaurs name to array
		getline(fin, dinos[x].dinoName);

		//adding meaning of dinosaur to array
                getline(fin, dinos[x].meaning);

		//adding dinosaurs height to array
		fin >> dinos[x].height;

		//adding dinosaurs weight to array
                fin >> dinos[x].weight;

		//clear input buffer
		fin.ignore();
	}
	//tell computer we're done with the file
	fin.close();
}

//function to display the dinosaures
void DisplayDinos (Dinosaur dinos[], int size)
{
	//for loop to display all of the dinosaures in struct
	for (int x = 0; x < size; x++)

	{	//display dinosaur name
		cout << "Dinosaur Name: " << dinos[x].dinoName << endl;

		//display dinosaur name meaning
		cout << "Name meaning: " << dinos[x].meaning << endl;

		//display dinosaur height//weight
		cout << "Height: " << dinos[x].height << " ft" << endl;
                cout << "Weight: " << dinos[x].weight << " pounds" << endl;
	}


}
