// Generated with `xb buildshaders`.
#if 0
; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 11
; Bound: 24684
; Schema: 0
               OpCapability Tessellation
          %1 = OpExtInstImport "GLSL.std.450"
               OpMemoryModel Logical GLSL450
               OpEntryPoint TessellationControl %5663 "main" %3307 %gl_InvocationID %3884 %gl_TessLevelOuter %gl_TessLevelInner
               OpExecutionMode %5663 OutputVertices 4
               OpDecorate %3307 Location 0
               OpDecorate %gl_InvocationID BuiltIn InvocationId
               OpDecorate %3884 Location 0
               OpDecorate %_struct_1111 Block
               OpMemberDecorate %_struct_1111 0 Offset 0
               OpMemberDecorate %_struct_1111 1 Offset 8
               OpMemberDecorate %_struct_1111 2 Offset 16
               OpMemberDecorate %_struct_1111 3 Offset 20
               OpMemberDecorate %_struct_1111 4 Offset 24
               OpDecorate %4930 Binding 6
               OpDecorate %4930 DescriptorSet 1
               OpDecorate %gl_TessLevelOuter BuiltIn TessLevelOuter
               OpDecorate %gl_TessLevelOuter Patch
               OpDecorate %gl_TessLevelInner BuiltIn TessLevelInner
               OpDecorate %gl_TessLevelInner Patch
       %void = OpTypeVoid
       %1282 = OpTypeFunction %void
      %float = OpTypeFloat 32
       %uint = OpTypeInt 32 0
     %uint_4 = OpConstant %uint 4
%_arr_float_uint_4 = OpTypeArray %float %uint_4
%_ptr_Output__arr_float_uint_4 = OpTypePointer Output %_arr_float_uint_4
       %3307 = OpVariable %_ptr_Output__arr_float_uint_4 Output
        %int = OpTypeInt 32 1
%_ptr_Input_int = OpTypePointer Input %int
%gl_InvocationID = OpVariable %_ptr_Input_int Input
    %uint_32 = OpConstant %uint 32
%_arr_float_uint_32 = OpTypeArray %float %uint_32
%_ptr_Input__arr_float_uint_32 = OpTypePointer Input %_arr_float_uint_32
       %3884 = OpVariable %_ptr_Input__arr_float_uint_32 Input
%_ptr_Input_float = OpTypePointer Input %float
%_ptr_Output_float = OpTypePointer Output %float
      %int_0 = OpConstant %int 0
       %bool = OpTypeBool
    %v2float = OpTypeVector %float 2
     %v2uint = OpTypeVector %uint 2
%_struct_1111 = OpTypeStruct %v2float %v2float %uint %uint %v2uint
%_ptr_Uniform__struct_1111 = OpTypePointer Uniform %_struct_1111
       %4930 = OpVariable %_ptr_Uniform__struct_1111 Uniform
     %uint_1 = OpConstant %uint 1
%_ptr_Uniform_float = OpTypePointer Uniform %float
%gl_TessLevelOuter = OpVariable %_ptr_Output__arr_float_uint_4 Output
      %int_1 = OpConstant %int 1
      %int_2 = OpConstant %int 2
      %int_3 = OpConstant %int 3
     %uint_2 = OpConstant %uint 2
%_arr_float_uint_2 = OpTypeArray %float %uint_2
%_ptr_Output__arr_float_uint_2 = OpTypePointer Output %_arr_float_uint_2
%gl_TessLevelInner = OpVariable %_ptr_Output__arr_float_uint_2 Output
       %5663 = OpFunction %void None %1282
      %24683 = OpLabel
      %20062 = OpLoad %int %gl_InvocationID
      %10147 = OpAccessChain %_ptr_Input_float %3884 %20062
      %22427 = OpLoad %float %10147
      %21976 = OpAccessChain %_ptr_Output_float %3307 %20062
               OpStore %21976 %22427
      %20857 = OpIEqual %bool %20062 %int_0
               OpSelectionMerge %19578 None
               OpBranchConditional %20857 %12129 %19578
      %12129 = OpLabel
      %18210 = OpAccessChain %_ptr_Uniform_float %4930 %int_0 %uint_1
      %15646 = OpLoad %float %18210
      %19981 = OpAccessChain %_ptr_Output_float %gl_TessLevelOuter %int_0
               OpStore %19981 %15646
      %19732 = OpAccessChain %_ptr_Output_float %gl_TessLevelOuter %int_1
               OpStore %19732 %15646
      %19733 = OpAccessChain %_ptr_Output_float %gl_TessLevelOuter %int_2
               OpStore %19733 %15646
      %19734 = OpAccessChain %_ptr_Output_float %gl_TessLevelOuter %int_3
               OpStore %19734 %15646
      %19735 = OpAccessChain %_ptr_Output_float %gl_TessLevelInner %int_0
               OpStore %19735 %15646
      %23228 = OpAccessChain %_ptr_Output_float %gl_TessLevelInner %int_1
               OpStore %23228 %15646
               OpBranch %19578
      %19578 = OpLabel
               OpReturn
               OpFunctionEnd
#endif

const uint32_t discrete_quad_4cp_hs[] = {
    0x07230203, 0x00010000, 0x0008000B, 0x0000606C, 0x00000000, 0x00020011,
    0x00000003, 0x0006000B, 0x00000001, 0x4C534C47, 0x6474732E, 0x3035342E,
    0x00000000, 0x0003000E, 0x00000000, 0x00000001, 0x000A000F, 0x00000001,
    0x0000161F, 0x6E69616D, 0x00000000, 0x00000CEB, 0x000011E9, 0x00000F2C,
    0x00001548, 0x00000CDA, 0x00040010, 0x0000161F, 0x0000001A, 0x00000004,
    0x00040047, 0x00000CEB, 0x0000001E, 0x00000000, 0x00040047, 0x000011E9,
    0x0000000B, 0x00000008, 0x00040047, 0x00000F2C, 0x0000001E, 0x00000000,
    0x00030047, 0x00000457, 0x00000002, 0x00050048, 0x00000457, 0x00000000,
    0x00000023, 0x00000000, 0x00050048, 0x00000457, 0x00000001, 0x00000023,
    0x00000008, 0x00050048, 0x00000457, 0x00000002, 0x00000023, 0x00000010,
    0x00050048, 0x00000457, 0x00000003, 0x00000023, 0x00000014, 0x00050048,
    0x00000457, 0x00000004, 0x00000023, 0x00000018, 0x00040047, 0x00001342,
    0x00000021, 0x00000006, 0x00040047, 0x00001342, 0x00000022, 0x00000001,
    0x00040047, 0x00001548, 0x0000000B, 0x0000000B, 0x00030047, 0x00001548,
    0x0000000F, 0x00040047, 0x00000CDA, 0x0000000B, 0x0000000C, 0x00030047,
    0x00000CDA, 0x0000000F, 0x00020013, 0x00000008, 0x00030021, 0x00000502,
    0x00000008, 0x00030016, 0x0000000D, 0x00000020, 0x00040015, 0x0000000B,
    0x00000020, 0x00000000, 0x0004002B, 0x0000000B, 0x00000A16, 0x00000004,
    0x0004001C, 0x00000225, 0x0000000D, 0x00000A16, 0x00040020, 0x000004A2,
    0x00000003, 0x00000225, 0x0004003B, 0x000004A2, 0x00000CEB, 0x00000003,
    0x00040015, 0x0000000C, 0x00000020, 0x00000001, 0x00040020, 0x00000289,
    0x00000001, 0x0000000C, 0x0004003B, 0x00000289, 0x000011E9, 0x00000001,
    0x0004002B, 0x0000000B, 0x00000A6A, 0x00000020, 0x0004001C, 0x0000024D,
    0x0000000D, 0x00000A6A, 0x00040020, 0x000004CA, 0x00000001, 0x0000024D,
    0x0004003B, 0x000004CA, 0x00000F2C, 0x00000001, 0x00040020, 0x0000028A,
    0x00000001, 0x0000000D, 0x00040020, 0x0000028B, 0x00000003, 0x0000000D,
    0x0004002B, 0x0000000C, 0x00000A0B, 0x00000000, 0x00020014, 0x00000009,
    0x00040017, 0x00000013, 0x0000000D, 0x00000002, 0x00040017, 0x00000011,
    0x0000000B, 0x00000002, 0x0007001E, 0x00000457, 0x00000013, 0x00000013,
    0x0000000B, 0x0000000B, 0x00000011, 0x00040020, 0x000006D4, 0x00000002,
    0x00000457, 0x0004003B, 0x000006D4, 0x00001342, 0x00000002, 0x0004002B,
    0x0000000B, 0x00000A0D, 0x00000001, 0x00040020, 0x0000028C, 0x00000002,
    0x0000000D, 0x0004003B, 0x000004A2, 0x00001548, 0x00000003, 0x0004002B,
    0x0000000C, 0x00000A0E, 0x00000001, 0x0004002B, 0x0000000C, 0x00000A11,
    0x00000002, 0x0004002B, 0x0000000C, 0x00000A14, 0x00000003, 0x0004002B,
    0x0000000B, 0x00000A10, 0x00000002, 0x0004001C, 0x00000310, 0x0000000D,
    0x00000A10, 0x00040020, 0x0000058D, 0x00000003, 0x00000310, 0x0004003B,
    0x0000058D, 0x00000CDA, 0x00000003, 0x00050036, 0x00000008, 0x0000161F,
    0x00000000, 0x00000502, 0x000200F8, 0x0000606B, 0x0004003D, 0x0000000C,
    0x00004E5E, 0x000011E9, 0x00050041, 0x0000028A, 0x000027A3, 0x00000F2C,
    0x00004E5E, 0x0004003D, 0x0000000D, 0x0000579B, 0x000027A3, 0x00050041,
    0x0000028B, 0x000055D8, 0x00000CEB, 0x00004E5E, 0x0003003E, 0x000055D8,
    0x0000579B, 0x000500AA, 0x00000009, 0x00005179, 0x00004E5E, 0x00000A0B,
    0x000300F7, 0x00004C7A, 0x00000000, 0x000400FA, 0x00005179, 0x00002F61,
    0x00004C7A, 0x000200F8, 0x00002F61, 0x00060041, 0x0000028C, 0x00004722,
    0x00001342, 0x00000A0B, 0x00000A0D, 0x0004003D, 0x0000000D, 0x00003D1E,
    0x00004722, 0x00050041, 0x0000028B, 0x00004E0D, 0x00001548, 0x00000A0B,
    0x0003003E, 0x00004E0D, 0x00003D1E, 0x00050041, 0x0000028B, 0x00004D14,
    0x00001548, 0x00000A0E, 0x0003003E, 0x00004D14, 0x00003D1E, 0x00050041,
    0x0000028B, 0x00004D15, 0x00001548, 0x00000A11, 0x0003003E, 0x00004D15,
    0x00003D1E, 0x00050041, 0x0000028B, 0x00004D16, 0x00001548, 0x00000A14,
    0x0003003E, 0x00004D16, 0x00003D1E, 0x00050041, 0x0000028B, 0x00004D17,
    0x00000CDA, 0x00000A0B, 0x0003003E, 0x00004D17, 0x00003D1E, 0x00050041,
    0x0000028B, 0x00005ABC, 0x00000CDA, 0x00000A0E, 0x0003003E, 0x00005ABC,
    0x00003D1E, 0x000200F9, 0x00004C7A, 0x000200F8, 0x00004C7A, 0x000100FD,
    0x00010038,
};
