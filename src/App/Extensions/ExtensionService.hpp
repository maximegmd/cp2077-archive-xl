#pragma once

#include "App/Extensions/ModuleLoader.hpp"
#include "Core/Foundation/Feature.hpp"
#include "Core/Hooking/HookingAgent.hpp"
#include "Core/Logging/LoggingAgent.hpp"

namespace App
{
class ExtensionService
    : public Core::Feature
    , public Core::HookingAgent
    , public Core::LoggingAgent
{
public:
    explicit ExtensionService(std::filesystem::path aBundlePath = {});

    void Configure();

protected:
    void OnBootstrap() override;
    void OnShutdown() override;

    Core::UniquePtr<ModuleLoader> m_loader;
    std::filesystem::path m_bundlePath;
    std::mutex m_reloadMutex;
};
}
