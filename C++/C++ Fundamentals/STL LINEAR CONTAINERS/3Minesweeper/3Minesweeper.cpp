// 3Minesweeper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

void readInput(std::vector<std::string> & outInput)
{
	int rows = 0;
	int cols = 0;

	std::cin >> rows >> cols;

	outInput.resize(rows);
	for (int i = 0; i < rows; ++i)
	{
		outInput[i].resize(cols);
	}

	for (int row = 0; row < rows; ++row)
	{
		std::cin >> outInput[row];
	}

}

void findMines(const std::vector<std::string> & matrix,
	std::vector<int> & mineX,
	std::vector<int> & mineY)
{
	for (size_t row = 0; row < matrix.size(); ++row)
	{
		for (size_t col = 0; col < matrix[row].size(); ++col)
		{
			//found mine
			if ('!' == matrix[row][col])
			{
				mineX.push_back(row);
				mineY.push_back(col);
			}
		}
	}
}

void expandSingleMine(std::vector<std::string> & mineField,
	const int ROW,
	const int COL)
{
	if (COL < 0 || ROW < 0 || COL >= (int)mineField[0].size() || 
		ROW >= (int)mineField.size())
	{
		return;
	}

	mineField[ROW][COL] += 1;
}

void expandMines(std::vector<std::string> & mineField,
	const std::vector<int> & minesX,
	const std::vector<int> & minesY)
{
	for (size_t i = 0; i < minesX.size(); i++)
	{
		const int ROW = minesX[i];
		const int COL = minesY[i];

		//expand mine

		expandSingleMine(mineField, ROW - 1, COL - 1);
		expandSingleMine(mineField, ROW - 1, COL);
		expandSingleMine(mineField, ROW - 1, COL + 1);

		expandSingleMine(mineField, ROW, COL - 1);
		expandSingleMine(mineField, ROW, COL);
		expandSingleMine(mineField, ROW, COL + 1);

		expandSingleMine(mineField, ROW + 1, COL - 1);
		expandSingleMine(mineField, ROW + 1, COL);
		expandSingleMine(mineField, ROW + 1, COL + 1);
	}
}

void printMatrix(const std::vector<std::string> & matrix) {
	for (size_t row = 0; row < matrix.size(); ++row)
	{
		std::cout << matrix[row] << std::endl;
	}
}


int main()
{
	//1) Read input
	std::vector<std::string> mineField;

	readInput(mineField);

	//2) Find mines
	std::vector<int> minesX;
	std::vector<int> minesY;
	findMines(mineField, minesX, minesY);

	std::vector<std::string> mineFieldValues(
		mineField.size(), std::string(mineField[0].size(), '0'));

	//3) expand mines
	expandMines(mineFieldValues, minesX, minesY);

	//4) Print answer
	printMatrix(mineFieldValues);
}

