// Generated by Asuka from C:\Users\Daniel\source\repos\voukoder-virtualdub\src\VDCapture\source\d3d11_display.fx. DO NOT EDIT.

/* -- vs_4_0_level_9_3 --
	//
	// Generated by Microsoft (R) HLSL Shader Compiler 10.1
	//
	//
	//
	// Input signature:
	//
	// Name                 Index   Mask Register SysValue  Format   Used
	// -------------------- ----- ------ -------- -------- ------- ------
	// POSITION                 0   xy          0     NONE   float   xy  
	// TEXCOORD                 0   xy          1     NONE   float   xy  
	//
	//
	// Output signature:
	//
	// Name                 Index   Mask Register SysValue  Format   Used
	// -------------------- ----- ------ -------- -------- ------- ------
	// SV_Position              0   xyzw        0      POS   float   xyzw
	// TEXCOORD                 0   xy          1     NONE   float   xy  
	//
	//
	// Runtime generated constant mappings:
	//
	// Target Reg                               Constant Description
	// ---------- --------------------------------------------------
	// c0                              Vertex Shader position offset
	//
	//
	// Level9 shader bytecode:
	//
	    vs_2_x
	    def c1, 0.5, 1, 0, 0
	    dcl_texcoord v0
	    dcl_texcoord1 v1
	    add oPos.xy, v0, c0
	    mov oPos.zw, c1.xyxy
	    mov oT0.xy, v1
	
	// approximately 3 instruction slots used
	vs_4_0
	dcl_input v0.xy
	dcl_input v1.xy
	dcl_output_siv o0.xyzw, position
	dcl_output o1.xy
	mov o0.xy, v0.xyxx
	mov o0.zw, l(0,0,0.500000,1.000000)
	mov o1.xy, v1.xyxx
	ret 
	// Approximately 4 instruction slots used
	
*/
static const uint8 g_VDCapDXGI12_VS_Display[] = {
	0x44,0x58,0x42,0x43,0xf8,0x59,0x42,0x27,0x43,0x61,0x4a,0xf9,0xb1,0xd1,0xd3,0x93,
	0x27,0xf7,0x30,0xa1,0x01,0x00,0x00,0x00,0xcc,0x02,0x00,0x00,0x06,0x00,0x00,0x00,
	0x38,0x00,0x00,0x00,0xc8,0x00,0x00,0x00,0x58,0x01,0x00,0x00,0xd4,0x01,0x00,0x00,
	0x20,0x02,0x00,0x00,0x74,0x02,0x00,0x00,0x41,0x6f,0x6e,0x39,0x88,0x00,0x00,0x00,
	0x88,0x00,0x00,0x00,0x00,0x02,0xfe,0xff,0x60,0x00,0x00,0x00,0x28,0x00,0x00,0x00,
	0x00,0x00,0x24,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x24,0x00,
	0x01,0x00,0x24,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0xfe,0xff,0x51,0x00,0x00,0x05,
	0x01,0x00,0x0f,0xa0,0x00,0x00,0x00,0x3f,0x00,0x00,0x80,0x3f,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x02,0x05,0x00,0x00,0x80,0x00,0x00,0x0f,0x90,
	0x1f,0x00,0x00,0x02,0x05,0x00,0x01,0x80,0x01,0x00,0x0f,0x90,0x02,0x00,0x00,0x03,
	0x00,0x00,0x03,0xc0,0x00,0x00,0xe4,0x90,0x00,0x00,0xe4,0xa0,0x01,0x00,0x00,0x02,
	0x00,0x00,0x0c,0xc0,0x01,0x00,0x44,0xa0,0x01,0x00,0x00,0x02,0x00,0x00,0x03,0xe0,
	0x01,0x00,0xe4,0x90,0xff,0xff,0x00,0x00,0x53,0x48,0x44,0x52,0x88,0x00,0x00,0x00,
	0x40,0x00,0x01,0x00,0x22,0x00,0x00,0x00,0x5f,0x00,0x00,0x03,0x32,0x10,0x10,0x00,
	0x00,0x00,0x00,0x00,0x5f,0x00,0x00,0x03,0x32,0x10,0x10,0x00,0x01,0x00,0x00,0x00,
	0x67,0x00,0x00,0x04,0xf2,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x65,0x00,0x00,0x03,0x32,0x20,0x10,0x00,0x01,0x00,0x00,0x00,0x36,0x00,0x00,0x05,
	0x32,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x46,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
	0x36,0x00,0x00,0x08,0xc2,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0x00,0x80,0x3f,
	0x36,0x00,0x00,0x05,0x32,0x20,0x10,0x00,0x01,0x00,0x00,0x00,0x46,0x10,0x10,0x00,
	0x01,0x00,0x00,0x00,0x3e,0x00,0x00,0x01,0x53,0x54,0x41,0x54,0x74,0x00,0x00,0x00,
	0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x52,0x44,0x45,0x46,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x00,0x04,0xfe,0xff,
	0x00,0x01,0x00,0x00,0x1c,0x00,0x00,0x00,0x4d,0x69,0x63,0x72,0x6f,0x73,0x6f,0x66,
	0x74,0x20,0x28,0x52,0x29,0x20,0x48,0x4c,0x53,0x4c,0x20,0x53,0x68,0x61,0x64,0x65,
	0x72,0x20,0x43,0x6f,0x6d,0x70,0x69,0x6c,0x65,0x72,0x20,0x31,0x30,0x2e,0x31,0x00,
	0x49,0x53,0x47,0x4e,0x4c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
	0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x41,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,0x03,0x00,0x00,
	0x50,0x4f,0x53,0x49,0x54,0x49,0x4f,0x4e,0x00,0x54,0x45,0x58,0x43,0x4f,0x4f,0x52,
	0x44,0x00,0xab,0xab,0x4f,0x53,0x47,0x4e,0x50,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
	0x08,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x44,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x03,0x0c,0x00,0x00,0x53,0x56,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x00,
	0x54,0x45,0x58,0x43,0x4f,0x4f,0x52,0x44,0x00,0xab,0xab,0xab,
};


/* -- ps_4_0_level_9_3 --
	//
	// Generated by Microsoft (R) HLSL Shader Compiler 10.1
	//
	//
	// Resource Bindings:
	//
	// Name                                 Type  Format         Dim      HLSL Bind  Count
	// ------------------------------ ---------- ------- ----------- -------------- ------
	// srcsamp                           sampler      NA          NA             s0      1 
	// srctex                            texture  float4          2d             t0      1 
	//
	//
	//
	// Input signature:
	//
	// Name                 Index   Mask Register SysValue  Format   Used
	// -------------------- ----- ------ -------- -------- ------- ------
	// SV_Position              0   xyzw        0      POS   float       
	// TEXCOORD                 0   xy          1     NONE   float   xy  
	//
	//
	// Output signature:
	//
	// Name                 Index   Mask Register SysValue  Format   Used
	// -------------------- ----- ------ -------- -------- ------- ------
	// SV_Target                0   xyzw        0   TARGET   float   xyzw
	//
	//
	// Sampler/Resource to DX9 shader sampler mappings:
	//
	// Target Sampler Source Sampler  Source Resource
	// -------------- --------------- ----------------
	// s0             s0              t0               
	//
	//
	// Level9 shader bytecode:
	//
	    ps_2_x
	    def c0, 1, 0, 0, 0
	    dcl t0.xy
	    dcl_2d s0
	    texld r0, t0, s0
	    mad r0, r0.xyzx, c0.xxxy, c0.yyyx
	    mov oC0, r0
	
	// approximately 3 instruction slots used (1 texture, 2 arithmetic)
	ps_4_0
	dcl_sampler s0, mode_default
	dcl_resource_texture2d (float,float,float,float) t0
	dcl_input_ps linear v1.xy
	dcl_output o0.xyzw
	dcl_temps 1
	sample r0.xyzw, v1.xyxx, t0.xyzw, s0
	mov o0.xyz, r0.xyzx
	mov o0.w, l(1.000000)
	ret 
	// Approximately 4 instruction slots used
	
*/
static const uint8 g_VDCapDXGI12_PS_Display[] = {
	0x44,0x58,0x42,0x43,0xc9,0xc7,0x17,0x09,0x35,0x8c,0x3d,0x23,0x08,0xda,0x3f,0xc9,
	0x57,0x3c,0xff,0x69,0x01,0x00,0x00,0x00,0x10,0x03,0x00,0x00,0x06,0x00,0x00,0x00,
	0x38,0x00,0x00,0x00,0xd0,0x00,0x00,0x00,0x6c,0x01,0x00,0x00,0xe8,0x01,0x00,0x00,
	0x84,0x02,0x00,0x00,0xdc,0x02,0x00,0x00,0x41,0x6f,0x6e,0x39,0x90,0x00,0x00,0x00,
	0x90,0x00,0x00,0x00,0x00,0x02,0xff,0xff,0x68,0x00,0x00,0x00,0x28,0x00,0x00,0x00,
	0x00,0x00,0x28,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x28,0x00,0x01,0x00,0x24,0x00,
	0x00,0x00,0x28,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0xff,0xff,0x51,0x00,0x00,0x05,
	0x00,0x00,0x0f,0xa0,0x00,0x00,0x80,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x02,0x00,0x00,0x00,0x80,0x00,0x00,0x03,0xb0,
	0x1f,0x00,0x00,0x02,0x00,0x00,0x00,0x90,0x00,0x08,0x0f,0xa0,0x42,0x00,0x00,0x03,
	0x00,0x00,0x0f,0x80,0x00,0x00,0xe4,0xb0,0x00,0x08,0xe4,0xa0,0x04,0x00,0x00,0x04,
	0x00,0x00,0x0f,0x80,0x00,0x00,0x24,0x80,0x00,0x00,0x40,0xa0,0x00,0x00,0x15,0xa0,
	0x01,0x00,0x00,0x02,0x00,0x08,0x0f,0x80,0x00,0x00,0xe4,0x80,0xff,0xff,0x00,0x00,
	0x53,0x48,0x44,0x52,0x94,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x25,0x00,0x00,0x00,
	0x5a,0x00,0x00,0x03,0x00,0x60,0x10,0x00,0x00,0x00,0x00,0x00,0x58,0x18,0x00,0x04,
	0x00,0x70,0x10,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x00,0x00,0x62,0x10,0x00,0x03,
	0x32,0x10,0x10,0x00,0x01,0x00,0x00,0x00,0x65,0x00,0x00,0x03,0xf2,0x20,0x10,0x00,
	0x00,0x00,0x00,0x00,0x68,0x00,0x00,0x02,0x01,0x00,0x00,0x00,0x45,0x00,0x00,0x09,
	0xf2,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x46,0x10,0x10,0x00,0x01,0x00,0x00,0x00,
	0x46,0x7e,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x10,0x00,0x00,0x00,0x00,0x00,
	0x36,0x00,0x00,0x05,0x72,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x46,0x02,0x10,0x00,
	0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x05,0x82,0x20,0x10,0x00,0x00,0x00,0x00,0x00,
	0x01,0x40,0x00,0x00,0x00,0x00,0x80,0x3f,0x3e,0x00,0x00,0x01,0x53,0x54,0x41,0x54,
	0x74,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x52,0x44,0x45,0x46,0x94,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
	0x00,0x04,0xff,0xff,0x00,0x01,0x00,0x00,0x6b,0x00,0x00,0x00,0x5c,0x00,0x00,0x00,
	0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x64,0x00,0x00,0x00,
	0x02,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
	0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x73,0x72,0x63,0x73,
	0x61,0x6d,0x70,0x00,0x73,0x72,0x63,0x74,0x65,0x78,0x00,0x4d,0x69,0x63,0x72,0x6f,
	0x73,0x6f,0x66,0x74,0x20,0x28,0x52,0x29,0x20,0x48,0x4c,0x53,0x4c,0x20,0x53,0x68,
	0x61,0x64,0x65,0x72,0x20,0x43,0x6f,0x6d,0x70,0x69,0x6c,0x65,0x72,0x20,0x31,0x30,
	0x2e,0x31,0x00,0xab,0x49,0x53,0x47,0x4e,0x50,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
	0x08,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x44,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x03,0x03,0x00,0x00,0x53,0x56,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x00,
	0x54,0x45,0x58,0x43,0x4f,0x4f,0x52,0x44,0x00,0xab,0xab,0xab,0x4f,0x53,0x47,0x4e,
	0x2c,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x0f,0x00,0x00,0x00,0x53,0x56,0x5f,0x54,0x61,0x72,0x67,0x65,0x74,0x00,0xab,0xab,
};
