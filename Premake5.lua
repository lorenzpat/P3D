include "./vendor/premake/premake_customization/solution_items.lua"
include "Dependencies.lua"

workspace "P3DEngine"
	architecture "x86_64"
	startproject "P3D"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items
	{
		".editorconfig"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Dependencies"
	include "vendor/premake"
	include "P3DEngine/vendor/Box2D"
	include "P3DEngine/vendor/GLFW"
	include "P3DEngine/vendor/Glad"
	include "P3DEngine/vendor/msdf-atlas-gen"
	include "P3DEngine/vendor/imgui"
	include "P3DEngine/vendor/yaml-cpp"
group ""

group "Core"
	include "P3DEngine"
	include "P3DEngine-ScriptCore"
group ""

group "Tools"
	include "P3DEnginenut"
group ""

group "Misc"
	include "Sandbox"
group ""