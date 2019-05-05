#include "Menu.h"
#include "ImGui/imgui.h"
#include "Utils.hpp"
#include "Settings.h"

Menu::Menu()
{

}


Menu::~Menu()
{
	//mem dealloc
	delete p_Instance;
}

void Menu::GetDefault()
{
	if (ImGui::Begin(XorStr("Inferno"), false, ImVec2(725, 385), 0.8f, ImGuiWindowFlags_NoCollapse))
	{
		ImGui::Text(XorStr("Ragebot"));
		ImGui::SameLine();
		ImGui::Text(XorStr("                                                  AntiAim"));
		ImGui::SameLine();
		ImGui::Text(XorStr("                                                  Visuals"));

		ImGui::BeginChild("vittu", ImVec2(230, 320), true);
		{
			ImGui::Checkbox(XorStr("ESP"), &Settings::bESPEnabled);
		}ImGui::EndChild();
		ImGui::SameLine();
		ImGui::BeginChild("vittu4", ImVec2(230, 320), true);
		{
			ImGui::Text("Placeholder");
		}ImGui::EndChild();

		ImGui::SameLine();
		ImGui::BeginChild("vittu2", ImVec2(230, 320), true);
		{
			ImGui::Text("Placeholder");
		}ImGui::EndChild();
		ImGui::End();
	}
}

Menu * Menu::GetInstance()
{
	if (!p_Instance)
		p_Instance = new Menu();
	return p_Instance;
}
