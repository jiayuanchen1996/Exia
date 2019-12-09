#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Exia {
	class EX_API Log
	{
	public:
		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

// Core log macros
#define EX_CORE_TRACE(...)	::Exia::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EX_CORE_INFO(...)	::Exia::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EX_CORE_WARN(...)	::Exia::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EX_CORE_ERROR(...)	::Exia::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EX_CORE_FATAL(...)	::Exia::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define EX_TRACE(...)	::Exia::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EX_INFO(...)		::Exia::Log::GetClientLogger()->info(__VA_ARGS__)
#define EX_WARN(...)		::Exia::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EX_ERROR(...)	::Exia::Log::GetClientLogger()->error(__VA_ARGS__)
#define EX_FATAL(...)	::Exia::Log::GetClientLogger()->fatal(__VA_ARGS__)