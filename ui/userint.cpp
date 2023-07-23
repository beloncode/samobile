
#include <ui/userint.h>
#include <imgui/imgui.h>

#include <log_client.h>

bool ImGui_ImplRenderWare_Init();
void ImGui_ImplRenderWare_Shutdown();

UiClientUser::UiClientUser()
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    [[maybe_unused]] ImGuiIO& io{ImGui::GetIO()};

    // Dark mode isn't enable by default
    ImGui::StyleColorsDark();
    salog::printFormat(ANDROID_LOG_INFO, "GUI: ImGUI version in use %d: %s", 
        IMGUI_VERSION_NUM, IMGUI_VERSION);

    //ImGui_ImplRenderWare_Init();

}
UiClientUser::~UiClientUser()
{
    salog::print(ANDROID_LOG_INFO, "GUI: System is been shutdown now!");
    
    //ImGui_ImplRenderWare_Shutdown();
    ImGui::DestroyContext();

}