// Generated with `xb buildshaders`.
#if 0
; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 11
; Bound: 25239
; Schema: 0
               OpCapability Shader
          %1 = OpExtInstImport "GLSL.std.450"
               OpMemoryModel Logical GLSL450
               OpEntryPoint Vertex %5663 "main" %gl_VertexIndex %5229
               OpDecorate %gl_VertexIndex BuiltIn VertexIndex
               OpDecorate %_struct_1111 Block
               OpMemberDecorate %_struct_1111 0 Offset 0
               OpMemberDecorate %_struct_1111 1 Offset 8
               OpMemberDecorate %_struct_1111 2 Offset 16
               OpMemberDecorate %_struct_1111 3 Offset 20
               OpMemberDecorate %_struct_1111 4 Offset 24
               OpDecorate %4930 Binding 6
               OpDecorate %4930 DescriptorSet 1
               OpDecorate %5229 Location 0
       %void = OpTypeVoid
       %1282 = OpTypeFunction %void
       %uint = OpTypeInt 32 0
     %uint_0 = OpConstant %uint 0
       %bool = OpTypeBool
     %uint_1 = OpConstant %uint 1
%uint_16711935 = OpConstant %uint 16711935
     %uint_8 = OpConstant %uint 8
%uint_4278255360 = OpConstant %uint 4278255360
     %uint_2 = OpConstant %uint 2
   %uint_255 = OpConstant %uint 255
    %uint_24 = OpConstant %uint 24
 %uint_65280 = OpConstant %uint 65280
%uint_16711680 = OpConstant %uint 16711680
%uint_4278190080 = OpConstant %uint 4278190080
 %uint_65535 = OpConstant %uint 65535
    %uint_16 = OpConstant %uint 16
%uint_4294901760 = OpConstant %uint 4294901760
        %int = OpTypeInt 32 1
%_ptr_Input_int = OpTypePointer Input %int
%gl_VertexIndex = OpVariable %_ptr_Input_int Input
      %float = OpTypeFloat 32
    %v2float = OpTypeVector %float 2
     %v2uint = OpTypeVector %uint 2
%_struct_1111 = OpTypeStruct %v2float %v2float %uint %uint %v2uint
%_ptr_Uniform__struct_1111 = OpTypePointer Uniform %_struct_1111
       %4930 = OpVariable %_ptr_Uniform__struct_1111 Uniform
      %int_2 = OpConstant %int 2
%_ptr_Uniform_uint = OpTypePointer Uniform %uint
    %float_1 = OpConstant %float 1
%_ptr_Output_float = OpTypePointer Output %float
       %5229 = OpVariable %_ptr_Output_float Output
      %int_0 = OpConstant %int 0
%_ptr_Uniform_float = OpTypePointer Uniform %float
       %5663 = OpFunction %void None %1282
       %6733 = OpLabel
       %9931 = OpLoad %int %gl_VertexIndex
      %15381 = OpBitcast %uint %9931
       %9656 = OpAccessChain %_ptr_Uniform_uint %4930 %int_2
      %22442 = OpLoad %uint %9656
               OpSelectionMerge %10204 None
               OpSwitch %uint_0 %16320
      %16320 = OpLabel
      %23197 = OpIEqual %bool %22442 %uint_0
               OpSelectionMerge %25238 None
               OpBranchConditional %23197 %11868 %16569
      %16569 = OpLabel
      %19162 = OpIEqual %bool %22442 %uint_1
               OpSelectionMerge %13164 None
               OpBranchConditional %19162 %19530 %16570
      %16570 = OpLabel
      %19163 = OpIEqual %bool %22442 %uint_2
               OpSelectionMerge %13163 None
               OpBranchConditional %19163 %21863 %10583
      %10583 = OpLabel
      %18271 = OpBitwiseAnd %uint %15381 %uint_65535
       %9425 = OpShiftLeftLogical %uint %18271 %uint_16
      %20652 = OpBitwiseAnd %uint %15381 %uint_4294901760
      %17549 = OpShiftRightLogical %uint %20652 %uint_16
      %16376 = OpBitwiseOr %uint %9425 %17549
               OpBranch %10204
      %21863 = OpLabel
      %20693 = OpBitwiseAnd %uint %15381 %uint_255
       %9463 = OpShiftLeftLogical %uint %20693 %uint_24
      %20306 = OpBitwiseAnd %uint %15381 %uint_65280
      %19284 = OpShiftLeftLogical %uint %20306 %uint_8
      %17045 = OpBitwiseOr %uint %9463 %19284
      %21212 = OpBitwiseAnd %uint %15381 %uint_16711680
      %20634 = OpShiftRightLogical %uint %21212 %uint_8
      %24000 = OpBitwiseOr %uint %17045 %20634
      %19599 = OpBitwiseAnd %uint %15381 %uint_4278190080
      %21584 = OpShiftRightLogical %uint %19599 %uint_24
      %16377 = OpBitwiseOr %uint %24000 %21584
               OpBranch %10204
      %13163 = OpLabel
               OpUnreachable
      %19530 = OpLabel
      %19075 = OpBitwiseAnd %uint %15381 %uint_16711935
       %9426 = OpShiftLeftLogical %uint %19075 %uint_8
      %20653 = OpBitwiseAnd %uint %15381 %uint_4278255360
      %17550 = OpShiftRightLogical %uint %20653 %uint_8
      %16378 = OpBitwiseOr %uint %9426 %17550
               OpBranch %10204
      %13164 = OpLabel
               OpUnreachable
      %11868 = OpLabel
               OpBranch %10204
      %25238 = OpLabel
               OpUnreachable
      %10204 = OpLabel
      %15672 = OpPhi %uint %15381 %11868 %16378 %19530 %16377 %21863 %16376 %10583
      %24496 = OpBitcast %float %15672
      %21708 = OpFAdd %float %24496 %float_1
       %7335 = OpAccessChain %_ptr_Uniform_float %4930 %int_0 %uint_0
      %12980 = OpLoad %float %7335
      %19190 = OpAccessChain %_ptr_Uniform_float %4930 %int_0 %uint_1
      %10126 = OpLoad %float %19190
      %23029 = OpExtInst %float %1 FClamp %21708 %12980 %10126
               OpStore %5229 %23029
               OpReturn
               OpFunctionEnd
#endif

const uint32_t tessellation_adaptive_vs[] = {
    0x07230203, 0x00010000, 0x0008000B, 0x00006297, 0x00000000, 0x00020011,
    0x00000001, 0x0006000B, 0x00000001, 0x4C534C47, 0x6474732E, 0x3035342E,
    0x00000000, 0x0003000E, 0x00000000, 0x00000001, 0x0007000F, 0x00000000,
    0x0000161F, 0x6E69616D, 0x00000000, 0x00001029, 0x0000146D, 0x00040047,
    0x00001029, 0x0000000B, 0x0000002A, 0x00030047, 0x00000457, 0x00000002,
    0x00050048, 0x00000457, 0x00000000, 0x00000023, 0x00000000, 0x00050048,
    0x00000457, 0x00000001, 0x00000023, 0x00000008, 0x00050048, 0x00000457,
    0x00000002, 0x00000023, 0x00000010, 0x00050048, 0x00000457, 0x00000003,
    0x00000023, 0x00000014, 0x00050048, 0x00000457, 0x00000004, 0x00000023,
    0x00000018, 0x00040047, 0x00001342, 0x00000021, 0x00000006, 0x00040047,
    0x00001342, 0x00000022, 0x00000001, 0x00040047, 0x0000146D, 0x0000001E,
    0x00000000, 0x00020013, 0x00000008, 0x00030021, 0x00000502, 0x00000008,
    0x00040015, 0x0000000B, 0x00000020, 0x00000000, 0x0004002B, 0x0000000B,
    0x00000A0A, 0x00000000, 0x00020014, 0x00000009, 0x0004002B, 0x0000000B,
    0x00000A0D, 0x00000001, 0x0004002B, 0x0000000B, 0x000008A6, 0x00FF00FF,
    0x0004002B, 0x0000000B, 0x00000A22, 0x00000008, 0x0004002B, 0x0000000B,
    0x000005FD, 0xFF00FF00, 0x0004002B, 0x0000000B, 0x00000A10, 0x00000002,
    0x0004002B, 0x0000000B, 0x00000144, 0x000000FF, 0x0004002B, 0x0000000B,
    0x00000A52, 0x00000018, 0x0004002B, 0x0000000B, 0x00000A87, 0x0000FF00,
    0x0004002B, 0x0000000B, 0x000005A9, 0x00FF0000, 0x0004002B, 0x0000000B,
    0x00000580, 0xFF000000, 0x0004002B, 0x0000000B, 0x000001C1, 0x0000FFFF,
    0x0004002B, 0x0000000B, 0x00000A3A, 0x00000010, 0x0004002B, 0x0000000B,
    0x0000068D, 0xFFFF0000, 0x00040015, 0x0000000C, 0x00000020, 0x00000001,
    0x00040020, 0x00000289, 0x00000001, 0x0000000C, 0x0004003B, 0x00000289,
    0x00001029, 0x00000001, 0x00030016, 0x0000000D, 0x00000020, 0x00040017,
    0x00000013, 0x0000000D, 0x00000002, 0x00040017, 0x00000011, 0x0000000B,
    0x00000002, 0x0007001E, 0x00000457, 0x00000013, 0x00000013, 0x0000000B,
    0x0000000B, 0x00000011, 0x00040020, 0x000006D4, 0x00000002, 0x00000457,
    0x0004003B, 0x000006D4, 0x00001342, 0x00000002, 0x0004002B, 0x0000000C,
    0x00000A11, 0x00000002, 0x00040020, 0x00000288, 0x00000002, 0x0000000B,
    0x0004002B, 0x0000000D, 0x0000008A, 0x3F800000, 0x00040020, 0x0000028A,
    0x00000003, 0x0000000D, 0x0004003B, 0x0000028A, 0x0000146D, 0x00000003,
    0x0004002B, 0x0000000C, 0x00000A0B, 0x00000000, 0x00040020, 0x0000028B,
    0x00000002, 0x0000000D, 0x00050036, 0x00000008, 0x0000161F, 0x00000000,
    0x00000502, 0x000200F8, 0x00001A4D, 0x0004003D, 0x0000000C, 0x000026CB,
    0x00001029, 0x0004007C, 0x0000000B, 0x00003C15, 0x000026CB, 0x00050041,
    0x00000288, 0x000025B8, 0x00001342, 0x00000A11, 0x0004003D, 0x0000000B,
    0x000057AA, 0x000025B8, 0x000300F7, 0x000027DC, 0x00000000, 0x000300FB,
    0x00000A0A, 0x00003FC0, 0x000200F8, 0x00003FC0, 0x000500AA, 0x00000009,
    0x00005A9D, 0x000057AA, 0x00000A0A, 0x000300F7, 0x00006296, 0x00000000,
    0x000400FA, 0x00005A9D, 0x00002E5C, 0x000040B9, 0x000200F8, 0x000040B9,
    0x000500AA, 0x00000009, 0x00004ADA, 0x000057AA, 0x00000A0D, 0x000300F7,
    0x0000336C, 0x00000000, 0x000400FA, 0x00004ADA, 0x00004C4A, 0x000040BA,
    0x000200F8, 0x000040BA, 0x000500AA, 0x00000009, 0x00004ADB, 0x000057AA,
    0x00000A10, 0x000300F7, 0x0000336B, 0x00000000, 0x000400FA, 0x00004ADB,
    0x00005567, 0x00002957, 0x000200F8, 0x00002957, 0x000500C7, 0x0000000B,
    0x0000475F, 0x00003C15, 0x000001C1, 0x000500C4, 0x0000000B, 0x000024D1,
    0x0000475F, 0x00000A3A, 0x000500C7, 0x0000000B, 0x000050AC, 0x00003C15,
    0x0000068D, 0x000500C2, 0x0000000B, 0x0000448D, 0x000050AC, 0x00000A3A,
    0x000500C5, 0x0000000B, 0x00003FF8, 0x000024D1, 0x0000448D, 0x000200F9,
    0x000027DC, 0x000200F8, 0x00005567, 0x000500C7, 0x0000000B, 0x000050D5,
    0x00003C15, 0x00000144, 0x000500C4, 0x0000000B, 0x000024F7, 0x000050D5,
    0x00000A52, 0x000500C7, 0x0000000B, 0x00004F52, 0x00003C15, 0x00000A87,
    0x000500C4, 0x0000000B, 0x00004B54, 0x00004F52, 0x00000A22, 0x000500C5,
    0x0000000B, 0x00004295, 0x000024F7, 0x00004B54, 0x000500C7, 0x0000000B,
    0x000052DC, 0x00003C15, 0x000005A9, 0x000500C2, 0x0000000B, 0x0000509A,
    0x000052DC, 0x00000A22, 0x000500C5, 0x0000000B, 0x00005DC0, 0x00004295,
    0x0000509A, 0x000500C7, 0x0000000B, 0x00004C8F, 0x00003C15, 0x00000580,
    0x000500C2, 0x0000000B, 0x00005450, 0x00004C8F, 0x00000A52, 0x000500C5,
    0x0000000B, 0x00003FF9, 0x00005DC0, 0x00005450, 0x000200F9, 0x000027DC,
    0x000200F8, 0x0000336B, 0x000100FF, 0x000200F8, 0x00004C4A, 0x000500C7,
    0x0000000B, 0x00004A83, 0x00003C15, 0x000008A6, 0x000500C4, 0x0000000B,
    0x000024D2, 0x00004A83, 0x00000A22, 0x000500C7, 0x0000000B, 0x000050AD,
    0x00003C15, 0x000005FD, 0x000500C2, 0x0000000B, 0x0000448E, 0x000050AD,
    0x00000A22, 0x000500C5, 0x0000000B, 0x00003FFA, 0x000024D2, 0x0000448E,
    0x000200F9, 0x000027DC, 0x000200F8, 0x0000336C, 0x000100FF, 0x000200F8,
    0x00002E5C, 0x000200F9, 0x000027DC, 0x000200F8, 0x00006296, 0x000100FF,
    0x000200F8, 0x000027DC, 0x000B00F5, 0x0000000B, 0x00003D38, 0x00003C15,
    0x00002E5C, 0x00003FFA, 0x00004C4A, 0x00003FF9, 0x00005567, 0x00003FF8,
    0x00002957, 0x0004007C, 0x0000000D, 0x00005FB0, 0x00003D38, 0x00050081,
    0x0000000D, 0x000054CC, 0x00005FB0, 0x0000008A, 0x00060041, 0x0000028B,
    0x00001CA7, 0x00001342, 0x00000A0B, 0x00000A0A, 0x0004003D, 0x0000000D,
    0x000032B4, 0x00001CA7, 0x00060041, 0x0000028B, 0x00004AF6, 0x00001342,
    0x00000A0B, 0x00000A0D, 0x0004003D, 0x0000000D, 0x0000278E, 0x00004AF6,
    0x0008000C, 0x0000000D, 0x000059F5, 0x00000001, 0x0000002B, 0x000054CC,
    0x000032B4, 0x0000278E, 0x0003003E, 0x0000146D, 0x000059F5, 0x000100FD,
    0x00010038,
};
