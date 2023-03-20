#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Object,UniGLTF.glTFExtensions/ComponentVec>
struct Dictionary_2_t006B165053649921B7BE553B60B3830A64481B33;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct KeyCollection_t0535989CD3DF1DAA6485DC0E64BB0E9D1C340275;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UniGLTF.glTFAccessor>
struct List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C;
// System.Collections.Generic.List`1<UniGLTF.glTFAnimation>
struct List_1_t5B36B951DE38027E21F60891FBCE456EF7A503F0;
// System.Collections.Generic.List`1<UniGLTF.glTFBuffer>
struct List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9;
// System.Collections.Generic.List`1<UniGLTF.glTFBufferView>
struct List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B;
// System.Collections.Generic.List`1<UniGLTF.glTFCamera>
struct List_1_t73E5E022ADA9BD7DCC3D6C37B39B9961D50D6B84;
// System.Collections.Generic.List`1<UniGLTF.glTFImage>
struct List_1_t1E4BEC0586EAD8159461351DE6B7C8905A4BEE5E;
// System.Collections.Generic.List`1<UniGLTF.glTFMaterial>
struct List_1_t3364B865D349AEDC2558DE1B7920C091748AD359;
// System.Collections.Generic.List`1<UniGLTF.glTFMesh>
struct List_1_tDB15891D33EF4AA22AD0485EDE8D3E2E9CBD767A;
// System.Collections.Generic.List`1<UniGLTF.glTFNode>
struct List_1_t41E85CEEE3A833E0BD20A51FCFBAC66B9177DE76;
// System.Collections.Generic.List`1<UniGLTF.glTFSkin>
struct List_1_t30FBAEA3784BF22CAF66005A90C5B6D710BFE6ED;
// System.Collections.Generic.List`1<UniGLTF.glTFTexture>
struct List_1_tCB624118849B7340D2200E0DA37ADF779D1EE478;
// System.Collections.Generic.List`1<UniGLTF.glTFTextureSampler>
struct List_1_t84FEEE4E297FDBBE200C36284ACB65D867E3A4FF;
// System.Collections.Generic.List`1<UniGLTF.gltfScene>
struct List_1_tD1B1EA62D0111735A81EF3F418395AD8343E4EA5;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct ValueCollection_t4A89270C380EE163E732CE127842BC5F2A45AFBF;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UniGLTF.glTFExtensions/ComponentVec>[]
struct EntryU5BU5D_t1C367292E6D7BF86660E8EF2A6B52D356EF68568;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UniGLTF.UShort4[]
struct UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UniGLTF.glTFAccessor[]
struct glTFAccessorU5BU5D_t0309E95060AB9BC60336BB3A57FEFE3F87D7C3A2;
// UniGLTF.glTFBuffer[]
struct glTFBufferU5BU5D_t7A9539F712B01D64F8CD2880B7993984CF804ED3;
// UniGLTF.glTFBufferView[]
struct glTFBufferViewU5BU5D_tFCB71CC5317BCAA5DAE2912FC973061E136A837E;
// UniGLTF.MeshImporter/Float4[]
struct Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UniGLTF.IBytesBuffer
struct IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UniGLTF.glTF
struct glTF_t8B8D918B31390DDC68759935396584ADE5C459B7;
// UniGLTF.glTFAccessor
struct glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665;
// UniGLTF.glTFAssets
struct glTFAssets_t540A30A20CD053F8A82E1E7D2507DA11B17FA7B9;
// UniGLTF.glTFBuffer
struct glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D;
// UniGLTF.glTFBufferView
struct glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33;
// UniGLTF.glTFSparse
struct glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84;
// UniGLTF.glTFSparseIndices
struct glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D;
// UniGLTF.glTFSparseValues
struct glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D;
// UniGLTF.glTF_extensions
struct glTF_extensions_tF7ACCDD49FE2F289C2BB2B024C04CD21E15F933F;
// UniGLTF.gltf_extras
struct gltf_extras_tE0DC4019A7991A4FEDFF56EB9C2DE1934539ED31;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
IL2CPP_EXTERN_C String_t* _stringLiteral121FF5564E1B93612CC7A3748FAD95C919EF04E2;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral68C1CA2959BA9A4A0F4FC3A15F854C304C716D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral6CF91F6B7DE6325C51CD043CCC47AFED4D93DDFE;
IL2CPP_EXTERN_C String_t* _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
IL2CPP_EXTERN_C String_t* _stringLiteral9322B0066DF9816B83486A4449B3C467CE58EB78;
IL2CPP_EXTERN_C String_t* _stringLiteral9AEE74398EBD8002DAB30FB04C4295D7A22DA0FB;
IL2CPP_EXTERN_C String_t* _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
IL2CPP_EXTERN_C String_t* _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFCE4DFC916D250114AEC78D7EB36428B4E16A89C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45848447182428C767E2695BD256D3410C748330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisRuntimeObject_m35C3A8B4A7DFBF9A7F5651B51C2394C17AF87381_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD446E5502D357F39481995289183736CA31C9354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m2E41FBEA656C4425BFDD7CFB6CAFD6001375C36E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m53E1E2ECAF2806D04183B94285708AF265EF558A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC184857F229AFEC5095BFC1167DD2E3EB09C2567_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2A483F8FCC10F70B7D6C617287C53CB3FE83740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC399416D177BA286FB70D242F44ECF8399E9AACE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m823FF962C78BF84D4FB65A731534ADA7518B7A18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisRuntimeObject_mC0B3EC81F6254A3B8C47F5104D553FAA5C6AB65B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0B2BCE0DD15093F5A525128C0E8B2158AED563FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m0207B9AD0BAAA9CB0367BBF7319DE1A966912291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0FA090F2FBFB98F5097757F3197CA4A627E4B680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0E61396E84D0C23F0D21B9BD06031162C3FCAD16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D1930B6B255B5BD15E9770AF4DAF011BA7795AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1C367292E6D7BF86660E8EF2A6B52D356EF68568* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0535989CD3DF1DAA6485DC0E64BB0E9D1C340275* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4A89270C380EE163E732CE127842BC5F2A45AFBF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UniGLTF.glTFAccessor>
struct List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	glTFAccessorU5BU5D_t0309E95060AB9BC60336BB3A57FEFE3F87D7C3A2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UniGLTF.glTFBuffer>
struct List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	glTFBufferU5BU5D_t7A9539F712B01D64F8CD2880B7993984CF804ED3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UniGLTF.glTFBufferView>
struct List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	glTFBufferViewU5BU5D_tFCB71CC5317BCAA5DAE2912FC973061E136A837E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// UniGLTF.JsonSerializableBase
struct JsonSerializableBase_t37820AEEA660FCDD1F2D342AEA79EC9EC4183233  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// UniGLTF.glTFExtensions
struct glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F  : public RuntimeObject
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<UnityEngine.Color>
struct ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B 
{
	// T[] System.ArraySegment`1::_array
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<System.Int32>
struct ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7 
{
	// T[] System.ArraySegment`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<UnityEngine.Matrix4x4>
struct ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938 
{
	// T[] System.ArraySegment`1::_array
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<System.UInt32>
struct ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9 
{
	// T[] System.ArraySegment`1::_array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<UniGLTF.UShort4>
struct ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954 
{
	// T[] System.ArraySegment`1::_array
	UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<UnityEngine.Vector2>
struct ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986 
{
	// T[] System.ArraySegment`1::_array
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<UnityEngine.Vector3>
struct ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 
{
	// T[] System.ArraySegment`1::_array
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<UnityEngine.Vector4>
struct ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0 
{
	// T[] System.ArraySegment`1::_array
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// Unity.Collections.NativeArray`1<System.UInt16>
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt32>
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UniGLTF.UShort4
#pragma pack(push, tp, 1)
struct UShort4_t73A77CE1B49127F86E98397015C806084733CF4E 
{
	// System.UInt16 UniGLTF.UShort4::x
	uint16_t ___x_0;
	// System.UInt16 UniGLTF.UShort4::y
	uint16_t ___y_1;
	// System.UInt16 UniGLTF.UShort4::z
	uint16_t ___z_2;
	// System.UInt16 UniGLTF.UShort4::w
	uint16_t ___w_3;
};
#pragma pack(pop, tp)

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UniGLTF.glTF
struct glTF_t8B8D918B31390DDC68759935396584ADE5C459B7  : public JsonSerializableBase_t37820AEEA660FCDD1F2D342AEA79EC9EC4183233
{
	// UniGLTF.glTFAssets UniGLTF.glTF::asset
	glTFAssets_t540A30A20CD053F8A82E1E7D2507DA11B17FA7B9* ___asset_0;
	// System.Collections.Generic.List`1<UniGLTF.glTFBuffer> UniGLTF.glTF::buffers
	List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* ___buffers_1;
	// System.Collections.Generic.List`1<UniGLTF.glTFBufferView> UniGLTF.glTF::bufferViews
	List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* ___bufferViews_2;
	// System.Collections.Generic.List`1<UniGLTF.glTFAccessor> UniGLTF.glTF::accessors
	List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* ___accessors_3;
	// System.Collections.Generic.List`1<UniGLTF.glTFTexture> UniGLTF.glTF::textures
	List_1_tCB624118849B7340D2200E0DA37ADF779D1EE478* ___textures_4;
	// System.Collections.Generic.List`1<UniGLTF.glTFTextureSampler> UniGLTF.glTF::samplers
	List_1_t84FEEE4E297FDBBE200C36284ACB65D867E3A4FF* ___samplers_5;
	// System.Collections.Generic.List`1<UniGLTF.glTFImage> UniGLTF.glTF::images
	List_1_t1E4BEC0586EAD8159461351DE6B7C8905A4BEE5E* ___images_6;
	// System.Collections.Generic.List`1<UniGLTF.glTFMaterial> UniGLTF.glTF::materials
	List_1_t3364B865D349AEDC2558DE1B7920C091748AD359* ___materials_7;
	// System.Collections.Generic.List`1<UniGLTF.glTFMesh> UniGLTF.glTF::meshes
	List_1_tDB15891D33EF4AA22AD0485EDE8D3E2E9CBD767A* ___meshes_8;
	// System.Collections.Generic.List`1<UniGLTF.glTFNode> UniGLTF.glTF::nodes
	List_1_t41E85CEEE3A833E0BD20A51FCFBAC66B9177DE76* ___nodes_9;
	// System.Collections.Generic.List`1<UniGLTF.glTFSkin> UniGLTF.glTF::skins
	List_1_t30FBAEA3784BF22CAF66005A90C5B6D710BFE6ED* ___skins_10;
	// System.Int32 UniGLTF.glTF::scene
	int32_t ___scene_11;
	// System.Collections.Generic.List`1<UniGLTF.gltfScene> UniGLTF.glTF::scenes
	List_1_tD1B1EA62D0111735A81EF3F418395AD8343E4EA5* ___scenes_12;
	// System.Collections.Generic.List`1<UniGLTF.glTFAnimation> UniGLTF.glTF::animations
	List_1_t5B36B951DE38027E21F60891FBCE456EF7A503F0* ___animations_13;
	// System.Collections.Generic.List`1<UniGLTF.glTFCamera> UniGLTF.glTF::cameras
	List_1_t73E5E022ADA9BD7DCC3D6C37B39B9961D50D6B84* ___cameras_14;
	// System.Collections.Generic.List`1<System.String> UniGLTF.glTF::extensionsUsed
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___extensionsUsed_15;
	// System.Collections.Generic.List`1<System.String> UniGLTF.glTF::extensionsRequired
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___extensionsRequired_16;
	// UniGLTF.glTF_extensions UniGLTF.glTF::extensions
	glTF_extensions_tF7ACCDD49FE2F289C2BB2B024C04CD21E15F933F* ___extensions_17;
	// UniGLTF.gltf_extras UniGLTF.glTF::extras
	gltf_extras_tE0DC4019A7991A4FEDFF56EB9C2DE1934539ED31* ___extras_18;
};

// UniGLTF.glTFAccessor
struct glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665  : public JsonSerializableBase_t37820AEEA660FCDD1F2D342AEA79EC9EC4183233
{
	// System.Int32 UniGLTF.glTFAccessor::bufferView
	int32_t ___bufferView_0;
	// System.Int32 UniGLTF.glTFAccessor::byteOffset
	int32_t ___byteOffset_1;
	// System.String UniGLTF.glTFAccessor::type
	String_t* ___type_2;
	// UniGLTF.glComponentType UniGLTF.glTFAccessor::componentType
	int32_t ___componentType_3;
	// System.Int32 UniGLTF.glTFAccessor::count
	int32_t ___count_4;
	// System.Single[] UniGLTF.glTFAccessor::max
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___max_5;
	// System.Single[] UniGLTF.glTFAccessor::min
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___min_6;
	// System.Boolean UniGLTF.glTFAccessor::normalized
	bool ___normalized_7;
	// UniGLTF.glTFSparse UniGLTF.glTFAccessor::sparse
	glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* ___sparse_8;
	// System.String UniGLTF.glTFAccessor::name
	String_t* ___name_9;
	// System.Object UniGLTF.glTFAccessor::extensions
	RuntimeObject* ___extensions_10;
	// System.Object UniGLTF.glTFAccessor::extras
	RuntimeObject* ___extras_11;
};

// UniGLTF.glTFBuffer
struct glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D  : public JsonSerializableBase_t37820AEEA660FCDD1F2D342AEA79EC9EC4183233
{
	// UniGLTF.IBytesBuffer UniGLTF.glTFBuffer::Storage
	RuntimeObject* ___Storage_0;
	// System.String UniGLTF.glTFBuffer::uri
	String_t* ___uri_1;
	// System.Int32 UniGLTF.glTFBuffer::byteLength
	int32_t ___byteLength_2;
	// System.Object UniGLTF.glTFBuffer::extensions
	RuntimeObject* ___extensions_3;
	// System.Object UniGLTF.glTFBuffer::extras
	RuntimeObject* ___extras_4;
	// System.String UniGLTF.glTFBuffer::name
	String_t* ___name_5;
};

// UniGLTF.glTFBufferView
struct glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33  : public JsonSerializableBase_t37820AEEA660FCDD1F2D342AEA79EC9EC4183233
{
	// System.Int32 UniGLTF.glTFBufferView::buffer
	int32_t ___buffer_0;
	// System.Int32 UniGLTF.glTFBufferView::byteOffset
	int32_t ___byteOffset_1;
	// System.Int32 UniGLTF.glTFBufferView::byteLength
	int32_t ___byteLength_2;
	// System.Int32 UniGLTF.glTFBufferView::byteStride
	int32_t ___byteStride_3;
	// UniGLTF.glBufferTarget UniGLTF.glTFBufferView::target
	int32_t ___target_4;
	// System.Object UniGLTF.glTFBufferView::extensions
	RuntimeObject* ___extensions_5;
	// System.Object UniGLTF.glTFBufferView::extras
	RuntimeObject* ___extras_6;
	// System.String UniGLTF.glTFBufferView::name
	String_t* ___name_7;
};

// UniGLTF.glTFSparse
struct glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84  : public JsonSerializableBase_t37820AEEA660FCDD1F2D342AEA79EC9EC4183233
{
	// System.Int32 UniGLTF.glTFSparse::count
	int32_t ___count_0;
	// UniGLTF.glTFSparseIndices UniGLTF.glTFSparse::indices
	glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* ___indices_1;
	// UniGLTF.glTFSparseValues UniGLTF.glTFSparse::values
	glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* ___values_2;
	// System.Object UniGLTF.glTFSparse::extensions
	RuntimeObject* ___extensions_3;
	// System.Object UniGLTF.glTFSparse::extras
	RuntimeObject* ___extras_4;
};

// UniGLTF.glTFSparseIndices
struct glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D  : public JsonSerializableBase_t37820AEEA660FCDD1F2D342AEA79EC9EC4183233
{
	// System.Int32 UniGLTF.glTFSparseIndices::bufferView
	int32_t ___bufferView_0;
	// System.Int32 UniGLTF.glTFSparseIndices::byteOffset
	int32_t ___byteOffset_1;
	// UniGLTF.glComponentType UniGLTF.glTFSparseIndices::componentType
	int32_t ___componentType_2;
	// System.Object UniGLTF.glTFSparseIndices::extensions
	RuntimeObject* ___extensions_3;
	// System.Object UniGLTF.glTFSparseIndices::extras
	RuntimeObject* ___extras_4;
};

// UniGLTF.glTFSparseValues
struct glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D  : public JsonSerializableBase_t37820AEEA660FCDD1F2D342AEA79EC9EC4183233
{
	// System.Int32 UniGLTF.glTFSparseValues::bufferView
	int32_t ___bufferView_0;
	// System.Int32 UniGLTF.glTFSparseValues::byteOffset
	int32_t ___byteOffset_1;
	// System.Object UniGLTF.glTFSparseValues::extensions
	RuntimeObject* ___extensions_2;
	// System.Object UniGLTF.glTFSparseValues::extras
	RuntimeObject* ___extras_3;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// UniGLTF.MeshImporter/Float4
#pragma pack(push, tp, 1)
struct Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8 
{
	// System.Single UniGLTF.MeshImporter/Float4::x
	float ___x_0;
	// System.Single UniGLTF.MeshImporter/Float4::y
	float ___y_1;
	// System.Single UniGLTF.MeshImporter/Float4::z
	float ___z_2;
	// System.Single UniGLTF.MeshImporter/Float4::w
	float ___w_3;
};
#pragma pack(pop, tp)

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// UniGLTF.glTFExtensions/ComponentVec
struct ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 
{
	// UniGLTF.glComponentType UniGLTF.glTFExtensions/ComponentVec::ComponentType
	int32_t ___ComponentType_0;
	// System.Int32 UniGLTF.glTFExtensions/ComponentVec::ElementCount
	int32_t ___ElementCount_1;
};

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Mesh/MeshData
struct MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC 
{
	// System.IntPtr UnityEngine.Mesh/MeshData::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>

// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.List`1<UniGLTF.glTFAccessor>
struct List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	glTFAccessorU5BU5D_t0309E95060AB9BC60336BB3A57FEFE3F87D7C3A2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UniGLTF.glTFAccessor>

// System.Collections.Generic.List`1<UniGLTF.glTFBuffer>
struct List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	glTFBufferU5BU5D_t7A9539F712B01D64F8CD2880B7993984CF804ED3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UniGLTF.glTFBuffer>

// System.Collections.Generic.List`1<UniGLTF.glTFBufferView>
struct List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	glTFBufferViewU5BU5D_tFCB71CC5317BCAA5DAE2912FC973061E136A837E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UniGLTF.glTFBufferView>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.Expression

// System.Linq.Expressions.ExpressionVisitor

// System.Linq.Expressions.ExpressionVisitor

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityEngine._AndroidJNIHelper

// UnityEngine._AndroidJNIHelper

// UniGLTF.glTFExtensions
struct glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec> UniGLTF.glTFExtensions::ComponentTypeMap
	Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* ___ComponentTypeMap_0;
};

// UniGLTF.glTFExtensions

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.ArraySegment`1<UnityEngine.Color>
struct ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<UnityEngine.Color>

// System.ArraySegment`1<System.Int32>
struct ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Int32>

// System.ArraySegment`1<UnityEngine.Matrix4x4>
struct ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<UnityEngine.Matrix4x4>

// System.ArraySegment`1<System.UInt32>
struct ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.UInt32>

// System.ArraySegment`1<UniGLTF.UShort4>
struct ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<UniGLTF.UShort4>

// System.ArraySegment`1<UnityEngine.Vector2>
struct ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<UnityEngine.Vector2>

// System.ArraySegment`1<UnityEngine.Vector3>
struct ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<UnityEngine.Vector3>

// System.ArraySegment`1<UnityEngine.Vector4>
struct ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<UnityEngine.Vector4>

// Unity.Collections.NativeArray`1<System.UInt16>

// Unity.Collections.NativeArray`1<System.UInt16>

// Unity.Collections.NativeArray`1<System.UInt32>

// Unity.Collections.NativeArray`1<System.UInt32>

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.LambdaExpression

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// System.Linq.Expressions.ParameterExpression

// System.Linq.Expressions.ParameterExpression

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UniGLTF.UShort4

// UniGLTF.UShort4

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UniGLTF.glTF

// UniGLTF.glTF

// UniGLTF.glTFAccessor

// UniGLTF.glTFAccessor

// UniGLTF.glTFBuffer

// UniGLTF.glTFBuffer

// UniGLTF.glTFBufferView

// UniGLTF.glTFBufferView

// UniGLTF.glTFSparse

// UniGLTF.glTFSparse

// UniGLTF.glTFSparseIndices

// UniGLTF.glTFSparseIndices

// UniGLTF.glTFSparseValues

// UniGLTF.glTFSparseValues

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// UniGLTF.MeshImporter/Float4

// UniGLTF.MeshImporter/Float4

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// UniGLTF.glTFExtensions/ComponentVec

// UniGLTF.glTFExtensions/ComponentVec

// System.Linq.Expressions.Expression`1<System.Object>

// System.Linq.Expressions.Expression`1<System.Object>

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Mesh/MeshData

// UnityEngine.Mesh/MeshData

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.ArgumentException

// System.ArgumentException

// System.NotImplementedException

// System.NotImplementedException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// UniGLTF.UShort4[]
struct UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832  : public RuntimeArray
{
	ALIGN_FIELD (8) UShort4_t73A77CE1B49127F86E98397015C806084733CF4E m_Items[1];

	inline UShort4_t73A77CE1B49127F86E98397015C806084733CF4E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UShort4_t73A77CE1B49127F86E98397015C806084733CF4E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UShort4_t73A77CE1B49127F86E98397015C806084733CF4E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UShort4_t73A77CE1B49127F86E98397015C806084733CF4E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UShort4_t73A77CE1B49127F86E98397015C806084733CF4E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UShort4_t73A77CE1B49127F86E98397015C806084733CF4E value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UniGLTF.MeshImporter/Float4[]
struct Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE  : public RuntimeArray
{
	ALIGN_FIELD (8) Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8 m_Items[1];

	inline Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8 value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<UnityEngine.Color>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEFA7495BC311061070C4F7A74B30B17D1409A52A_gshared_inline (ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<UnityEngine.Color>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m885992ECC0C764320BAB80A329DE016F96E74854_gshared (ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<UnityEngine.Matrix4x4>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m068C5A0C29ECCA9C2BB518A22E24A2A2449EB7E6_gshared_inline (ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<UnityEngine.Matrix4x4>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m117FAD320ED302BB7815D00C47828D6FFBF3CABB_gshared (ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.UInt32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m133EAD8C7E80DED1D773E5C6256837036A70D729_gshared_inline (ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.UInt32>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mF93F86FB28E357D23F093A8DB0F4D28535BC4D6D_gshared (ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<UniGLTF.UShort4>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m5B51AD3E11224CCA5E3B9C3363454A1782F1A17C_gshared_inline (ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<UniGLTF.UShort4>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m7260B1450365304442F7F76F9C84466545E3757C_gshared (ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954* __this, UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mD88C16E4667225330739C8849FBC96C53DB6CD93_gshared_inline (ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<UnityEngine.Vector2>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m8F85D89552616975F083BD87C23D410F811F0F1F_gshared (ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mF3CA0A5D2BAB604E572BA9D970DB4484BA4EACFC_gshared_inline (ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<UnityEngine.Vector3>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mD38785551D211404360F7CF881155B329EA711FB_gshared (ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<UnityEngine.Vector4>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m14F4C3244AFF7332D7FD7AE0F83CF662A047ECEA_gshared_inline (ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<UnityEngine.Vector4>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mD8341204A3E42E755AA5BD0ACD3B8D747D4C0082_gshared (ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mD360DCD6B4E6B96E20BB2D11AB63329F1F432414_gshared_inline (ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Int32>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mDBD90ADEA8AB3EAE661D2029D5F0F6B24AD890D0_gshared (ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UniGLTF.glTFExtensions/ComponentVec>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5F9548C2BC941B295970AFAF2173883C85555475_gshared (Dictionary_2_t006B165053649921B7BE553B60B3830A64481B33* __this, RuntimeObject* ___0_key, ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75* ___1_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector2>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___0_stream, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector3>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___0_stream, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UniGLTF.glTFAccessor>::get_Item(System.Int32)
inline glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7 (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* (*) (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<UniGLTF.glTFBufferView>::get_Item(System.Int32)
inline glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464 (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Collections.Generic.IEnumerable`1<System.Int32> UniGLTF.glTF::_GetIndices(UniGLTF.glTFBufferView,System.Int32,System.Int32,UniGLTF.glComponentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* glTF__GetIndices_m4F7FD8F4C729BE80C7CFB1AFFB8B9C455855BC03 (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___0_view, int32_t ___1_count, int32_t ___2_byteOffset, int32_t ___3_componentType, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UniGLTF.glTFBuffer>::get_Item(System.Int32)
inline glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17 (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* (*) (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.ArraySegment`1<System.Byte> UniGLTF.glTFBuffer::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788 (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___0_array, ___1_offset, ___2_count, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
inline void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared)(__this, ___0_array, method);
}
// System.Int32 System.ArraySegment`1<UnityEngine.Color>::get_Count()
inline int32_t ArraySegment_1_get_Count_mEFA7495BC311061070C4F7A74B30B17D1409A52A_inline (ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B*, const RuntimeMethod*))ArraySegment_1_get_Count_mEFA7495BC311061070C4F7A74B30B17D1409A52A_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UniGLTF.glTFAccessor>::get_Count()
inline int32_t List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_inline (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UniGLTF.glTFAccessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void glTFAccessor__ctor_m052DC59180913C8D27BE2B5977E879E30739556B (glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UniGLTF.glTFAccessor>::Add(T)
inline void List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_inline (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.ArraySegment`1<UnityEngine.Color>::.ctor(T[])
inline void ArraySegment_1__ctor_m885992ECC0C764320BAB80A329DE016F96E74854 (ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B*, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*, const RuntimeMethod*))ArraySegment_1__ctor_m885992ECC0C764320BAB80A329DE016F96E74854_gshared)(__this, ___0_array, method);
}
// System.Int32 System.ArraySegment`1<UnityEngine.Matrix4x4>::get_Count()
inline int32_t ArraySegment_1_get_Count_m068C5A0C29ECCA9C2BB518A22E24A2A2449EB7E6_inline (ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938*, const RuntimeMethod*))ArraySegment_1_get_Count_m068C5A0C29ECCA9C2BB518A22E24A2A2449EB7E6_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<UnityEngine.Matrix4x4>::.ctor(T[])
inline void ArraySegment_1__ctor_m117FAD320ED302BB7815D00C47828D6FFBF3CABB (ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938*, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, const RuntimeMethod*))ArraySegment_1__ctor_m117FAD320ED302BB7815D00C47828D6FFBF3CABB_gshared)(__this, ___0_array, method);
}
// System.Int32 System.ArraySegment`1<System.UInt32>::get_Count()
inline int32_t ArraySegment_1_get_Count_m133EAD8C7E80DED1D773E5C6256837036A70D729_inline (ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9*, const RuntimeMethod*))ArraySegment_1_get_Count_m133EAD8C7E80DED1D773E5C6256837036A70D729_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<System.UInt32>::.ctor(T[])
inline void ArraySegment_1__ctor_mF93F86FB28E357D23F093A8DB0F4D28535BC4D6D (ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))ArraySegment_1__ctor_mF93F86FB28E357D23F093A8DB0F4D28535BC4D6D_gshared)(__this, ___0_array, method);
}
// System.Int32 System.ArraySegment`1<UniGLTF.UShort4>::get_Count()
inline int32_t ArraySegment_1_get_Count_m5B51AD3E11224CCA5E3B9C3363454A1782F1A17C_inline (ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954*, const RuntimeMethod*))ArraySegment_1_get_Count_m5B51AD3E11224CCA5E3B9C3363454A1782F1A17C_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<UniGLTF.UShort4>::.ctor(T[])
inline void ArraySegment_1__ctor_m7260B1450365304442F7F76F9C84466545E3757C (ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954* __this, UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954*, UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832*, const RuntimeMethod*))ArraySegment_1__ctor_m7260B1450365304442F7F76F9C84466545E3757C_gshared)(__this, ___0_array, method);
}
// System.Int32 System.ArraySegment`1<UnityEngine.Vector2>::get_Count()
inline int32_t ArraySegment_1_get_Count_mD88C16E4667225330739C8849FBC96C53DB6CD93_inline (ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986*, const RuntimeMethod*))ArraySegment_1_get_Count_mD88C16E4667225330739C8849FBC96C53DB6CD93_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<UnityEngine.Vector2>::.ctor(T[])
inline void ArraySegment_1__ctor_m8F85D89552616975F083BD87C23D410F811F0F1F (ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986*, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, const RuntimeMethod*))ArraySegment_1__ctor_m8F85D89552616975F083BD87C23D410F811F0F1F_gshared)(__this, ___0_array, method);
}
// System.Int32 System.ArraySegment`1<UnityEngine.Vector3>::get_Count()
inline int32_t ArraySegment_1_get_Count_mF3CA0A5D2BAB604E572BA9D970DB4484BA4EACFC_inline (ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5*, const RuntimeMethod*))ArraySegment_1_get_Count_mF3CA0A5D2BAB604E572BA9D970DB4484BA4EACFC_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<UnityEngine.Vector3>::.ctor(T[])
inline void ArraySegment_1__ctor_mD38785551D211404360F7CF881155B329EA711FB (ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, const RuntimeMethod*))ArraySegment_1__ctor_mD38785551D211404360F7CF881155B329EA711FB_gshared)(__this, ___0_array, method);
}
// System.Int32 System.ArraySegment`1<UnityEngine.Vector4>::get_Count()
inline int32_t ArraySegment_1_get_Count_m14F4C3244AFF7332D7FD7AE0F83CF662A047ECEA_inline (ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0*, const RuntimeMethod*))ArraySegment_1_get_Count_m14F4C3244AFF7332D7FD7AE0F83CF662A047ECEA_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<UnityEngine.Vector4>::.ctor(T[])
inline void ArraySegment_1__ctor_mD8341204A3E42E755AA5BD0ACD3B8D747D4C0082 (ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, const RuntimeMethod*))ArraySegment_1__ctor_mD8341204A3E42E755AA5BD0ACD3B8D747D4C0082_gshared)(__this, ___0_array, method);
}
// System.Int32 System.Collections.Generic.List`1<UniGLTF.glTFBufferView>::get_Count()
inline int32_t List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_inline (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UniGLTF.glTFBufferView>::Add(T)
inline void List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_inline (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* __this, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.ArraySegment`1<System.Int32>::get_Count()
inline int32_t ArraySegment_1_get_Count_mD360DCD6B4E6B96E20BB2D11AB63329F1F432414_inline (ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7*, const RuntimeMethod*))ArraySegment_1_get_Count_mD360DCD6B4E6B96E20BB2D11AB63329F1F432414_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<System.Int32>::.ctor(T[])
inline void ArraySegment_1__ctor_mDBD90ADEA8AB3EAE661D2029D5F0F6B24AD890D0 (ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))ArraySegment_1__ctor_mDBD90ADEA8AB3EAE661D2029D5F0F6B24AD890D0_gshared)(__this, ___0_array, method);
}
// System.Void UniGLTF.glTFSparse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void glTFSparse__ctor_m116CF748AE3FB49F5BF5775BB77B9EC7F38A4F49 (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* __this, const RuntimeMethod* method) ;
// System.Void UniGLTF.glTFSparseIndices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void glTFSparseIndices__ctor_m2D946330E96A50FD2543528942CA846633842031 (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* __this, const RuntimeMethod* method) ;
// System.Void UniGLTF.glTFSparseValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void glTFSparseValues__ctor_m895EDC26492871C6C9FAAEACFD10052ABC324834 (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29 (Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* __this, Type_t* ___0_key, ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB*, Type_t*, ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75*, const RuntimeMethod*))Dictionary_2_TryGetValue_m5F9548C2BC941B295970AFAF2173883C85555475_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Mesh/MeshData::GetIndexDataSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MeshData_GetIndexDataSize_mC7D4DB52A49B547CC336CA29021E59DD5EDAA00C (intptr_t ___0_self, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Mesh/MeshData::GetIndexDataPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MeshData_GetIndexDataPtr_mC3662C797B24BDD967595C63AA6AB9DBB8B9F02A (intptr_t ___0_self, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt16>()
inline NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, const RuntimeMethod*))MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt32>()
inline NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, const RuntimeMethod*))MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mesh/MeshData::get_vertexBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Mesh/MeshData::GetVertexDataSize(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MeshData_GetVertexDataSize_mC9EEED84721B54917210824BF204CCF4C1CE774D (intptr_t ___0_self, int32_t ___1_stream, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Mesh/MeshData::GetVertexDataPtr(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MeshData_GetVertexDataPtr_mFEE366C279531E7664A0D373C29BFA561C3EC2BE (intptr_t ___0_self, int32_t ___1_stream, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector2>(System.Int32)
inline NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___0_stream, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, int32_t, const RuntimeMethod*))MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_gshared)(__this, ___0_stream, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector3>(System.Int32)
inline NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___0_stream, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, int32_t, const RuntimeMethod*))MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_gshared)(__this, ___0_stream, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	RuntimeObject* V_24 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(RuntimeObject*));
		RuntimeObject* L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		RuntimeObject* L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int8_t V_24 = 0x0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int8_t));
		int8_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int8_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		float L_108 = V_3;
		return L_108;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// T[] UniGLTF.glTF::GetArrayFromAccessor<UnityEngine.Color>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* glTF_GetArrayFromAccessor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m422EE034AB0617DF74DCB602733761EEE5CACDAB_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_accessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* V_0 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_1 = NULL;
	glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* V_2 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* G_B5_0 = NULL;
	{
		// var vertexAccessor = accessors[accessorIndex];
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_0 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)__this->___accessors_3;
		int32_t L_1 = ___0_accessorIndex;
		NullCheck(L_0);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2;
		L_2 = List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7(L_0, L_1, List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		V_0 = L_2;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___count_4;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)0);
		return L_5;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? GetAttrib<T>(vertexAccessor, bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)L_6->___bufferView_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___count_4;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_10 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_9);
		G_B5_0 = L_10;
		goto IL_004b;
	}

IL_0033:
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = V_0;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___bufferView_0;
		NullCheck(L_12);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_15;
		L_15 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_12, L_14, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_16;
		L_16 = ((  ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_11, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = L_16;
	}

IL_004b:
	{
		V_1 = G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = V_0;
		NullCheck(L_17);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_18 = (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84*)L_17->___sparse_8;
		V_2 = L_18;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)L_20->___count_0;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = _GetIndices(bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_22 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_23 = V_2;
		NullCheck(L_23);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_24 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_23->___indices_1;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)L_24->___bufferView_0;
		NullCheck(L_22);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_26;
		L_26 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_22, L_25, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)L_27->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_29 = V_2;
		NullCheck(L_29);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_30 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_29->___indices_1;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)L_30->___byteOffset_1;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_32 = V_2;
		NullCheck(L_32);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_33 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_32->___indices_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)L_33->___componentType_2;
		RuntimeObject* L_35;
		L_35 = glTF__GetIndices_m4F7FD8F4C729BE80C7CFB1AFFB8B9C455855BC03(__this, L_26, L_28, L_31, L_34, NULL);
		// var values = GetAttrib<T>(sparse.count, sparse.values.byteOffset, bufferViews[sparse.values.bufferView]);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (int32_t)L_36->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_38 = V_2;
		NullCheck(L_38);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_39 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_38->___values_2;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)L_39->___byteOffset_1;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_41 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_42 = V_2;
		NullCheck(L_42);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_43 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_42->___values_2;
		NullCheck(L_43);
		int32_t L_44 = (int32_t)L_43->___bufferView_0;
		NullCheck(L_41);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_45;
		L_45 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_41, L_44, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_46;
		L_46 = ((  ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_37, L_40, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_46;
		// var it = indices.GetEnumerator();
		NullCheck(L_35);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_35);
		V_4 = L_47;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = 0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_48 = V_4;
		NullCheck((RuntimeObject*)L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		// result[it.Current] = values[i];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_50 = V_1;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_51);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_53 = V_3;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_56);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_58 = V_5;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = (int32_t)L_59->___count_0;
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_61 = V_1;
		return L_61;
	}
}
// T[] UniGLTF.glTF::GetArrayFromAccessor<UnityEngine.Matrix4x4>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* glTF_GetArrayFromAccessor_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m77B651148892D1AFB188EC0F8DE0F5F86342E40B_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_accessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* V_0 = NULL;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_1 = NULL;
	glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* V_2 = NULL;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* G_B5_0 = NULL;
	{
		// var vertexAccessor = accessors[accessorIndex];
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_0 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)__this->___accessors_3;
		int32_t L_1 = ___0_accessorIndex;
		NullCheck(L_0);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2;
		L_2 = List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7(L_0, L_1, List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		V_0 = L_2;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___count_4;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_5 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)0);
		return L_5;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? GetAttrib<T>(vertexAccessor, bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)L_6->___bufferView_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___count_4;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_10 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_9);
		G_B5_0 = L_10;
		goto IL_004b;
	}

IL_0033:
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = V_0;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___bufferView_0;
		NullCheck(L_12);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_15;
		L_15 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_12, L_14, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_16;
		L_16 = ((  Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_11, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = L_16;
	}

IL_004b:
	{
		V_1 = G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = V_0;
		NullCheck(L_17);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_18 = (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84*)L_17->___sparse_8;
		V_2 = L_18;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)L_20->___count_0;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = _GetIndices(bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_22 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_23 = V_2;
		NullCheck(L_23);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_24 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_23->___indices_1;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)L_24->___bufferView_0;
		NullCheck(L_22);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_26;
		L_26 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_22, L_25, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)L_27->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_29 = V_2;
		NullCheck(L_29);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_30 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_29->___indices_1;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)L_30->___byteOffset_1;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_32 = V_2;
		NullCheck(L_32);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_33 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_32->___indices_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)L_33->___componentType_2;
		RuntimeObject* L_35;
		L_35 = glTF__GetIndices_m4F7FD8F4C729BE80C7CFB1AFFB8B9C455855BC03(__this, L_26, L_28, L_31, L_34, NULL);
		// var values = GetAttrib<T>(sparse.count, sparse.values.byteOffset, bufferViews[sparse.values.bufferView]);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (int32_t)L_36->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_38 = V_2;
		NullCheck(L_38);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_39 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_38->___values_2;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)L_39->___byteOffset_1;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_41 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_42 = V_2;
		NullCheck(L_42);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_43 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_42->___values_2;
		NullCheck(L_43);
		int32_t L_44 = (int32_t)L_43->___bufferView_0;
		NullCheck(L_41);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_45;
		L_45 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_41, L_44, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_46;
		L_46 = ((  Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_37, L_40, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_46;
		// var it = indices.GetEnumerator();
		NullCheck(L_35);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_35);
		V_4 = L_47;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = 0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_48 = V_4;
		NullCheck((RuntimeObject*)L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		// result[it.Current] = values[i];
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_50 = V_1;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_51);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_53 = V_3;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_56);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_58 = V_5;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = (int32_t)L_59->___count_0;
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_61 = V_1;
		return L_61;
	}
}
// T[] UniGLTF.glTF::GetArrayFromAccessor<System.Single>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* glTF_GetArrayFromAccessor_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5F2F4C3885404BC0E957D81141E721E9BF34989F_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_accessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B5_0 = NULL;
	{
		// var vertexAccessor = accessors[accessorIndex];
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_0 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)__this->___accessors_3;
		int32_t L_1 = ___0_accessorIndex;
		NullCheck(L_0);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2;
		L_2 = List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7(L_0, L_1, List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		V_0 = L_2;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___count_4;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)0);
		return L_5;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? GetAttrib<T>(vertexAccessor, bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)L_6->___bufferView_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___count_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_9);
		G_B5_0 = L_10;
		goto IL_004b;
	}

IL_0033:
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = V_0;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___bufferView_0;
		NullCheck(L_12);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_15;
		L_15 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_12, L_14, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16;
		L_16 = ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_11, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = L_16;
	}

IL_004b:
	{
		V_1 = G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = V_0;
		NullCheck(L_17);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_18 = (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84*)L_17->___sparse_8;
		V_2 = L_18;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)L_20->___count_0;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = _GetIndices(bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_22 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_23 = V_2;
		NullCheck(L_23);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_24 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_23->___indices_1;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)L_24->___bufferView_0;
		NullCheck(L_22);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_26;
		L_26 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_22, L_25, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)L_27->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_29 = V_2;
		NullCheck(L_29);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_30 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_29->___indices_1;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)L_30->___byteOffset_1;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_32 = V_2;
		NullCheck(L_32);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_33 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_32->___indices_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)L_33->___componentType_2;
		RuntimeObject* L_35;
		L_35 = glTF__GetIndices_m4F7FD8F4C729BE80C7CFB1AFFB8B9C455855BC03(__this, L_26, L_28, L_31, L_34, NULL);
		// var values = GetAttrib<T>(sparse.count, sparse.values.byteOffset, bufferViews[sparse.values.bufferView]);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (int32_t)L_36->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_38 = V_2;
		NullCheck(L_38);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_39 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_38->___values_2;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)L_39->___byteOffset_1;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_41 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_42 = V_2;
		NullCheck(L_42);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_43 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_42->___values_2;
		NullCheck(L_43);
		int32_t L_44 = (int32_t)L_43->___bufferView_0;
		NullCheck(L_41);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_45;
		L_45 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_41, L_44, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_37, L_40, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_46;
		// var it = indices.GetEnumerator();
		NullCheck(L_35);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_35);
		V_4 = L_47;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = 0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_48 = V_4;
		NullCheck((RuntimeObject*)L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		// result[it.Current] = values[i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = V_1;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_51);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = V_3;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		float L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (float)L_56);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_58 = V_5;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = (int32_t)L_59->___count_0;
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = V_1;
		return L_61;
	}
}
// T[] UniGLTF.glTF::GetArrayFromAccessor<UniGLTF.UShort4>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* glTF_GetArrayFromAccessor_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m272A6334C67541059034F07781AC2E15E39245A2_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_accessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* V_0 = NULL;
	UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* V_1 = NULL;
	glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* V_2 = NULL;
	UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* G_B5_0 = NULL;
	{
		// var vertexAccessor = accessors[accessorIndex];
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_0 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)__this->___accessors_3;
		int32_t L_1 = ___0_accessorIndex;
		NullCheck(L_0);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2;
		L_2 = List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7(L_0, L_1, List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		V_0 = L_2;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___count_4;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_5 = (UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832*)(UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)0);
		return L_5;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? GetAttrib<T>(vertexAccessor, bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)L_6->___bufferView_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___count_4;
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_10 = (UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832*)(UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_9);
		G_B5_0 = L_10;
		goto IL_004b;
	}

IL_0033:
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = V_0;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___bufferView_0;
		NullCheck(L_12);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_15;
		L_15 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_12, L_14, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_16;
		L_16 = ((  UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_11, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = L_16;
	}

IL_004b:
	{
		V_1 = G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = V_0;
		NullCheck(L_17);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_18 = (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84*)L_17->___sparse_8;
		V_2 = L_18;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)L_20->___count_0;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = _GetIndices(bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_22 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_23 = V_2;
		NullCheck(L_23);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_24 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_23->___indices_1;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)L_24->___bufferView_0;
		NullCheck(L_22);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_26;
		L_26 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_22, L_25, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)L_27->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_29 = V_2;
		NullCheck(L_29);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_30 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_29->___indices_1;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)L_30->___byteOffset_1;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_32 = V_2;
		NullCheck(L_32);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_33 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_32->___indices_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)L_33->___componentType_2;
		RuntimeObject* L_35;
		L_35 = glTF__GetIndices_m4F7FD8F4C729BE80C7CFB1AFFB8B9C455855BC03(__this, L_26, L_28, L_31, L_34, NULL);
		// var values = GetAttrib<T>(sparse.count, sparse.values.byteOffset, bufferViews[sparse.values.bufferView]);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (int32_t)L_36->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_38 = V_2;
		NullCheck(L_38);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_39 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_38->___values_2;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)L_39->___byteOffset_1;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_41 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_42 = V_2;
		NullCheck(L_42);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_43 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_42->___values_2;
		NullCheck(L_43);
		int32_t L_44 = (int32_t)L_43->___bufferView_0;
		NullCheck(L_41);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_45;
		L_45 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_41, L_44, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_46;
		L_46 = ((  UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_37, L_40, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_46;
		// var it = indices.GetEnumerator();
		NullCheck(L_35);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_35);
		V_4 = L_47;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = 0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_48 = V_4;
		NullCheck((RuntimeObject*)L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		// result[it.Current] = values[i];
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_50 = V_1;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_51);
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_53 = V_3;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		UShort4_t73A77CE1B49127F86E98397015C806084733CF4E L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (UShort4_t73A77CE1B49127F86E98397015C806084733CF4E)L_56);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_58 = V_5;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = (int32_t)L_59->___count_0;
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_61 = V_1;
		return L_61;
	}
}
// T[] UniGLTF.glTF::GetArrayFromAccessor<UnityEngine.Vector2>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* glTF_GetArrayFromAccessor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m51322477A9304AEBA7240B494934D064754F78B6_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_accessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* V_0 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_1 = NULL;
	glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* V_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B5_0 = NULL;
	{
		// var vertexAccessor = accessors[accessorIndex];
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_0 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)__this->___accessors_3;
		int32_t L_1 = ___0_accessorIndex;
		NullCheck(L_0);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2;
		L_2 = List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7(L_0, L_1, List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		V_0 = L_2;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___count_4;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)0);
		return L_5;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? GetAttrib<T>(vertexAccessor, bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)L_6->___bufferView_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___count_4;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_9);
		G_B5_0 = L_10;
		goto IL_004b;
	}

IL_0033:
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = V_0;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___bufferView_0;
		NullCheck(L_12);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_15;
		L_15 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_12, L_14, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16;
		L_16 = ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_11, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = L_16;
	}

IL_004b:
	{
		V_1 = G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = V_0;
		NullCheck(L_17);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_18 = (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84*)L_17->___sparse_8;
		V_2 = L_18;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)L_20->___count_0;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = _GetIndices(bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_22 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_23 = V_2;
		NullCheck(L_23);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_24 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_23->___indices_1;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)L_24->___bufferView_0;
		NullCheck(L_22);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_26;
		L_26 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_22, L_25, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)L_27->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_29 = V_2;
		NullCheck(L_29);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_30 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_29->___indices_1;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)L_30->___byteOffset_1;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_32 = V_2;
		NullCheck(L_32);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_33 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_32->___indices_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)L_33->___componentType_2;
		RuntimeObject* L_35;
		L_35 = glTF__GetIndices_m4F7FD8F4C729BE80C7CFB1AFFB8B9C455855BC03(__this, L_26, L_28, L_31, L_34, NULL);
		// var values = GetAttrib<T>(sparse.count, sparse.values.byteOffset, bufferViews[sparse.values.bufferView]);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (int32_t)L_36->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_38 = V_2;
		NullCheck(L_38);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_39 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_38->___values_2;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)L_39->___byteOffset_1;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_41 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_42 = V_2;
		NullCheck(L_42);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_43 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_42->___values_2;
		NullCheck(L_43);
		int32_t L_44 = (int32_t)L_43->___bufferView_0;
		NullCheck(L_41);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_45;
		L_45 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_41, L_44, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_46;
		L_46 = ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_37, L_40, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_46;
		// var it = indices.GetEnumerator();
		NullCheck(L_35);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_35);
		V_4 = L_47;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = 0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_48 = V_4;
		NullCheck((RuntimeObject*)L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		// result[it.Current] = values[i];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_50 = V_1;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_51);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_53 = V_3;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_56);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_58 = V_5;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = (int32_t)L_59->___count_0;
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_61 = V_1;
		return L_61;
	}
}
// T[] UniGLTF.glTF::GetArrayFromAccessor<UnityEngine.Vector3>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* glTF_GetArrayFromAccessor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2586F3C68AE26E5FE800B08BEAE3BAF23F2C695_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_accessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* V_2 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B5_0 = NULL;
	{
		// var vertexAccessor = accessors[accessorIndex];
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_0 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)__this->___accessors_3;
		int32_t L_1 = ___0_accessorIndex;
		NullCheck(L_0);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2;
		L_2 = List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7(L_0, L_1, List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		V_0 = L_2;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___count_4;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)0);
		return L_5;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? GetAttrib<T>(vertexAccessor, bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)L_6->___bufferView_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___count_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_9);
		G_B5_0 = L_10;
		goto IL_004b;
	}

IL_0033:
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = V_0;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___bufferView_0;
		NullCheck(L_12);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_15;
		L_15 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_12, L_14, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16;
		L_16 = ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_11, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = L_16;
	}

IL_004b:
	{
		V_1 = G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = V_0;
		NullCheck(L_17);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_18 = (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84*)L_17->___sparse_8;
		V_2 = L_18;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)L_20->___count_0;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = _GetIndices(bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_22 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_23 = V_2;
		NullCheck(L_23);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_24 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_23->___indices_1;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)L_24->___bufferView_0;
		NullCheck(L_22);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_26;
		L_26 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_22, L_25, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)L_27->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_29 = V_2;
		NullCheck(L_29);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_30 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_29->___indices_1;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)L_30->___byteOffset_1;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_32 = V_2;
		NullCheck(L_32);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_33 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_32->___indices_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)L_33->___componentType_2;
		RuntimeObject* L_35;
		L_35 = glTF__GetIndices_m4F7FD8F4C729BE80C7CFB1AFFB8B9C455855BC03(__this, L_26, L_28, L_31, L_34, NULL);
		// var values = GetAttrib<T>(sparse.count, sparse.values.byteOffset, bufferViews[sparse.values.bufferView]);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (int32_t)L_36->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_38 = V_2;
		NullCheck(L_38);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_39 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_38->___values_2;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)L_39->___byteOffset_1;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_41 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_42 = V_2;
		NullCheck(L_42);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_43 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_42->___values_2;
		NullCheck(L_43);
		int32_t L_44 = (int32_t)L_43->___bufferView_0;
		NullCheck(L_41);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_45;
		L_45 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_41, L_44, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46;
		L_46 = ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_37, L_40, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_46;
		// var it = indices.GetEnumerator();
		NullCheck(L_35);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_35);
		V_4 = L_47;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = 0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_48 = V_4;
		NullCheck((RuntimeObject*)L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		// result[it.Current] = values[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50 = V_1;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_51);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = V_3;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_56);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_58 = V_5;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = (int32_t)L_59->___count_0;
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_61 = V_1;
		return L_61;
	}
}
// T[] UniGLTF.glTF::GetArrayFromAccessor<UnityEngine.Vector4>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* glTF_GetArrayFromAccessor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB1027D157C03458FDE8E635B8C9E0EED3556A3EF_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_accessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* V_0 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_1 = NULL;
	glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* V_2 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* G_B5_0 = NULL;
	{
		// var vertexAccessor = accessors[accessorIndex];
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_0 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)__this->___accessors_3;
		int32_t L_1 = ___0_accessorIndex;
		NullCheck(L_0);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2;
		L_2 = List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7(L_0, L_1, List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		V_0 = L_2;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___count_4;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)0);
		return L_5;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? GetAttrib<T>(vertexAccessor, bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)L_6->___bufferView_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___count_4;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_9);
		G_B5_0 = L_10;
		goto IL_004b;
	}

IL_0033:
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = V_0;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___bufferView_0;
		NullCheck(L_12);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_15;
		L_15 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_12, L_14, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16;
		L_16 = ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_11, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = L_16;
	}

IL_004b:
	{
		V_1 = G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = V_0;
		NullCheck(L_17);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_18 = (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84*)L_17->___sparse_8;
		V_2 = L_18;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)L_20->___count_0;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = _GetIndices(bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_22 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_23 = V_2;
		NullCheck(L_23);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_24 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_23->___indices_1;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)L_24->___bufferView_0;
		NullCheck(L_22);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_26;
		L_26 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_22, L_25, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)L_27->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_29 = V_2;
		NullCheck(L_29);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_30 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_29->___indices_1;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)L_30->___byteOffset_1;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_32 = V_2;
		NullCheck(L_32);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_33 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_32->___indices_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)L_33->___componentType_2;
		RuntimeObject* L_35;
		L_35 = glTF__GetIndices_m4F7FD8F4C729BE80C7CFB1AFFB8B9C455855BC03(__this, L_26, L_28, L_31, L_34, NULL);
		// var values = GetAttrib<T>(sparse.count, sparse.values.byteOffset, bufferViews[sparse.values.bufferView]);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (int32_t)L_36->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_38 = V_2;
		NullCheck(L_38);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_39 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_38->___values_2;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)L_39->___byteOffset_1;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_41 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_42 = V_2;
		NullCheck(L_42);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_43 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_42->___values_2;
		NullCheck(L_43);
		int32_t L_44 = (int32_t)L_43->___bufferView_0;
		NullCheck(L_41);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_45;
		L_45 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_41, L_44, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_46;
		L_46 = ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_37, L_40, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_46;
		// var it = indices.GetEnumerator();
		NullCheck(L_35);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_35);
		V_4 = L_47;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = 0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_48 = V_4;
		NullCheck((RuntimeObject*)L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		// result[it.Current] = values[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_50 = V_1;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_51);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_53 = V_3;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_56);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_58 = V_5;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = (int32_t)L_59->___count_0;
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_61 = V_1;
		return L_61;
	}
}
// T[] UniGLTF.glTF::GetArrayFromAccessor<UniGLTF.MeshImporter/Float4>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* glTF_GetArrayFromAccessor_TisFloat4_t9A152F775751266CB0F7C170C0033AE23E6463D8_m681BBCFB672FE41B70641C570536BB53F3121336_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_accessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* V_0 = NULL;
	Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* V_1 = NULL;
	glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* V_2 = NULL;
	Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* G_B5_0 = NULL;
	{
		// var vertexAccessor = accessors[accessorIndex];
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_0 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)__this->___accessors_3;
		int32_t L_1 = ___0_accessorIndex;
		NullCheck(L_0);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2;
		L_2 = List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7(L_0, L_1, List_1_get_Item_m0084EFAB5B6BADDD13AEFED5A27D261DA0DAC5E7_RuntimeMethod_var);
		V_0 = L_2;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___count_4;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_5 = (Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE*)(Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)0);
		return L_5;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? GetAttrib<T>(vertexAccessor, bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)L_6->___bufferView_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___count_4;
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_10 = (Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE*)(Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_9);
		G_B5_0 = L_10;
		goto IL_004b;
	}

IL_0033:
	{
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = V_0;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___bufferView_0;
		NullCheck(L_12);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_15;
		L_15 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_12, L_14, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_16;
		L_16 = ((  Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_11, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = L_16;
	}

IL_004b:
	{
		V_1 = G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = V_0;
		NullCheck(L_17);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_18 = (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84*)L_17->___sparse_8;
		V_2 = L_18;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)L_20->___count_0;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = _GetIndices(bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_22 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_23 = V_2;
		NullCheck(L_23);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_24 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_23->___indices_1;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)L_24->___bufferView_0;
		NullCheck(L_22);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_26;
		L_26 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_22, L_25, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)L_27->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_29 = V_2;
		NullCheck(L_29);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_30 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_29->___indices_1;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)L_30->___byteOffset_1;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_32 = V_2;
		NullCheck(L_32);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_33 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)L_32->___indices_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)L_33->___componentType_2;
		RuntimeObject* L_35;
		L_35 = glTF__GetIndices_m4F7FD8F4C729BE80C7CFB1AFFB8B9C455855BC03(__this, L_26, L_28, L_31, L_34, NULL);
		// var values = GetAttrib<T>(sparse.count, sparse.values.byteOffset, bufferViews[sparse.values.bufferView]);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (int32_t)L_36->___count_0;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_38 = V_2;
		NullCheck(L_38);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_39 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_38->___values_2;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)L_39->___byteOffset_1;
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_41 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)__this->___bufferViews_2;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_42 = V_2;
		NullCheck(L_42);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_43 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)L_42->___values_2;
		NullCheck(L_43);
		int32_t L_44 = (int32_t)L_43->___bufferView_0;
		NullCheck(L_41);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_45;
		L_45 = List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464(L_41, L_44, List_1_get_Item_mE061FB12C3B344585C501DA9C2363D75FA570464_RuntimeMethod_var);
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_46;
		L_46 = ((  Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_37, L_40, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_46;
		// var it = indices.GetEnumerator();
		NullCheck(L_35);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_35);
		V_4 = L_47;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = 0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_48 = V_4;
		NullCheck((RuntimeObject*)L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		// result[it.Current] = values[i];
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_50 = V_1;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_51);
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_53 = V_3;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8 L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Float4_t9A152F775751266CB0F7C170C0033AE23E6463D8)L_56);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_58 = V_5;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = (int32_t)L_59->___count_0;
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_61 = V_1;
		return L_61;
	}
}
// T[] UniGLTF.glTF::GetAttrib<System.Byte>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* glTF_GetAttrib_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m690E15C8F88886C4BC5E056E93DB0A469E3F2CD9_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Color>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* glTF_GetAttrib_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6592DFF21EA2B50CF186A7B8C0B7B1ACC8066572_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5;
		L_5 = ((  ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Matrix4x4>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* glTF_GetAttrib_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m02E2679DCB1E9174DD48D4D33077B04BDFAD6E86_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_5;
		L_5 = ((  Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<System.Single>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* glTF_GetAttrib_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m867DF07AE575774C089A5059916D76D1D83F4A50_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5;
		L_5 = ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<System.UInt16>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* glTF_GetAttrib_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB59A92C026C4E06FA070180DB5858759C1E6F9B3_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5;
		L_5 = ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<System.UInt32>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* glTF_GetAttrib_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB6A15DE587B7AB19D9C756DF725B74FCC6798DDE_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UniGLTF.UShort4>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* glTF_GetAttrib_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_mD369F9F658746BBAE794E40BBFA68B6A0E53B194_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_5;
		L_5 = ((  UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Vector2>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* glTF_GetAttrib_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4B00F32D5206D6A4743606A5506EDA8F5C02DA31_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5;
		L_5 = ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Vector3>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* glTF_GetAttrib_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m434659C465283FD9786E2CEE930C0E130A319617_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5;
		L_5 = ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Vector4>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* glTF_GetAttrib_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mE527A8CEC2E60C7CA79CDFA1EB19CE9E10788EF1_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5;
		L_5 = ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UniGLTF.MeshImporter/Float4>(UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* glTF_GetAttrib_TisFloat4_t9A152F775751266CB0F7C170C0033AE23E6463D8_m8EDFD660CBCCF91C48DED966E0FC2F8FED59F008_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* ___0_accessor, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___1_view, const RuntimeMethod* method) 
{
	{
		// return GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_0 = ___0_accessor;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->___count_4;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_2 = ___0_accessor;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___byteOffset_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_4 = ___1_view;
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_5;
		L_5 = ((  Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// T[] UniGLTF.glTF::GetAttrib<System.Byte>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* glTF_GetAttrib_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4B57C6481B1176DE16A8E79E366CFE254DE086C8_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Color>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* glTF_GetAttrib_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7F6E4D9D87140FE8853A38B337A79AD595519353_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Matrix4x4>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* glTF_GetAttrib_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m80BC76F31BCB6ADE8286495C819B9A192166C246_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<System.Single>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* glTF_GetAttrib_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEC33E94EEFFF55E0719956050B2232EE15678D0F_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<System.UInt16>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* glTF_GetAttrib_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m9F371004C8CB8F04503E85397C471E6A01245D3E_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<System.UInt32>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* glTF_GetAttrib_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC5931B9CE5F02C7DA4B9DEA4E7E48D577C23A81B_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UniGLTF.UShort4>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* glTF_GetAttrib_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_mF2ED855E0FDE9E2349878CD5E89F8886196D0136_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_1 = (UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832*)(UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Vector2>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* glTF_GetAttrib_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7F00D29BB4C61EBE5F4BBD434966DD7C2DDF3120_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Vector3>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* glTF_GetAttrib_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m00CFDB2D3B983CC10115710451B0E5D108212D54_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UnityEngine.Vector4>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* glTF_GetAttrib_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7A041F81FD3A41ADA2A4D45781FA926C25CDF1BA_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_18 = V_0;
		return L_18;
	}
}
// T[] UniGLTF.glTF::GetAttrib<UniGLTF.MeshImporter/Float4>(System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* glTF_GetAttrib_TisFloat4_t9A152F775751266CB0F7C170C0033AE23E6463D8_mFEE9B1CD344095D150A505DDD00F46FB91E790AB_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* __this, int32_t ___0_count, int32_t ___1_byteOffset, glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* ___2_view, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___0_count;
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_1 = (Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE*)(Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = L_1;
		// var segment = buffers[view.buffer].GetBytes();
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)__this->___buffers_1;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3 = ___2_view;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->___buffer_0;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_5;
		L_5 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_4, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = glTFBuffer_GetBytes_mFD00403292F3305AC2E211C73AC3768A89335788(L_5, NULL);
		V_1 = L_6;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_9 = ___2_view;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___byteOffset_1;
		int32_t L_11 = ___1_byteOffset;
		int32_t L_12 = ___0_count;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = ___2_view;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)L_13->___byteStride_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15;
		memset((&L_15), 0, sizeof(L_15));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_15), L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_10)), L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_14)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// bytes.MarshalCoyTo(attrib);
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_16 = V_0;
		int32_t L_17;
		L_17 = ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return attrib;
		Float4U5BU5D_t36257CE1D5B9A3AE048A4F5ECDF7EA5C4D2E1BEE* L_18 = V_0;
		return L_18;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<System.Byte>(System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC022386B7013BD17A513946B1D7C6DF0A6B1B944_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, int32_t ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var view = Storage.Extend(segment, target);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___Storage_0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = ___0_segment;
		int32_t L_2 = ___1_target;
		NullCheck(L_0);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = GenericInterfaceFuncInvoker2< glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		// byteLength = Storage.GetBytes().Count;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___Storage_0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		L_5 = InterfaceFuncInvoker0< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(1 /* System.ArraySegment`1<System.Byte> UniGLTF.IBytesBuffer::GetBytes() */, IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		__this->___byteLength_2 = L_6;
		// return view;
		return L_3;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<System.Byte>(T[],UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E4315FA0799A60E5DDAF8812C1A6799A5F8E70E_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_target, const RuntimeMethod* method) 
{
	{
		// return Append(new ArraySegment<T>(array), target);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_1), L_0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_target;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<UnityEngine.Color>(System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFD43B64FBAEA6DA5ADFFD80D7AC353FC9A576669_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B ___0_segment, int32_t ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var view = Storage.Extend(segment, target);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___Storage_0;
		ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B L_1 = ___0_segment;
		int32_t L_2 = ___1_target;
		NullCheck(L_0);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = GenericInterfaceFuncInvoker2< glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		// byteLength = Storage.GetBytes().Count;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___Storage_0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		L_5 = InterfaceFuncInvoker0< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(1 /* System.ArraySegment`1<System.Byte> UniGLTF.IBytesBuffer::GetBytes() */, IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		__this->___byteLength_2 = L_6;
		// return view;
		return L_3;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<System.Int32>(System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9C9CAC998872D3AC29E70F872D86470C47700D0B_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7 ___0_segment, int32_t ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var view = Storage.Extend(segment, target);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___Storage_0;
		ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7 L_1 = ___0_segment;
		int32_t L_2 = ___1_target;
		NullCheck(L_0);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = GenericInterfaceFuncInvoker2< glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		// byteLength = Storage.GetBytes().Count;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___Storage_0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		L_5 = InterfaceFuncInvoker0< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(1 /* System.ArraySegment`1<System.Byte> UniGLTF.IBytesBuffer::GetBytes() */, IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		__this->___byteLength_2 = L_6;
		// return view;
		return L_3;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<UnityEngine.Matrix4x4>(System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9716658EAA36B2A96AA88019C0553259474CC4FF_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938 ___0_segment, int32_t ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var view = Storage.Extend(segment, target);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___Storage_0;
		ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938 L_1 = ___0_segment;
		int32_t L_2 = ___1_target;
		NullCheck(L_0);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = GenericInterfaceFuncInvoker2< glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		// byteLength = Storage.GetBytes().Count;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___Storage_0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		L_5 = InterfaceFuncInvoker0< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(1 /* System.ArraySegment`1<System.Byte> UniGLTF.IBytesBuffer::GetBytes() */, IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		__this->___byteLength_2 = L_6;
		// return view;
		return L_3;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<System.UInt32>(System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3F51B70EF4A0514DA8177DDC00E0D3A7D544117D_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9 ___0_segment, int32_t ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var view = Storage.Extend(segment, target);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___Storage_0;
		ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9 L_1 = ___0_segment;
		int32_t L_2 = ___1_target;
		NullCheck(L_0);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = GenericInterfaceFuncInvoker2< glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		// byteLength = Storage.GetBytes().Count;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___Storage_0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		L_5 = InterfaceFuncInvoker0< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(1 /* System.ArraySegment`1<System.Byte> UniGLTF.IBytesBuffer::GetBytes() */, IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		__this->___byteLength_2 = L_6;
		// return view;
		return L_3;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<UniGLTF.UShort4>(System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m1C2141ED6EB84E3EAB95D87A994D7D0D2118B454_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954 ___0_segment, int32_t ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var view = Storage.Extend(segment, target);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___Storage_0;
		ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954 L_1 = ___0_segment;
		int32_t L_2 = ___1_target;
		NullCheck(L_0);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = GenericInterfaceFuncInvoker2< glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		// byteLength = Storage.GetBytes().Count;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___Storage_0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		L_5 = InterfaceFuncInvoker0< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(1 /* System.ArraySegment`1<System.Byte> UniGLTF.IBytesBuffer::GetBytes() */, IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		__this->___byteLength_2 = L_6;
		// return view;
		return L_3;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<UnityEngine.Vector2>(System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB5CBC7FA8F441C982294A2EC0D2A161B8C01B1D3_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986 ___0_segment, int32_t ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var view = Storage.Extend(segment, target);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___Storage_0;
		ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986 L_1 = ___0_segment;
		int32_t L_2 = ___1_target;
		NullCheck(L_0);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = GenericInterfaceFuncInvoker2< glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		// byteLength = Storage.GetBytes().Count;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___Storage_0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		L_5 = InterfaceFuncInvoker0< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(1 /* System.ArraySegment`1<System.Byte> UniGLTF.IBytesBuffer::GetBytes() */, IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		__this->___byteLength_2 = L_6;
		// return view;
		return L_3;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<UnityEngine.Vector3>(System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m99C59170A75DBBE370FFD827120427C04F621D5D_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 ___0_segment, int32_t ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var view = Storage.Extend(segment, target);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___Storage_0;
		ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 L_1 = ___0_segment;
		int32_t L_2 = ___1_target;
		NullCheck(L_0);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = GenericInterfaceFuncInvoker2< glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		// byteLength = Storage.GetBytes().Count;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___Storage_0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		L_5 = InterfaceFuncInvoker0< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(1 /* System.ArraySegment`1<System.Byte> UniGLTF.IBytesBuffer::GetBytes() */, IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		__this->___byteLength_2 = L_6;
		// return view;
		return L_3;
	}
}
// UniGLTF.glTFBufferView UniGLTF.glTFBuffer::Append<UnityEngine.Vector4>(System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* glTFBuffer_Append_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD066B07A756302903693ED33560FD8BA37C030FC_gshared (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* __this, ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0 ___0_segment, int32_t ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var view = Storage.Extend(segment, target);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___Storage_0;
		ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0 L_1 = ___0_segment;
		int32_t L_2 = ___1_target;
		NullCheck(L_0);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_3;
		L_3 = GenericInterfaceFuncInvoker2< glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33*, ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		// byteLength = Storage.GetBytes().Count;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___Storage_0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		L_5 = InterfaceFuncInvoker0< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(1 /* System.ArraySegment`1<System.Byte> UniGLTF.IBytesBuffer::GetBytes() */, IBytesBuffer_t2A52FD4A16A6CD296EE7C000AD3C63819637E85D_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		__this->___byteLength_2 = L_6;
		// return view;
		return L_3;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Color>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8B91A4A1DF7B46138C0CAEA9EF7A76E493E9A338_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mEFA7495BC311061070C4F7A74B30B17D1409A52A_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var viewIndex = ExtendBufferAndGetViewIndex(gltf, bufferIndex, array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		int32_t L_2 = ___1_bufferIndex;
		ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B L_3 = ___2_array;
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_5;
		// var accessorIndex = gltf.accessors.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_6 = ___0_gltf;
		NullCheck(L_6);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_7 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_6->___accessors_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_inline(L_7, List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		// gltf.accessors.Add(new glTFAccessor
		// {
		//     bufferView = viewIndex,
		//     byteOffset = 0,
		//     componentType = GetComponentType<T>(),
		//     type = GetAccessorType<T>(),
		//     count = array.Count,
		// });
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_9 = ___0_gltf;
		NullCheck(L_9);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_10 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_9->___accessors_3;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = (glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*)il2cpp_codegen_object_new(glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		glTFAccessor__ctor_m052DC59180913C8D27BE2B5977E879E30739556B(L_11, NULL);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_12 = L_11;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		L_12->___bufferView_0 = L_13;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_14 = L_12;
		NullCheck(L_14);
		L_14->___byteOffset_1 = 0;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_15 = L_14;
		int32_t L_16;
		L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_15);
		L_15->___componentType_3 = L_16;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = L_15;
		String_t* L_18;
		L_18 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_17);
		L_17->___type_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___type_2), (void*)L_18);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_19 = L_17;
		int32_t L_20;
		L_20 = ArraySegment_1_get_Count_mEFA7495BC311061070C4F7A74B30B17D1409A52A_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_19);
		L_19->___count_4 = L_20;
		NullCheck(L_10);
		List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_inline(L_10, L_19, List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		// return accessorIndex;
		return L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Color>(UniGLTF.glTF,System.Int32,T[],UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m060B45D13D1D6A65390FB41C0FC63715FFAB22DF_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gltf.ExtendBufferAndGetAccessorIndex(bufferIndex, new ArraySegment<T>(array), target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_0 = ___0_gltf;
		int32_t L_1 = ___1_bufferIndex;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = ___2_array;
		ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_m885992ECC0C764320BAB80A329DE016F96E74854((&L_3), L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Matrix4x4>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m65D9B3F2DE6F29F777A00149578A4D811D326AE5_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m068C5A0C29ECCA9C2BB518A22E24A2A2449EB7E6_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var viewIndex = ExtendBufferAndGetViewIndex(gltf, bufferIndex, array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		int32_t L_2 = ___1_bufferIndex;
		ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938 L_3 = ___2_array;
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_5;
		// var accessorIndex = gltf.accessors.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_6 = ___0_gltf;
		NullCheck(L_6);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_7 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_6->___accessors_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_inline(L_7, List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		// gltf.accessors.Add(new glTFAccessor
		// {
		//     bufferView = viewIndex,
		//     byteOffset = 0,
		//     componentType = GetComponentType<T>(),
		//     type = GetAccessorType<T>(),
		//     count = array.Count,
		// });
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_9 = ___0_gltf;
		NullCheck(L_9);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_10 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_9->___accessors_3;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = (glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*)il2cpp_codegen_object_new(glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		glTFAccessor__ctor_m052DC59180913C8D27BE2B5977E879E30739556B(L_11, NULL);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_12 = L_11;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		L_12->___bufferView_0 = L_13;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_14 = L_12;
		NullCheck(L_14);
		L_14->___byteOffset_1 = 0;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_15 = L_14;
		int32_t L_16;
		L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_15);
		L_15->___componentType_3 = L_16;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = L_15;
		String_t* L_18;
		L_18 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_17);
		L_17->___type_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___type_2), (void*)L_18);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_19 = L_17;
		int32_t L_20;
		L_20 = ArraySegment_1_get_Count_m068C5A0C29ECCA9C2BB518A22E24A2A2449EB7E6_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_19);
		L_19->___count_4 = L_20;
		NullCheck(L_10);
		List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_inline(L_10, L_19, List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		// return accessorIndex;
		return L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Matrix4x4>(UniGLTF.glTF,System.Int32,T[],UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m417D711B9E20E34EC68CA5DF97ABDE44B007501F_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gltf.ExtendBufferAndGetAccessorIndex(bufferIndex, new ArraySegment<T>(array), target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_0 = ___0_gltf;
		int32_t L_1 = ___1_bufferIndex;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = ___2_array;
		ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_m117FAD320ED302BB7815D00C47828D6FFBF3CABB((&L_3), L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<System.UInt32>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m86D03EA8D85D1229D91E45E1C7DA1BB4686E52B2_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m133EAD8C7E80DED1D773E5C6256837036A70D729_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var viewIndex = ExtendBufferAndGetViewIndex(gltf, bufferIndex, array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		int32_t L_2 = ___1_bufferIndex;
		ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9 L_3 = ___2_array;
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_5;
		// var accessorIndex = gltf.accessors.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_6 = ___0_gltf;
		NullCheck(L_6);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_7 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_6->___accessors_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_inline(L_7, List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		// gltf.accessors.Add(new glTFAccessor
		// {
		//     bufferView = viewIndex,
		//     byteOffset = 0,
		//     componentType = GetComponentType<T>(),
		//     type = GetAccessorType<T>(),
		//     count = array.Count,
		// });
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_9 = ___0_gltf;
		NullCheck(L_9);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_10 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_9->___accessors_3;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = (glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*)il2cpp_codegen_object_new(glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		glTFAccessor__ctor_m052DC59180913C8D27BE2B5977E879E30739556B(L_11, NULL);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_12 = L_11;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		L_12->___bufferView_0 = L_13;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_14 = L_12;
		NullCheck(L_14);
		L_14->___byteOffset_1 = 0;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_15 = L_14;
		int32_t L_16;
		L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_15);
		L_15->___componentType_3 = L_16;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = L_15;
		String_t* L_18;
		L_18 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_17);
		L_17->___type_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___type_2), (void*)L_18);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_19 = L_17;
		int32_t L_20;
		L_20 = ArraySegment_1_get_Count_m133EAD8C7E80DED1D773E5C6256837036A70D729_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_19);
		L_19->___count_4 = L_20;
		NullCheck(L_10);
		List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_inline(L_10, L_19, List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		// return accessorIndex;
		return L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<System.UInt32>(UniGLTF.glTF,System.Int32,T[],UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m090E46481637EA27129F25744DB5DAEC7C94756C_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gltf.ExtendBufferAndGetAccessorIndex(bufferIndex, new ArraySegment<T>(array), target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_0 = ___0_gltf;
		int32_t L_1 = ___1_bufferIndex;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_array;
		ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_mF93F86FB28E357D23F093A8DB0F4D28535BC4D6D((&L_3), L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UniGLTF.UShort4>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m22D71414B05618101EFE12B55EFABDE8EC32A33A_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m5B51AD3E11224CCA5E3B9C3363454A1782F1A17C_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var viewIndex = ExtendBufferAndGetViewIndex(gltf, bufferIndex, array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		int32_t L_2 = ___1_bufferIndex;
		ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954 L_3 = ___2_array;
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_5;
		// var accessorIndex = gltf.accessors.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_6 = ___0_gltf;
		NullCheck(L_6);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_7 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_6->___accessors_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_inline(L_7, List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		// gltf.accessors.Add(new glTFAccessor
		// {
		//     bufferView = viewIndex,
		//     byteOffset = 0,
		//     componentType = GetComponentType<T>(),
		//     type = GetAccessorType<T>(),
		//     count = array.Count,
		// });
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_9 = ___0_gltf;
		NullCheck(L_9);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_10 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_9->___accessors_3;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = (glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*)il2cpp_codegen_object_new(glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		glTFAccessor__ctor_m052DC59180913C8D27BE2B5977E879E30739556B(L_11, NULL);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_12 = L_11;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		L_12->___bufferView_0 = L_13;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_14 = L_12;
		NullCheck(L_14);
		L_14->___byteOffset_1 = 0;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_15 = L_14;
		int32_t L_16;
		L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_15);
		L_15->___componentType_3 = L_16;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = L_15;
		String_t* L_18;
		L_18 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_17);
		L_17->___type_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___type_2), (void*)L_18);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_19 = L_17;
		int32_t L_20;
		L_20 = ArraySegment_1_get_Count_m5B51AD3E11224CCA5E3B9C3363454A1782F1A17C_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_19);
		L_19->___count_4 = L_20;
		NullCheck(L_10);
		List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_inline(L_10, L_19, List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		// return accessorIndex;
		return L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UniGLTF.UShort4>(UniGLTF.glTF,System.Int32,T[],UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m9773CD0839DFBB830FE1D3D6F6A2D8CAD875F8F0_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gltf.ExtendBufferAndGetAccessorIndex(bufferIndex, new ArraySegment<T>(array), target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_0 = ___0_gltf;
		int32_t L_1 = ___1_bufferIndex;
		UShort4U5BU5D_tED5A48B0E0F9AA0D039BE42E02327F3CC68BC832* L_2 = ___2_array;
		ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_m7260B1450365304442F7F76F9C84466545E3757C((&L_3), L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Vector2>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFC7C434CB8BD948508B5E76E6AE39494F68DADD4_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mD88C16E4667225330739C8849FBC96C53DB6CD93_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var viewIndex = ExtendBufferAndGetViewIndex(gltf, bufferIndex, array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		int32_t L_2 = ___1_bufferIndex;
		ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986 L_3 = ___2_array;
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_5;
		// var accessorIndex = gltf.accessors.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_6 = ___0_gltf;
		NullCheck(L_6);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_7 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_6->___accessors_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_inline(L_7, List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		// gltf.accessors.Add(new glTFAccessor
		// {
		//     bufferView = viewIndex,
		//     byteOffset = 0,
		//     componentType = GetComponentType<T>(),
		//     type = GetAccessorType<T>(),
		//     count = array.Count,
		// });
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_9 = ___0_gltf;
		NullCheck(L_9);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_10 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_9->___accessors_3;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = (glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*)il2cpp_codegen_object_new(glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		glTFAccessor__ctor_m052DC59180913C8D27BE2B5977E879E30739556B(L_11, NULL);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_12 = L_11;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		L_12->___bufferView_0 = L_13;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_14 = L_12;
		NullCheck(L_14);
		L_14->___byteOffset_1 = 0;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_15 = L_14;
		int32_t L_16;
		L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_15);
		L_15->___componentType_3 = L_16;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = L_15;
		String_t* L_18;
		L_18 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_17);
		L_17->___type_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___type_2), (void*)L_18);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_19 = L_17;
		int32_t L_20;
		L_20 = ArraySegment_1_get_Count_mD88C16E4667225330739C8849FBC96C53DB6CD93_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_19);
		L_19->___count_4 = L_20;
		NullCheck(L_10);
		List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_inline(L_10, L_19, List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		// return accessorIndex;
		return L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Vector2>(UniGLTF.glTF,System.Int32,T[],UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m341325AD1E7BCB98B29C7A5449D7A81ADEBDB4C9_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gltf.ExtendBufferAndGetAccessorIndex(bufferIndex, new ArraySegment<T>(array), target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_0 = ___0_gltf;
		int32_t L_1 = ___1_bufferIndex;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___2_array;
		ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_m8F85D89552616975F083BD87C23D410F811F0F1F((&L_3), L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Vector3>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2C52D325B2BC08091102460B535888FE1BF09A67_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mF3CA0A5D2BAB604E572BA9D970DB4484BA4EACFC_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var viewIndex = ExtendBufferAndGetViewIndex(gltf, bufferIndex, array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		int32_t L_2 = ___1_bufferIndex;
		ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 L_3 = ___2_array;
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_5;
		// var accessorIndex = gltf.accessors.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_6 = ___0_gltf;
		NullCheck(L_6);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_7 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_6->___accessors_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_inline(L_7, List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		// gltf.accessors.Add(new glTFAccessor
		// {
		//     bufferView = viewIndex,
		//     byteOffset = 0,
		//     componentType = GetComponentType<T>(),
		//     type = GetAccessorType<T>(),
		//     count = array.Count,
		// });
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_9 = ___0_gltf;
		NullCheck(L_9);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_10 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_9->___accessors_3;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = (glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*)il2cpp_codegen_object_new(glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		glTFAccessor__ctor_m052DC59180913C8D27BE2B5977E879E30739556B(L_11, NULL);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_12 = L_11;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		L_12->___bufferView_0 = L_13;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_14 = L_12;
		NullCheck(L_14);
		L_14->___byteOffset_1 = 0;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_15 = L_14;
		int32_t L_16;
		L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_15);
		L_15->___componentType_3 = L_16;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = L_15;
		String_t* L_18;
		L_18 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_17);
		L_17->___type_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___type_2), (void*)L_18);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_19 = L_17;
		int32_t L_20;
		L_20 = ArraySegment_1_get_Count_mF3CA0A5D2BAB604E572BA9D970DB4484BA4EACFC_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_19);
		L_19->___count_4 = L_20;
		NullCheck(L_10);
		List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_inline(L_10, L_19, List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		// return accessorIndex;
		return L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Vector3>(UniGLTF.glTF,System.Int32,T[],UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m6AB28A13C8F08060A5008EA3E48377F0B8A6E058_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gltf.ExtendBufferAndGetAccessorIndex(bufferIndex, new ArraySegment<T>(array), target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_0 = ___0_gltf;
		int32_t L_1 = ___1_bufferIndex;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___2_array;
		ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_mD38785551D211404360F7CF881155B329EA711FB((&L_3), L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Vector4>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD043533EE6CE52135CF7D007FB113DBF22244318_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m14F4C3244AFF7332D7FD7AE0F83CF662A047ECEA_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var viewIndex = ExtendBufferAndGetViewIndex(gltf, bufferIndex, array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		int32_t L_2 = ___1_bufferIndex;
		ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0 L_3 = ___2_array;
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_5;
		// var accessorIndex = gltf.accessors.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_6 = ___0_gltf;
		NullCheck(L_6);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_7 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_6->___accessors_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_inline(L_7, List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		// gltf.accessors.Add(new glTFAccessor
		// {
		//     bufferView = viewIndex,
		//     byteOffset = 0,
		//     componentType = GetComponentType<T>(),
		//     type = GetAccessorType<T>(),
		//     count = array.Count,
		// });
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_9 = ___0_gltf;
		NullCheck(L_9);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_10 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_9->___accessors_3;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = (glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*)il2cpp_codegen_object_new(glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		glTFAccessor__ctor_m052DC59180913C8D27BE2B5977E879E30739556B(L_11, NULL);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_12 = L_11;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		L_12->___bufferView_0 = L_13;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_14 = L_12;
		NullCheck(L_14);
		L_14->___byteOffset_1 = 0;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_15 = L_14;
		int32_t L_16;
		L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_15);
		L_15->___componentType_3 = L_16;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = L_15;
		String_t* L_18;
		L_18 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_17);
		L_17->___type_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___type_2), (void*)L_18);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_19 = L_17;
		int32_t L_20;
		L_20 = ArraySegment_1_get_Count_m14F4C3244AFF7332D7FD7AE0F83CF662A047ECEA_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_19);
		L_19->___count_4 = L_20;
		NullCheck(L_10);
		List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_inline(L_10, L_19, List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		// return accessorIndex;
		return L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetAccessorIndex<UnityEngine.Vector4>(UniGLTF.glTF,System.Int32,T[],UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetAccessorIndex_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mBBB9C595DF0D140DDBC1409B1B3542BC3DE40440_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gltf.ExtendBufferAndGetAccessorIndex(bufferIndex, new ArraySegment<T>(array), target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_0 = ___0_gltf;
		int32_t L_1 = ___1_bufferIndex;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = ___2_array;
		ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_mD8341204A3E42E755AA5BD0ACD3B8D747D4C0082((&L_3), L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetViewIndex<UnityEngine.Color>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetViewIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m813C45E623A5A8E39013297FD6CEFF4A61069E7F_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* V_0 = NULL;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mEFA7495BC311061070C4F7A74B30B17D1409A52A_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var view = gltf.buffers[bufferIndex].Append(array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		NullCheck(L_1);
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)L_1->___buffers_1;
		int32_t L_3 = ___1_bufferIndex;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_4;
		L_4 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_3, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B L_5 = ___2_array;
		int32_t L_6 = ___3_target;
		NullCheck(L_4);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_7;
		L_7 = ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D*, ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// var viewIndex = gltf.bufferViews.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_8 = ___0_gltf;
		NullCheck(L_8);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_9 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_8->___bufferViews_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_inline(L_9, List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		// gltf.bufferViews.Add(view);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_11 = ___0_gltf;
		NullCheck(L_11);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_11->___bufferViews_2;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_inline(L_12, L_13, List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		// return viewIndex;
		return L_10;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetViewIndex<System.Int32>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetViewIndex_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m011C61E74471C97B2AF42637A4E95D909DCF1975_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* V_0 = NULL;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mD360DCD6B4E6B96E20BB2D11AB63329F1F432414_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var view = gltf.buffers[bufferIndex].Append(array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		NullCheck(L_1);
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)L_1->___buffers_1;
		int32_t L_3 = ___1_bufferIndex;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_4;
		L_4 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_3, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7 L_5 = ___2_array;
		int32_t L_6 = ___3_target;
		NullCheck(L_4);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_7;
		L_7 = ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D*, ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// var viewIndex = gltf.bufferViews.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_8 = ___0_gltf;
		NullCheck(L_8);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_9 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_8->___bufferViews_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_inline(L_9, List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		// gltf.bufferViews.Add(view);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_11 = ___0_gltf;
		NullCheck(L_11);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_11->___bufferViews_2;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_inline(L_12, L_13, List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		// return viewIndex;
		return L_10;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetViewIndex<System.Int32>(UniGLTF.glTF,System.Int32,T[],UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetViewIndex_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7755B5CBE749F8F476E282CD67218590ACD583D8_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ExtendBufferAndGetViewIndex(gltf, bufferIndex, new ArraySegment<T>(array), target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_0 = ___0_gltf;
		int32_t L_1 = ___1_bufferIndex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___2_array;
		ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_mDBD90ADEA8AB3EAE661D2029D5F0F6B24AD890D0((&L_3), L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = ___3_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetViewIndex<UnityEngine.Matrix4x4>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetViewIndex_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mA90756FF5796C5FB7E932E5393637C526F70BAAE_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* V_0 = NULL;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m068C5A0C29ECCA9C2BB518A22E24A2A2449EB7E6_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var view = gltf.buffers[bufferIndex].Append(array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		NullCheck(L_1);
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)L_1->___buffers_1;
		int32_t L_3 = ___1_bufferIndex;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_4;
		L_4 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_3, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938 L_5 = ___2_array;
		int32_t L_6 = ___3_target;
		NullCheck(L_4);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_7;
		L_7 = ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D*, ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// var viewIndex = gltf.bufferViews.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_8 = ___0_gltf;
		NullCheck(L_8);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_9 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_8->___bufferViews_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_inline(L_9, List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		// gltf.bufferViews.Add(view);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_11 = ___0_gltf;
		NullCheck(L_11);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_11->___bufferViews_2;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_inline(L_12, L_13, List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		// return viewIndex;
		return L_10;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetViewIndex<System.UInt32>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetViewIndex_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m59A8A64AF45375926E5B836D47B43C0DCE4E153A_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* V_0 = NULL;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m133EAD8C7E80DED1D773E5C6256837036A70D729_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var view = gltf.buffers[bufferIndex].Append(array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		NullCheck(L_1);
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)L_1->___buffers_1;
		int32_t L_3 = ___1_bufferIndex;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_4;
		L_4 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_3, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9 L_5 = ___2_array;
		int32_t L_6 = ___3_target;
		NullCheck(L_4);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_7;
		L_7 = ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D*, ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// var viewIndex = gltf.bufferViews.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_8 = ___0_gltf;
		NullCheck(L_8);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_9 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_8->___bufferViews_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_inline(L_9, List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		// gltf.bufferViews.Add(view);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_11 = ___0_gltf;
		NullCheck(L_11);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_11->___bufferViews_2;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_inline(L_12, L_13, List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		// return viewIndex;
		return L_10;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetViewIndex<UniGLTF.UShort4>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetViewIndex_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_mEADCC42048F86906193211FF4E3B615D4F0F0CB9_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* V_0 = NULL;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m5B51AD3E11224CCA5E3B9C3363454A1782F1A17C_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var view = gltf.buffers[bufferIndex].Append(array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		NullCheck(L_1);
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)L_1->___buffers_1;
		int32_t L_3 = ___1_bufferIndex;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_4;
		L_4 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_3, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954 L_5 = ___2_array;
		int32_t L_6 = ___3_target;
		NullCheck(L_4);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_7;
		L_7 = ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D*, ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// var viewIndex = gltf.bufferViews.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_8 = ___0_gltf;
		NullCheck(L_8);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_9 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_8->___bufferViews_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_inline(L_9, List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		// gltf.bufferViews.Add(view);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_11 = ___0_gltf;
		NullCheck(L_11);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_11->___bufferViews_2;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_inline(L_12, L_13, List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		// return viewIndex;
		return L_10;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetViewIndex<UnityEngine.Vector2>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetViewIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1EE29F8C73012992855052D6E713125AA18CDB63_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* V_0 = NULL;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mD88C16E4667225330739C8849FBC96C53DB6CD93_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var view = gltf.buffers[bufferIndex].Append(array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		NullCheck(L_1);
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)L_1->___buffers_1;
		int32_t L_3 = ___1_bufferIndex;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_4;
		L_4 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_3, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986 L_5 = ___2_array;
		int32_t L_6 = ___3_target;
		NullCheck(L_4);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_7;
		L_7 = ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D*, ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// var viewIndex = gltf.bufferViews.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_8 = ___0_gltf;
		NullCheck(L_8);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_9 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_8->___bufferViews_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_inline(L_9, List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		// gltf.bufferViews.Add(view);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_11 = ___0_gltf;
		NullCheck(L_11);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_11->___bufferViews_2;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_inline(L_12, L_13, List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		// return viewIndex;
		return L_10;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetViewIndex<UnityEngine.Vector3>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetViewIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m72D1A666D0E8371764EFA06AEA144168099B75B9_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* V_0 = NULL;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mF3CA0A5D2BAB604E572BA9D970DB4484BA4EACFC_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var view = gltf.buffers[bufferIndex].Append(array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		NullCheck(L_1);
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)L_1->___buffers_1;
		int32_t L_3 = ___1_bufferIndex;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_4;
		L_4 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_3, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 L_5 = ___2_array;
		int32_t L_6 = ___3_target;
		NullCheck(L_4);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_7;
		L_7 = ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D*, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// var viewIndex = gltf.bufferViews.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_8 = ___0_gltf;
		NullCheck(L_8);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_9 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_8->___bufferViews_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_inline(L_9, List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		// gltf.bufferViews.Add(view);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_11 = ___0_gltf;
		NullCheck(L_11);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_11->___bufferViews_2;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_inline(L_12, L_13, List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		// return viewIndex;
		return L_10;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendBufferAndGetViewIndex<UnityEngine.Vector4>(UniGLTF.glTF,System.Int32,System.ArraySegment`1<T>,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendBufferAndGetViewIndex_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD34D434B88FD4CBFCEC3B5ACF006C772C7664C38_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0 ___2_array, int32_t ___3_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* V_0 = NULL;
	{
		// if (array.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m14F4C3244AFF7332D7FD7AE0F83CF662A047ECEA_inline((&___2_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var view = gltf.buffers[bufferIndex].Append(array, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		NullCheck(L_1);
		List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9* L_2 = (List_1_tFDC49E8EBD1F18971A4C76FC030A0D082012BFD9*)L_1->___buffers_1;
		int32_t L_3 = ___1_bufferIndex;
		NullCheck(L_2);
		glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D* L_4;
		L_4 = List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17(L_2, L_3, List_1_get_Item_m86A759ACA03E1A4D5A6526CF01A86E0B14672B17_RuntimeMethod_var);
		ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0 L_5 = ___2_array;
		int32_t L_6 = ___3_target;
		NullCheck(L_4);
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_7;
		L_7 = ((  glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* (*) (glTFBuffer_t6507D83C7813B89D843688B3D145C50FE686BE8D*, ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// var viewIndex = gltf.bufferViews.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_8 = ___0_gltf;
		NullCheck(L_8);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_9 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_8->___bufferViews_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_inline(L_9, List_1_get_Count_mB8305C9F31C18545938D76A2BA88E77F2F959C57_RuntimeMethod_var);
		// gltf.bufferViews.Add(view);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_11 = ___0_gltf;
		NullCheck(L_11);
		List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B* L_12 = (List_1_t62EB47A1A4B9791D7D930EB08889F0F52ED0583B*)L_11->___bufferViews_2;
		glTFBufferView_tE94129305ADCAD1AF7C1F62D4FBACC58E5B7AD33* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_inline(L_12, L_13, List_1_Add_m1CA594128C3FC513C619A6CB1922EA4F6895E9E0_RuntimeMethod_var);
		// return viewIndex;
		return L_10;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendSparseBufferAndGetAccessorIndex<UnityEngine.Vector3>(UniGLTF.glTF,System.Int32,System.Int32,System.ArraySegment`1<T>,System.Int32[],System.Int32,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendSparseBufferAndGetAccessorIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m07769EE299AFA9D6FBB1D3E58CAFB5A3671B2AA6_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, int32_t ___2_accessorCount, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 ___3_sparseValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_sparseIndices, int32_t ___5_sparseIndicesViewIndex, int32_t ___6_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (sparseValues.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mF3CA0A5D2BAB604E572BA9D970DB4484BA4EACFC_inline((&___3_sparseValues), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// var sparseValuesViewIndex = ExtendBufferAndGetViewIndex(gltf, bufferIndex, sparseValues, target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_1 = ___0_gltf;
		int32_t L_2 = ___1_bufferIndex;
		ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 L_3 = ___3_sparseValues;
		int32_t L_4 = ___6_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_5;
		// var accessorIndex = gltf.accessors.Count;
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_6 = ___0_gltf;
		NullCheck(L_6);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_7 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_6->___accessors_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_inline(L_7, List_1_get_Count_m7F71A0BCACE235FCE9C9A4BE8284A33EDBCA2478_RuntimeMethod_var);
		// gltf.accessors.Add(new glTFAccessor
		// {
		//     byteOffset = 0,
		//     componentType = GetComponentType<T>(),
		//     type = GetAccessorType<T>(),
		//     count = accessorCount,
		// 
		//     sparse = new glTFSparse
		//     {
		//         count=sparseIndices.Length,
		//         indices = new glTFSparseIndices
		//         {
		//             bufferView = sparseIndicesViewIndex,
		//             componentType = glComponentType.UNSIGNED_INT
		//         },
		//         values = new glTFSparseValues
		//         {
		//             bufferView = sparseValuesViewIndex,
		//         }
		//     }
		// });
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_9 = ___0_gltf;
		NullCheck(L_9);
		List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C* L_10 = (List_1_tB8636C3A4E3938DBDC301B188288D69FEB8D7A5C*)L_9->___accessors_3;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_11 = (glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665*)il2cpp_codegen_object_new(glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		glTFAccessor__ctor_m052DC59180913C8D27BE2B5977E879E30739556B(L_11, NULL);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_12 = L_11;
		NullCheck(L_12);
		L_12->___byteOffset_1 = 0;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_13 = L_12;
		int32_t L_14;
		L_14 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_13);
		L_13->___componentType_3 = L_14;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_15 = L_13;
		String_t* L_16;
		L_16 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_15);
		L_15->___type_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___type_2), (void*)L_16);
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_17 = L_15;
		int32_t L_18 = ___2_accessorCount;
		NullCheck(L_17);
		L_17->___count_4 = L_18;
		glTFAccessor_t88F9FA394D86BB7FF86241B24E7A7A6B9AA8E665* L_19 = L_17;
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_20 = (glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84*)il2cpp_codegen_object_new(glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		glTFSparse__ctor_m116CF748AE3FB49F5BF5775BB77B9EC7F38A4F49(L_20, NULL);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_21 = L_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___4_sparseIndices;
		NullCheck(L_22);
		NullCheck(L_21);
		L_21->___count_0 = ((int32_t)(((RuntimeArray*)L_22)->max_length));
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_23 = L_21;
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_24 = (glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D*)il2cpp_codegen_object_new(glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		glTFSparseIndices__ctor_m2D946330E96A50FD2543528942CA846633842031(L_24, NULL);
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_25 = L_24;
		int32_t L_26 = ___5_sparseIndicesViewIndex;
		NullCheck(L_25);
		L_25->___bufferView_0 = L_26;
		glTFSparseIndices_t8D6623015E923A33CE67BBF666EE390E6AFE833D* L_27 = L_25;
		NullCheck(L_27);
		L_27->___componentType_2 = (int32_t)((int32_t)5125);
		NullCheck(L_23);
		L_23->___indices_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___indices_1), (void*)L_27);
		glTFSparse_tBA085B4CC089B8E4F1612533699BC5D326E82D84* L_28 = L_23;
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_29 = (glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D*)il2cpp_codegen_object_new(glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		glTFSparseValues__ctor_m895EDC26492871C6C9FAAEACFD10052ABC324834(L_29, NULL);
		glTFSparseValues_tB773D288F1EF8AFC570DE4AE63001D3E6134591D* L_30 = L_29;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		L_30->___bufferView_0 = L_31;
		NullCheck(L_28);
		L_28->___values_2 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___values_2), (void*)L_30);
		NullCheck(L_19);
		L_19->___sparse_8 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___sparse_8), (void*)L_28);
		NullCheck(L_10);
		List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_inline(L_10, L_19, List_1_Add_m03F3A9EB76D010207A109C2D2DF9666C066E861F_RuntimeMethod_var);
		// return accessorIndex;
		return L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::ExtendSparseBufferAndGetAccessorIndex<UnityEngine.Vector3>(UniGLTF.glTF,System.Int32,System.Int32,T[],System.Int32[],System.Int32,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendSparseBufferAndGetAccessorIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD5149AE6F4B0C87BF7DCD4578FD8E4CBE8001399_gshared (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* ___0_gltf, int32_t ___1_bufferIndex, int32_t ___2_accessorCount, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___3_sparseValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_sparseIndices, int32_t ___5_sparseViewIndex, int32_t ___6_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ExtendSparseBufferAndGetAccessorIndex(gltf, bufferIndex,
		//     accessorCount,
		//     new ArraySegment<T>(sparseValues), sparseIndices, sparseViewIndex,
		//     target);
		glTF_t8B8D918B31390DDC68759935396584ADE5C459B7* L_0 = ___0_gltf;
		int32_t L_1 = ___1_bufferIndex;
		int32_t L_2 = ___2_accessorCount;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___3_sparseValues;
		ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ArraySegment_1__ctor_mD38785551D211404360F7CF881155B329EA711FB((&L_4), L_3, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___4_sparseIndices;
		int32_t L_6 = ___5_sparseViewIndex;
		int32_t L_7 = ___6_target;
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = ((  int32_t (*) (glTF_t8B8D918B31390DDC68759935396584ADE5C459B7*, int32_t, int32_t, ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_2, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::GetAccessorElementCount<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetAccessorElementCount_TisRuntimeObject_m3062AFF66A650D8D1DD59DA0A9D78263215DBB17_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ElementCount;
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ElementCount_1;
		return L_5;
	}

IL_0027:
	{
		// return 1;
		return 1;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFCE4DFC916D250114AEC78D7EB36428B4E16A89C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ElementCount_1;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, 2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFCE4DFC916D250114AEC78D7EB36428B4E16A89C_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Matrix4x4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45848447182428C767E2695BD256D3410C748330_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ElementCount_1;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, 2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45848447182428C767E2695BD256D3410C748330_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisRuntimeObject_m35C3A8B4A7DFBF9A7F5651B51C2394C17AF87381_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ElementCount_1;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, 2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisRuntimeObject_m35C3A8B4A7DFBF9A7F5651B51C2394C17AF87381_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD446E5502D357F39481995289183736CA31C9354_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ElementCount_1;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, 2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD446E5502D357F39481995289183736CA31C9354_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UniGLTF.UShort4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m2E41FBEA656C4425BFDD7CFB6CAFD6001375C36E_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ElementCount_1;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, 2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m2E41FBEA656C4425BFDD7CFB6CAFD6001375C36E_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m53E1E2ECAF2806D04183B94285708AF265EF558A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ElementCount_1;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, 2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m53E1E2ECAF2806D04183B94285708AF265EF558A_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC184857F229AFEC5095BFC1167DD2E3EB09C2567_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ElementCount_1;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, 2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC184857F229AFEC5095BFC1167DD2E3EB09C2567_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2A483F8FCC10F70B7D6C617287C53CB3FE83740D_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ElementCount_1;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, 2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2A483F8FCC10F70B7D6C617287C53CB3FE83740D_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC399416D177BA286FB70D242F44ECF8399E9AACE_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ComponentType_0;
		return L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck((MemberInfo_t*)L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_17);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_19 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC399416D177BA286FB70D242F44ECF8399E9AACE_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Matrix4x4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m823FF962C78BF84D4FB65A731534ADA7518B7A18_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ComponentType_0;
		return L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck((MemberInfo_t*)L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_17);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_19 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m823FF962C78BF84D4FB65A731534ADA7518B7A18_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisRuntimeObject_mC0B3EC81F6254A3B8C47F5104D553FAA5C6AB65B_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ComponentType_0;
		return L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck((MemberInfo_t*)L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_17);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_19 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisRuntimeObject_mC0B3EC81F6254A3B8C47F5104D553FAA5C6AB65B_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0B2BCE0DD15093F5A525128C0E8B2158AED563FC_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ComponentType_0;
		return L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck((MemberInfo_t*)L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_17);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_19 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0B2BCE0DD15093F5A525128C0E8B2158AED563FC_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UniGLTF.UShort4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m0207B9AD0BAAA9CB0367BBF7319DE1A966912291_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ComponentType_0;
		return L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck((MemberInfo_t*)L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_17);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_19 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisUShort4_t73A77CE1B49127F86E98397015C806084733CF4E_m0207B9AD0BAAA9CB0367BBF7319DE1A966912291_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0FA090F2FBFB98F5097757F3197CA4A627E4B680_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ComponentType_0;
		return L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck((MemberInfo_t*)L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_17);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_19 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0FA090F2FBFB98F5097757F3197CA4A627E4B680_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0E61396E84D0C23F0D21B9BD06031162C3FCAD16_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ComponentType_0;
		return L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck((MemberInfo_t*)L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_17);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_19 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0E61396E84D0C23F0D21B9BD06031162C3FCAD16_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D1930B6B255B5BD15E9770AF4DAF011BA7795AF_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var);
		Dictionary_2_t9F87FE1C4E0432A86DB2CD3682DD89A8C0CB8ADB* L_0 = ((glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t90D0DDEB37C88756C1C8018A22E68A2C4068983F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mC6B9669452E476D4E942DE0DD936FFB9CF456A29_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_tC02E8C4B4CE353275778C075474A10A729EADF75 L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.___ComponentType_0;
		return L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck((MemberInfo_t*)L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_17);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_19 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D1930B6B255B5BD15E9770AF4DAF011BA7795AF_RuntimeMethod_var)));
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		intptr_t L_0 = (intptr_t)__this->___m_Ptr_0;
		uint64_t L_1;
		L_1 = MeshData_GetIndexDataSize_mC7D4DB52A49B547CC336CA29021E59DD5EDAA00C(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)L_2);
		uint64_t L_3 = V_0;
		uint64_t L_4 = V_1;
		V_3 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_3%(uint64_t)(int64_t)L_4))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		uint64_t L_6 = V_0;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_7);
		uint64_t L_9 = V_1;
		uint64_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral121FF5564E1B93612CC7A3748FAD95C919EF04E2)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68C1CA2959BA9A4A0F4FC3A15F854C304C716D2C)), L_8, L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_RuntimeMethod_var)));
	}

IL_0040:
	{
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_14/(uint64_t)(int64_t)L_15));
		intptr_t L_16 = (intptr_t)__this->___m_Ptr_0;
		intptr_t L_17;
		L_17 = MeshData_GetIndexDataPtr_mC3662C797B24BDD967595C63AA6AB9DBB8B9F02A(L_16, NULL);
		void* L_18;
		L_18 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_17, NULL);
		uint64_t L_19 = V_2;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_20;
		L_20 = ((  NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_18, ((int32_t)L_19), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_20;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_21 = V_4;
		V_5 = L_21;
		goto IL_0065;
	}

IL_0065:
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_22 = V_5;
		return L_22;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 _returnValue;
	_returnValue = MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		intptr_t L_0 = (intptr_t)__this->___m_Ptr_0;
		uint64_t L_1;
		L_1 = MeshData_GetIndexDataSize_mC7D4DB52A49B547CC336CA29021E59DD5EDAA00C(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)L_2);
		uint64_t L_3 = V_0;
		uint64_t L_4 = V_1;
		V_3 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_3%(uint64_t)(int64_t)L_4))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		uint64_t L_6 = V_0;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_7);
		uint64_t L_9 = V_1;
		uint64_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral121FF5564E1B93612CC7A3748FAD95C919EF04E2)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68C1CA2959BA9A4A0F4FC3A15F854C304C716D2C)), L_8, L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_RuntimeMethod_var)));
	}

IL_0040:
	{
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_14/(uint64_t)(int64_t)L_15));
		intptr_t L_16 = (intptr_t)__this->___m_Ptr_0;
		intptr_t L_17;
		L_17 = MeshData_GetIndexDataPtr_mC3662C797B24BDD967595C63AA6AB9DBB8B9F02A(L_16, NULL);
		void* L_18;
		L_18 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_17, NULL);
		uint64_t L_19 = V_2;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_20;
		L_20 = ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_18, ((int32_t)L_19), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_20;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_21 = V_4;
		V_5 = L_21;
		goto IL_0065;
	}

IL_0065:
	{
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_22 = V_5;
		return L_22;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 _returnValue;
	_returnValue = MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector2>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___0_stream, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_stream;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_stream;
		int32_t L_2;
		L_2 = MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F(__this, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4;
		L_4 = MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F(__this, NULL);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		int32_t L_7 = ___0_stream;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CF91F6B7DE6325C51CD043CCC47AFED4D93DDFE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), L_6, L_9, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_RuntimeMethod_var)));
	}

IL_003e:
	{
		intptr_t L_12 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_13 = ___0_stream;
		uint64_t L_14;
		L_14 = MeshData_GetVertexDataSize_mC9EEED84721B54917210824BF204CCF4C1CE774D(L_12, L_13, NULL);
		V_0 = L_14;
		int32_t L_15;
		L_15 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)L_15);
		uint64_t L_16 = V_0;
		uint64_t L_17 = V_1;
		V_4 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_16%(uint64_t)(int64_t)L_17))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		uint64_t L_19 = V_0;
		uint64_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_20);
		uint64_t L_22 = V_1;
		uint64_t L_23 = L_22;
		RuntimeObject* L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_23);
		String_t* L_25;
		L_25 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AEE74398EBD8002DAB30FB04C4295D7A22DA0FB)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9322B0066DF9816B83486A4449B3C467CE58EB78)), L_21, L_24, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_RuntimeMethod_var)));
	}

IL_0080:
	{
		uint64_t L_27 = V_0;
		uint64_t L_28 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_27/(uint64_t)(int64_t)L_28));
		intptr_t L_29 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_30 = ___0_stream;
		intptr_t L_31;
		L_31 = MeshData_GetVertexDataPtr_mFEE366C279531E7664A0D373C29BFA561C3EC2BE(L_29, L_30, NULL);
		void* L_32;
		L_32 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_31, NULL);
		uint64_t L_33 = V_2;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_34;
		L_34 = ((  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_32, ((int32_t)L_33), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_5 = L_34;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_35 = V_5;
		V_6 = L_35;
		goto IL_00a6;
	}

IL_00a6:
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_36 = V_6;
		return L_36;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_stream, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 _returnValue;
	_returnValue = MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector3>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___0_stream, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_stream;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_stream;
		int32_t L_2;
		L_2 = MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F(__this, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4;
		L_4 = MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F(__this, NULL);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		int32_t L_7 = ___0_stream;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CF91F6B7DE6325C51CD043CCC47AFED4D93DDFE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), L_6, L_9, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_RuntimeMethod_var)));
	}

IL_003e:
	{
		intptr_t L_12 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_13 = ___0_stream;
		uint64_t L_14;
		L_14 = MeshData_GetVertexDataSize_mC9EEED84721B54917210824BF204CCF4C1CE774D(L_12, L_13, NULL);
		V_0 = L_14;
		int32_t L_15;
		L_15 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)L_15);
		uint64_t L_16 = V_0;
		uint64_t L_17 = V_1;
		V_4 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_16%(uint64_t)(int64_t)L_17))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		uint64_t L_19 = V_0;
		uint64_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_20);
		uint64_t L_22 = V_1;
		uint64_t L_23 = L_22;
		RuntimeObject* L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_23);
		String_t* L_25;
		L_25 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AEE74398EBD8002DAB30FB04C4295D7A22DA0FB)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9322B0066DF9816B83486A4449B3C467CE58EB78)), L_21, L_24, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_RuntimeMethod_var)));
	}

IL_0080:
	{
		uint64_t L_27 = V_0;
		uint64_t L_28 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_27/(uint64_t)(int64_t)L_28));
		intptr_t L_29 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_30 = ___0_stream;
		intptr_t L_31;
		L_31 = MeshData_GetVertexDataPtr_mFEE366C279531E7664A0D373C29BFA561C3EC2BE(L_29, L_30, NULL);
		void* L_32;
		L_32 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_31, NULL);
		uint64_t L_33 = V_2;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_34;
		L_34 = ((  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_32, ((int32_t)L_33), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_5 = L_34;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_35 = V_5;
		V_6 = L_35;
		goto IL_00a6;
	}

IL_00a6:
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_36 = V_6;
		return L_36;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_AdjustorThunk (RuntimeObject* __this, int32_t ___0_stream, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD _returnValue;
	_returnValue = MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEFA7495BC311061070C4F7A74B30B17D1409A52A_gshared_inline (ArraySegment_1_t65B87FA3EC4645A25DB9BD910F6C1D0DFDC0CA8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m068C5A0C29ECCA9C2BB518A22E24A2A2449EB7E6_gshared_inline (ArraySegment_1_tA3BD93FAEE1FE0F48E842711D3C2912BF88AF938* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m133EAD8C7E80DED1D773E5C6256837036A70D729_gshared_inline (ArraySegment_1_tDF9D60014CDC092888FBB1053ADED786C59295C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m5B51AD3E11224CCA5E3B9C3363454A1782F1A17C_gshared_inline (ArraySegment_1_t88C3E2DB3B02C90A7EC53F56523AEB492CE37954* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mD88C16E4667225330739C8849FBC96C53DB6CD93_gshared_inline (ArraySegment_1_t163026EDA3498BDE7CC44751019A1391F389B986* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mF3CA0A5D2BAB604E572BA9D970DB4484BA4EACFC_gshared_inline (ArraySegment_1_t2FA9B4D933D418A09892AED75206E756418BF6B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m14F4C3244AFF7332D7FD7AE0F83CF662A047ECEA_gshared_inline (ArraySegment_1_t739173E22C53D57835C95C387989DD3F2246E2B0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mD360DCD6B4E6B96E20BB2D11AB63329F1F432414_gshared_inline (ArraySegment_1_t1CC13903333A6C11857C0AB44EC55014020B70D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
