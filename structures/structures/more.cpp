 #include <iostream>

struct Vehicle
{
	int mNumTires;
	int mNumSeats;
	char mMakerName[255];
	char mModelName[255];
	int mModelYear;
};
//create a function that prints vehicle infomration
Vehicle CarInfo(Vehicle vehicle)
{
	//std::cout << "Maker  :" << vehicle.mMakerName << std::endl;
	//std::cout << "Model Name  :" << vehicle.mModelName << std::endl;
	//std::cout << "Model Year  :" << vehicle.mModelYear << std::endl;
	//std::cout << "Number Tires :" << vehicle.mNumTires << std::endl;
	//std::cout << "Number Seats  :" << vehicle.mNumSeats << std::endl;
}

int main()
{
	//Vehicle MatthewCar = { 4, 2, "Nissan", "Frontier", 2001 };
	//Vehicle LukeCar = { 4, 2, "Suabru", "BRZ", 2014 };
	//Vehicle StevenCar = { 2, 1, "Mongoose", "Legion L40", 2017 };

	Vehicle ebayAutomotive[15];
	ebayAutomotive[0] = { 2, 4, "Porshe", "911", 2016 };
	ebayAutomotive[1] = { 2, 4, "McLaren", "720s", 2018 };
	ebayAutomotive[2] = { 4, 4, "Honda", "Civic", 2017 };
	ebayAutomotive[3] = { 4,4,"Nissan", "Sentra", 2012 };
	ebayAutomotive[4] = { 2,4, "Ford", "Mustang", 1965 };
	ebayAutomotive[5] = { 2, 4, "Audi", "S8", 2017 };
	ebayAutomotive[6] = { 2, 2, "Ford", "GT", 2017 };
	ebayAutomotive[7] = { 2,4,"Toyota", "Supra", 1998 };
	ebayAutomotive[8] = { 4,4,"Ford", "Fiesta", 2005 };
	ebayAutomotive[9] = { 2, 1, "YuGiOh", "Duel Runner", 2025 };
	ebayAutomotive[10] = { 2, 3, "UNSC", "Warthog", 2500 };
	ebayAutomotive[11] = { 2, 1, "Moongoose", "Legion L40", 2017 };
	ebayAutomotive[12] = { 2, 2, "Ferrari", "La Farrari", 2015 };
	ebayAutomotive[13] = { 2, 2, "TVR", "Sergis", 2013 };
	ebayAutomotive[14] = { 1, 0, "US Army", "M1 Abrams", 2018 };


	//prompt the user to input a maker name. Then the application should display all vehicles with that maker
	// modify your answer to allow the user to search for vehicles by year, name, and maker
	char userInput[255];
	std::cout << "Enter a vehicle maker.\n";
	std::cin >> userInput;
	bool carFound = false;
	for (int i = 0; i < 15; i++)
	{
		if (strcmp(userInput, ebayAutomotive[i].mMakerName) == 0);
		{
			CarInfo(ebayAutomotive[i]);
			std::cout << std::endl;
			carFound = true;
		}	
	}
	if (carFound == false)
		std::cout << "No results found." <<std::endl;

	system("pause");
}



/*struct Item
{
	char mName[255];
	int mCost;
	int mQuantity;
};
struct Shop
{
	int mTotalGold;
	Item mItems[5];
};
void PrintShopInventory(Shop shopData)
{
	std:: cout << "Current shop funds:" << shopData.mTotalGold;
	for (int i = 0; i < 5; i++)
	{
		std::cout <<"Item Name" << shopData.mItems[i].mName << std::endl;
		std::cout << "Item Cost" << shopData.mItems[i].mCost << std::endl;
		std::cout <<"Quantity" << shopData.mItems[i].mQuantity << std::endl;
		
int main()
{
	{
		Shop blacksmith = { 2000 };
		blacksmith.mItems[0] = { "Stick", 1, 1 };
		blacksmith.mItems[1] = { "Wand", 5, 1 };
		blacksmith.mItems[2] = { "Knife", 15, 1 };
		blacksmith.mItems[3] = { "Sword", 30, 1 };
		blacksmith.mItems[4] = { "Excalibur", 1500, 1 };


		PrintShopInventory(blacksmith);
		std::cout << "Changing Prices" << std::endl;
		system("pause");
		PrintShopInventory(blacksmith);
		system("pause")
	}

}
*/