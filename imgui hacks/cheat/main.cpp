#include <Windows.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

DWORD pid;
DWORD Ammo = 0x00740288;
DWORD Health = 0x00740234;
DWORD Grenade = 0x0074028C;
DWORD Armor = 0x00740238;
int value;
int newValue = 9999;
std::string choice;
int jumpval = 1;
int jumpvalu = 257;

int main() {
	SetConsoleTitle("Finding Game (AssaultCube)");
	std::cout << "Welcome to Assault Cube Hacks. We'll load everything in for you." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	HWND hWnd = FindWindowA(0, ("AssaultCube"));
	GetWindowThreadProcessId(hWnd, &pid);
	SetConsoleTitle("Found Game (AssaultCube)");
	HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
	std::cout << "If you see this message it means the program is ready." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	SetConsoleTitle("Everything is Done");
	system("cls");
	do {
		system("cls");
		SetConsoleTitle("AssaultCube Cheats");
		std::cout << "Here are your options: \n MaxHealth \n FullAmmo \n FullArmor \n FullGrenade" << std::endl;
		std::cout << "Choose: ";
		std::getline(std::cin, choice);
		if (choice == "FullAmmo") {
			if (GetAsyncKeyState(VK_SCROLL))
			{
				WriteProcessMemory(pHandle, (LPVOID)Ammo, &newValue, sizeof(newValue), NULL);
			}
			else {
				WriteProcessMemory(pHandle, (LPVOID)Ammo, &newValue, sizeof(newValue), NULL);
			}
		}
		else if (choice == "MaxHealth") {
			if (GetAsyncKeyState(VK_SCROLL))
			{
				WriteProcessMemory(pHandle, (LPVOID)Health, &newValue, sizeof(newValue), NULL);
			}
			else {
				WriteProcessMemory(pHandle, (LPVOID)Health, &newValue, sizeof(newValue), NULL);
			}
		}
		else if (choice == "FullGrenade") {
			if (GetAsyncKeyState(VK_SCROLL))
			{
				WriteProcessMemory(pHandle, (LPVOID)Grenade, &newValue, sizeof(newValue), NULL);
			}
			else {
				WriteProcessMemory(pHandle, (LPVOID)Grenade, &newValue, sizeof(newValue), NULL);
			}
		}
		else if (choice == "FullArmor") {
			if (GetAsyncKeyState(VK_SCROLL))
			{
				WriteProcessMemory(pHandle, (LPVOID)Armor, &newValue, sizeof(newValue), NULL);
			}
			else {
				WriteProcessMemory(pHandle, (LPVOID)Armor, &newValue, sizeof(newValue), NULL);
			}
		}
	} while (choice != "0");
	return 0;
}