#pragma once
#include <vector>

struct {
	// Basic colors: ========================================================
	float Black[3];
	float RGBRed[3] = { 1.0f, 0.0f, 0.0f };
	float RGBYelllow[3] = { 1.0f, 1.0f, 0.0f };
	float RGBGreen[3] = { 0.0f, 1.0f, 0.0f };
	float RGBBlue[3] = { 0.0f, 0.0f, 1.0f };
	float CMYKRed[3] = { 0.92f, 0.10f, 0.14f };
	float CMYKYellow[3] = { 1.0f, 0.94f, 0.0f };
	float CMYKGreen[3] = { 0.0f, 0.65f, 3.17f };
	float CMYKBlue[3] = { 0.18f, 0.19f, 0.57f };
	float PastelRed[3] = { 0.96f, 0.58f, 0.47f };
	float PastelRedOrange[3] = { 0.97f, 0.67f, 0.50f };
	float PastelYellowOrange[3] = { 0.99f, 0.77f, 0.53f };
	float PastelYellow[3] = { 1.0f, 0.96f, 0.6f };
	float PastelPeaGreen[3] = { 0.76f, 0.87f, 0.60f };
	float PastelYellowGreen[3] = { 0.63f, 0.82f, 0.61f };
	float PastelGreen[3] = { 0.50f, 0.79f, 0.61f };
	float PastelGreenCyan[3] = { 0.47f, 0.8f, 0.78f };
	float PastelCyan[3] = { 0.42f, 0.81f, 0.96f };
	float PastelCyanBlue[3] = { 0.49f, 0.65f, 0.85f };
	float PastelBlue[3] = { 0.51f, 0.57f, 0.79f };
	float PastelBlueViolet[3] = { 0.52f, 0.50f, 0.74f };
	float PastelViolet[3] = { 0.63f, 0.52f, 0.74f };
	float PastelVioletMagenta[3] = { 0.74f, 0.54f, 0.74f };
	float PastelMagenta[3] = { 0.95f, 0.60f, 0.75f };
	float PastelMagentaRed[3] = { 0.96f, 0.59f, 0.61f };
	float LightRed[3] = { 0.94f, 0.42f, 0.30f };
	float LightRedOrange[3] = { 0.96f, 0.55f, 0.33f };
	float LightYellowOrange[3] = { 0.98f, 0.68f, 0.36f };
	float LightYellow[3] = { 1.0f, 0.96f, 0.40f };
	float LightPeaGreen[3] = { 0.67f, 0.82f, 0.45f };
	float LightYellowGreen[3] = { 0.48f, 0.77f, 0.46f };
	float LightGreen[3] = { 0.23f, 0.72f, 0.47f };
	float LightGreenCyan[3] = { 0.10f, 0.73f, 0.70f };
	float LightCyan[3] = { 0.0f, 0.74f, 0.95f };
	float LightCyanBlue[3] = { 0.26f, 0.54f, 0.79f };
	float LightBlue[3] = { 0.33f, 0.45f, 0.72f };
	float LightBlueViolet[3] = { 0.37f, 0.36f, 0.65f };
	float LightViolet[3] = { 0.52f, 0.37f, 0.65f };
	float LightVioletMagenta[3] = { 0.65f, 0.39f, 0.65f };
	float LightMagenta[3] = { 0.94f, 0.43f, 0.66f };
	float LightMagentaRed[3] = { 0.94f, 0.42f, 0.49f };
	float Red[3] = { 0.92f, 0.10f, 0.14f };
	float RedOrange[3] = { 0.94f, 0.39f, 0.13f };
	float YellowOrange[3] = { 0.96f, 0.58f, 0.11f };
	float Yellow[3] = { 1.0f, 0.94f, 0.0f };
	float PeaGreen[3] = { 0.55f, 0.77f, 0.24f };
	float YellowGreen[3] = { 0.22f, 0.70f, 0.29f };
	float Green[3] = { 0.0f, 0.65f, 0.31f };
	float GreenCyan[3] = { 0.0f, 0.66f, 0.61f };
	float Cyan[3] = { 0.0f, 0.68f, 0.93f };
	float CyanBlue[3] = { 0.0f, 0.44f, 0.34f };
	float Blue[3] = { 0.0f, 0.32f, 0.65f };
	float BlueViolet[3] = { 0.19f, 0.19f, 0.57f };
	float Violet[3] = { 0.18f, 0.19f, 0.57f };
	float VioletMagenta[3] = { 0.57f, 0.15f, 5.63f };
	float Magenta[3] = { 0.92f, 0.0f, 0.54f };
	float MagentaRed[3] = { 0.92f, 0.07f, 0.35f };
	float DarkRed[3] = { 0.61f, 0.04f, 0.05f };
	float DarkROrange[3] = { 0.62f, 0.25f, 0.05f };
	float DarkYellowOrange[3] = { 0.53f, 0.38f, 0.03f };
	float DarkYellow[3] = { 0.67f, 0.62f, 0.0f };
	float DarkPeaGreen[3] = { 0.34f, 0.52f, 0.15f };
	float DarkYellowGreen[3] = { 0.09f, 0.48f, 0.18f };
	float DarkGreen[3] = { 0.0f, 0.44f, 0.21f };
	float DarkGreenCyan[3] = { 0.0f, 0.45f, 0.41f };
	float DarkCyan[3] = { 0.0f, 0.46f, 0.63f };
	float DarkCyanBlue[3] = { 0.0f, 0.29f, 0.50f };
	float DarkBlue[3] = { 0.0f, 0.20f, 0.44f };
	float DarkBlueViolet[3] = { 0.10f, 0.07f, 0.39f };
	float DarkViolet[3] = { 0.26f, 0.05f, 0.38f };
	float DarkVioletMagenta[3] = { 0.38f, 0.01f, 0.37f };
	float DarkMagenta[3] = { 0.61f, 0.0f, 0.36f };
	float DarkMagentaRed[3] = { 0.61f, 0.0f, 0.22f };
	float DarkerRed[3] = { 0.47f, 0.0f, 0.0f };
	float DarkerROrange[3] = { 0.48f, 0.18f, 0.0f };
	float DarkerYellowOrange[3] = { 0.49f, 0.28f, 0.0f };
	float DarkerYellow[3] = { 0.50f, 0.48f, 0.0f };
	float DarkerPeaGreen[3] = { 0.25f, 0.4f, 0.09f };
	float DarkerYellowGreen[3] = { 0.0f, 0.36f, 0.12f };
	float DarkerGreen[3] = { 0.0f, 0.34f, 0.14f };
	float DarkerGreenCyan[3] = { 0.0f, 0.34f, 0.32f };
	float DarkerCyan[3] = { 0.0f, 0.35f, 0.49f };
	float DarkerCyanBlue[3] = { 0.0f, 0.21f, 0.38f };
	float DarkerBlue[3] = { 0.0f, 0.12f, 0.34f };
	float DarkerBlueViolet[3] = { 0.05f, 0.0f, 0.29f };
	float DarkerViolet[3] = { 0.19f, 0.0f, 0.29f };
	float DarkerVioletMagenta[3] = { 0.29f, 0.0f, 0.28f };
	float DarkerMagenta[3] = { 0.48f, 0.0f, 0.27f };
	float DarkerMagentaRed[3] = { 0.47f, 0.27f, 0.14f };
	float PaleCoolBrown[3] = { 0.78f, 0.69f, 0.61f };
	float LightCoolBrown[3] = { 0.6f, 0.52f, 0.45f };
	float MiumCoolBrown[3] = { 0.45f, 0.38f, 0.34f };
	float DarkCoolBrown[3] = { 0.32f, 0.27f, 0.25f };
	float DarkerCoolBrown[3] = { 0.21f, 0.18f, 0.17f };
	float PaleWarmBrown[3] = { 0.77f, 0.61f, 0.43f };
	float LightWarmBrown[3] = { 0.65f, 0.48f, 0.32f };
	float MiumWarmBrown[3] = { 0.54f, 0.38f, 0.22f };
	float DarkWarmBrown[3] = { 0.45f, 0.29f, 0.14f };
	float DarkerWarmBrown[3] = { 0.37f, 0.22f, 0.07f };
} color;

static const char* esp_modes[]{ "Box Normal", "Box Cornered", "Box Filled", "3d Box" };
static const char* aimbone[]{ "Head", "Chest", "Toes" };

static int esp_mode = 0;
static int aimbones = 0;
struct {
	// item set ==============================================================
	
	float Active_Tab;
	float Aimbot_Page;
	float Color_Page = 1;
	float Switch_Page;
	float aimkey;
	float hitbox;
	float aimkeypos = 0;
	float hitboxpos = 0;
	float boneswitch = 1;
	float Aim_SpeedNormal = 4;
	float Aim_SpeedX = 1;
	float Aim_SpeedY = 1;

	float AimFOV = 100.0f;
	float RapidFireValue = 1;
	float InstantReviveValue = 0.01;
	float VisDist = 250;
	bool Team_Aimbot;
	bool radar;
	bool FOVChanger;
	bool chams;
	bool VisableCheck = true;
	bool shield_esp = true;
	bool npcbotcheck = true;
	bool AimBone = false;


	float FOVChangerValueX;
	float FOVChangerValueY;
	float FOVChangerValueZ;

	bool Show_Menu = true;
	bool Auto_Bone_Switch;
	bool Draw_FOV_Circle = true;	
	bool Aim_Prediction;
	bool Cross_Hair = true;
	bool Lock_Line = false;
	bool Auto_Fire;
	float AimDistance = 250;
	bool Chest = true;
	
	// enemy ==============================================================
	bool Aimbot = true;

	bool Esp_box = true;
	bool firstpersonaimbot = false;
	bool big = false;
	float playersize = 0;
	bool Esp_Corner_Box = false;
	bool FOV_Circle = false;
	bool Esp_box_fill = false;
	bool Esp_Circle;
	bool Esp_Circle_Fill;
	bool Triangle_ESP;
	bool Triangle_ESP_Filled;
	bool Head_dot;
	bool Distance_Esp = false;
	bool skeleton = true;
	bool SelfEsp = false;
	bool Esp_line;
	bool fovchange = false;


	//enemy item color ==============================================================
	float DrawFOVCircle[4] = { color.Red[0], color.Red[1], color.Red[2] };

	float Espbox[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float BoxCornerESP[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float espskeleton[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float Espboxfill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float EspCircle[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float EspCircleFill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TriangleESP[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float TriangleESPFilled[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float Headdot[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float LineESP[3] = { color.Cyan[0], color.Cyan[1], color.Cyan[2] };

	float CrossHair[3] = { color.DarkRed[0], color.DarkRed[1], color.DarkRed[2] };
	float LockLine[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };

	// item color set ==============================================================
	float Thickness = 1.f;
	float Thickness2 = 3.f;
	float Shape = 50.0f;

	float Transparency = 0.3f;

	//team ==============================================================

	bool Team_Esp_box = false;
	bool Team_Esp_Corner_Box;
	bool Team_Esp_box_fill;
	bool Team_Esp_Circle;
	bool Team_Esp_Circle_Fill;
	bool Team_Triangle_ESP;
	bool Team_Triangle_ESP_Filled;
	bool Team_Head_dot;
	bool Team_Distance_Esp;
	bool Team_Esp_line;

	//team item color ==============================================================
	float TeamEspbox[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamBoxCornerESP[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamEspboxfill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamEspCircle[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float TeamEspCircleFill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamTriangleESP[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float TeamTriangleESPFilled[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamHeaddot[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamLineESP[3] = { color.LightBlue[0], color.LightBlue[1], color.LightBlue[2] };
} item;

void DrawCornerBox(int X, int Y, int W, int H, const ImU32& color, int thickness) {
	float lineW = (W / 3);
	float lineH = (H / 3);

	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y), ImVec2(X, Y + lineH), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y), ImVec2(X + lineW, Y), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W - lineW, Y), ImVec2(X + W, Y), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W, Y), ImVec2(X + W, Y + lineH), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y + H - lineH), ImVec2(X, Y + H), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y + H), ImVec2(X + lineW, Y + H), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W - lineW, Y + H), ImVec2(X + W, Y + H), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W, Y + H - lineH), ImVec2(X + W, Y + H), ImGui::GetColorU32(color), thickness);
}

void Active() {
	ImGuiStyle* Style = &ImGui::GetStyle();
	Style->Colors[ImGuiCol_Button] = ImColor(55, 55, 55);
	Style->Colors[ImGuiCol_ButtonActive] = ImColor(55, 55, 55);
	Style->Colors[ImGuiCol_ButtonHovered] = ImColor(0, 0, 0);
}
void Hovered() {
	ImGuiStyle* Style = &ImGui::GetStyle();
	Style->Colors[ImGuiCol_Button] = ImColor(0, 0, 0);
	Style->Colors[ImGuiCol_ButtonActive] = ImColor(0, 0, 0);
	Style->Colors[ImGuiCol_ButtonHovered] = ImColor(55, 55, 55);
}

void Active1() {
	ImGuiStyle* Style = &ImGui::GetStyle();
	Style->Colors[ImGuiCol_Button] = ImColor(0, 55, 0);
	Style->Colors[ImGuiCol_ButtonActive] = ImColor(0, 55, 0);
	Style->Colors[ImGuiCol_ButtonHovered] = ImColor(55, 0, 0);
}
void Hovered1() {
	ImGuiStyle* Style = &ImGui::GetStyle();
	Style->Colors[ImGuiCol_Button] = ImColor(55, 0, 0);
	Style->Colors[ImGuiCol_ButtonActive] = ImColor(55, 0, 0);
	Style->Colors[ImGuiCol_ButtonHovered] = ImColor(0, 55, 0);
}

void ToggleButton(const char* str_id, bool* v)
{
	ImVec2 p = ImGui::GetCursorScreenPos();
	ImDrawList* draw_list = ImGui::GetWindowDrawList();
	float height = ImGui::GetFrameHeight();
	float width = height * 1.55f;
	float radius = height * 0.50f;
	if (ImGui::InvisibleButton(str_id, ImVec2(width, height)))
		*v = !*v;
	ImU32 col_bg;
	if (ImGui::IsItemHovered())
		col_bg = *v ? IM_COL32(145 + 20, 211, 68 + 20, 255) : IM_COL32(236, 52, 52, 255);
	else
		col_bg = *v ? IM_COL32(145, 211, 68, 255) : IM_COL32(218, 218, 218, 255);
	draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), col_bg, height * 0.1f);
	draw_list->AddCircleFilled(ImVec2(*v ? (p.x + width - radius) : (p.x + radius), p.y + radius), radius - 1.5f, IM_COL32(96, 96, 96, 255));
}
LPCSTR RandomStringx(int len) {
	std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string newstr;
	std::string builddate = __DATE__;
	std::string buildtime = __TIME__;
	int pos;
	while (newstr.size() != len) {
		pos = ((rand() % (str.size() - 1)));
		newstr += str.substr(pos, 1);
	}
	return newstr.c_str();
}
ImColor color1 = ImColor(40, 237, 86, 255);
ImColor color2 = ImColor(40, 237, 86, 255);
ImColor color3 = ImColor(40, 237, 86, 255);
ImColor color4 = ImColor(40, 237, 86, 255);
namespace ImGui
{
	IMGUI_API bool Tab(unsigned int index, const char* label, int* selected, float width = 160, float height = 50)
	{
		ImGuiStyle& style = ImGui::GetStyle();
		ImColor color = ImColor(0, 0, 0, 255)/*style.Colors[ImGuiCol_Button]*/;
		ImColor colorN = ImColor(255, 255, 255, 255)/*style.Colors[ImGuiCol_Button]*/;
		ImColor colorActive = ImColor(33, 184, 68, 255); /*style.Colors[ImGuiCol_ButtonActive]*/;
		ImColor colorHover = ImColor(33, 184, 68, 255)/*style.Colors[ImGuiCol_ButtonHovered]*/;
		ImColor colorB = ImColor(0, 0, 0, 255)/*style.Colors[ImGuiCol_Button]*/;


		if (index > 0)
			//ImGui::SameLine();

			if (index == *selected)
			{
				//style.Colors[ImGuiCol_Text] = colorActive;
				color1 = colorActive;
				color2 = colorActive;
				color3 = colorActive;
				color4 = colorActive;



				
				style.Colors[ImGuiCol_Button] = color;
				style.Colors[ImGuiCol_ButtonActive] = colorB;
				style.Colors[ImGuiCol_ButtonHovered] = colorB;
			}

			else
			{
				/*color1 = colorN;
				color2 = colorN;
				color3 = colorN;
				color4 = colorN;*/
				//style.Colors[ImGuiCol_Text] = colorActive;
				
				style.Colors[ImGuiCol_Button] = color;
				style.Colors[ImGuiCol_ButtonActive] = color;
				style.Colors[ImGuiCol_ButtonHovered] = color;
			}

		if (ImGui::Button(label, ImVec2(width, height)))
			*selected = index;

		//style.Colors[ImGuiCol_Text] = colorActive;
		/*color1 = color;
		color2 = color;
		color3 = color;
		color4 = color;*/
		
		style.Colors[ImGuiCol_Button] = color;
		style.Colors[ImGuiCol_ButtonActive] = color;
		style.Colors[ImGuiCol_ButtonHovered] = color;

		return *selected == index;
	}
}

struct FZiplinePawnState {
	struct AFortAthenaZiplineBase* Zipline; // 0x00(0x08)
	struct AFortAthenaZiplineBase* PreviousZipline; // 0x00(0x08)
	struct UPrimitiveComponent* InteractComponent; // 0x10(0x08)
	bool bIsZiplining; // 0x18(0x01)
	bool bJumped; // 0x19(0x01)
	bool bReachedEnd; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	int32_t AuthoritativeValue; // 0x1c(0x04)struct sdk::structs::FVector SocketOffset; // 0x20(0x0c)
	float TimeZipliningBegan; // 0x2c(0x04)
	float TimeZipliningEndedFromJump; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

//if (MyTeamId != ActorTeamId) {
//	if (distance < item.VisDist) {
//		if (item.Team_Esp_line) {
//			ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(Head.x, Head.y), ImGui::GetColorU32({ item.LineESP[0], item.LineESP[1], item.LineESP[2], 1.0f }), item.Thickness);
//		}
//
//
//		if (item.Team_Esp_box_fill) {
//			ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(Head.x - (CornerWidth / 2), Head.y), ImVec2(bottom.x + (CornerWidth / 2), bottom.y), ImGui::GetColorU32({ item.Espboxfill[1], item.Espboxfill[1], item.Espboxfill[1], 0.75f }));
//		}
//		if (item.Team_Esp_box) {
//			ImGui::GetOverlayDrawList()->AddRect(ImVec2(Head.x - (CornerWidth / 2), Head.y), ImVec2(bottom.x + (CornerWidth / 2), bottom.y), ImGui::GetColorU32({ item.Espbox[0], item.Espbox[1], item.Espbox[2], 1.00f }), 0, item.Thickness);
//		}
//
//		if (item.Team_Esp_Corner_Box) {
//			DrawCornerBox(Head.x - (CornerWidth / 2), Head.y, CornerWidth, CornerHeight, ImGui::GetColorU32({ item.BoxCornerESP[0], item.BoxCornerESP[1], item.BoxCornerESP[2], 1.0f }), item.Thickness);
//		}
//
//		if (item.Team_Distance_Esp) {
//			char dist[64];
//			sprintf_s(dist, "PLAYER", distance);
//			ImGui::GetOverlayDrawList()->AddText(ImVec2(Head.x - 20, Head.y), ImGui::GetColorU32({ color.Black[0], color.Black[1], color.Black[2], 4.0f }), dist);
//
//		}
//		if (item.Team_Aimbot) {
//			auto dx = aimbotspot.x - (Width / 2);
//			auto dy = aimbotspot.y - (Height / 2);
//			auto dz = aimbotspot.z - (Depth / 2);
//			auto dist = sqrtf(dx * dx + dy * dy + dz * dz) / 100.0f;
//			if (dist < item.AimFOV && dist < closestDistance) {
//				closestDistance = dist;
//				closestPawn = entity.Actor;
//			}
//
//		}
//	}
//}