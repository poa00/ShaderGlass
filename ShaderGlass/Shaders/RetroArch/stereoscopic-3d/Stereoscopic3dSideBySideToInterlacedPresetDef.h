/*
ShaderGlass preset stereoscopic-3d / side-by-side-to-interlaced imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/stereoscopic-3d/side-by-side-to-interlaced.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class Stereoscopic3dSideBySideToInterlacedPresetDef : public PresetDef
{
public:
	Stereoscopic3dSideBySideToInterlacedPresetDef() : PresetDef{}
	{
		Name = "side-by-side-to-interlaced";
		Category = "stereoscopic-3d";
	}

	virtual void Build() {
         	ShaderDefs.push_back(Stereoscopic3dShadersSbsToInterlacedShaderDef()
.Param("scale_type", "source"));
	}
};
}
