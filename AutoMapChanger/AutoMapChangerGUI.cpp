#include "pch.h"
#include "AutoMapChanger.h"

/* Plugin Settings Window code here
std::string AutoMapChanger::GetPluginName() {
	return "AutoMapChanger";
}

void AutoMapChanger::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> AutoMapChanger
void AutoMapChanger::RenderSettings() {
	ImGui::TextUnformatted("AutoMapChanger plugin settings");
}
*/

/*
// Do ImGui rendering here
void AutoMapChanger::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string AutoMapChanger::GetMenuName()
{
	return "automapchanger";
}

// Title to give the menu
std::string AutoMapChanger::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void AutoMapChanger::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool AutoMapChanger::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool AutoMapChanger::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void AutoMapChanger::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void AutoMapChanger::OnClose()
{
	isWindowOpen_ = false;
}
*/
