#pragma once
class Menu
{
public:
	Menu();
	~Menu();
	void GetDefault();
	Menu* p_Instance;
	Menu* GetInstance();
};

