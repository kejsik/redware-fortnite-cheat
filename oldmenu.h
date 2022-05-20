//void render() {
//	ImGui_ImplDX9_NewFrame();
//	ImGui_ImplWin32_NewFrame();
//	ImGui::NewFrame();
//
//	static int MenuTab = 0;
//	float
//		TextSpaceLine = 90.f,
//		SpaceLineOne = 120.f,
//		SpaceLineTwo = 280.f,
//		SpaceLineThr = 420.f;
//	static const char* HitboxList[]{ "Head","Neck","Chest","Pelvis"};
//	static int SelectedHitbox = 0;
//
//	static const char* MouseKeys[]{ "RMouse","LMouse","Control","Shift","Alt" };
//	static int KeySelected = 0;
//	ImGuiStyle* style = &ImGui::GetStyle();
//
//	if (item.Show_Menu)
//	{
//		static POINT Mouse;
//		GetCursorPos(&Mouse);
//		ImGui::GetOverlayDrawList()->AddCircleFilled(ImVec2(Mouse.x, Mouse.y), float(4), ImGui::GetColorU32({ item.EspCircleFill[-40], item.EspCircleFill[-20], item.EspCircleFill[-40], 1 }), item.Shape);
//
//		ImGui::SetNextWindowSize({ 620.f,350.f });
//
//		ImGui::Begin("[EVO Cracked OrangeKid#1337] " ,0, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar);
//		ImGui::SetCursorPos({ 36.f,31.f });
//		ImGui::Text("Evotoogood");
//		ImGui::SetCursorPos({ 22.f,56.f });
//		if (ImGui::Button("Aimbot", { 89.f, 32.f }))
//		{
//			MenuTab = 0;
//		}
//		ImGui::SetCursorPos({ 22.f,93.f });
//		if (ImGui::Button("Visuals", { 89.f, 32.f }))
//		{
//			MenuTab = 1;
//		}
//		ImGui::SetCursorPos({ 22.f,130.f });
//		if (ImGui::Button("Team", { 89.f, 32.f }))
//		{
//			MenuTab = 2;
//		}
//		ImGui::SetCursorPos({ 22.f,167.f });
//		if (ImGui::Button("MISC", { 89.f, 32.f }))
//		{
//			MenuTab = 3;
//		}
//		ImGui::SetCursorPos({ 22.f,204.f });
//		if (ImGui::Button("Discord", { 89.f, 32.f }))
//		{
//			system("start https://discord.gg/HYztVphXyu");
//		}
//		ImGui::SetCursorPos({ 22.f,291.f });
//		if (ImGui::Button("unload", { 65.f, 20.f }))
//		{
//			exit(0);
//		}
//
//		style->ItemSpacing = ImVec2(8, 8);
//
//		if (MenuTab == 0)
//		{
//			ImGui::SetCursorPos({ 137.f,39.f });
//			ImGui::BeginChild("##Aimbot", { 450.f,279.f }, true); 
//			ImGui::SetCursorPos({ 19.f,14.f });
//			ImGui::Text("Evo-Aim:");
//
//			
//			ImGui::SetCursorPos({ 19.f,33.f });
//			ImGui::Checkbox("Aimbot", &item.Aimbot);
//
//
//			ImGui::SetCursorPos({ 19.f,60.f });
//			ImGui::Checkbox("Triggerbot", &item.Auto_Fire);
//
//
//			ImGui::SetCursorPos({ 117.f,60.f });
//			ImGui::Checkbox("Aim Prediction", &item.Aim_Prediction);
//
//
//			ImGui::SetCursorPos({ 244.f,60.f });
//			ImGui::Checkbox("Dynamic", &item.Auto_Bone_Switch);
//
//
//			ImGui::SetCursorPos({ 19.f,91.f });
//			ImGui::SliderFloat("AimFOV", &item.AimFOV, 10, 150);
//
//
//			ImGui::SetCursorPos({ 19.f,118.f });
//			ImGui::SliderFloat("AimSmoothing", &item.Aim_Speed, 1, 25);
//
//
//			ImGui::SetCursorPos({ 19.f,145.f });
//			ImGui::SliderFloat("Shape", &item.Shape, 10, 50);
//
//
//			ImGui::SetCursorPos({ 19.f,180.f });
//			ImGui::Text("Evo-Bone:");
//
//
//			ImGui::SetCursorPos({ 88.f,33.f });
//			if (ImGui::Combo("Keys", &KeySelected, MouseKeys, IM_ARRAYSIZE(MouseKeys)))
//			{
//				if (KeySelected == 0)
//				{
//					item.aimkeypos = 0;
//				}
//				if (KeySelected == 1)
//				{
//					item.aimkeypos = 1;
//				}
//				if (KeySelected == 2)
//				{
//					item.aimkeypos = 2;
//				}
//				if (KeySelected == 3)
//				{
//					item.aimkeypos = 3;
//				}
//			}
//
//
//			ImGui::SetCursorPos({ 88.f,181.f });
//			if (ImGui::Combo("Box", &SelectedHitbox, HitboxList, IM_ARRAYSIZE(HitboxList)))
//			{
//				if (SelectedHitbox == 0)
//				{
//					item.hitboxpos = 0;
//				}
//				if (SelectedHitbox == 1)
//				{
//					item.hitboxpos = 1;
//				}
//				if (SelectedHitbox == 2)
//				{
//					item.hitboxpos = 2;
//				}
//				if (SelectedHitbox == 3)
//				{
//					item.hitboxpos = 3;
//				}
//			}
//		}
//		if (MenuTab == 1)
//		{
//			ImGui::SetCursorPos({ 137.f,39.f });
//			ImGui::BeginChild("##Visuals", { 450.f,279.f }, true);
//			ImGui::SetCursorPos({ 19.f,14.f });
//			ImGui::Text("Evo-Enemy:");
//
//			ImGui::SetCursorPos({ 20.f,38.f });
//			ImGui::Checkbox("2DBox", &item.Esp_box);
//
//			ImGui::SetCursorPos({ 94.f,38.f });
//			ImGui::Checkbox("CornerBox", &item.Esp_Corner_Box);
//
//
//			ImGui::SetCursorPos({ 191.f,38.f });
//			ImGui::Checkbox("AimLockLine", &item.Lock_Line);
//
//
//			ImGui::SetCursorPos({ 20.f,70.f });
//			ImGui::Checkbox("SnapLines", &item.Esp_line);
//
//
//			ImGui::SetCursorPos({ 112.f,70.f });
//			ImGui::Checkbox("CrosshairSnapLines", &CrosshairSnapLines);
//
//
//			ImGui::SetCursorPos({ 20.f,103.f });
//			ImGui::Checkbox("Distance", &item.Distance_Esp);
//
//			ImGui::SetCursorPos({ 19.f,151.f });
//			ImGui::Text("Evo-Others:");
//
//
//			ImGui::SetCursorPos({ 20.f,180.f });
//			ImGui::Checkbox("DrawFOV", &item.Draw_FOV_Circle);
//
//
//			ImGui::SetCursorPos({ 103.f,180.f });
//			ImGui::Checkbox("Crosshair", &item.Cross_Hair);
//
//
//			ImGui::SetCursorPos({ 20.f,221.f });
//			ImGui::SliderFloat("VisualsDistance", &item.VisDist, 25, 625);
//		}
//		if (MenuTab == 2)
//		{
//			ImGui::SetCursorPos({ 137.f,39.f });
//			ImGui::BeginChild("##Team", { 450.f,279.f }, true);
//			ImGui::SetCursorPos({ 19.f,14.f });
//			ImGui::Text("Evo-Team:");
//
//			ImGui::SetCursorPos({ 20.f,38.f });
//			ImGui::Checkbox("2DBox", &item.Team_Esp_box);
//
//			ImGui::SetCursorPos({ 94.f,38.f });
//			ImGui::Checkbox("CornerBox", &item.Team_Esp_Corner_Box);
//
//
//			ImGui::SetCursorPos({ 191.f,38.f });
//			ImGui::Checkbox("SnapLines", &item.Team_Esp_line);
//
//
//			ImGui::SetCursorPos({ 20.f,70.f });
//			ImGui::Checkbox("CrosshairSnapLines", &team_CrosshairSnapLines);
//
//			ImGui::SetCursorPos({ 180.f,70.f });
//			ImGui::Checkbox("Distance", &item.Team_Distance_Esp);
//		}
//		if (MenuTab == 3)
//		{
//			ImGui::SetCursorPos({ 137.f,39.f });
//			ImGui::BeginChild("##Misc", { 450.f,279.f }, true);
//			ImGui::SetCursorPos({ 19.f,14.f });
//			ImGui::Text("Evo-Color:");
//		}
//		ImGui::EndChild();
//		ImGui::End();
//	}
//
//
//
//
//
//
//	GetKey();
//
//	ImGui::EndFrame();
//	D3dDevice->SetRenderState(D3DRS_ZENABLE, false);
//	D3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
//	D3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
//	D3dDevice->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.0f, 0);
//
//	if (D3dDevice->BeginScene() >= 0) {
//		ImGui::Render();
//		ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
//		D3dDevice->EndScene();
//	}
//	HRESULT result = D3dDevice->Present(NULL, NULL, NULL, NULL);
//
//	if (result == D3DERR_DEVICELOST && D3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET) {
//		ImGui_ImplDX9_InvalidateDeviceObjects();
//		D3dDevice->Reset(&d3dpp);
//		ImGui_ImplDX9_CreateDeviceObjects();
//	}
//}
//
//void xInitD3d()
//{
//	if (FAILED(Direct3DCreate9Ex(D3D_SDK_VERSION, &p_Object)))
//		exit(3);
//
//	ZeroMemory(&d3dpp, sizeof(d3dpp));
//	d3dpp.BackBufferWidth = Width;
//	d3dpp.BackBufferHeight = Height;
//	d3dpp.BackBufferFormat = D3DFMT_A8R8G8B8;
//	d3dpp.MultiSampleQuality = D3DMULTISAMPLE_NONE;
//	d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
//	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
//	d3dpp.EnableAutoDepthStencil = TRUE;
//	d3dpp.hDeviceWindow = Window;
//	d3dpp.Windowed = TRUE;
//
//	p_Object->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, Window, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &D3dDevice);
//
//	IMGUI_CHECKVERSION();
//
//	ImGui::CreateContext();
//	ImGuiIO& io = ImGui::GetIO();
//	(void)io;
//
//	ImGui_ImplWin32_Init(Window);
//	ImGui_ImplDX9_Init(D3dDevice);
//
//	ImGui::StyleColorsClassic();
//	ImGuiStyle* style = &ImGui::GetStyle();
//
//
//	ImGui::StyleColorsClassic();
//	style->WindowPadding = ImVec2(8, 8);
//	style->WindowRounding = 5.0f;
//	style->FramePadding = ImVec2(4, 2);
//	style->FrameRounding = 0.0f;
//	style->ItemSpacing = ImVec2(8, 4);
//	style->ItemInnerSpacing = ImVec2(4, 4);
//	style->IndentSpacing = 21.0f;
//	style->ScrollbarSize = 14.0f;
//	style->ScrollbarRounding = 0.0f;
//	style->GrabMinSize = 10.0f;
//	style->GrabRounding = 0.0f;
//	style->TabRounding = 0.f;
//	style->ChildRounding = 0.0f;
//	style->WindowBorderSize = 1.f;
//	style->ChildBorderSize = 1.f;
//	style->PopupBorderSize = 0.f;
//	style->FrameBorderSize = 0.f;
//	style->TabBorderSize = 0.f;
//
//	style->Colors[ImGuiCol_Text] = ImVec4(0.000f, 0.678f, 0.929f, 1.0f);
//	style->Colors[ImGuiCol_TextDisabled] = ImVec4(0.0f, 0.0263f, 0.0357f, 1.00f);
//	style->Colors[ImGuiCol_WindowBg] = ImVec4(0.059f, 0.051f, 0.071f, 1.00f);
//	style->Colors[ImGuiCol_ChildWindowBg] = ImVec4(0.071f, 0.071f, 0.090f, 1.00f);
//	style->Colors[ImGuiCol_PopupBg] = ImVec4(0.0f, 0.0263f, 0.0357f, 1.00f);
//	style->Colors[ImGuiCol_Border] = ImColor(0.000f, 0.678f, 0.929f, 1.0f);
//	style->Colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0263f, 0.0357f, 0.00f);
//	style->Colors[ImGuiCol_FrameBg] = ImVec4(0.102f, 0.090f, 0.122f, 1.000f);
//	style->Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.102f, 0.090f, 0.122f, 1.000f);
//	style->Colors[ImGuiCol_FrameBgActive] = ImVec4(0.102f, 0.090f, 0.122f, 1.000f);
//	style->Colors[ImGuiCol_TitleBg] = ImVec4(0.102f, 0.090f, 0.122f, 1.000f);
//	style->Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.102f, 0.090f, 0.122f, 1.000f);
//	style->Colors[ImGuiCol_TitleBgActive] = ImVec4(0.102f, 0.090f, 0.122f, 1.000f);
//	style->Colors[ImGuiCol_MenuBarBg] = ImVec4(0.0f, 0.263f, 0.357f, 1.00f);
//	style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
//	style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
//	style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
//	style->Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
//	style->Colors[ImGuiCol_CheckMark] = ImColor(87, 119, 134, 255);
//	style->Colors[ImGuiCol_SliderGrab] = ImColor(119, 134, 169, 150);
//	style->Colors[ImGuiCol_SliderGrabActive] = ImColor(119, 134, 169, 150);
//	style->Colors[ImGuiCol_Button] = ImColor(26, 23, 31, 255);
//	style->Colors[ImGuiCol_ButtonHovered] = ImColor(0.102f, 0.090f, 0.122f, 1.000f);
//	style->Colors[ImGuiCol_ButtonActive] = ImColor(0.102f, 0.090f, 0.122f, 1.000f);
//	style->Colors[ImGuiCol_Header] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_HeaderActive] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_Column] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_ColumnHovered] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_ColumnActive] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_ResizeGrip] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
//	style->Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
//	style->Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
//	style->Colors[ImGuiCol_PlotLines] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_PlotHistogram] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
//	style->Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 1.00f, 0.00f, 0.43f);
//	style->Colors[ImGuiCol_ModalWindowDarkening] = ImVec4(1.00f, 0.98f, 0.95f, 0.73f);
//
//	style->WindowTitleAlign.x = 0.50f;
//	style->FrameRounding = 0.0f;
//
//	p_Object->Release();
//}
//if (ImGui::BeginChild(("##TABS"), ImVec2(90, 260), true, ImGuiWindowFlags_NoScrollbar))
//{
//	ImGui::Spacing();
//	if (ImGui::Button(("Aimbot"), ImVec2(71.0f, 35.0f)))
//	{
//		tabb = 0;
//	}
//
//	ImGui::Spacing();
//
//	if (ImGui::Button(("Visuals"), ImVec2(71.0f, 35.0f)))
//	{
//		tabb = 1;
//	}
//
//	ImGui::Spacing();
//
//	if (ImGui::Button(("Exploits"), ImVec2(71.0f, 35.0f)))
//	{
//		tabb = 2;
//	}
//
//	ImGui::Spacing();
//
//	if (ImGui::Button(("Misc"), ImVec2(71.0f, 35.0f)))
//	{
//		tabb = 3;
//	}
//
//	ImGui::EndChild();
//}
//
//ImGui::SameLine();
//
//if (tabb == 0)
//{
//
//	ImGui::SameLine();
//
//	if (ImGui::BeginChild(("##aimbot"), ImVec2(0, 260), true, ImGuiWindowFlags_NoScrollbar))
//	{
//
//		ImGui::Spacing();
//		ImGui::Checkbox("Aimbot", &item.Aimbot);
//		ImGui::Spacing();
//
//
//
//
//		ImGui::Checkbox("Dynamic", &item.Auto_Bone_Switch);
//		ImGui::Spacing();
//		ImGui::Checkbox("Draw FOV", &item.Draw_FOV_Circle);
//		ImGui::Spacing();
//		ImGui::Checkbox("Draw Crosshair", &item.Cross_Hair);
//		ImGui::Spacing();
//		ImGui::SliderFloat("Smoothing", &item.Aim_Speed, 1, 20);
//		ImGui::Spacing();
//		ImGui::SliderFloat("Fov Size", &item.AimFOV, 20, 800);
//
//
//	}
//
//	ImGui::EndChild();
//
//
//}
//
//
//
//ImGui::SameLine();
//
//if (tabb == 1)
//{
//	ImGui::SameLine();
//
//	if (ImGui::BeginChild(("##esp"), ImVec2(0, 260), true, ImGuiWindowFlags_NoScrollbar))
//	{
//
//
//		ImGui::Spacing();
//		ImGui::Checkbox("Boxes", &item.Esp_box);
//		ImGui::Spacing();
//		ImGui::Checkbox("Filled Boxes", &item.Esp_box_fill);
//		ImGui::Spacing();
//		ImGui::Checkbox("Aim Lock Line", &item.Lock_Line);
//		ImGui::Spacing();
//		ImGui::Checkbox("SnapLines", &item.Esp_line);
//		ImGui::Spacing();
//		ImGui::Checkbox("Distance", &item.Distance_Esp);
//
//
//
//		ImGui::EndChild();
//	}
//
//
//
//}
//
//ImGui::SameLine();
//
//
//if (tabb == 2)
//{
//	ImGui::SameLine();
//
//	if (ImGui::BeginChild(("##mods"), ImVec2(0, 260), true, ImGuiWindowFlags_NoScrollbar))
//	{
//
//
//
//	}
//
//	ImGui::EndChild();
//
//}
//
//ImGui::SameLine();
//
//if (tabb == 3)
//{
//	ImGui::SameLine();
//
//	if (ImGui::BeginChild(("##misc"), ImVec2(0, 260), true, ImGuiWindowFlags_NoScrollbar))
//	{
//		ImGui::Spacing();
//
//
//	}
//
//	ImGui::EndChild();
//
//
//}
//
//ImGui::End();