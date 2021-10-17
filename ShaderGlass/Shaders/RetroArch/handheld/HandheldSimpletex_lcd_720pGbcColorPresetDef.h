/*
ShaderGlass preset handheld / simpletex_lcd_720p+gbc-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/handheld/simpletex_lcd_720p+gbc-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldSimpletex_lcd_720pGbcColorPresetDef : public PresetDef
{
public:
	HandheldSimpletex_lcd_720pGbcColorPresetDef() : PresetDef{}
	{
		Name = "simpletex_lcd_720p+gbc-color";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersSimpletex_lcdSimpletex_lcd_720pGbcColorShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("srgb_framebuffer", "false"));
            TextureDefs.push_back(HandheldShadersSimpletex_lcdPng2kTextured_paperTextureDef()
.Param("linear", "false")
.Param("name", "BACKGROUND"));
	}
};
}