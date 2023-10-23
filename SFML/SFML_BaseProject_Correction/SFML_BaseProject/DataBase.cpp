#include "DataBase.h"
#include <iostream>

DataBase::DataBase()
{
	LoadDataBase();
}

DataBase::~DataBase()
{
}

void DataBase::LoadDataBase()
{
	if (!Font.loadFromFile("C://Users//RAUL2903//Documents//GitHub//Raultg_prog2//SFML_BaseProject_Correction//SFML-2.5.1//examples//island//resources//sansation.ttf"))
		std::cout << "No font loaded !" << std::endl;
}
