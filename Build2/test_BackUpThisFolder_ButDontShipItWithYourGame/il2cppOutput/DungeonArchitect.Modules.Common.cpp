#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// DungeonArchitect.Utils.BlackboardDatabase`1<System.Int32>
struct BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72;
// DungeonArchitect.Utils.BlackboardDatabase`1<DungeonArchitect.IntVector>
struct BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260;
// DungeonArchitect.Utils.BlackboardDatabase`1<System.Object>
struct BlackboardDatabase_1_t09F6454F6C2310FE06166804222966EC166CD343;
// DungeonArchitect.Utils.BlackboardDatabase`1<System.Single>
struct BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355;
// DungeonArchitect.Utils.BlackboardDatabase`1<System.String>
struct BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE;
// DungeonArchitect.Utils.BlackboardDatabase`1<UnityEngine.Vector3>
struct BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,DungeonArchitect.IntVector>
struct Dictionary_2_t4EFD36FBAC3CE8907419DC7FD510E34E240B2CAE;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>
struct Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector3>
struct Dictionary_2_t1B115DB96F2674765975721520F73253084A610E;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material>
struct Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Texture2D>
struct IEqualityComparer_1_tC05EAF66E427D27BEBA72FA6B993A30B6464467F;
// DungeonArchitect.Utils.Noise.INoisePolicy`1<UnityEngine.Vector2>
struct INoisePolicy_1_t4446B864A5B45CDF90D0712C48D0C8F1A886FF76;
// DungeonArchitect.Utils.Noise.INoiseTable`1<UnityEngine.Vector2>
struct INoiseTable_1_t0EF3CA4865E448FF674F805B29D565A4D4C67EEF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.ScriptableObject>
struct KeyCollection_t97C98996DB45DEE36E950BFD56A9757250A5D214;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Texture2D,UnityEngine.Material>
struct KeyCollection_t6E8C07159332DBDA6BFF30084A74FCC8DEC22DD9;
// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Int32>
struct KeyValueDataEntryTyped_1_t926733662F9457B69186F31B8D775EAD0B7CBC24;
// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Object>
struct KeyValueDataEntryTyped_1_tCE90DB2C62E2D77C3065A7093C86B97BC8CC0F79;
// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Single>
struct KeyValueDataEntryTyped_1_t23531D79A61AA95166CD0D5C47D512247C48B04A;
// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.String>
struct KeyValueDataEntryTyped_1_tEC931C0A3739280EBAE394F1352A8EEF9B1D3A5B;
// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector2>
struct KeyValueDataEntryTyped_1_tEF89771FAEE3C5FD23D60936C4666F795CC4A235;
// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector3>
struct KeyValueDataEntryTyped_1_tC98A9344D6A8D17B57DAC6EBDB2631B1AF9FF5D3;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<DungeonArchitect.IntVector>
struct List_1_t72F81508323A323FA6727DCAE9E4209241B62383;
// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryFloat>
struct List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228;
// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryInt>
struct List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F;
// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryString>
struct List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4;
// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector2>
struct List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52;
// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector3>
struct List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// DungeonArchitect.Utils.Noise.NoiseTable`1<UnityEngine.Vector2>
struct NoiseTable_1_t1740665690C0FA1E4DC95C3167D7AD3AE46F1534;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.ScriptableObject>
struct ValueCollection_t1F3B0ECBA36F1B4EC216966363EB52D115020AA3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Texture2D,UnityEngine.Material>
struct ValueCollection_t73DD4015FCA66EB8F9A194F03907DE944922F0E3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.ScriptableObject>[]
struct EntryU5BU5D_tE250A82199FCC20A227D390E2C50AEF154091407;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Texture2D,UnityEngine.Material>[]
struct EntryU5BU5D_tFCBA6D2529C8280AFC255D7615C26D7E5695B247;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// DungeonArchitect.DebugTextItem[]
struct DebugTextItemU5BU5D_tCA2BEDD551026E9957BBE9DC6744FB2CB1950573;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// DungeonArchitect.IntVector[]
struct IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440;
// DungeonArchitect.Utils.KeyValueDataEntryFloat[]
struct KeyValueDataEntryFloatU5BU5D_t2E7D1E9D8D1123994A08B9C98114614D9FC2AB28;
// DungeonArchitect.Utils.KeyValueDataEntryInt[]
struct KeyValueDataEntryIntU5BU5D_tB1E4AE3F4486F8B9B414A0FE88B25C286643F9B1;
// DungeonArchitect.Utils.KeyValueDataEntryString[]
struct KeyValueDataEntryStringU5BU5D_tCE8782698DC8ECE7D5A16AE60CE978CAE5F73D5E;
// DungeonArchitect.Utils.KeyValueDataEntryVector2[]
struct KeyValueDataEntryVector2U5BU5D_t52D55E14FAF90C04C973AF035C71BCC9BB18B0A0;
// DungeonArchitect.Utils.KeyValueDataEntryVector3[]
struct KeyValueDataEntryVector3U5BU5D_t96D43E430CB1CFEEC33152391A80D2DF0F60C96F;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// DungeonArchitect.Utils.Blackboard
struct Blackboard_t02618F4A3DD340B66759F75B766D598574968BAA;
// DungeonArchitect.Utils.ColorUtils
struct ColorUtils_t2993A2C3663CE1692C5ADFE372232051A8847335;
// DungeonArchitect.Utils.DebugDrawUtils
struct DebugDrawUtils_t5FA8D211C5224051E8466C482D924791216E6CF1;
// DungeonArchitect.DebugText3D
struct DebugText3D_tA14636838033F9C40AE5785508373252FDA18ABC;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// DungeonArchitect.Utils.Noise.GradientNoisePolicy
struct GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2;
// DungeonArchitect.Utils.Noise.GradientNoiseTable
struct GradientNoiseTable_t80B9C4A113191141F8ADB168B53969689475F448;
// DungeonArchitect.Utils.InstanceCache
struct InstanceCache_tEE9B6C7A5C35B1F8A07B42695DD9E97BD2984EE8;
// DungeonArchitect.Utils.KeyValueData
struct KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432;
// DungeonArchitect.Utils.KeyValueDataEntryBase
struct KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A;
// DungeonArchitect.Utils.KeyValueDataEntryFloat
struct KeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA;
// DungeonArchitect.Utils.KeyValueDataEntryInt
struct KeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9;
// DungeonArchitect.Utils.KeyValueDataEntryString
struct KeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486;
// DungeonArchitect.Utils.KeyValueDataEntryVector2
struct KeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29;
// DungeonArchitect.Utils.KeyValueDataEntryVector3
struct KeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// DungeonArchitect.Utils.MathUtils
struct MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703;
// DungeonArchitect.Utils.Matrix
struct Matrix_tFFF54FC76C9A8485DF75E14044525A1404BB1E76;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// DungeonArchitect.MetaAttribute
struct MetaAttribute_t5CFD48939E5E6B8F92C83270E16CC1EA4486FB61;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// DungeonArchitect.Utils.ObjectUtils
struct ObjectUtils_tADADCC1C6D4F0513EEEC290F6CF60A7A5DC71931;
// DungeonArchitect.Utils.PMRandom
struct PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// DungeonArchitect.Utils.SmoothValue
struct SmoothValue_t01914EB63A259D445CB7BE6A2CDDC5E34CFFC82B;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// DungeonArchitect.Utils.TexturedMaterialInstances
struct TexturedMaterialInstances_tEE0A7146031D97130A99B05904E497E75900CCCF;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INoiseTable_1_t0EF3CA4865E448FF674F805B29D565A4D4C67EEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t72F81508323A323FA6727DCAE9E4209241B62383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* BlackboardDatabase_1__ctor_m2EA8C62643DFB4A31FFD8547EAEDD5021E63B01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlackboardDatabase_1__ctor_m60FF6330F5EF69ED9383D06F6981D9D4BCFCF70E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlackboardDatabase_1__ctor_mC873E4E29ED7DD5D6A60117D072223ECB1ACCC5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlackboardDatabase_1__ctor_mDBE6F3297EC557BFADB22F7FBF53A53FBD633459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlackboardDatabase_1__ctor_mF04F2F06CBDC218A82E19C44D158EE7C636E0313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB30F836A8BDAC17BF69A20B7CE09E4CFF8B1F174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m144594753B5C23A1F4BEFC158B2462F689169BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4AF4721BE182AA33E2533F7CA7A171AF8386661E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB4AF0360B46F2BB26142EFD4DAB8C08BC435A698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m07D4477AD6AAE3FB98EFD238E828A9859E4E0C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0A41A10FAABAA6BE6C006A516D263937EE240995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m76643E4AA62180575A2DCB37A1A1436DB736544B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m4627DF5C86AD54583C64DC3BCCF1A682D6EA2B1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5A309BF79F0F65B180CB39E7669AAAF711E95A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m956F620FBADB1DE5785F5249DB1A72684B53FAC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3F979FD92AC985D0AC1B05712F32267ED76CB0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD68561E0EA506F033660C5BCD24B1A15721F4125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m70B24696C6DB7792A277D105AADF97CCCAFBE0A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstanceCache_GetInstance_m4975CAF7B9076D8A44B9362F44536DDC996847E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueDataEntryTyped_1__ctor_m098F34A8E7E57CA2B137A55C3059B32E8DB9747D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueDataEntryTyped_1__ctor_m1CE8BB971A01D85ED638E2F6A396D8D02BC250CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueDataEntryTyped_1__ctor_m81DCC8628C4133CE48F63AE776DB09C5D852FB88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueDataEntryTyped_1__ctor_mD4B01168DAF86042FB69526505DD6EE8C1827B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueDataEntryTyped_1__ctor_mEAA55E0BFCDCC273457CE907040F95EB534B33F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_GetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5BD91C5B3290E371B4B4EB26A257E40B1402551B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_GetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3A717ED4EDCFF2AE51D38E60973DCCDBE2737A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_GetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_TisString_t_m291277BF28D1CDDD756FCB4C2597B43B580E460E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_GetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m53044E46EFC125E3F1EFB71AB829D1E2A84EEEB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_GetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB89606EBD7C45E45BE22223F8D7BF17CBFA65F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_SetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_mFEBBFEE36FD8F78DAFC2776863FFFD75249FCEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_SetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_m8B76ADD21BD257C236DF5C5F3C2F78C3EC3637A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_SetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_m0DBB3026477467215D2F38C2141FA7FF860431D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_SetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_m399117A50E50EEA9EDCB7F136C62A02653317D64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueData_SetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_mD0E4E94FF6AC3B71253AFA37BB3CDF0B6D771CD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mE3A9BA7F7F9C923FDB045F668102A27CF7146160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m3B777FFBB6EDB91CA0315A1670A4E3DD2758021C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2427D00F94769C53E36FAF2BEB46B5165B85B061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2CCCAF47903E6070AC1D85DD293C4A825136B978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3594F0DA9A2356EC1BE06D92A122AC7D4953A063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3BCF517E17EBFF9B5A579310D2016985370F7B27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m62483C26136687F0402FEB8D79733D413EF490E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA658E93876950C19B37BD9BEF004EF1BEFF8A290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MathUtils_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m321167505C8CD6E2E8C0CEAA52C8F1D11D36CD47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NoiseTable_1__ctor_m882520BCB75C40877D994FBCCA4CF4128D959074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD175B5A126847C9C5DEC31BCA69DB8740EC0DF83 
{
};

// DungeonArchitect.Utils.BlackboardDatabase`1<System.Int32>
struct BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72  : public RuntimeObject
{
	// T DungeonArchitect.Utils.BlackboardDatabase`1::defaultValue
	int32_t ___defaultValue_0;
	// System.Collections.Generic.Dictionary`2<System.String,T> DungeonArchitect.Utils.BlackboardDatabase`1::database
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___database_1;
};

// DungeonArchitect.Utils.BlackboardDatabase`1<System.Single>
struct BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355  : public RuntimeObject
{
	// T DungeonArchitect.Utils.BlackboardDatabase`1::defaultValue
	float ___defaultValue_0;
	// System.Collections.Generic.Dictionary`2<System.String,T> DungeonArchitect.Utils.BlackboardDatabase`1::database
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ___database_1;
};

// DungeonArchitect.Utils.BlackboardDatabase`1<System.String>
struct BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE  : public RuntimeObject
{
	// T DungeonArchitect.Utils.BlackboardDatabase`1::defaultValue
	String_t* ___defaultValue_0;
	// System.Collections.Generic.Dictionary`2<System.String,T> DungeonArchitect.Utils.BlackboardDatabase`1::database
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___database_1;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>
struct Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE250A82199FCC20A227D390E2C50AEF154091407* ____entries_1;
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
	KeyCollection_t97C98996DB45DEE36E950BFD56A9757250A5D214* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1F3B0ECBA36F1B4EC216966363EB52D115020AA3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material>
struct Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFCBA6D2529C8280AFC255D7615C26D7E5695B247* ____entries_1;
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
	KeyCollection_t6E8C07159332DBDA6BFF30084A74FCC8DEC22DD9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t73DD4015FCA66EB8F9A194F03907DE944922F0E3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.IntVector>
struct List_1_t72F81508323A323FA6727DCAE9E4209241B62383  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryFloat>
struct List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValueDataEntryFloatU5BU5D_t2E7D1E9D8D1123994A08B9C98114614D9FC2AB28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryInt>
struct List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValueDataEntryIntU5BU5D_tB1E4AE3F4486F8B9B414A0FE88B25C286643F9B1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryString>
struct List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValueDataEntryStringU5BU5D_tCE8782698DC8ECE7D5A16AE60CE978CAE5F73D5E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector2>
struct List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValueDataEntryVector2U5BU5D_t52D55E14FAF90C04C973AF035C71BCC9BB18B0A0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector3>
struct List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValueDataEntryVector3U5BU5D_t96D43E430CB1CFEEC33152391A80D2DF0F60C96F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// DungeonArchitect.Utils.Noise.NoiseTable`1<UnityEngine.Vector2>
struct NoiseTable_1_t1740665690C0FA1E4DC95C3167D7AD3AE46F1534  : public RuntimeObject
{
	// System.Int32 DungeonArchitect.Utils.Noise.NoiseTable`1::size
	int32_t ___size_0;
	// System.Collections.Generic.List`1<T> DungeonArchitect.Utils.Noise.NoiseTable`1::data
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___data_1;
	// DungeonArchitect.Utils.Noise.INoisePolicy`1<T> DungeonArchitect.Utils.Noise.NoiseTable`1::noisePolicy
	RuntimeObject* ___noisePolicy_2;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// DungeonArchitect.Utils.Blackboard
struct Blackboard_t02618F4A3DD340B66759F75B766D598574968BAA  : public RuntimeObject
{
	// DungeonArchitect.Utils.BlackboardDatabase`1<System.Int32> DungeonArchitect.Utils.Blackboard::intEntries
	BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72* ___intEntries_0;
	// DungeonArchitect.Utils.BlackboardDatabase`1<System.Single> DungeonArchitect.Utils.Blackboard::floatEntries
	BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355* ___floatEntries_1;
	// DungeonArchitect.Utils.BlackboardDatabase`1<System.String> DungeonArchitect.Utils.Blackboard::stringEntries
	BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE* ___stringEntries_2;
	// DungeonArchitect.Utils.BlackboardDatabase`1<UnityEngine.Vector3> DungeonArchitect.Utils.Blackboard::vectorEntries
	BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16* ___vectorEntries_3;
	// DungeonArchitect.Utils.BlackboardDatabase`1<DungeonArchitect.IntVector> DungeonArchitect.Utils.Blackboard::intVectorEntries
	BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260* ___intVectorEntries_4;
};

// DungeonArchitect.Utils.ColorUtils
struct ColorUtils_t2993A2C3663CE1692C5ADFE372232051A8847335  : public RuntimeObject
{
};

// DungeonArchitect.Utils.DebugDrawUtils
struct DebugDrawUtils_t5FA8D211C5224051E8466C482D924791216E6CF1  : public RuntimeObject
{
};

// DungeonArchitect.Extensions.DungeonExtensions
struct DungeonExtensions_t24D7F8470AF9578855D414186470C419C2CD09EE  : public RuntimeObject
{
};

// DungeonArchitect.Utils.Noise.GradientNoisePolicy
struct GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2  : public RuntimeObject
{
};

// DungeonArchitect.Utils.InstanceCache
struct InstanceCache_tEE9B6C7A5C35B1F8A07B42695DD9E97BD2984EE8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject> DungeonArchitect.Utils.InstanceCache::instanceByType
	Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* ___instanceByType_0;
};

// DungeonArchitect.Utils.KeyValueData
struct KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432  : public RuntimeObject
{
	// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryFloat> DungeonArchitect.Utils.KeyValueData::dataFloat
	List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228* ___dataFloat_0;
	// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryInt> DungeonArchitect.Utils.KeyValueData::dataInt
	List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F* ___dataInt_1;
	// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryString> DungeonArchitect.Utils.KeyValueData::dataString
	List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4* ___dataString_2;
	// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector3> DungeonArchitect.Utils.KeyValueData::dataVector3
	List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D* ___dataVector3_3;
	// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector2> DungeonArchitect.Utils.KeyValueData::dataVector2
	List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52* ___dataVector2_4;
};

// DungeonArchitect.Utils.KeyValueDataEntryBase
struct KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A  : public RuntimeObject
{
	// System.String DungeonArchitect.Utils.KeyValueDataEntryBase::key
	String_t* ___key_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// DungeonArchitect.Utils.MathUtils
struct MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703  : public RuntimeObject
{
};

// DungeonArchitect.Utils.Matrix
struct Matrix_tFFF54FC76C9A8485DF75E14044525A1404BB1E76  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// DungeonArchitect.Utils.ObjectUtils
struct ObjectUtils_tADADCC1C6D4F0513EEEC290F6CF60A7A5DC71931  : public RuntimeObject
{
};

// DungeonArchitect.Utils.PMRandom
struct PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB  : public RuntimeObject
{
	// System.UInt32 DungeonArchitect.Utils.PMRandom::seed
	uint32_t ___seed_2;
	// System.Random DungeonArchitect.Utils.PMRandom::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_3;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

// RandomExtensions
struct RandomExtensions_t859F2E0502ECBC2FE13851065C6A1BBC45E9CFDA  : public RuntimeObject
{
};

// DungeonArchitect.Utils.SmoothValue
struct SmoothValue_t01914EB63A259D445CB7BE6A2CDDC5E34CFFC82B  : public RuntimeObject
{
	// System.Single DungeonArchitect.Utils.SmoothValue::targetValue
	float ___targetValue_0;
	// System.Single DungeonArchitect.Utils.SmoothValue::currentValue
	float ___currentValue_1;
	// System.Single DungeonArchitect.Utils.SmoothValue::t
	float ___t_2;
	// System.Single DungeonArchitect.Utils.SmoothValue::TimeToArrive
	float ___TimeToArrive_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// DungeonArchitect.Utils.TexturedMaterialInstances
struct TexturedMaterialInstances_tEE0A7146031D97130A99B05904E497E75900CCCF  : public RuntimeObject
{
	// UnityEngine.Shader DungeonArchitect.Utils.TexturedMaterialInstances::shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material> DungeonArchitect.Utils.TexturedMaterialInstances::materialsByTexture
	Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312* ___materialsByTexture_1;
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

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Int32>
struct KeyValueDataEntryTyped_1_t926733662F9457B69186F31B8D775EAD0B7CBC24  : public KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A
{
	// T DungeonArchitect.Utils.KeyValueDataEntryTyped`1::value
	int32_t ___value_1;
};

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Single>
struct KeyValueDataEntryTyped_1_t23531D79A61AA95166CD0D5C47D512247C48B04A  : public KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A
{
	// T DungeonArchitect.Utils.KeyValueDataEntryTyped`1::value
	float ___value_1;
};

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.String>
struct KeyValueDataEntryTyped_1_tEC931C0A3739280EBAE394F1352A8EEF9B1D3A5B  : public KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A
{
	// T DungeonArchitect.Utils.KeyValueDataEntryTyped`1::value
	String_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.ScriptableObject>
struct KeyValuePair_2_t73F9559B324BF8F13699C83C752150FAE21A0900 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ___value_1;
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

// DungeonArchitect.Utils.Noise.GradientNoiseTable
struct GradientNoiseTable_t80B9C4A113191141F8ADB168B53969689475F448  : public NoiseTable_1_t1740665690C0FA1E4DC95C3167D7AD3AE46F1534
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// DungeonArchitect.IntVector
struct IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C 
{
	// System.Int32 DungeonArchitect.IntVector::x
	int32_t ___x_0;
	// System.Int32 DungeonArchitect.IntVector::y
	int32_t ___y_1;
	// System.Int32 DungeonArchitect.IntVector::z
	int32_t ___z_2;
};

// DungeonArchitect.IntVector2
struct IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 
{
	// System.Int32 DungeonArchitect.IntVector2::x
	int32_t ___x_0;
	// System.Int32 DungeonArchitect.IntVector2::y
	int32_t ___y_1;
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

// DungeonArchitect.MetaAttribute
struct MetaAttribute_t5CFD48939E5E6B8F92C83270E16CC1EA4486FB61  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String DungeonArchitect.MetaAttribute::displayText
	String_t* ___displayText_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
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

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
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

// DungeonArchitect.Utils.BlackboardDatabase`1<DungeonArchitect.IntVector>
struct BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260  : public RuntimeObject
{
	// T DungeonArchitect.Utils.BlackboardDatabase`1::defaultValue
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___defaultValue_0;
	// System.Collections.Generic.Dictionary`2<System.String,T> DungeonArchitect.Utils.BlackboardDatabase`1::database
	Dictionary_2_t4EFD36FBAC3CE8907419DC7FD510E34E240B2CAE* ___database_1;
};

// DungeonArchitect.Utils.BlackboardDatabase`1<UnityEngine.Vector3>
struct BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16  : public RuntimeObject
{
	// T DungeonArchitect.Utils.BlackboardDatabase`1::defaultValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultValue_0;
	// System.Collections.Generic.Dictionary`2<System.String,T> DungeonArchitect.Utils.BlackboardDatabase`1::database
	Dictionary_2_t1B115DB96F2674765975721520F73253084A610E* ___database_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.ScriptableObject>
struct Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t73F9559B324BF8F13699C83C752150FAE21A0900 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector2>
struct KeyValueDataEntryTyped_1_tEF89771FAEE3C5FD23D60936C4666F795CC4A235  : public KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A
{
	// T DungeonArchitect.Utils.KeyValueDataEntryTyped`1::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_1;
};

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector3>
struct KeyValueDataEntryTyped_1_tC98A9344D6A8D17B57DAC6EBDB2631B1AF9FF5D3  : public KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A
{
	// T DungeonArchitect.Utils.KeyValueDataEntryTyped`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// DungeonArchitect.Utils.Noise.NoiseTableCell`1<UnityEngine.Vector2>
struct NoiseTableCell_1_t62A92FAD3718DBF86B36D147CA80A553D605A7BF 
{
	// T DungeonArchitect.Utils.Noise.NoiseTableCell`1::N00
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___N00_0;
	// T DungeonArchitect.Utils.Noise.NoiseTableCell`1::N10
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___N10_1;
	// T DungeonArchitect.Utils.Noise.NoiseTableCell`1::N01
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___N01_2;
	// T DungeonArchitect.Utils.Noise.NoiseTableCell`1::N11
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___N11_3;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// DungeonArchitect.DebugTextItem
struct DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B 
{
	// System.String DungeonArchitect.DebugTextItem::message
	String_t* ___message_0;
	// UnityEngine.Vector3 DungeonArchitect.DebugTextItem::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Color DungeonArchitect.DebugTextItem::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of DungeonArchitect.DebugTextItem
struct DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshaled_pinvoke
{
	char* ___message_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of DungeonArchitect.DebugTextItem
struct DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshaled_com
{
	Il2CppChar* ___message_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// DungeonArchitect.Utils.DungeonUID
struct DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Guid DungeonArchitect.Utils.DungeonUID::Guid
			Guid_t ___Guid_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Guid_t ___Guid_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 DungeonArchitect.Utils.DungeonUID::A
			int32_t ___A_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___A_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___B_2_OffsetPadding[4];
			// System.Int32 DungeonArchitect.Utils.DungeonUID::B
			int32_t ___B_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___B_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___B_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___C_3_OffsetPadding[8];
			// System.Int32 DungeonArchitect.Utils.DungeonUID::C
			int32_t ___C_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___C_3_OffsetPadding_forAlignmentOnly[8];
			int32_t ___C_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___D_4_OffsetPadding[12];
			// System.Int32 DungeonArchitect.Utils.DungeonUID::D
			int32_t ___D_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___D_4_OffsetPadding_forAlignmentOnly[12];
			int32_t ___D_4_forAlignmentOnly;
		};
	};
};

// DungeonArchitect.Utils.KeyValueDataEntryFloat
struct KeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA  : public KeyValueDataEntryTyped_1_t23531D79A61AA95166CD0D5C47D512247C48B04A
{
};

// DungeonArchitect.Utils.KeyValueDataEntryInt
struct KeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9  : public KeyValueDataEntryTyped_1_t926733662F9457B69186F31B8D775EAD0B7CBC24
{
};

// DungeonArchitect.Utils.KeyValueDataEntryString
struct KeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486  : public KeyValueDataEntryTyped_1_tEC931C0A3739280EBAE394F1352A8EEF9B1D3A5B
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// DungeonArchitect.Rectangle
struct Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E 
{
	// DungeonArchitect.IntVector DungeonArchitect.Rectangle::location
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___location_0;
	// DungeonArchitect.IntVector DungeonArchitect.Rectangle::size
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___size_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// DungeonArchitect.Utils.KeyValueDataEntryVector2
struct KeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29  : public KeyValueDataEntryTyped_1_tEF89771FAEE3C5FD23D60936C4666F795CC4A235
{
};

// DungeonArchitect.Utils.KeyValueDataEntryVector3
struct KeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F  : public KeyValueDataEntryTyped_1_tC98A9344D6A8D17B57DAC6EBDB2631B1AF9FF5D3
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DungeonArchitect.DebugText3D
struct DebugText3D_tA14636838033F9C40AE5785508373252FDA18ABC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DungeonArchitect.DebugTextItem[] DungeonArchitect.DebugText3D::items
	DebugTextItemU5BU5D_tCA2BEDD551026E9957BBE9DC6744FB2CB1950573* ___items_4;
};

// <Module>

// <Module>

// DungeonArchitect.Utils.BlackboardDatabase`1<System.Int32>

// DungeonArchitect.Utils.BlackboardDatabase`1<System.Int32>

// DungeonArchitect.Utils.BlackboardDatabase`1<System.Single>

// DungeonArchitect.Utils.BlackboardDatabase`1<System.Single>

// DungeonArchitect.Utils.BlackboardDatabase`1<System.String>

// DungeonArchitect.Utils.BlackboardDatabase`1<System.String>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>

// System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material>

// System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<DungeonArchitect.IntVector>
struct List_1_t72F81508323A323FA6727DCAE9E4209241B62383_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.IntVector>

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryFloat>
struct List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValueDataEntryFloatU5BU5D_t2E7D1E9D8D1123994A08B9C98114614D9FC2AB28* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryFloat>

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryInt>
struct List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValueDataEntryIntU5BU5D_tB1E4AE3F4486F8B9B414A0FE88B25C286643F9B1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryInt>

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryString>
struct List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValueDataEntryStringU5BU5D_tCE8782698DC8ECE7D5A16AE60CE978CAE5F73D5E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryString>

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector2>
struct List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValueDataEntryVector2U5BU5D_t52D55E14FAF90C04C973AF035C71BCC9BB18B0A0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector2>

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector3>
struct List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValueDataEntryVector3U5BU5D_t96D43E430CB1CFEEC33152391A80D2DF0F60C96F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector3>

// DungeonArchitect.Utils.Noise.NoiseTable`1<UnityEngine.Vector2>

// DungeonArchitect.Utils.Noise.NoiseTable`1<UnityEngine.Vector2>

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Attribute

// System.Attribute

// DungeonArchitect.Utils.Blackboard

// DungeonArchitect.Utils.Blackboard

// DungeonArchitect.Utils.ColorUtils

// DungeonArchitect.Utils.ColorUtils

// DungeonArchitect.Utils.DebugDrawUtils

// DungeonArchitect.Utils.DebugDrawUtils

// DungeonArchitect.Extensions.DungeonExtensions

// DungeonArchitect.Extensions.DungeonExtensions

// DungeonArchitect.Utils.Noise.GradientNoisePolicy

// DungeonArchitect.Utils.Noise.GradientNoisePolicy

// DungeonArchitect.Utils.InstanceCache

// DungeonArchitect.Utils.InstanceCache

// DungeonArchitect.Utils.KeyValueData

// DungeonArchitect.Utils.KeyValueData

// DungeonArchitect.Utils.KeyValueDataEntryBase

// DungeonArchitect.Utils.KeyValueDataEntryBase

// System.MarshalByRefObject

// System.MarshalByRefObject

// DungeonArchitect.Utils.MathUtils
struct MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_StaticFields
{
	// System.Int32 DungeonArchitect.Utils.MathUtils::INVALID_LOCATION
	int32_t ___INVALID_LOCATION_0;
};

// DungeonArchitect.Utils.MathUtils

// DungeonArchitect.Utils.Matrix

// DungeonArchitect.Utils.Matrix

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// DungeonArchitect.Utils.ObjectUtils

// DungeonArchitect.Utils.ObjectUtils

// DungeonArchitect.Utils.PMRandom

// DungeonArchitect.Utils.PMRandom

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// RandomExtensions

// RandomExtensions

// DungeonArchitect.Utils.SmoothValue

// DungeonArchitect.Utils.SmoothValue

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// DungeonArchitect.Utils.TexturedMaterialInstances

// DungeonArchitect.Utils.TexturedMaterialInstances

// System.ValueType

// System.ValueType

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Int32>

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Int32>

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Single>

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Single>

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.String>

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.String>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.ScriptableObject>

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.ScriptableObject>

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

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// DungeonArchitect.Utils.Noise.GradientNoiseTable

// DungeonArchitect.Utils.Noise.GradientNoiseTable

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// DungeonArchitect.IntVector
struct IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_StaticFields
{
	// DungeonArchitect.IntVector DungeonArchitect.IntVector::Zero
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___Zero_3;
};

// DungeonArchitect.IntVector

// DungeonArchitect.IntVector2
struct IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7_StaticFields
{
	// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::Zero
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___Zero_2;
};

// DungeonArchitect.IntVector2

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// DungeonArchitect.MetaAttribute

// DungeonArchitect.MetaAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.UInt32

// System.UInt32

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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

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

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector3Int

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

// DungeonArchitect.Utils.BlackboardDatabase`1<DungeonArchitect.IntVector>

// DungeonArchitect.Utils.BlackboardDatabase`1<DungeonArchitect.IntVector>

// DungeonArchitect.Utils.BlackboardDatabase`1<UnityEngine.Vector3>

// DungeonArchitect.Utils.BlackboardDatabase`1<UnityEngine.Vector3>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.ScriptableObject>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.ScriptableObject>

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector2>

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector2>

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector3>

// DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector3>

// DungeonArchitect.Utils.Noise.NoiseTableCell`1<UnityEngine.Vector2>

// DungeonArchitect.Utils.Noise.NoiseTableCell`1<UnityEngine.Vector2>

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// UnityEngine.Bounds

// UnityEngine.Bounds

// DungeonArchitect.DebugTextItem

// DungeonArchitect.DebugTextItem

// DungeonArchitect.Utils.DungeonUID
struct DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_StaticFields
{
	// DungeonArchitect.Utils.DungeonUID DungeonArchitect.Utils.DungeonUID::Empty
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___Empty_5;
};

// DungeonArchitect.Utils.DungeonUID

// DungeonArchitect.Utils.KeyValueDataEntryFloat

// DungeonArchitect.Utils.KeyValueDataEntryFloat

// DungeonArchitect.Utils.KeyValueDataEntryInt

// DungeonArchitect.Utils.KeyValueDataEntryInt

// DungeonArchitect.Utils.KeyValueDataEntryString

// DungeonArchitect.Utils.KeyValueDataEntryString

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// DungeonArchitect.Rectangle

// DungeonArchitect.Rectangle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Component

// UnityEngine.Component

// DungeonArchitect.Utils.KeyValueDataEntryVector2

// DungeonArchitect.Utils.KeyValueDataEntryVector2

// DungeonArchitect.Utils.KeyValueDataEntryVector3

// DungeonArchitect.Utils.KeyValueDataEntryVector3

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

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

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// DungeonArchitect.DebugText3D

// DungeonArchitect.DebugText3D
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// DungeonArchitect.IntVector[]
struct IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440  : public RuntimeArray
{
	ALIGN_FIELD (8) IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C m_Items[1];

	inline IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
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


// System.Void System.Collections.Generic.List`1<DungeonArchitect.IntVector>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3594F0DA9A2356EC1BE06D92A122AC7D4953A063_gshared (List_1_t72F81508323A323FA6727DCAE9E4209241B62383* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.IntVector>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_gshared_inline (List_1_t72F81508323A323FA6727DCAE9E4209241B62383* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<DungeonArchitect.IntVector>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* List_1_ToArray_m3B777FFBB6EDB91CA0315A1670A4E3DD2758021C_gshared (List_1_t72F81508323A323FA6727DCAE9E4209241B62383* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlackboardDatabase_1__ctor_mC873E4E29ED7DD5D6A60117D072223ECB1ACCC5A_gshared (BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72* __this, int32_t ___0_defaultValue, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlackboardDatabase_1__ctor_mF04F2F06CBDC218A82E19C44D158EE7C636E0313_gshared (BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355* __this, float ___0_defaultValue, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlackboardDatabase_1__ctor_m1A03DF1CD063E40ECC857C282B3A37FA83C163FD_gshared (BlackboardDatabase_1_t09F6454F6C2310FE06166804222966EC166CD343* __this, RuntimeObject* ___0_defaultValue, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<UnityEngine.Vector3>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlackboardDatabase_1__ctor_m60FF6330F5EF69ED9383D06F6981D9D4BCFCF70E_gshared (BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_defaultValue, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<DungeonArchitect.IntVector>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlackboardDatabase_1__ctor_mDBE6F3297EC557BFADB22F7FBF53A53FBD633459_gshared (BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_defaultValue, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryTyped_1__ctor_m81DCC8628C4133CE48F63AE776DB09C5D852FB88_gshared (KeyValueDataEntryTyped_1_t23531D79A61AA95166CD0D5C47D512247C48B04A* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryTyped_1__ctor_mD4B01168DAF86042FB69526505DD6EE8C1827B4C_gshared (KeyValueDataEntryTyped_1_t926733662F9457B69186F31B8D775EAD0B7CBC24* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryTyped_1__ctor_m87C0B1B8DAE02344A7B4D023386F12A0FB0D26A1_gshared (KeyValueDataEntryTyped_1_tCE90DB2C62E2D77C3065A7093C86B97BC8CC0F79* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryTyped_1__ctor_mEAA55E0BFCDCC273457CE907040F95EB534B33F7_gshared (KeyValueDataEntryTyped_1_tC98A9344D6A8D17B57DAC6EBDB2631B1AF9FF5D3* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryTyped_1__ctor_m1CE8BB971A01D85ED638E2F6A396D8D02BC250CB_gshared (KeyValueDataEntryTyped_1_tEF89771FAEE3C5FD23D60936C4666F795CC4A235* __this, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<System.Object,System.Single>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetValue_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m11EC0DEB268DE685BB00F3081CF0E26DA6068086_gshared (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_data, String_t* ___1_key, float* ___2_value, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<System.Object,System.Int32>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetValue_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEDD49C611BD4824EE4515C336B21314D68BA43A9_gshared (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_data, String_t* ___1_key, int32_t* ___2_value, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<System.Object,System.Object>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetValue_TisRuntimeObject_TisRuntimeObject_m13A253E2452CEB73ECFB38B7C21C3835E6940637_gshared (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_data, String_t* ___1_key, RuntimeObject** ___2_value, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<System.Object,UnityEngine.Vector3>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetValue_TisRuntimeObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C07E6227B47902165DE113012F51DD9872A04F9_gshared (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_data, String_t* ___1_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_value, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<System.Object,UnityEngine.Vector2>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetValue_TisRuntimeObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD01CE4BE369842E9BFBDCCF94E48ABD962650FBE_gshared (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_data, String_t* ___1_key, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.KeyValueData::SetValue<System.Object>(System.Collections.Generic.List`1<T>,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueData_SetValue_TisRuntimeObject_mDBAA369B890270B3668738678ED38BDB9D9004C3_gshared (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_data, String_t* ___1_key, RuntimeObject* ___2_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.MathUtils::Shuffle<System.Int32>(System.Collections.Generic.List`1<T>,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtils_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m321167505C8CD6E2E8C0CEAA52C8F1D11D36CD47_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_Array, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___1_Random, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.Noise.NoiseTable`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseTable_1__ctor_m882520BCB75C40877D994FBCCA4CF4128D959074_gshared (NoiseTable_1_t1740665690C0FA1E4DC95C3167D7AD3AE46F1534* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single RandomExtensions::NextFloat(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RandomExtensions_NextFloat_m83B4036CA53E0F8F86D3A8D8ABC1C564D0673A67 (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___0_random, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.IntVector::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector__ctor_mF9D7D9DF8D8C67A59A97CCEAF12C3AEBB4EA3EB9 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.IntVector::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.IntVector::Set(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector_Set_m03BE22F808B94FC6653255C109AF88828231C0BC (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.IntVector::DistanceSq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntVector_DistanceSq_mE69F7D9A5CD4CAC84BCBB905F13C2D9AE41A3D75 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.IntVector::Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntVector_Distance_mB8B714427E4FC971C93989937D964A6584FEA20D (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.IntVector::ToVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IntVector_ToVector3_m9DF4AE99107BC7505A2C50BD51B5E7D17A02CEF0 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.IntVector::op_Equality(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntVector_op_Equality_mC197D9F3999EC6EB863E6951D1EB514387FDF4D1 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_b, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.IntVector::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntVector_Equals_m8C3D35F5DC3CB668216F7A6EFC77AE6D843D6C06 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.IntVector::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntVector_GetHashCode_mB319BBE5886636E56617A0D52F8608F78E276142 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String DungeonArchitect.IntVector::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntVector_ToString_m74EF6016601F164276CAB4B03A044B6A28D3F6E7 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.IntVector2::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector2__ctor_m9DC0909A473D1B3FC7C6CE9C559E1BBE96FC4EDB (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.IntVector2::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector2__ctor_mD3BAEE651E799C5D5F4BAE76D31BFAA7ABD176E0 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.IntVector2::Set(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector2_Set_mE26F062C6B2D80246361F63629BEC453C10BAD1B (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.IntVector2::ManhattanDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntVector2_ManhattanDistance_mD47F8C683AF99F22ADC8F17045A70AF787984B28 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.IntVector2::DistanceSq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntVector2_DistanceSq_m40CDF1F0F310385E8A88076B8ED057D8A3349264 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___0_value, const RuntimeMethod* method) ;
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::Abs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_Abs_mEF8DCDDE8B8342A43CA5B5D27296F15E147C59F8 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.IntVector2::Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntVector2_Distance_mA44970D4272358702A901C9121C6C3980A62A0C5 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.IntVector2::ToVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 IntVector2_ToVector2_mC788E5A2D1A9368D56D0B38B2101B3857D212A65 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.IntVector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntVector2_Equals_m0D9F4BC3C1B6642B6DDB47B317E0F6847F121A63 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.IntVector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntVector2_GetHashCode_mAED9AFE6AB446B83104C1487877B66BAEE66E283 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Rectangle::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m414C7059151B811D6B4A62521D618023D7EC25AA (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, int32_t ___0_x, int32_t ___1_z, int32_t ___2_width, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Rectangle::.ctor(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m3AC35F3E815A8A14017F485B942EC82A65BB78C3 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_location, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_size, const RuntimeMethod* method) ;
// DungeonArchitect.IntVector DungeonArchitect.Rectangle::get_Location()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_inline (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Rectangle::set_Location(DungeonArchitect.IntVector)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rectangle_set_Location_m6BBC646F493116B7888B219B2F48B0E634836185_inline (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_value, const RuntimeMethod* method) ;
// DungeonArchitect.IntVector DungeonArchitect.Rectangle::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259_inline (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Rectangle::set_Size(DungeonArchitect.IntVector)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rectangle_set_Size_m49F71D3947C8EC86A65E51B75BCB096F54839CCB_inline (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_value, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Rectangle::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Rectangle::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Rectangle::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Rectangle::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Rectangle::get_Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Left_m672D8FFD32EB6D21587CB080377B3718C2A21B65 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Rectangle::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Right_m98757D70C3E68600BFB4EEC8027A0C84A7BA9E15 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Rectangle::get_Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Back_m0FA2F43B6730EDF3B628BF7F9A6FD7A60BE14CAF (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Rectangle::get_Front()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Front_mC4A231B447BD7FF3CFF3F79DEBFB45E2195D52D8 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Rectangle::SetY(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_SetY_m462D23FE3D286760964D0026ADE94F7E087F26D9 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, int32_t ___0_y, const RuntimeMethod* method) ;
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Division(DungeonArchitect.IntVector,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Division_m42808544BF5609C5B3233762D1C74E88B3ACBB02 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Addition(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Addition_mDD66816374D94E99E89A052A5A1B6C78249273B6 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_b, const RuntimeMethod* method) ;
// DungeonArchitect.IntVector DungeonArchitect.Rectangle::Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_Center_m769823203C701E04DBD55D9E8677E3A7463A1932 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Rectangle::ToVector3(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rectangle_ToVector3_mB46F97388D20693E0BCDC85F9676117AAFD5A9F9 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_iv, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Rectangle::CenterF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rectangle_CenterF_mB7C46A685881BA29734F1EB9DE38B3228FCAC94B (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Rectangle::Contains(DungeonArchitect.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Contains_mB9B11622C141BF5982301F516ED135BC1A81D2D7 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_rect, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Rectangle::Contains(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Contains_m81F7B9823E19D05E59C7891D91ECD6BD703A03A8 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, int32_t ___0_x, int32_t ___1_z, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Rectangle::Contains(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Contains_m5B8120D7B31834142751391496AF2567F000ECFF (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_Point, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Rectangle::IntersectsWith(DungeonArchitect.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_IntersectsWith_m7BDC1B9CD435B5FF1460588F088E90B72CDB86D8 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_rect, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.IntVector>::.ctor()
inline void List_1__ctor_m3594F0DA9A2356EC1BE06D92A122AC7D4953A063 (List_1_t72F81508323A323FA6727DCAE9E4209241B62383* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t72F81508323A323FA6727DCAE9E4209241B62383*, const RuntimeMethod*))List_1__ctor_m3594F0DA9A2356EC1BE06D92A122AC7D4953A063_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.IntVector>::Add(T)
inline void List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_inline (List_1_t72F81508323A323FA6727DCAE9E4209241B62383* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t72F81508323A323FA6727DCAE9E4209241B62383*, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C, const RuntimeMethod*))List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<DungeonArchitect.IntVector>::ToArray()
inline IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* List_1_ToArray_m3B777FFBB6EDB91CA0315A1670A4E3DD2758021C (List_1_t72F81508323A323FA6727DCAE9E4209241B62383* __this, const RuntimeMethod* method)
{
	return ((  IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* (*) (List_1_t72F81508323A323FA6727DCAE9E4209241B62383*, const RuntimeMethod*))List_1_ToArray_m3B777FFBB6EDB91CA0315A1670A4E3DD2758021C_gshared)(__this, method);
}
// DungeonArchitect.IntVector[] DungeonArchitect.Rectangle::GetBorderPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* Rectangle_GetBorderPoints_mD293F309F288D7B5E3AE3E4FDA774F0734E17116 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Inequality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163 (Guid_t ___0_a, Guid_t ___1_b, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<System.Int32>::.ctor(T)
inline void BlackboardDatabase_1__ctor_mC873E4E29ED7DD5D6A60117D072223ECB1ACCC5A (BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72* __this, int32_t ___0_defaultValue, const RuntimeMethod* method)
{
	((  void (*) (BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72*, int32_t, const RuntimeMethod*))BlackboardDatabase_1__ctor_mC873E4E29ED7DD5D6A60117D072223ECB1ACCC5A_gshared)(__this, ___0_defaultValue, method);
}
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<System.Single>::.ctor(T)
inline void BlackboardDatabase_1__ctor_mF04F2F06CBDC218A82E19C44D158EE7C636E0313 (BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355* __this, float ___0_defaultValue, const RuntimeMethod* method)
{
	((  void (*) (BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355*, float, const RuntimeMethod*))BlackboardDatabase_1__ctor_mF04F2F06CBDC218A82E19C44D158EE7C636E0313_gshared)(__this, ___0_defaultValue, method);
}
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<System.String>::.ctor(T)
inline void BlackboardDatabase_1__ctor_m2EA8C62643DFB4A31FFD8547EAEDD5021E63B01F (BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE* __this, String_t* ___0_defaultValue, const RuntimeMethod* method)
{
	((  void (*) (BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE*, String_t*, const RuntimeMethod*))BlackboardDatabase_1__ctor_m1A03DF1CD063E40ECC857C282B3A37FA83C163FD_gshared)(__this, ___0_defaultValue, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<UnityEngine.Vector3>::.ctor(T)
inline void BlackboardDatabase_1__ctor_m60FF6330F5EF69ED9383D06F6981D9D4BCFCF70E (BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_defaultValue, const RuntimeMethod* method)
{
	((  void (*) (BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))BlackboardDatabase_1__ctor_m60FF6330F5EF69ED9383D06F6981D9D4BCFCF70E_gshared)(__this, ___0_defaultValue, method);
}
// System.Void DungeonArchitect.Utils.BlackboardDatabase`1<DungeonArchitect.IntVector>::.ctor(T)
inline void BlackboardDatabase_1__ctor_mDBE6F3297EC557BFADB22F7FBF53A53FBD633459 (BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_defaultValue, const RuntimeMethod* method)
{
	((  void (*) (BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260*, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C, const RuntimeMethod*))BlackboardDatabase_1__ctor_mDBE6F3297EC557BFADB22F7FBF53A53FBD633459_gshared)(__this, ___0_defaultValue, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::RGBToHSV(UnityEngine.Color,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_RGBToHSV_m10DD6CE937F04FE322EED0E154C1D7D6933EA2F8 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_rgbColor, float* ___1_H, float* ___2_S, float* ___3_V, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___0_H, float ___1_S, float ___2_V, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240 (Guid_t ___0_a, Guid_t ___1_b, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.DungeonUID::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_IsValid_m2DAEBD6A443A151A49262F3B94CFD934FFC0E043 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Guid::CompareTo(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_CompareTo_mC22A00A14BBCCBF55F303C89A567FCA43925B586 (Guid_t* __this, Guid_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Utils.DungeonUID::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DungeonUID_CompareTo_mCB24702E786CDAA5867F5A55EC39593AB0B53264 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Utils.DungeonUID::CompareTo(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DungeonUID_CompareTo_mAF227D552142C9F51B7880B879B7DAB5D90FE102 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, Guid_t ___0_other, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Utils.DungeonUID::CompareTo(DungeonArchitect.Utils.DungeonUID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DungeonUID_CompareTo_mBEA0E647F28C7B934C359A7726E01E9FEF2EDE97 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C (Guid_t* __this, Guid_t ___0_g, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.DungeonUID::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_Equals_m070452AB17F6A95982434E76859C3BC69932DBC8 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, Guid_t ___0_other, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.DungeonUID::Equals(DungeonArchitect.Utils.DungeonUID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_Equals_mCBD78B0B13CA697EC490E474C8A65A1CBD39055C (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___0_other, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.DungeonUID::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_Equals_mECD3861B8E47B054A5D86F16A61248046E396137 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Utils.DungeonUID::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DungeonUID_GetHashCode_m3CDA4249C6E169AF940AA63BC6C40880147901BD (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String DungeonArchitect.Utils.DungeonUID::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DungeonUID_ToString_m7472E240B273FFA66D34B20EFF22A69C6F103C7E (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.DebugDrawUtils::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawUtils_DrawLine_m515C5368090D3395D57BB470B0106FF58782383B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_duration, bool ___4_depthTest, bool ___5_mode2D, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.DebugDrawUtils::FlipFor2D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DebugDrawUtils_FlipFor2D_m2542E80866E25539FDDB2BFE768AEAD60ED1C18A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m09EB01A6F34CB6BCE8EC0A13CAEF4899E2112B52 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_duration, bool ___4_depthTest, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.DebugDrawUtils::DrawCircle(UnityEngine.Vector3,System.Single,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawUtils_DrawCircle_m8A126D23B79F5C327BF71DD438594977A9476EF2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_segmentMultiplier, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.DebugDrawUtils::GetPointOnCircle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DebugDrawUtils_GetPointOnCircle_mB7D4CEA4BA5F8076C0105A8DAAD4D4D0A6579316 (float ___0_angle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB4AF0360B46F2BB26142EFD4DAB8C08BC435A698 (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB30F836A8BDAC17BF69A20B7CE09E4CFF8B1F174 (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* __this, String_t* ___0_key, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19*, String_t*, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>::get_Item(TKey)
inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* Dictionary_2_get_Item_m5A309BF79F0F65B180CB39E7669AAAF711E95A29 (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* (*) (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>::GetEnumerator()
inline Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2 Dictionary_2_GetEnumerator_m07D4477AD6AAE3FB98EFD238E828A9859E4E0C70 (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2 (*) (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.ScriptableObject>::Dispose()
inline void Enumerator_Dispose_m3F979FD92AC985D0AC1B05712F32267ED76CB0C7 (Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.ScriptableObject>::get_Current()
inline KeyValuePair_2_t73F9559B324BF8F13699C83C752150FAE21A0900 Enumerator_get_Current_m70B24696C6DB7792A277D105AADF97CCCAFBE0A6_inline (Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t73F9559B324BF8F13699C83C752150FAE21A0900 (*) (Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.ScriptableObject>::get_Value()
inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* KeyValuePair_2_get_Value_mE3A9BA7F7F9C923FDB045F668102A27CF7146160_inline (KeyValuePair_2_t73F9559B324BF8F13699C83C752150FAE21A0900* __this, const RuntimeMethod* method)
{
	return ((  ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* (*) (KeyValuePair_2_t73F9559B324BF8F13699C83C752150FAE21A0900*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.ObjectUtils::DestroyObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectUtils_DestroyObject_mC271D83974DC951E3DB21DD3AAD58227CD4096CB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_go, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.ScriptableObject>::MoveNext()
inline bool Enumerator_MoveNext_mD68561E0EA506F033660C5BCD24B1A15721F4125 (Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>::Clear()
inline void Dictionary_2_Clear_m144594753B5C23A1F4BEFC158B2462F689169BC4 (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ScriptableObject>::.ctor()
inline void Dictionary_2__ctor_m76643E4AA62180575A2DCB37A1A1436DB736544B (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Single>::.ctor()
inline void KeyValueDataEntryTyped_1__ctor_m81DCC8628C4133CE48F63AE776DB09C5D852FB88 (KeyValueDataEntryTyped_1_t23531D79A61AA95166CD0D5C47D512247C48B04A* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValueDataEntryTyped_1_t23531D79A61AA95166CD0D5C47D512247C48B04A*, const RuntimeMethod*))KeyValueDataEntryTyped_1__ctor_m81DCC8628C4133CE48F63AE776DB09C5D852FB88_gshared)(__this, method);
}
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.Int32>::.ctor()
inline void KeyValueDataEntryTyped_1__ctor_mD4B01168DAF86042FB69526505DD6EE8C1827B4C (KeyValueDataEntryTyped_1_t926733662F9457B69186F31B8D775EAD0B7CBC24* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValueDataEntryTyped_1_t926733662F9457B69186F31B8D775EAD0B7CBC24*, const RuntimeMethod*))KeyValueDataEntryTyped_1__ctor_mD4B01168DAF86042FB69526505DD6EE8C1827B4C_gshared)(__this, method);
}
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<System.String>::.ctor()
inline void KeyValueDataEntryTyped_1__ctor_m098F34A8E7E57CA2B137A55C3059B32E8DB9747D (KeyValueDataEntryTyped_1_tEC931C0A3739280EBAE394F1352A8EEF9B1D3A5B* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValueDataEntryTyped_1_tEC931C0A3739280EBAE394F1352A8EEF9B1D3A5B*, const RuntimeMethod*))KeyValueDataEntryTyped_1__ctor_m87C0B1B8DAE02344A7B4D023386F12A0FB0D26A1_gshared)(__this, method);
}
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector3>::.ctor()
inline void KeyValueDataEntryTyped_1__ctor_mEAA55E0BFCDCC273457CE907040F95EB534B33F7 (KeyValueDataEntryTyped_1_tC98A9344D6A8D17B57DAC6EBDB2631B1AF9FF5D3* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValueDataEntryTyped_1_tC98A9344D6A8D17B57DAC6EBDB2631B1AF9FF5D3*, const RuntimeMethod*))KeyValueDataEntryTyped_1__ctor_mEAA55E0BFCDCC273457CE907040F95EB534B33F7_gshared)(__this, method);
}
// System.Void DungeonArchitect.Utils.KeyValueDataEntryTyped`1<UnityEngine.Vector2>::.ctor()
inline void KeyValueDataEntryTyped_1__ctor_m1CE8BB971A01D85ED638E2F6A396D8D02BC250CB (KeyValueDataEntryTyped_1_tEF89771FAEE3C5FD23D60936C4666F795CC4A235* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValueDataEntryTyped_1_tEF89771FAEE3C5FD23D60936C4666F795CC4A235*, const RuntimeMethod*))KeyValueDataEntryTyped_1__ctor_m1CE8BB971A01D85ED638E2F6A396D8D02BC250CB_gshared)(__this, method);
}
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<DungeonArchitect.Utils.KeyValueDataEntryFloat,System.Single>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
inline bool KeyValueData_GetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5BD91C5B3290E371B4B4EB26A257E40B1402551B (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228* ___0_data, String_t* ___1_key, float* ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228*, String_t*, float*, const RuntimeMethod*))KeyValueData_GetValue_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m11EC0DEB268DE685BB00F3081CF0E26DA6068086_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<DungeonArchitect.Utils.KeyValueDataEntryInt,System.Int32>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
inline bool KeyValueData_GetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3A717ED4EDCFF2AE51D38E60973DCCDBE2737A (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F* ___0_data, String_t* ___1_key, int32_t* ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F*, String_t*, int32_t*, const RuntimeMethod*))KeyValueData_GetValue_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEDD49C611BD4824EE4515C336B21314D68BA43A9_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<DungeonArchitect.Utils.KeyValueDataEntryString,System.String>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
inline bool KeyValueData_GetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_TisString_t_m291277BF28D1CDDD756FCB4C2597B43B580E460E (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4* ___0_data, String_t* ___1_key, String_t** ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4*, String_t*, String_t**, const RuntimeMethod*))KeyValueData_GetValue_TisRuntimeObject_TisRuntimeObject_m13A253E2452CEB73ECFB38B7C21C3835E6940637_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<DungeonArchitect.Utils.KeyValueDataEntryVector3,UnityEngine.Vector3>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
inline bool KeyValueData_GetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB89606EBD7C45E45BE22223F8D7BF17CBFA65F5F (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D* ___0_data, String_t* ___1_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D*, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))KeyValueData_GetValue_TisRuntimeObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C07E6227B47902165DE113012F51DD9872A04F9_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetValue<DungeonArchitect.Utils.KeyValueDataEntryVector2,UnityEngine.Vector2>(System.Collections.Generic.List`1<TEntry>,System.String,TValue&)
inline bool KeyValueData_GetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m53044E46EFC125E3F1EFB71AB829D1E2A84EEEB9 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52* ___0_data, String_t* ___1_key, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52*, String_t*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, const RuntimeMethod*))KeyValueData_GetValue_TisRuntimeObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD01CE4BE369842E9BFBDCCF94E48ABD962650FBE_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Void DungeonArchitect.Utils.KeyValueData::SetValue<DungeonArchitect.Utils.KeyValueDataEntryFloat>(System.Collections.Generic.List`1<T>,System.String,System.Object)
inline void KeyValueData_SetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_mFEBBFEE36FD8F78DAFC2776863FFFD75249FCEFB (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228* ___0_data, String_t* ___1_key, RuntimeObject* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValueData_SetValue_TisRuntimeObject_mDBAA369B890270B3668738678ED38BDB9D9004C3_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Void DungeonArchitect.Utils.KeyValueData::SetValue<DungeonArchitect.Utils.KeyValueDataEntryInt>(System.Collections.Generic.List`1<T>,System.String,System.Object)
inline void KeyValueData_SetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_m8B76ADD21BD257C236DF5C5F3C2F78C3EC3637A2 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F* ___0_data, String_t* ___1_key, RuntimeObject* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValueData_SetValue_TisRuntimeObject_mDBAA369B890270B3668738678ED38BDB9D9004C3_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Void DungeonArchitect.Utils.KeyValueData::SetValue<DungeonArchitect.Utils.KeyValueDataEntryString>(System.Collections.Generic.List`1<T>,System.String,System.Object)
inline void KeyValueData_SetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_m0DBB3026477467215D2F38C2141FA7FF860431D1 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4* ___0_data, String_t* ___1_key, RuntimeObject* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValueData_SetValue_TisRuntimeObject_mDBAA369B890270B3668738678ED38BDB9D9004C3_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Void DungeonArchitect.Utils.KeyValueData::SetValue<DungeonArchitect.Utils.KeyValueDataEntryVector3>(System.Collections.Generic.List`1<T>,System.String,System.Object)
inline void KeyValueData_SetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_mD0E4E94FF6AC3B71253AFA37BB3CDF0B6D771CD1 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D* ___0_data, String_t* ___1_key, RuntimeObject* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValueData_SetValue_TisRuntimeObject_mDBAA369B890270B3668738678ED38BDB9D9004C3_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Void DungeonArchitect.Utils.KeyValueData::SetValue<DungeonArchitect.Utils.KeyValueDataEntryVector2>(System.Collections.Generic.List`1<T>,System.String,System.Object)
inline void KeyValueData_SetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_m399117A50E50EEA9EDCB7F136C62A02653317D64 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52* ___0_data, String_t* ___1_key, RuntimeObject* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432*, List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValueData_SetValue_TisRuntimeObject_mDBAA369B890270B3668738678ED38BDB9D9004C3_gshared)(__this, ___0_data, ___1_key, ___2_value, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryFloat>::.ctor()
inline void List_1__ctor_m62483C26136687F0402FEB8D79733D413EF490E0 (List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryInt>::.ctor()
inline void List_1__ctor_m3BCF517E17EBFF9B5A579310D2016985370F7B27 (List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryString>::.ctor()
inline void List_1__ctor_m2427D00F94769C53E36FAF2BEB46B5165B85B061 (List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector3>::.ctor()
inline void List_1__ctor_mA658E93876950C19B37BD9BEF004EF1BEFF8A290 (List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Utils.KeyValueDataEntryVector2>::.ctor()
inline void List_1__ctor_m2CCCAF47903E6070AC1D85DD293C4A825136B978 (List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::Divide(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_Divide_m9C46A2658AFD35FF7A94D26EAC0CF7653E3B5423 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// DungeonArchitect.IntVector DungeonArchitect.Utils.MathUtils::ToIntVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C MathUtils_ToIntVector_mBB1A27762E1EB2064865DE6AC6A54A5B4A4C525E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::ToVector3(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_ToVector3_mAE6974448DEAE5A1A626372CB502927FED56CA49 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::GridToWorld(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_GridToWorld_m3196CF39CDABF14746162A6562AB802ABE9A138E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_GridCellSize, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::SnapToGrid(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_SnapToGrid_mAF5AF4D5C5BDDBB972CBEBB164A93F6FCD400919 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_gridCellSize, bool ___2_useRounding, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::FlipYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_FlipYZ_m8347EAD3A9298AE62232FA514EEC5BE09ECCC8F0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_bounds, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Void DungeonArchitect.Utils.MathUtils::Shuffle<System.Int32>(System.Collections.Generic.List`1<T>,System.Random)
inline void MathUtils_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m321167505C8CD6E2E8C0CEAA52C8F1D11D36CD47 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_Array, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___1_Random, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*, const RuntimeMethod*))MathUtils_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m321167505C8CD6E2E8C0CEAA52C8F1D11D36CD47_gshared)(___0_Array, ___1_Random, method);
}
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Utils.MathUtils::V3Equals(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_V3Equals_m1673C78B1ACDC5D1FE37393B2D50D6DDCF85586A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_threshold, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_get_lossyScale_mFB3D4CF6408D710D607CA1D2AF94B2E4E0B57EB7 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.Matrix::GetTranslation(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix_GetTranslation_mB62810FB3AF7E6E5DF0093725DD51A9E313FC4E6 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) ;
// UnityEngine.Quaternion DungeonArchitect.Utils.Matrix::GetRotation(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Matrix_GetRotation_m9C9279D228DC3622E77F89C3CD9E1C2AE4012ED5 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.Matrix::GetScale(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix_GetScale_mB4129435BCD704E75A7A0175465CBF423EA43B5E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.PMRandom::Initialize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PMRandom_Initialize_m37A0E1661EDDB56A541BBE5FF4583F76E0A51025 (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, uint32_t ___0_seed, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___0_Seed, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.Utils.PMRandom::NextGaussianFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PMRandom_NextGaussianFloat_m9DD458EAC0E501ADE111B01D0B761EE130BCCAD8 (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.Utils.PMRandom::GetNextUniformFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PMRandom_GetNextUniformFloat_m70400BBE43312170CC9F5129D914844215E0D6EC (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material>::.ctor()
inline void Dictionary_2__ctor_m0A41A10FAABAA6BE6C006A516D263937EE240995 (Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4AF4721BE182AA33E2533F7CA7A171AF8386661E (Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m956F620FBADB1DE5785F5249DB1A72684B53FAC6 (Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_key, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material>::get_Item(TKey)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Dictionary_2_get_Item_m4627DF5C86AD54583C64DC3BCCF1A682D6EA2B1B (Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_key, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void DungeonArchitect.Utils.SmoothValue::Set(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothValue_Set_m1FCE05E80FCBCF3CA5AB108E3BA689310DB5539F (SmoothValue_t01914EB63A259D445CB7BE6A2CDDC5E34CFFC82B* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.Noise.GradientNoisePolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientNoisePolicy__ctor_m872E14DBF6689B0D940C48CA586BAE29619B82A8 (GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.Noise.NoiseTable`1<UnityEngine.Vector2>::.ctor()
inline void NoiseTable_1__ctor_m882520BCB75C40877D994FBCCA4CF4128D959074 (NoiseTable_1_t1740665690C0FA1E4DC95C3167D7AD3AE46F1534* __this, const RuntimeMethod* method)
{
	((  void (*) (NoiseTable_1_t1740665690C0FA1E4DC95C3167D7AD3AE46F1534*, const RuntimeMethod*))NoiseTable_1__ctor_m882520BCB75C40877D994FBCCA4CF4128D959074_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF (float ___0_H, float ___1_S, float ___2_V, bool ___3_hdr, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single RandomExtensions::NextFloat(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RandomExtensions_NextFloat_m83B4036CA53E0F8F86D3A8D8ABC1C564D0673A67 (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___0_random, const RuntimeMethod* method) 
{
	{
		// return (float)random.NextDouble();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ___0_random;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_0);
		return ((float)L_1);
	}
}
// UnityEngine.Vector3 RandomExtensions::OnUnitSphere(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RandomExtensions_OnUnitSphere_m199D9AC49AA4AB06D7A93D88F8BBF50CF82DC174 (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___0_random, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// var z = (float)random.NextDouble() * 2 - 1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ___0_random;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_0);
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_1), (2.0f))), (1.0f)));
		// var rxy = Mathf.Sqrt(1 - z*z);
		float L_2 = V_0;
		float L_3 = V_0;
		float L_4;
		L_4 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_2, L_3)))));
		// var phi = (float)random.NextDouble() * 2 * Mathf.PI;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_5 = ___0_random;
		NullCheck(L_5);
		double L_6;
		L_6 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_5);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_6), (2.0f))), (3.14159274f)));
		// var x = rxy * Mathf.Cos(phi);
		float L_7 = L_4;
		float L_8 = V_1;
		float L_9;
		L_9 = cosf(L_8);
		V_2 = ((float)il2cpp_codegen_multiply(L_7, L_9));
		// var y = rxy * Mathf.Sin(phi);
		float L_10 = V_1;
		float L_11;
		L_11 = sinf(L_10);
		V_3 = ((float)il2cpp_codegen_multiply(L_7, L_11));
		// return new Vector3(x, y, z);
		float L_12 = V_2;
		float L_13 = V_3;
		float L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Single RandomExtensions::Range(System.Random,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RandomExtensions_Range_m5328F4B9A7A0BA70804FC09381C70CCB8FC3BFF2 (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___0_random, float ___1_a, float ___2_b, const RuntimeMethod* method) 
{
	{
		// return a + NextFloat(random) * (b - a);
		float L_0 = ___1_a;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = ___0_random;
		float L_2;
		L_2 = RandomExtensions_NextFloat_m83B4036CA53E0F8F86D3A8D8ABC1C564D0673A67(L_1, NULL);
		float L_3 = ___2_b;
		float L_4 = ___1_a;
		return ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_subtract(L_3, L_4))))));
	}
}
// System.Int32 RandomExtensions::Range(System.Random,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RandomExtensions_Range_mD218DB66F5B4A42B67F870CD9976D2BF4FB029EB (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___0_random, int32_t ___1_a, int32_t ___2_b, const RuntimeMethod* method) 
{
	{
		// return Mathf.RoundToInt(a + NextFloat(random) * (b - a));
		int32_t L_0 = ___1_a;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = ___0_random;
		float L_2;
		L_2 = RandomExtensions_NextFloat_m83B4036CA53E0F8F86D3A8D8ABC1C564D0673A67(L_1, NULL);
		int32_t L_3 = ___2_b;
		int32_t L_4 = ___1_a;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_add(((float)L_0), ((float)il2cpp_codegen_multiply(L_2, ((float)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))), NULL);
		return L_5;
	}
}
// System.Single RandomExtensions::value(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RandomExtensions_value_m49B78902A322D603F0A6EBC20FD10E5B1C94FD3C (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___0_random, const RuntimeMethod* method) 
{
	{
		// return NextFloat(random);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ___0_random;
		float L_1;
		L_1 = RandomExtensions_NextFloat_m83B4036CA53E0F8F86D3A8D8ABC1C564D0673A67(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: DungeonArchitect.DebugTextItem
IL2CPP_EXTERN_C void DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshal_pinvoke(const DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B& unmarshaled, DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshaled_pinvoke& marshaled)
{
	marshaled.___message_0 = il2cpp_codegen_marshal_string(unmarshaled.___message_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___color_2 = unmarshaled.___color_2;
}
IL2CPP_EXTERN_C void DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshal_pinvoke_back(const DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshaled_pinvoke& marshaled, DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B& unmarshaled)
{
	unmarshaled.___message_0 = il2cpp_codegen_marshal_string_result(marshaled.___message_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___message_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___message_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_1;
	memset((&unmarshaledposition_temp_1), 0, sizeof(unmarshaledposition_temp_1));
	unmarshaledposition_temp_1 = marshaled.___position_1;
	unmarshaled.___position_1 = unmarshaledposition_temp_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F unmarshaledcolor_temp_2;
	memset((&unmarshaledcolor_temp_2), 0, sizeof(unmarshaledcolor_temp_2));
	unmarshaledcolor_temp_2 = marshaled.___color_2;
	unmarshaled.___color_2 = unmarshaledcolor_temp_2;
}
// Conversion method for clean up from marshalling of: DungeonArchitect.DebugTextItem
IL2CPP_EXTERN_C void DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshal_pinvoke_cleanup(DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___message_0);
	marshaled.___message_0 = NULL;
}
// Conversion methods for marshalling of: DungeonArchitect.DebugTextItem
IL2CPP_EXTERN_C void DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshal_com(const DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B& unmarshaled, DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshaled_com& marshaled)
{
	marshaled.___message_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___message_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___color_2 = unmarshaled.___color_2;
}
IL2CPP_EXTERN_C void DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshal_com_back(const DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshaled_com& marshaled, DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B& unmarshaled)
{
	unmarshaled.___message_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___message_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___message_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___message_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_1;
	memset((&unmarshaledposition_temp_1), 0, sizeof(unmarshaledposition_temp_1));
	unmarshaledposition_temp_1 = marshaled.___position_1;
	unmarshaled.___position_1 = unmarshaledposition_temp_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F unmarshaledcolor_temp_2;
	memset((&unmarshaledcolor_temp_2), 0, sizeof(unmarshaledcolor_temp_2));
	unmarshaledcolor_temp_2 = marshaled.___color_2;
	unmarshaled.___color_2 = unmarshaledcolor_temp_2;
}
// Conversion method for clean up from marshalling of: DungeonArchitect.DebugTextItem
IL2CPP_EXTERN_C void DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshal_com_cleanup(DebugTextItem_t9DB1E80BF96F08297DBD8338F667404084C3C33B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___message_0);
	marshaled.___message_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.DebugText3D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugText3D__ctor_m0177C8E56064A03C0623ACFDB6D2886C1FA12903 (DebugText3D_tA14636838033F9C40AE5785508373252FDA18ABC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.IntVector::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector__ctor_mF9D7D9DF8D8C67A59A97CCEAF12C3AEBB4EA3EB9 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// x = Mathf.RoundToInt(v.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		__this->___x_0 = L_2;
		// y = Mathf.RoundToInt(v.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_v;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		__this->___y_1 = L_5;
		// z = Mathf.RoundToInt(v.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_v;
		float L_7 = L_6.___z_4;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_7, NULL);
		__this->___z_2 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IntVector__ctor_mF9D7D9DF8D8C67A59A97CCEAF12C3AEBB4EA3EB9_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method)
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*>(__this + _offset);
	IntVector__ctor_mF9D7D9DF8D8C67A59A97CCEAF12C3AEBB4EA3EB9(_thisAdjusted, ___0_v, method);
}
// System.Void DungeonArchitect.IntVector::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		int32_t L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		int32_t L_2 = ___2_z;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method)
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*>(__this + _offset);
	IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34(_thisAdjusted, ___0_x, ___1_y, ___2_z, method);
}
// System.Void DungeonArchitect.IntVector::Set(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector_Set_m03BE22F808B94FC6653255C109AF88828231C0BC (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		int32_t L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		int32_t L_2 = ___2_z;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IntVector_Set_m03BE22F808B94FC6653255C109AF88828231C0BC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method)
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*>(__this + _offset);
	IntVector_Set_m03BE22F808B94FC6653255C109AF88828231C0BC(_thisAdjusted, ___0_x, ___1_y, ___2_z, method);
}
// System.Single DungeonArchitect.IntVector::DistanceSq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntVector_DistanceSq_mE69F7D9A5CD4CAC84BCBB905F13C2D9AE41A3D75 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) 
{
	{
		// return x * x + y * y + z * z;
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = __this->___x_0;
		int32_t L_2 = __this->___y_1;
		int32_t L_3 = __this->___y_1;
		int32_t L_4 = __this->___z_2;
		int32_t L_5 = __this->___z_2;
		return ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), ((int32_t)il2cpp_codegen_multiply(L_2, L_3)))), ((int32_t)il2cpp_codegen_multiply(L_4, L_5)))));
	}
}
IL2CPP_EXTERN_C  float IntVector_DistanceSq_mE69F7D9A5CD4CAC84BCBB905F13C2D9AE41A3D75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*>(__this + _offset);
	float _returnValue;
	_returnValue = IntVector_DistanceSq_mE69F7D9A5CD4CAC84BCBB905F13C2D9AE41A3D75(_thisAdjusted, method);
	return _returnValue;
}
// System.Single DungeonArchitect.IntVector::Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntVector_Distance_mB8B714427E4FC971C93989937D964A6584FEA20D (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) 
{
	{
		// return Mathf.Sqrt(x * x + y * y + z * z);
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = __this->___x_0;
		int32_t L_2 = __this->___y_1;
		int32_t L_3 = __this->___y_1;
		int32_t L_4 = __this->___z_2;
		int32_t L_5 = __this->___z_2;
		float L_6;
		L_6 = sqrtf(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), ((int32_t)il2cpp_codegen_multiply(L_2, L_3)))), ((int32_t)il2cpp_codegen_multiply(L_4, L_5))))));
		return L_6;
	}
}
IL2CPP_EXTERN_C  float IntVector_Distance_mB8B714427E4FC971C93989937D964A6584FEA20D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*>(__this + _offset);
	float _returnValue;
	_returnValue = IntVector_Distance_mB8B714427E4FC971C93989937D964A6584FEA20D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 DungeonArchitect.IntVector::ToVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IntVector_ToVector3_m9DF4AE99107BC7505A2C50BD51B5E7D17A02CEF0 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector3(x, y, z);
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = __this->___y_1;
		int32_t L_2 = __this->___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IntVector_ToVector3_m9DF4AE99107BC7505A2C50BD51B5E7D17A02CEF0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = IntVector_ToVector3_m9DF4AE99107BC7505A2C50BD51B5E7D17A02CEF0(_thisAdjusted, method);
	return _returnValue;
}
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Addition(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Addition_mDD66816374D94E99E89A052A5A1B6C78249273B6 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_b, const RuntimeMethod* method) 
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C));
		// result.x = a.x + b.x;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___1_b;
		int32_t L_3 = L_2.___x_0;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
		// result.y = a.y + b.y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = ___1_b;
		int32_t L_7 = L_6.___y_1;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
		// result.z = a.z + b.z;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_8 = ___0_a;
		int32_t L_9 = L_8.___z_2;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_10 = ___1_b;
		int32_t L_11 = L_10.___z_2;
		(&V_0)->___z_2 = ((int32_t)il2cpp_codegen_add(L_9, L_11));
		// return result;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_12 = V_0;
		return L_12;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Subtraction(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Subtraction_m00A8B35645081C9ACA161EE46FDF2FE3C0EB82AC (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_b, const RuntimeMethod* method) 
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C));
		// result.x = a.x - b.x;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___1_b;
		int32_t L_3 = L_2.___x_0;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
		// result.y = a.y - b.y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = ___1_b;
		int32_t L_7 = L_6.___y_1;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_7));
		// result.z = a.z - b.z;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_8 = ___0_a;
		int32_t L_9 = L_8.___z_2;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_10 = ___1_b;
		int32_t L_11 = L_10.___z_2;
		(&V_0)->___z_2 = ((int32_t)il2cpp_codegen_subtract(L_9, L_11));
		// return result;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_12 = V_0;
		return L_12;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Multiply(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Multiply_mABBE2786F4E19DA6F8655F3EF86A3AF2F21265D2 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_b, const RuntimeMethod* method) 
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C));
		// result.x = a.x * b.x;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___1_b;
		int32_t L_3 = L_2.___x_0;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_multiply(L_1, L_3));
		// result.y = a.y * b.y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = ___1_b;
		int32_t L_7 = L_6.___y_1;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_7));
		// result.z = a.z * b.z;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_8 = ___0_a;
		int32_t L_9 = L_8.___z_2;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_10 = ___1_b;
		int32_t L_11 = L_10.___z_2;
		(&V_0)->___z_2 = ((int32_t)il2cpp_codegen_multiply(L_9, L_11));
		// return result;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.Vector3 DungeonArchitect.IntVector::op_Multiply(DungeonArchitect.IntVector,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IntVector_op_Multiply_m3233E2C98AC1950B36883D28B04FF0B7C1E43AA3 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// result.x = a.x * b.x;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(((float)L_1), L_3));
		// result.y = a.y * b.y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(((float)L_5), L_7));
		// result.z = a.z * b.z;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_8 = ___0_a;
		int32_t L_9 = L_8.___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		(&V_0)->___z_4 = ((float)il2cpp_codegen_multiply(((float)L_9), L_11));
		// return result;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Division(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Division_m7EB2E21CD9E1BC4EBDBC46F11D3D8949DB0B6FB9 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_b, const RuntimeMethod* method) 
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C));
		// result.x = a.x / b.x;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___1_b;
		int32_t L_3 = L_2.___x_0;
		(&V_0)->___x_0 = ((int32_t)(L_1/L_3));
		// result.y = a.y / b.y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = ___1_b;
		int32_t L_7 = L_6.___y_1;
		(&V_0)->___y_1 = ((int32_t)(L_5/L_7));
		// result.z = a.z / b.z;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_8 = ___0_a;
		int32_t L_9 = L_8.___z_2;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_10 = ___1_b;
		int32_t L_11 = L_10.___z_2;
		(&V_0)->___z_2 = ((int32_t)(L_9/L_11));
		// return result;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_12 = V_0;
		return L_12;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Addition(DungeonArchitect.IntVector,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Addition_m7D8C38BDA073D495E9B38ED65C285D9D70A8D758 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C));
		// result.x = a.x + b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		int32_t L_2 = ___1_b;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		// result.y = a.y + b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_3 = ___0_a;
		int32_t L_4 = L_3.___y_1;
		int32_t L_5 = ___1_b;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// result.z = a.z + b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = ___0_a;
		int32_t L_7 = L_6.___z_2;
		int32_t L_8 = ___1_b;
		(&V_0)->___z_2 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		// return result;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_9 = V_0;
		return L_9;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Subtraction(DungeonArchitect.IntVector,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Subtraction_m5D7A2DA5EF69D5E63B5BEDD420E38868A1A2D395 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C));
		// result.x = a.x - b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		int32_t L_2 = ___1_b;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		// result.y = a.y - b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_3 = ___0_a;
		int32_t L_4 = L_3.___y_1;
		int32_t L_5 = ___1_b;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		// result.z = a.z - b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = ___0_a;
		int32_t L_7 = L_6.___z_2;
		int32_t L_8 = ___1_b;
		(&V_0)->___z_2 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		// return result;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_9 = V_0;
		return L_9;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Multiply(DungeonArchitect.IntVector,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Multiply_m470440DAD8DE2F0F850BEFA93DA892A3E5D32510 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C));
		// result.x = a.x * b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		int32_t L_2 = ___1_b;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		// result.y = a.y * b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_3 = ___0_a;
		int32_t L_4 = L_3.___y_1;
		int32_t L_5 = ___1_b;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_multiply(L_4, L_5));
		// result.z = a.z * b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = ___0_a;
		int32_t L_7 = L_6.___z_2;
		int32_t L_8 = ___1_b;
		(&V_0)->___z_2 = ((int32_t)il2cpp_codegen_multiply(L_7, L_8));
		// return result;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_9 = V_0;
		return L_9;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.IntVector::op_Division(DungeonArchitect.IntVector,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C IntVector_op_Division_m42808544BF5609C5B3233762D1C74E88B3ACBB02 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C));
		// result.x = a.x / b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		int32_t L_2 = ___1_b;
		(&V_0)->___x_0 = ((int32_t)(L_1/L_2));
		// result.y = a.y / b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_3 = ___0_a;
		int32_t L_4 = L_3.___y_1;
		int32_t L_5 = ___1_b;
		(&V_0)->___y_1 = ((int32_t)(L_4/L_5));
		// result.z = a.z / b;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = ___0_a;
		int32_t L_7 = L_6.___z_2;
		int32_t L_8 = ___1_b;
		(&V_0)->___z_2 = ((int32_t)(L_7/L_8));
		// return result;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_9 = V_0;
		return L_9;
	}
}
// System.Boolean DungeonArchitect.IntVector::op_Equality(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntVector_op_Equality_mC197D9F3999EC6EB863E6951D1EB514387FDF4D1 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_b, const RuntimeMethod* method) 
{
	{
		// return a.x == b.x &&
		//     a.y == b.y &&
		//     a.z == b.z;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___1_b;
		int32_t L_3 = L_2.___x_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = ___1_b;
		int32_t L_7 = L_6.___y_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_002b;
		}
	}
	{
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_8 = ___0_a;
		int32_t L_9 = L_8.___z_2;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_10 = ___1_b;
		int32_t L_11 = L_10.___z_2;
		return (bool)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean DungeonArchitect.IntVector::op_Inequality(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntVector_op_Inequality_mBED2CC45210BC38D875A35D90CB5A235C1E24327 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_a, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(a == b);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_a;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = IntVector_op_Equality_mC197D9F3999EC6EB863E6951D1EB514387FDF4D1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean DungeonArchitect.IntVector::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntVector_Equals_m8C3D35F5DC3CB668216F7A6EFC77AE6D843D6C06 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (obj is IntVector) {
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		// var other = (IntVector)obj;
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*)((IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*)(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*)UnBox(L_1, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var))));
		// return this.x == other.x &&
		//     this.y == other.y &&
		//     this.z == other.z;
		int32_t L_2 = __this->___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_3 = V_0;
		int32_t L_4 = L_3.___x_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = __this->___y_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_6 = V_0;
		int32_t L_7 = L_6.___y_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_8 = __this->___z_2;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_9 = V_0;
		int32_t L_10 = L_9.___z_2;
		return (bool)((((int32_t)L_8) == ((int32_t)L_10))? 1 : 0);
	}

IL_003a:
	{
		return (bool)0;
	}

IL_003c:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool IntVector_Equals_m8C3D35F5DC3CB668216F7A6EFC77AE6D843D6C06_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*>(__this + _offset);
	bool _returnValue;
	_returnValue = IntVector_Equals_m8C3D35F5DC3CB668216F7A6EFC77AE6D843D6C06(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.IntVector::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntVector_GetHashCode_mB319BBE5886636E56617A0D52F8608F78E276142 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) 
{
	{
		// return (x ^ (y << 16)) ^ (z << 24);
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = __this->___y_1;
		int32_t L_2 = __this->___z_2;
		return ((int32_t)(((int32_t)(L_0^((int32_t)(L_1<<((int32_t)16)))))^((int32_t)(L_2<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C  int32_t IntVector_GetHashCode_mB319BBE5886636E56617A0D52F8608F78E276142_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = IntVector_GetHashCode_mB319BBE5886636E56617A0D52F8608F78E276142(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 DungeonArchitect.IntVector::ToV3(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IntVector_ToV3_mB87F973D041125E56BB94CD79B50E5C55892CA3B (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_iv, const RuntimeMethod* method) 
{
	{
		// return new Vector3(iv.x, iv.y, iv.z);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_iv;
		int32_t L_1 = L_0.___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___0_iv;
		int32_t L_3 = L_2.___y_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_4 = ___0_iv;
		int32_t L_5 = L_4.___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((float)L_1), ((float)L_3), ((float)L_5), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String DungeonArchitect.IntVector::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntVector_ToString_m74EF6016601F164276CAB4B03A044B6A28D3F6E7 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("({0}, {1}, {2})", x, y, z);
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->___y_1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___z_2;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* IntVector_ToString_m74EF6016601F164276CAB4B03A044B6A28D3F6E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = IntVector_ToString_m74EF6016601F164276CAB4B03A044B6A28D3F6E7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DungeonArchitect.IntVector::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector__cctor_m01450ABFDF3756A98F0692F4F4271BF3817A26BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly IntVector Zero = new IntVector(0, 0, 0);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0;
		memset((&L_0), 0, sizeof(L_0));
		IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34((&L_0), 0, 0, 0, /*hidden argument*/NULL);
		((IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_StaticFields*)il2cpp_codegen_static_fields_for(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var))->___Zero_3 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.IntVector2::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector2__ctor_m9DC0909A473D1B3FC7C6CE9C559E1BBE96FC4EDB (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// x = Mathf.RoundToInt(v.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		__this->___x_0 = L_2;
		// y = Mathf.RoundToInt(v.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_v;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		__this->___y_1 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IntVector2__ctor_m9DC0909A473D1B3FC7C6CE9C559E1BBE96FC4EDB_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	IntVector2__ctor_m9DC0909A473D1B3FC7C6CE9C559E1BBE96FC4EDB(_thisAdjusted, ___0_v, method);
}
// System.Void DungeonArchitect.IntVector2::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector2__ctor_mD3BAEE651E799C5D5F4BAE76D31BFAA7ABD176E0 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		int32_t L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___1_y;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IntVector2__ctor_mD3BAEE651E799C5D5F4BAE76D31BFAA7ABD176E0_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	IntVector2__ctor_mD3BAEE651E799C5D5F4BAE76D31BFAA7ABD176E0(_thisAdjusted, ___0_x, ___1_y, method);
}
// System.Void DungeonArchitect.IntVector2::Set(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector2_Set_mE26F062C6B2D80246361F63629BEC453C10BAD1B (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		int32_t L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___1_y;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IntVector2_Set_mE26F062C6B2D80246361F63629BEC453C10BAD1B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	IntVector2_Set_mE26F062C6B2D80246361F63629BEC453C10BAD1B(_thisAdjusted, ___0_x, ___1_y, method);
}
// System.Int32 DungeonArchitect.IntVector2::ManhattanDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntVector2_ManhattanDistance_mD47F8C683AF99F22ADC8F17045A70AF787984B28 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) 
{
	{
		// return x + y;
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = __this->___y_1;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  int32_t IntVector2_ManhattanDistance_mD47F8C683AF99F22ADC8F17045A70AF787984B28_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = IntVector2_ManhattanDistance_mD47F8C683AF99F22ADC8F17045A70AF787984B28(_thisAdjusted, method);
	return _returnValue;
}
// System.Single DungeonArchitect.IntVector2::DistanceSq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntVector2_DistanceSq_m40CDF1F0F310385E8A88076B8ED057D8A3349264 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) 
{
	{
		// return x * x + y * y;
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = __this->___x_0;
		int32_t L_2 = __this->___y_1;
		int32_t L_3 = __this->___y_1;
		return ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), ((int32_t)il2cpp_codegen_multiply(L_2, L_3)))));
	}
}
IL2CPP_EXTERN_C  float IntVector2_DistanceSq_m40CDF1F0F310385E8A88076B8ED057D8A3349264_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	float _returnValue;
	_returnValue = IntVector2_DistanceSq_m40CDF1F0F310385E8A88076B8ED057D8A3349264(_thisAdjusted, method);
	return _returnValue;
}
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::Abs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_Abs_mEF8DCDDE8B8342A43CA5B5D27296F15E147C59F8 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) 
{
	{
		// return new IntVector2(Mathf.Abs(x), Mathf.Abs(y));
		int32_t L_0 = __this->___x_0;
		int32_t L_1;
		L_1 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_0, NULL);
		int32_t L_2 = __this->___y_1;
		int32_t L_3;
		L_3 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_2, NULL);
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		IntVector2__ctor_mD3BAEE651E799C5D5F4BAE76D31BFAA7ABD176E0((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_Abs_mEF8DCDDE8B8342A43CA5B5D27296F15E147C59F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 _returnValue;
	_returnValue = IntVector2_Abs_mEF8DCDDE8B8342A43CA5B5D27296F15E147C59F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Single DungeonArchitect.IntVector2::Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntVector2_Distance_mA44970D4272358702A901C9121C6C3980A62A0C5 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) 
{
	{
		// return Mathf.Sqrt(x * x + y * y);
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = __this->___x_0;
		int32_t L_2 = __this->___y_1;
		int32_t L_3 = __this->___y_1;
		float L_4;
		L_4 = sqrtf(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), ((int32_t)il2cpp_codegen_multiply(L_2, L_3))))));
		return L_4;
	}
}
IL2CPP_EXTERN_C  float IntVector2_Distance_mA44970D4272358702A901C9121C6C3980A62A0C5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	float _returnValue;
	_returnValue = IntVector2_Distance_mA44970D4272358702A901C9121C6C3980A62A0C5(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 DungeonArchitect.IntVector2::ToVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 IntVector2_ToVector2_mC788E5A2D1A9368D56D0B38B2101B3857D212A65 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector2(x, y);
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = __this->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)L_0), ((float)L_1), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 IntVector2_ToVector2_mC788E5A2D1A9368D56D0B38B2101B3857D212A65_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = IntVector2_ToVector2_mC788E5A2D1A9368D56D0B38B2101B3857D212A65(_thisAdjusted, method);
	return _returnValue;
}
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::op_Addition(DungeonArchitect.IntVector2,DungeonArchitect.IntVector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_op_Addition_m0B60F9588B271FC42836F32563C1017EA4668239 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_a, IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___1_b, const RuntimeMethod* method) 
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector2();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7));
		// result.x = a.x + b.x;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_2 = ___1_b;
		int32_t L_3 = L_2.___x_0;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
		// result.y = a.y + b.y;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_6 = ___1_b;
		int32_t L_7 = L_6.___y_1;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
		// return result;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_8 = V_0;
		return L_8;
	}
}
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::op_Subtraction(DungeonArchitect.IntVector2,DungeonArchitect.IntVector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_op_Subtraction_m4590D577B9ED8A8080B981B945EBC631EB8E9CAE (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_a, IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___1_b, const RuntimeMethod* method) 
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector2();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7));
		// result.x = a.x - b.x;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_2 = ___1_b;
		int32_t L_3 = L_2.___x_0;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
		// result.y = a.y - b.y;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_6 = ___1_b;
		int32_t L_7 = L_6.___y_1;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_7));
		// return result;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_8 = V_0;
		return L_8;
	}
}
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::op_Multiply(DungeonArchitect.IntVector2,DungeonArchitect.IntVector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_op_Multiply_m48D3DCC879F8E72B654B1B18F776D536AA0B96E8 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_a, IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___1_b, const RuntimeMethod* method) 
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector2();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7));
		// result.x = a.x * b.x;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_2 = ___1_b;
		int32_t L_3 = L_2.___x_0;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_multiply(L_1, L_3));
		// result.y = a.y * b.y;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_6 = ___1_b;
		int32_t L_7 = L_6.___y_1;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_7));
		// return result;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Vector3 DungeonArchitect.IntVector2::op_Multiply(DungeonArchitect.IntVector2,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IntVector2_op_Multiply_mD0439C7A527ADC6622085E1D0CDBB60F86048FE1 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// result.x = a.x * b.x;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(((float)L_1), L_3));
		// result.y = a.y * b.y;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(((float)L_5), L_7));
		// return result;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		return L_8;
	}
}
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::op_Division(DungeonArchitect.IntVector2,DungeonArchitect.IntVector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_op_Division_m315200F74E14F53E1E4549BB541E5C6D8536726F (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_a, IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___1_b, const RuntimeMethod* method) 
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector2();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7));
		// result.x = a.x / b.x;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_2 = ___1_b;
		int32_t L_3 = L_2.___x_0;
		(&V_0)->___x_0 = ((int32_t)(L_1/L_3));
		// result.y = a.y / b.y;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_4 = ___0_a;
		int32_t L_5 = L_4.___y_1;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_6 = ___1_b;
		int32_t L_7 = L_6.___y_1;
		(&V_0)->___y_1 = ((int32_t)(L_5/L_7));
		// return result;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_8 = V_0;
		return L_8;
	}
}
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::op_Addition(DungeonArchitect.IntVector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_op_Addition_m0B5A57205FA493FC5B995243DE2EBF295450F5CE (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector2();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7));
		// result.x = a.x + b;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		int32_t L_2 = ___1_b;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		// result.y = a.y + b;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_3 = ___0_a;
		int32_t L_4 = L_3.___y_1;
		int32_t L_5 = ___1_b;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// return result;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_6 = V_0;
		return L_6;
	}
}
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::op_Subtraction(DungeonArchitect.IntVector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_op_Subtraction_mE0A0AD631570B17542611679EA78E164B347D1C8 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector2();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7));
		// result.x = a.x - b;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		int32_t L_2 = ___1_b;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		// result.y = a.y - b;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_3 = ___0_a;
		int32_t L_4 = L_3.___y_1;
		int32_t L_5 = ___1_b;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		// return result;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_6 = V_0;
		return L_6;
	}
}
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::op_Multiply(DungeonArchitect.IntVector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_op_Multiply_mB51F984933F146BF668D1800854D792A49B4A844 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector2();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7));
		// result.x = a.x * b;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		int32_t L_2 = ___1_b;
		(&V_0)->___x_0 = ((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		// result.y = a.y * b;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_3 = ___0_a;
		int32_t L_4 = L_3.___y_1;
		int32_t L_5 = ___1_b;
		(&V_0)->___y_1 = ((int32_t)il2cpp_codegen_multiply(L_4, L_5));
		// return result;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_6 = V_0;
		return L_6;
	}
}
// DungeonArchitect.IntVector2 DungeonArchitect.IntVector2::op_Division(DungeonArchitect.IntVector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 IntVector2_op_Division_mA56BBC08E069B2DDFD552C8E08E02978C56ED52A (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new IntVector2();
		il2cpp_codegen_initobj((&V_0), sizeof(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7));
		// result.x = a.x / b;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_a;
		int32_t L_1 = L_0.___x_0;
		int32_t L_2 = ___1_b;
		(&V_0)->___x_0 = ((int32_t)(L_1/L_2));
		// result.y = a.y / b;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_3 = ___0_a;
		int32_t L_4 = L_3.___y_1;
		int32_t L_5 = ___1_b;
		(&V_0)->___y_1 = ((int32_t)(L_4/L_5));
		// return result;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_6 = V_0;
		return L_6;
	}
}
// System.Boolean DungeonArchitect.IntVector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntVector2_Equals_m0D9F4BC3C1B6642B6DDB47B317E0F6847F121A63 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (obj is IntVector2)
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		// var other = (IntVector2)obj;
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*)((IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*)(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*)UnBox(L_1, IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7_il2cpp_TypeInfo_var))));
		// return this.x == other.x &&
		//     this.y == other.y;
		int32_t L_2 = __this->___x_0;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_3 = V_0;
		int32_t L_4 = L_3.___x_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = __this->___y_1;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_6 = V_0;
		int32_t L_7 = L_6.___y_1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_002c:
	{
		return (bool)0;
	}

IL_002e:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool IntVector2_Equals_m0D9F4BC3C1B6642B6DDB47B317E0F6847F121A63_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	bool _returnValue;
	_returnValue = IntVector2_Equals_m0D9F4BC3C1B6642B6DDB47B317E0F6847F121A63(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.IntVector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntVector2_GetHashCode_mAED9AFE6AB446B83104C1487877B66BAEE66E283 (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* __this, const RuntimeMethod* method) 
{
	{
		// return (x ^ (y << 16));
		int32_t L_0 = __this->___x_0;
		int32_t L_1 = __this->___y_1;
		return ((int32_t)(L_0^((int32_t)(L_1<<((int32_t)16)))));
	}
}
IL2CPP_EXTERN_C  int32_t IntVector2_GetHashCode_mAED9AFE6AB446B83104C1487877B66BAEE66E283_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = IntVector2_GetHashCode_mAED9AFE6AB446B83104C1487877B66BAEE66E283(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 DungeonArchitect.IntVector2::ToV2(DungeonArchitect.IntVector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 IntVector2_ToV2_m82D396065172A2E18953F4F4029729C850A9966D (IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 ___0_iv, const RuntimeMethod* method) 
{
	{
		// return new Vector2(iv.x, iv.y);
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0 = ___0_iv;
		int32_t L_1 = L_0.___x_0;
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_2 = ___0_iv;
		int32_t L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)L_1), ((float)L_3), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void DungeonArchitect.IntVector2::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVector2__cctor_m860A276C5C53B2115CCE6E6ECC39874B655D1512 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly IntVector2 Zero = new IntVector2(0, 0);
		IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		IntVector2__ctor_mD3BAEE651E799C5D5F4BAE76D31BFAA7ABD176E0((&L_0), 0, 0, /*hidden argument*/NULL);
		((IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7_StaticFields*)il2cpp_codegen_static_fields_for(IntVector2_t2DFD1430F75D3E32E93DE921832E85D4A3FD53F7_il2cpp_TypeInfo_var))->___Zero_2 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.Rectangle::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m414C7059151B811D6B4A62521D618023D7EC25AA (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, int32_t ___0_x, int32_t ___1_z, int32_t ___2_width, int32_t ___3_length, const RuntimeMethod* method) 
{
	{
		// location = new IntVector(x, 0, z);
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_z;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2;
		memset((&L_2), 0, sizeof(L_2));
		IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34((&L_2), L_0, 0, L_1, /*hidden argument*/NULL);
		__this->___location_0 = L_2;
		// size = new IntVector(width, 0, length);
		int32_t L_3 = ___2_width;
		int32_t L_4 = ___3_length;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_5;
		memset((&L_5), 0, sizeof(L_5));
		IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34((&L_5), L_3, 0, L_4, /*hidden argument*/NULL);
		__this->___size_1 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Rectangle__ctor_m414C7059151B811D6B4A62521D618023D7EC25AA_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, int32_t ___1_z, int32_t ___2_width, int32_t ___3_length, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	Rectangle__ctor_m414C7059151B811D6B4A62521D618023D7EC25AA(_thisAdjusted, ___0_x, ___1_z, ___2_width, ___3_length, method);
}
// System.Void DungeonArchitect.Rectangle::.ctor(DungeonArchitect.IntVector,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m3AC35F3E815A8A14017F485B942EC82A65BB78C3 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_location, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_size, const RuntimeMethod* method) 
{
	{
		// this.location = location;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_location;
		__this->___location_0 = L_0;
		// this.size = size;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_1 = ___1_size;
		__this->___size_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Rectangle__ctor_m3AC35F3E815A8A14017F485B942EC82A65BB78C3_AdjustorThunk (RuntimeObject* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_location, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_size, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	Rectangle__ctor_m3AC35F3E815A8A14017F485B942EC82A65BB78C3(_thisAdjusted, ___0_location, ___1_size, method);
}
// DungeonArchitect.IntVector DungeonArchitect.Rectangle::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// return location;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = __this->___location_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C _returnValue;
	_returnValue = Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DungeonArchitect.Rectangle::set_Location(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_set_Location_m6BBC646F493116B7888B219B2F48B0E634836185 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_value, const RuntimeMethod* method) 
{
	{
		// location = value;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_value;
		__this->___location_0 = L_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Rectangle_set_Location_m6BBC646F493116B7888B219B2F48B0E634836185_AdjustorThunk (RuntimeObject* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_value, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	Rectangle_set_Location_m6BBC646F493116B7888B219B2F48B0E634836185_inline(_thisAdjusted, ___0_value, method);
}
// DungeonArchitect.IntVector DungeonArchitect.Rectangle::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// return size;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = __this->___size_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C _returnValue;
	_returnValue = Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DungeonArchitect.Rectangle::set_Size(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_set_Size_m49F71D3947C8EC86A65E51B75BCB096F54839CCB (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_value, const RuntimeMethod* method) 
{
	{
		// size = value;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_value;
		__this->___size_1 = L_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Rectangle_set_Size_m49F71D3947C8EC86A65E51B75BCB096F54839CCB_AdjustorThunk (RuntimeObject* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_value, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	Rectangle_set_Size_m49F71D3947C8EC86A65E51B75BCB096F54839CCB_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 DungeonArchitect.Rectangle::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// get { return Location.x; }
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0;
		L_0 = Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_inline(__this, NULL);
		int32_t L_1 = L_0.___x_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Rectangle::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// get { return Location.z; }
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0;
		L_0 = Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_inline(__this, NULL);
		int32_t L_1 = L_0.___z_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Rectangle::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// get { return Size.x; }
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0;
		L_0 = Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259_inline(__this, NULL);
		int32_t L_1 = L_0.___x_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Rectangle::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// get { return Size.z; }
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0;
		L_0 = Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259_inline(__this, NULL);
		int32_t L_1 = L_0.___z_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Rectangle::get_Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Left_m672D8FFD32EB6D21587CB080377B3718C2A21B65 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// public int Left { get { return X; } }
		int32_t L_0;
		L_0 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Left_m672D8FFD32EB6D21587CB080377B3718C2A21B65_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Left_m672D8FFD32EB6D21587CB080377B3718C2A21B65(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Rectangle::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Right_m98757D70C3E68600BFB4EEC8027A0C84A7BA9E15 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// public int Right { get { return X + Width; } }
		int32_t L_0;
		L_0 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9(__this, NULL);
		int32_t L_1;
		L_1 = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C(__this, NULL);
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Right_m98757D70C3E68600BFB4EEC8027A0C84A7BA9E15_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Right_m98757D70C3E68600BFB4EEC8027A0C84A7BA9E15(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Rectangle::get_Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Back_m0FA2F43B6730EDF3B628BF7F9A6FD7A60BE14CAF (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// public int Back { get { return Z; } }
		int32_t L_0;
		L_0 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Back_m0FA2F43B6730EDF3B628BF7F9A6FD7A60BE14CAF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Back_m0FA2F43B6730EDF3B628BF7F9A6FD7A60BE14CAF(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Rectangle::get_Front()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Front_mC4A231B447BD7FF3CFF3F79DEBFB45E2195D52D8 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// public int Front { get { return Z + Length; } }
		int32_t L_0;
		L_0 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4(__this, NULL);
		int32_t L_1;
		L_1 = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435(__this, NULL);
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Front_mC4A231B447BD7FF3CFF3F79DEBFB45E2195D52D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Front_mC4A231B447BD7FF3CFF3F79DEBFB45E2195D52D8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DungeonArchitect.Rectangle::SetY(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_SetY_m462D23FE3D286760964D0026ADE94F7E087F26D9 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, int32_t ___0_y, const RuntimeMethod* method) 
{
	{
		// location.y = y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_0 = (&__this->___location_0);
		int32_t L_1 = ___0_y;
		L_0->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Rectangle_SetY_m462D23FE3D286760964D0026ADE94F7E087F26D9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_y, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	Rectangle_SetY_m462D23FE3D286760964D0026ADE94F7E087F26D9(_thisAdjusted, ___0_y, method);
}
// DungeonArchitect.IntVector DungeonArchitect.Rectangle::Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_Center_m769823203C701E04DBD55D9E8677E3A7463A1932 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Location + Size / 2;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0;
		L_0 = Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_inline(__this, NULL);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_1;
		L_1 = Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2;
		L_2 = IntVector_op_Division_m42808544BF5609C5B3233762D1C74E88B3ACBB02(L_1, 2, NULL);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_3;
		L_3 = IntVector_op_Addition_mDD66816374D94E99E89A052A5A1B6C78249273B6(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_Center_m769823203C701E04DBD55D9E8677E3A7463A1932_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C _returnValue;
	_returnValue = Rectangle_Center_m769823203C701E04DBD55D9E8677E3A7463A1932(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 DungeonArchitect.Rectangle::ToVector3(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rectangle_ToVector3_mB46F97388D20693E0BCDC85F9676117AAFD5A9F9 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_iv, const RuntimeMethod* method) 
{
	{
		// return new Vector3(iv.x, iv.y, iv.z);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_iv;
		int32_t L_1 = L_0.___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___0_iv;
		int32_t L_3 = L_2.___y_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_4 = ___0_iv;
		int32_t L_5 = L_4.___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((float)L_1), ((float)L_3), ((float)L_5), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Rectangle::CenterF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rectangle_CenterF_mB7C46A685881BA29734F1EB9DE38B3228FCAC94B (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// return ToVector3(Location) + ToVector3(Size) / 2.0f;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0;
		L_0 = Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rectangle_ToVector3_mB46F97388D20693E0BCDC85F9676117AAFD5A9F9(L_0, NULL);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2;
		L_2 = Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Rectangle_ToVector3_mB46F97388D20693E0BCDC85F9676117AAFD5A9F9(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_3, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rectangle_CenterF_mB7C46A685881BA29734F1EB9DE38B3228FCAC94B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Rectangle_CenterF_mB7C46A685881BA29734F1EB9DE38B3228FCAC94B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean DungeonArchitect.Rectangle::Contains(DungeonArchitect.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Contains_mB9B11622C141BF5982301F516ED135BC1A81D2D7 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_rect, const RuntimeMethod* method) 
{
	{
		// return(X <= rect.X) &&
		//     ((rect.X + rect.Width) <= (X + Width)) &&
		//         (Z <= rect.Z) &&
		//         ((rect.Z + rect.Length) <= (Z + Length));
		int32_t L_0;
		L_0 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9(__this, NULL);
		int32_t L_1;
		L_1 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9((&___0_rect), NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_2;
		L_2 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9((&___0_rect), NULL);
		int32_t L_3;
		L_3 = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C((&___0_rect), NULL);
		int32_t L_4;
		L_4 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9(__this, NULL);
		int32_t L_5;
		L_5 = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) > ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5)))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6;
		L_6 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4(__this, NULL);
		int32_t L_7;
		L_7 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4((&___0_rect), NULL);
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_8;
		L_8 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4((&___0_rect), NULL);
		int32_t L_9;
		L_9 = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435((&___0_rect), NULL);
		int32_t L_10;
		L_10 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4(__this, NULL);
		int32_t L_11;
		L_11 = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435(__this, NULL);
		return (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9))) > ((int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rectangle_Contains_mB9B11622C141BF5982301F516ED135BC1A81D2D7_AdjustorThunk (RuntimeObject* __this, Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_rect, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rectangle_Contains_mB9B11622C141BF5982301F516ED135BC1A81D2D7(_thisAdjusted, ___0_rect, method);
	return _returnValue;
}
// System.Boolean DungeonArchitect.Rectangle::Contains(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Contains_m5B8120D7B31834142751391496AF2567F000ECFF (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_Point, const RuntimeMethod* method) 
{
	{
		// return Contains(Point.x, Point.z);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_Point;
		int32_t L_1 = L_0.___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___0_Point;
		int32_t L_3 = L_2.___z_2;
		bool L_4;
		L_4 = Rectangle_Contains_m81F7B9823E19D05E59C7891D91ECD6BD703A03A8(__this, L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Rectangle_Contains_m5B8120D7B31834142751391496AF2567F000ECFF_AdjustorThunk (RuntimeObject* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_Point, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rectangle_Contains_m5B8120D7B31834142751391496AF2567F000ECFF(_thisAdjusted, ___0_Point, method);
	return _returnValue;
}
// System.Boolean DungeonArchitect.Rectangle::Contains(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Contains_m81F7B9823E19D05E59C7891D91ECD6BD703A03A8 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, int32_t ___0_x, int32_t ___1_z, const RuntimeMethod* method) 
{
	{
		// return this.X <= x &&
		//     x < this.X + this.Width &&
		//         this.Z <= z &&
		//         z < this.Z + this.Length;
		int32_t L_0;
		L_0 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9(__this, NULL);
		int32_t L_1 = ___0_x;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = ___0_x;
		int32_t L_3;
		L_3 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9(__this, NULL);
		int32_t L_4;
		L_4 = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C(__this, NULL);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4)))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5;
		L_5 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4(__this, NULL);
		int32_t L_6 = ___1_z;
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___1_z;
		int32_t L_8;
		L_8 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4(__this, NULL);
		int32_t L_9;
		L_9 = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435(__this, NULL);
		return (bool)((((int32_t)L_7) < ((int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9))))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rectangle_Contains_m81F7B9823E19D05E59C7891D91ECD6BD703A03A8_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, int32_t ___1_z, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rectangle_Contains_m81F7B9823E19D05E59C7891D91ECD6BD703A03A8(_thisAdjusted, ___0_x, ___1_z, method);
	return _returnValue;
}
// DungeonArchitect.Rectangle DungeonArchitect.Rectangle::Intersect(DungeonArchitect.Rectangle,DungeonArchitect.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E Rectangle_Intersect_m16309501B2DBDE56A9ED2353FF494AE9D6D581C6 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_a, Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// int x1 = Mathf.Max(a.X, b.X);
		int32_t L_0;
		L_0 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9((&___0_a), NULL);
		int32_t L_1;
		L_1 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9((&___1_b), NULL);
		int32_t L_2;
		L_2 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// int x2 = Mathf.Min(a.X + a.Width, b.X + b.Width);
		int32_t L_3;
		L_3 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9((&___0_a), NULL);
		int32_t L_4;
		L_4 = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C((&___0_a), NULL);
		int32_t L_5;
		L_5 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9((&___1_b), NULL);
		int32_t L_6;
		L_6 = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C((&___1_b), NULL);
		int32_t L_7;
		L_7 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_3, L_4)), ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
		V_1 = L_7;
		// int z1 = Mathf.Max(a.Z, b.Z);
		int32_t L_8;
		L_8 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4((&___0_a), NULL);
		int32_t L_9;
		L_9 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4((&___1_b), NULL);
		int32_t L_10;
		L_10 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_8, L_9, NULL);
		V_2 = L_10;
		// int z2 = Mathf.Min(a.Z + a.Length, b.Z + b.Length);
		int32_t L_11;
		L_11 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4((&___0_a), NULL);
		int32_t L_12;
		L_12 = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435((&___0_a), NULL);
		int32_t L_13;
		L_13 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4((&___1_b), NULL);
		int32_t L_14;
		L_14 = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435((&___1_b), NULL);
		int32_t L_15;
		L_15 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_11, L_12)), ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		V_3 = L_15;
		// if (x2 >= x1 && z2 >= z1) {
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0086;
		}
	}
	{
		// return new Rectangle(x1, z1, x2 - x1, z2 - z1);
		int32_t L_20 = V_0;
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E L_26;
		memset((&L_26), 0, sizeof(L_26));
		Rectangle__ctor_m414C7059151B811D6B4A62521D618023D7EC25AA((&L_26), L_20, L_21, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), /*hidden argument*/NULL);
		return L_26;
	}

IL_0086:
	{
		// return new Rectangle();
		il2cpp_codegen_initobj((&V_4), sizeof(Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E));
		Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E L_27 = V_4;
		return L_27;
	}
}
// System.Boolean DungeonArchitect.Rectangle::IntersectsWith(DungeonArchitect.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_IntersectsWith_m7BDC1B9CD435B5FF1460588F088E90B72CDB86D8 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_rect, const RuntimeMethod* method) 
{
	{
		// return(rect.X < X + Width) &&
		//     (X < (rect.X + rect.Width)) &&
		//         (rect.Z < Z + Length) &&
		//         (Z < rect.Z + rect.Length);
		int32_t L_0;
		L_0 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9((&___0_rect), NULL);
		int32_t L_1;
		L_1 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9(__this, NULL);
		int32_t L_2;
		L_2 = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_3;
		L_3 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9(__this, NULL);
		int32_t L_4;
		L_4 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9((&___0_rect), NULL);
		int32_t L_5;
		L_5 = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C((&___0_rect), NULL);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_6;
		L_6 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4((&___0_rect), NULL);
		int32_t L_7;
		L_7 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4(__this, NULL);
		int32_t L_8;
		L_8 = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435(__this, NULL);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9;
		L_9 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4(__this, NULL);
		int32_t L_10;
		L_10 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4((&___0_rect), NULL);
		int32_t L_11;
		L_11 = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435((&___0_rect), NULL);
		return (bool)((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11))))? 1 : 0);
	}

IL_005b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rectangle_IntersectsWith_m7BDC1B9CD435B5FF1460588F088E90B72CDB86D8_AdjustorThunk (RuntimeObject* __this, Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_rect, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rectangle_IntersectsWith_m7BDC1B9CD435B5FF1460588F088E90B72CDB86D8(_thisAdjusted, ___0_rect, method);
	return _returnValue;
}
// DungeonArchitect.Rectangle DungeonArchitect.Rectangle::ExpandBounds(DungeonArchitect.Rectangle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E Rectangle_ExpandBounds_mB2B91D2CB09196E225226A740A2AE76AC1FCB319 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_rect, int32_t ___1_distance, const RuntimeMethod* method) 
{
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_0;
	memset((&V_0), 0, sizeof(V_0));
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var location = rect.Location;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0;
		L_0 = Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_inline((&___0_rect), NULL);
		V_0 = L_0;
		// var size = rect.Size;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_1;
		L_1 = Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259_inline((&___0_rect), NULL);
		V_1 = L_1;
		// location.x -= distance;
		int32_t* L_2 = (&(&V_0)->___x_0);
		int32_t* L_3 = L_2;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = ___1_distance;
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		// location.z -= distance;
		int32_t* L_6 = (&(&V_0)->___z_2);
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		int32_t L_9 = ___1_distance;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		// size.x += distance * 2;
		int32_t* L_10 = (&(&V_1)->___x_0);
		int32_t* L_11 = L_10;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = ___1_distance;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_multiply(L_13, 2))));
		// size.z += distance * 2;
		int32_t* L_14 = (&(&V_1)->___z_2);
		int32_t* L_15 = L_14;
		int32_t L_16 = *((int32_t*)L_15);
		int32_t L_17 = ___1_distance;
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)il2cpp_codegen_multiply(L_17, 2))));
		// var result = rect;
		Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E L_18 = ___0_rect;
		V_2 = L_18;
		// result.location = location;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_19 = V_0;
		(&V_2)->___location_0 = L_19;
		// result.size = size;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_20 = V_1;
		(&V_2)->___size_1 = L_20;
		// return result;
		Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E L_21 = V_2;
		return L_21;
	}
}
// DungeonArchitect.IntVector[] DungeonArchitect.Rectangle::GetBorderPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* Rectangle_GetBorderPoints_mD293F309F288D7B5E3AE3E4FDA774F0734E17116 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m3B777FFBB6EDB91CA0315A1670A4E3DD2758021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3594F0DA9A2356EC1BE06D92A122AC7D4953A063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t72F81508323A323FA6727DCAE9E4209241B62383_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t72F81508323A323FA6727DCAE9E4209241B62383* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// var result = new List<IntVector>();
		List_1_t72F81508323A323FA6727DCAE9E4209241B62383* L_0 = (List_1_t72F81508323A323FA6727DCAE9E4209241B62383*)il2cpp_codegen_object_new(List_1_t72F81508323A323FA6727DCAE9E4209241B62383_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3594F0DA9A2356EC1BE06D92A122AC7D4953A063(L_0, List_1__ctor_m3594F0DA9A2356EC1BE06D92A122AC7D4953A063_RuntimeMethod_var);
		V_0 = L_0;
		// for (int dx = 0; dx < size.x; dx++)
		V_1 = 0;
		goto IL_0084;
	}

IL_000a:
	{
		// var x = location.x + dx;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_1 = (&__this->___location_0);
		int32_t L_2 = L_1->___x_0;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		// var y = location.y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_4 = (&__this->___location_0);
		int32_t L_5 = L_4->___y_1;
		V_3 = L_5;
		// var z = location.z;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_6 = (&__this->___location_0);
		int32_t L_7 = L_6->___z_2;
		V_4 = L_7;
		// var point = new IntVector(x, y, z);
		int32_t L_8 = V_2;
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34((&V_5), L_8, L_9, L_10, NULL);
		// result.Add(point);
		List_1_t72F81508323A323FA6727DCAE9E4209241B62383* L_11 = V_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_12 = V_5;
		NullCheck(L_11);
		List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_inline(L_11, L_12, List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_RuntimeMethod_var);
		// if (size.z > 1) {
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_13 = (&__this->___size_1);
		int32_t L_14 = L_13->___z_2;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_0080;
		}
	}
	{
		// z = location.z + size.z - 1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_15 = (&__this->___location_0);
		int32_t L_16 = L_15->___z_2;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_17 = (&__this->___size_1);
		int32_t L_18 = L_17->___z_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_16, L_18)), 1));
		// point = new IntVector(x, y, z);
		int32_t L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = V_4;
		IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34((&V_5), L_19, L_20, L_21, NULL);
		// result.Add(point);
		List_1_t72F81508323A323FA6727DCAE9E4209241B62383* L_22 = V_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_23 = V_5;
		NullCheck(L_22);
		List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_inline(L_22, L_23, List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_RuntimeMethod_var);
	}

IL_0080:
	{
		// for (int dx = 0; dx < size.x; dx++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0084:
	{
		// for (int dx = 0; dx < size.x; dx++)
		int32_t L_25 = V_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_26 = (&__this->___size_1);
		int32_t L_27 = L_26->___x_0;
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000a;
		}
	}
	{
		// for (int dz = 1; dz < size.z - 1; dz++)
		V_6 = 1;
		goto IL_0120;
	}

IL_009d:
	{
		// var x = location.x;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_28 = (&__this->___location_0);
		int32_t L_29 = L_28->___x_0;
		V_7 = L_29;
		// var y = location.y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_30 = (&__this->___location_0);
		int32_t L_31 = L_30->___y_1;
		V_8 = L_31;
		// var z = location.z + dz;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_32 = (&__this->___location_0);
		int32_t L_33 = L_32->___z_2;
		int32_t L_34 = V_6;
		V_9 = ((int32_t)il2cpp_codegen_add(L_33, L_34));
		// var point = new IntVector(x, y, z);
		int32_t L_35 = V_7;
		int32_t L_36 = V_8;
		int32_t L_37 = V_9;
		IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34((&V_10), L_35, L_36, L_37, NULL);
		// result.Add(point);
		List_1_t72F81508323A323FA6727DCAE9E4209241B62383* L_38 = V_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_39 = V_10;
		NullCheck(L_38);
		List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_inline(L_38, L_39, List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_RuntimeMethod_var);
		// if (size.x > 1) {
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_40 = (&__this->___size_1);
		int32_t L_41 = L_40->___x_0;
		if ((((int32_t)L_41) <= ((int32_t)1)))
		{
			goto IL_011a;
		}
	}
	{
		// x = location.x + size.x - 1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_42 = (&__this->___location_0);
		int32_t L_43 = L_42->___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_44 = (&__this->___size_1);
		int32_t L_45 = L_44->___x_0;
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_45)), 1));
		// point = new IntVector(x, y, z);
		int32_t L_46 = V_7;
		int32_t L_47 = V_8;
		int32_t L_48 = V_9;
		IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34((&V_10), L_46, L_47, L_48, NULL);
		// result.Add(point);
		List_1_t72F81508323A323FA6727DCAE9E4209241B62383* L_49 = V_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_50 = V_10;
		NullCheck(L_49);
		List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_inline(L_49, L_50, List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_RuntimeMethod_var);
	}

IL_011a:
	{
		// for (int dz = 1; dz < size.z - 1; dz++)
		int32_t L_51 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0120:
	{
		// for (int dz = 1; dz < size.z - 1; dz++)
		int32_t L_52 = V_6;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C* L_53 = (&__this->___size_1);
		int32_t L_54 = L_53->___z_2;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_54, 1)))))
		{
			goto IL_009d;
		}
	}
	{
		// return result.ToArray();
		List_1_t72F81508323A323FA6727DCAE9E4209241B62383* L_55 = V_0;
		NullCheck(L_55);
		IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* L_56;
		L_56 = List_1_ToArray_m3B777FFBB6EDB91CA0315A1670A4E3DD2758021C(L_55, List_1_ToArray_m3B777FFBB6EDB91CA0315A1670A4E3DD2758021C_RuntimeMethod_var);
		return L_56;
	}
}
IL2CPP_EXTERN_C  IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* Rectangle_GetBorderPoints_mD293F309F288D7B5E3AE3E4FDA774F0734E17116_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E*>(__this + _offset);
	IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* _returnValue;
	_returnValue = Rectangle_GetBorderPoints_mD293F309F288D7B5E3AE3E4FDA774F0734E17116(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.MetaAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAttribute__ctor_mB7396E1AB88F9DC8B6EA1916497457AD11822ECC (MetaAttribute_t5CFD48939E5E6B8F92C83270E16CC1EA4486FB61* __this, String_t* ___0_displayText, const RuntimeMethod* method) 
{
	{
		// public MetaAttribute(string displayText)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.displayText = displayText;
		String_t* L_0 = ___0_displayText;
		__this->___displayText_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayText_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DungeonArchitect.Extensions.DungeonExtensions::IsValid(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonExtensions_IsValid_m056153B84F9AB451646078949607A05BE039D1B4 (Guid_t ___0_guid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return guid != System.Guid.Empty;
		Guid_t L_0 = ___0_guid;
		Guid_t L_1 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_2;
		L_2 = Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163(L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DungeonArchitect.Utils.BlackboardDatabase`1<System.Int32> DungeonArchitect.Utils.Blackboard::get_IntEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72* Blackboard_get_IntEntries_m5975BA1E49E42125EB74A001B365348860ABD0BA (Blackboard_t02618F4A3DD340B66759F75B766D598574968BAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return intEntries; }
		BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72* L_0 = __this->___intEntries_0;
		return L_0;
	}
}
// DungeonArchitect.Utils.BlackboardDatabase`1<System.Single> DungeonArchitect.Utils.Blackboard::get_FloatEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355* Blackboard_get_FloatEntries_m2D0ACC94C741B901586F7CD30225F80627E33740 (Blackboard_t02618F4A3DD340B66759F75B766D598574968BAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return floatEntries; }
		BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355* L_0 = __this->___floatEntries_1;
		return L_0;
	}
}
// DungeonArchitect.Utils.BlackboardDatabase`1<System.String> DungeonArchitect.Utils.Blackboard::get_StringEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE* Blackboard_get_StringEntries_m6C0B9819C401ECE9934FCBB262C75D166ADBD4F7 (Blackboard_t02618F4A3DD340B66759F75B766D598574968BAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return stringEntries; }
		BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE* L_0 = __this->___stringEntries_2;
		return L_0;
	}
}
// DungeonArchitect.Utils.BlackboardDatabase`1<UnityEngine.Vector3> DungeonArchitect.Utils.Blackboard::get_VectorEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16* Blackboard_get_VectorEntries_mF776B07939FED8C0EFDC0112E1B2BAAD2BC9AF22 (Blackboard_t02618F4A3DD340B66759F75B766D598574968BAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return vectorEntries; }
		BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16* L_0 = __this->___vectorEntries_3;
		return L_0;
	}
}
// DungeonArchitect.Utils.BlackboardDatabase`1<DungeonArchitect.IntVector> DungeonArchitect.Utils.Blackboard::get_IntVectorEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260* Blackboard_get_IntVectorEntries_m3723A10ACBEDBA68FE7152E2C0678D9911645364 (Blackboard_t02618F4A3DD340B66759F75B766D598574968BAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return intVectorEntries; }
		BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260* L_0 = __this->___intVectorEntries_4;
		return L_0;
	}
}
// System.Void DungeonArchitect.Utils.Blackboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blackboard__ctor_m3E9F07F0CEDCF79CBD8C800EC761A0F0F0752F3C (Blackboard_t02618F4A3DD340B66759F75B766D598574968BAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1__ctor_m2EA8C62643DFB4A31FFD8547EAEDD5021E63B01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1__ctor_m60FF6330F5EF69ED9383D06F6981D9D4BCFCF70E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1__ctor_mC873E4E29ED7DD5D6A60117D072223ECB1ACCC5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1__ctor_mDBE6F3297EC557BFADB22F7FBF53A53FBD633459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1__ctor_mF04F2F06CBDC218A82E19C44D158EE7C636E0313_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private BlackboardDatabase<int> intEntries = new BlackboardDatabase<int>(0);
		BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72* L_0 = (BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72*)il2cpp_codegen_object_new(BlackboardDatabase_1_tF6BBF6273855B129F95CAFE2F765D24B5B70FC72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BlackboardDatabase_1__ctor_mC873E4E29ED7DD5D6A60117D072223ECB1ACCC5A(L_0, 0, BlackboardDatabase_1__ctor_mC873E4E29ED7DD5D6A60117D072223ECB1ACCC5A_RuntimeMethod_var);
		__this->___intEntries_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___intEntries_0), (void*)L_0);
		// private BlackboardDatabase<float> floatEntries = new BlackboardDatabase<float>(0.0f);
		BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355* L_1 = (BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355*)il2cpp_codegen_object_new(BlackboardDatabase_1_tB832A6F97B1D095490FF9B70B7E4C978FED46355_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BlackboardDatabase_1__ctor_mF04F2F06CBDC218A82E19C44D158EE7C636E0313(L_1, (0.0f), BlackboardDatabase_1__ctor_mF04F2F06CBDC218A82E19C44D158EE7C636E0313_RuntimeMethod_var);
		__this->___floatEntries_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floatEntries_1), (void*)L_1);
		// private BlackboardDatabase<string> stringEntries = new BlackboardDatabase<string>("");
		BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE* L_2 = (BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE*)il2cpp_codegen_object_new(BlackboardDatabase_1_tAFAA73C37E560BACCAD590E452728043822C87FE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BlackboardDatabase_1__ctor_m2EA8C62643DFB4A31FFD8547EAEDD5021E63B01F(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, BlackboardDatabase_1__ctor_m2EA8C62643DFB4A31FFD8547EAEDD5021E63B01F_RuntimeMethod_var);
		__this->___stringEntries_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringEntries_2), (void*)L_2);
		// private BlackboardDatabase<Vector3> vectorEntries = new BlackboardDatabase<Vector3>(Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16* L_4 = (BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16*)il2cpp_codegen_object_new(BlackboardDatabase_1_tAB707473BF382E39EB0C239AEC422BF52206FA16_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BlackboardDatabase_1__ctor_m60FF6330F5EF69ED9383D06F6981D9D4BCFCF70E(L_4, L_3, BlackboardDatabase_1__ctor_m60FF6330F5EF69ED9383D06F6981D9D4BCFCF70E_RuntimeMethod_var);
		__this->___vectorEntries_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vectorEntries_3), (void*)L_4);
		// private BlackboardDatabase<IntVector> intVectorEntries = new BlackboardDatabase<IntVector>(IntVector.Zero);
		il2cpp_codegen_runtime_class_init_inline(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_5 = ((IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_StaticFields*)il2cpp_codegen_static_fields_for(IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C_il2cpp_TypeInfo_var))->___Zero_3;
		BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260* L_6 = (BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260*)il2cpp_codegen_object_new(BlackboardDatabase_1_tAD075DE2546B5A614DB5F44C12D1BB35DAFCC260_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BlackboardDatabase_1__ctor_mDBE6F3297EC557BFADB22F7FBF53A53FBD633459(L_6, L_5, BlackboardDatabase_1__ctor_mDBE6F3297EC557BFADB22F7FBF53A53FBD633459_RuntimeMethod_var);
		__this->___intVectorEntries_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___intVectorEntries_4), (void*)L_6);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color DungeonArchitect.Utils.ColorUtils::BrightenColor(UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_BrightenColor_m0B24D874FBD507AE744BB44E9E0C0A98F9D372CB (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_saturationMultiplier, float ___2_brightnessMultiplier, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Color.RGBToHSV(color, out H, out S, out V);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		Color_RGBToHSV_m10DD6CE937F04FE322EED0E154C1D7D6933EA2F8(L_0, (&V_0), (&V_1), (&V_2), NULL);
		// S *= saturationMultiplier;
		float L_1 = V_1;
		float L_2 = ___1_saturationMultiplier;
		V_1 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// V = Mathf.Clamp01(V * brightnessMultiplier);
		float L_3 = V_2;
		float L_4 = ___2_brightnessMultiplier;
		float L_5;
		L_5 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		V_2 = L_5;
		// return Color.HSVToRGB(H, S, V);
		float L_6 = V_0;
		float L_7 = V_1;
		float L_8 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void DungeonArchitect.Utils.ColorUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorUtils__ctor_m879A0E433E8E44BE389566A3AE03353C2BEFCADC (ColorUtils_t2993A2C3663CE1692C5ADFE372232051A8847335* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DungeonArchitect.Utils.DungeonUID DungeonArchitect.Utils.DungeonUID::NewUID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 DungeonUID_NewUID_mE6EE97B2F74BC543ED8A85DF5373B55F26B1DD68 (const RuntimeMethod* method) 
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new DungeonUID()
		// {
		//     Guid = System.Guid.NewGuid()
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9));
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		(&V_0)->___Guid_0 = L_0;
		DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 L_1 = V_0;
		return L_1;
	}
}
// System.Guid DungeonArchitect.Utils.DungeonUID::op_Implicit(DungeonArchitect.Utils.DungeonUID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t DungeonUID_op_Implicit_mFD98B60EAAE3E934A1AEB5C42FC8ACE294A46B24 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___0_uid, const RuntimeMethod* method) 
{
	{
		// return uid.Guid;
		DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 L_0 = ___0_uid;
		Guid_t L_1 = L_0.___Guid_0;
		return L_1;
	}
}
// System.Boolean DungeonArchitect.Utils.DungeonUID::op_Equality(DungeonArchitect.Utils.DungeonUID,DungeonArchitect.Utils.DungeonUID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_op_Equality_m9BE0A4C9821C079827543DE011F25F5577C875F8 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___0_a, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___1_b, const RuntimeMethod* method) 
{
	{
		// return a.Guid == b.Guid;
		DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 L_0 = ___0_a;
		Guid_t L_1 = L_0.___Guid_0;
		DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 L_2 = ___1_b;
		Guid_t L_3 = L_2.___Guid_0;
		bool L_4;
		L_4 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean DungeonArchitect.Utils.DungeonUID::op_Inequality(DungeonArchitect.Utils.DungeonUID,DungeonArchitect.Utils.DungeonUID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_op_Inequality_m6079A32298A042D00F995322F9627BEDE100DE64 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___0_a, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___1_b, const RuntimeMethod* method) 
{
	{
		// return a.Guid != b.Guid;
		DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 L_0 = ___0_a;
		Guid_t L_1 = L_0.___Guid_0;
		DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 L_2 = ___1_b;
		Guid_t L_3 = L_2.___Guid_0;
		bool L_4;
		L_4 = Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean DungeonArchitect.Utils.DungeonUID::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_IsValid_m2DAEBD6A443A151A49262F3B94CFD934FFC0E043 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Guid != System.Guid.Empty;
		Guid_t L_0 = __this->___Guid_0;
		Guid_t L_1 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_2;
		L_2 = Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool DungeonUID_IsValid_m2DAEBD6A443A151A49262F3B94CFD934FFC0E043_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*>(__this + _offset);
	bool _returnValue;
	_returnValue = DungeonUID_IsValid_m2DAEBD6A443A151A49262F3B94CFD934FFC0E043(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Utils.DungeonUID::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DungeonUID_CompareTo_mCB24702E786CDAA5867F5A55EC39593AB0B53264 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (obj == null) return -1;
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (obj == null) return -1;
		return (-1);
	}

IL_0005:
	{
		// if (obj is DungeonUID)
		RuntimeObject* L_1 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		// return ((DungeonUID) obj).Guid.CompareTo(Guid);
		RuntimeObject* L_2 = ___0_obj;
		V_0 = ((*(DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*)((DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*)(DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*)UnBox(L_2, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_il2cpp_TypeInfo_var))));
		Guid_t* L_3 = (&(&V_0)->___Guid_0);
		Guid_t L_4 = __this->___Guid_0;
		int32_t L_5;
		L_5 = Guid_CompareTo_mC22A00A14BBCCBF55F303C89A567FCA43925B586(L_3, L_4, NULL);
		return L_5;
	}

IL_0027:
	{
		// if (obj is System.Guid)
		RuntimeObject* L_6 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		// return ((System.Guid) obj).CompareTo(Guid);
		RuntimeObject* L_7 = ___0_obj;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_7, Guid_t_il2cpp_TypeInfo_var))));
		Guid_t L_8 = __this->___Guid_0;
		int32_t L_9;
		L_9 = Guid_CompareTo_mC22A00A14BBCCBF55F303C89A567FCA43925B586((&V_1), L_8, NULL);
		return L_9;
	}

IL_0044:
	{
		// return -1;
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t DungeonUID_CompareTo_mCB24702E786CDAA5867F5A55EC39593AB0B53264_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DungeonUID_CompareTo_mCB24702E786CDAA5867F5A55EC39593AB0B53264(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Utils.DungeonUID::CompareTo(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DungeonUID_CompareTo_mAF227D552142C9F51B7880B879B7DAB5D90FE102 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, Guid_t ___0_other, const RuntimeMethod* method) 
{
	{
		// return Guid.CompareTo(other);
		Guid_t* L_0 = (&__this->___Guid_0);
		Guid_t L_1 = ___0_other;
		int32_t L_2;
		L_2 = Guid_CompareTo_mC22A00A14BBCCBF55F303C89A567FCA43925B586(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t DungeonUID_CompareTo_mAF227D552142C9F51B7880B879B7DAB5D90FE102_AdjustorThunk (RuntimeObject* __this, Guid_t ___0_other, const RuntimeMethod* method)
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DungeonUID_CompareTo_mAF227D552142C9F51B7880B879B7DAB5D90FE102(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Utils.DungeonUID::CompareTo(DungeonArchitect.Utils.DungeonUID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DungeonUID_CompareTo_mBEA0E647F28C7B934C359A7726E01E9FEF2EDE97 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___0_other, const RuntimeMethod* method) 
{
	{
		// return other.Guid.CompareTo(Guid);
		Guid_t* L_0 = (&(&___0_other)->___Guid_0);
		Guid_t L_1 = __this->___Guid_0;
		int32_t L_2;
		L_2 = Guid_CompareTo_mC22A00A14BBCCBF55F303C89A567FCA43925B586(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t DungeonUID_CompareTo_mBEA0E647F28C7B934C359A7726E01E9FEF2EDE97_AdjustorThunk (RuntimeObject* __this, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___0_other, const RuntimeMethod* method)
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DungeonUID_CompareTo_mBEA0E647F28C7B934C359A7726E01E9FEF2EDE97(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean DungeonArchitect.Utils.DungeonUID::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_Equals_m070452AB17F6A95982434E76859C3BC69932DBC8 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, Guid_t ___0_other, const RuntimeMethod* method) 
{
	{
		// return Guid.Equals(other);
		Guid_t* L_0 = (&__this->___Guid_0);
		Guid_t L_1 = ___0_other;
		bool L_2;
		L_2 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool DungeonUID_Equals_m070452AB17F6A95982434E76859C3BC69932DBC8_AdjustorThunk (RuntimeObject* __this, Guid_t ___0_other, const RuntimeMethod* method)
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*>(__this + _offset);
	bool _returnValue;
	_returnValue = DungeonUID_Equals_m070452AB17F6A95982434E76859C3BC69932DBC8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean DungeonArchitect.Utils.DungeonUID::Equals(DungeonArchitect.Utils.DungeonUID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_Equals_mCBD78B0B13CA697EC490E474C8A65A1CBD39055C (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___0_other, const RuntimeMethod* method) 
{
	{
		// return other.Guid.Equals(Guid);
		Guid_t* L_0 = (&(&___0_other)->___Guid_0);
		Guid_t L_1 = __this->___Guid_0;
		bool L_2;
		L_2 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool DungeonUID_Equals_mCBD78B0B13CA697EC490E474C8A65A1CBD39055C_AdjustorThunk (RuntimeObject* __this, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 ___0_other, const RuntimeMethod* method)
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*>(__this + _offset);
	bool _returnValue;
	_returnValue = DungeonUID_Equals_mCBD78B0B13CA697EC490E474C8A65A1CBD39055C(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean DungeonArchitect.Utils.DungeonUID::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DungeonUID_Equals_mECD3861B8E47B054A5D86F16A61248046E396137 (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (obj == null) return false;
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (obj == null) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (obj is DungeonUID)
		RuntimeObject* L_1 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		// return ((DungeonUID) obj).Guid.Equals(Guid);
		RuntimeObject* L_2 = ___0_obj;
		V_0 = ((*(DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*)((DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*)(DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*)UnBox(L_2, DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_il2cpp_TypeInfo_var))));
		Guid_t* L_3 = (&(&V_0)->___Guid_0);
		Guid_t L_4 = __this->___Guid_0;
		bool L_5;
		L_5 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C(L_3, L_4, NULL);
		return L_5;
	}

IL_0027:
	{
		// if (obj is System.Guid)
		RuntimeObject* L_6 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		// return ((System.Guid) obj).Equals(Guid);
		RuntimeObject* L_7 = ___0_obj;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_7, Guid_t_il2cpp_TypeInfo_var))));
		Guid_t L_8 = __this->___Guid_0;
		bool L_9;
		L_9 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_1), L_8, NULL);
		return L_9;
	}

IL_0044:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool DungeonUID_Equals_mECD3861B8E47B054A5D86F16A61248046E396137_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*>(__this + _offset);
	bool _returnValue;
	_returnValue = DungeonUID_Equals_mECD3861B8E47B054A5D86F16A61248046E396137(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 DungeonArchitect.Utils.DungeonUID::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DungeonUID_GetHashCode_m3CDA4249C6E169AF940AA63BC6C40880147901BD (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, const RuntimeMethod* method) 
{
	{
		// return Guid.GetHashCode();
		Guid_t* L_0 = (&__this->___Guid_0);
		int32_t L_1;
		L_1 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t DungeonUID_GetHashCode_m3CDA4249C6E169AF940AA63BC6C40880147901BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DungeonUID_GetHashCode_m3CDA4249C6E169AF940AA63BC6C40880147901BD(_thisAdjusted, method);
	return _returnValue;
}
// System.String DungeonArchitect.Utils.DungeonUID::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DungeonUID_ToString_m7472E240B273FFA66D34B20EFF22A69C6F103C7E (DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* __this, const RuntimeMethod* method) 
{
	{
		// return Guid.ToString();
		Guid_t* L_0 = (&__this->___Guid_0);
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* DungeonUID_ToString_m7472E240B273FFA66D34B20EFF22A69C6F103C7E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DungeonUID_ToString_m7472E240B273FFA66D34B20EFF22A69C6F103C7E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DungeonArchitect.Utils.DungeonUID::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonUID__cctor_mD3ACE1EF3B8EAEE1AF4D1B355E2CA938C2C218B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly DungeonUID Empty = new DungeonUID()
		// {
		//     Guid = System.Guid.Empty
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9));
		Guid_t L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		(&V_0)->___Guid_0 = L_0;
		DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9 L_1 = V_0;
		((DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_StaticFields*)il2cpp_codegen_static_fields_for(DungeonUID_tE8CE2B9A9730AD6B17567131FF1FC463652BC9E9_il2cpp_TypeInfo_var))->___Empty_5 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.Utils.DebugDrawUtils::DrawBounds(DungeonArchitect.Rectangle,UnityEngine.Color,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawUtils_DrawBounds_m2A5835D6779302E0C451B7DECF5999CEF2A96457 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_bounds, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_gridScale, bool ___3_mode2D, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// var x0 = bounds.Left * gridScale.x;
		int32_t L_0;
		L_0 = Rectangle_get_Left_m672D8FFD32EB6D21587CB080377B3718C2A21B65((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___2_gridScale;
		float L_2 = L_1.___x_2;
		V_0 = ((float)il2cpp_codegen_multiply(((float)L_0), L_2));
		// var x1 = bounds.Right * gridScale.x;
		int32_t L_3;
		L_3 = Rectangle_get_Right_m98757D70C3E68600BFB4EEC8027A0C84A7BA9E15((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___2_gridScale;
		float L_5 = L_4.___x_2;
		V_1 = ((float)il2cpp_codegen_multiply(((float)L_3), L_5));
		// var z0 = bounds.Front * gridScale.z;
		int32_t L_6;
		L_6 = Rectangle_get_Front_mC4A231B447BD7FF3CFF3F79DEBFB45E2195D52D8((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___2_gridScale;
		float L_8 = L_7.___z_4;
		V_2 = ((float)il2cpp_codegen_multiply(((float)L_6), L_8));
		// var z1 = bounds.Back * gridScale.z;
		int32_t L_9;
		L_9 = Rectangle_get_Back_m0FA2F43B6730EDF3B628BF7F9A6FD7A60BE14CAF((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___2_gridScale;
		float L_11 = L_10.___z_4;
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_9), L_11));
		// var y = bounds.Location.y * gridScale.y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_12;
		L_12 = Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_inline((&___0_bounds), NULL);
		int32_t L_13 = L_12.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___2_gridScale;
		float L_15 = L_14.___y_3;
		V_4 = ((float)il2cpp_codegen_multiply(((float)L_13), L_15));
		// DrawLine(new Vector3(x0, y, z0), new Vector3(x1, y, z0), color, 0, false, mode2D);
		float L_16 = V_0;
		float L_17 = V_4;
		float L_18 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_16, L_17, L_18, /*hidden argument*/NULL);
		float L_20 = V_1;
		float L_21 = V_4;
		float L_22 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), L_20, L_21, L_22, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___1_color;
		bool L_25 = ___3_mode2D;
		DebugDrawUtils_DrawLine_m515C5368090D3395D57BB470B0106FF58782383B(L_19, L_23, L_24, (0.0f), (bool)0, L_25, NULL);
		// DrawLine(new Vector3(x1, y, z0), new Vector3(x1, y, z1), color, 0, false, mode2D);
		float L_26 = V_1;
		float L_27 = V_4;
		float L_28 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), L_26, L_27, L_28, /*hidden argument*/NULL);
		float L_30 = V_1;
		float L_31 = V_4;
		float L_32 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), L_30, L_31, L_32, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = ___1_color;
		bool L_35 = ___3_mode2D;
		DebugDrawUtils_DrawLine_m515C5368090D3395D57BB470B0106FF58782383B(L_29, L_33, L_34, (0.0f), (bool)0, L_35, NULL);
		// DrawLine(new Vector3(x1, y, z1), new Vector3(x0, y, z1), color, 0, false, mode2D);
		float L_36 = V_1;
		float L_37 = V_4;
		float L_38 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), L_36, L_37, L_38, /*hidden argument*/NULL);
		float L_40 = V_0;
		float L_41 = V_4;
		float L_42 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_40, L_41, L_42, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = ___1_color;
		bool L_45 = ___3_mode2D;
		DebugDrawUtils_DrawLine_m515C5368090D3395D57BB470B0106FF58782383B(L_39, L_43, L_44, (0.0f), (bool)0, L_45, NULL);
		// DrawLine(new Vector3(x0, y, z1), new Vector3(x0, y, z0), color, 0, false, mode2D);
		float L_46 = V_0;
		float L_47 = V_4;
		float L_48 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_49), L_46, L_47, L_48, /*hidden argument*/NULL);
		float L_50 = V_0;
		float L_51 = V_4;
		float L_52 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_53), L_50, L_51, L_52, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54 = ___1_color;
		bool L_55 = ___3_mode2D;
		DebugDrawUtils_DrawLine_m515C5368090D3395D57BB470B0106FF58782383B(L_49, L_53, L_54, (0.0f), (bool)0, L_55, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.DebugDrawUtils::DrawPoint(UnityEngine.Vector3,UnityEngine.Color,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawUtils_DrawPoint_mD24DE0113181B34723BDAA5F35121FEB66C531AB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, bool ___2_mode2D, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var start = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		// var end = start + new Vector3(0, 0.2f, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.200000003f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// DrawLine(start, end, color, 0, false, mode2D);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_color;
		bool L_6 = ___2_mode2D;
		DebugDrawUtils_DrawLine_m515C5368090D3395D57BB470B0106FF58782383B(L_1, L_4, L_5, (0.0f), (bool)0, L_6, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.DebugDrawUtils::FlipFor2D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DebugDrawUtils_FlipFor2D_m2542E80866E25539FDDB2BFE768AEAD60ED1C18A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3(v.x, v.z, v.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void DungeonArchitect.Utils.DebugDrawUtils::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawUtils_DrawLine_m515C5368090D3395D57BB470B0106FF58782383B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_duration, bool ___4_depthTest, bool ___5_mode2D, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mode2D)
		bool L_0 = ___5_mode2D;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// start = FlipFor2D(start);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = DebugDrawUtils_FlipFor2D_m2542E80866E25539FDDB2BFE768AEAD60ED1C18A(L_1, NULL);
		___0_start = L_2;
		// end = FlipFor2D(end);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = DebugDrawUtils_FlipFor2D_m2542E80866E25539FDDB2BFE768AEAD60ED1C18A(L_3, NULL);
		___1_end = L_4;
	}

IL_0014:
	{
		// Debug.DrawLine(start, end, color, duration, depthTest);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_end;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___2_color;
		float L_8 = ___3_duration;
		bool L_9 = ___4_depthTest;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m09EB01A6F34CB6BCE8EC0A13CAEF4899E2112B52(L_5, L_6, L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.DebugDrawUtils::GetPointOnCircle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DebugDrawUtils_GetPointOnCircle_mB7D4CEA4BA5F8076C0105A8DAAD4D4D0A6579316 (float ___0_angle, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float radians = angle * Mathf.Deg2Rad;
		float L_0 = ___0_angle;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		// return new Vector3(Mathf.Cos(radians), 0, Mathf.Sin(radians));
		float L_1 = V_0;
		float L_2;
		L_2 = cosf(L_1);
		float L_3 = V_0;
		float L_4;
		L_4 = sinf(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_2, (0.0f), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void DungeonArchitect.Utils.DebugDrawUtils::DrawCircle(UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawUtils_DrawCircle_m83F348F366608E9FC50D8FDD5919780F88CEEEC2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	{
		// DrawCircle(center, radius, color, 1.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_center;
		float L_1 = ___1_radius;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___2_color;
		DebugDrawUtils_DrawCircle_m8A126D23B79F5C327BF71DD438594977A9476EF2(L_0, L_1, L_2, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.DebugDrawUtils::DrawCircle(UnityEngine.Vector3,System.Single,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawUtils_DrawCircle_m8A126D23B79F5C327BF71DD438594977A9476EF2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_segmentMultiplier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float perimeter = Mathf.PI * 2 * radius;
		float L_0 = ___1_radius;
		// float constSegmentMultiplier = 3;
		V_0 = (3.0f);
		// int segments = Mathf.RoundToInt(Mathf.Sqrt(perimeter) * segmentMultiplier * constSegmentMultiplier);
		float L_1;
		L_1 = sqrtf(((float)il2cpp_codegen_multiply((6.28318548f), L_0)));
		float L_2 = ___3_segmentMultiplier;
		float L_3 = V_0;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), L_3)), NULL);
		V_1 = L_4;
		// segments = Mathf.Max(segments, 3);  // minimum 3 segments for a triangle
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_5, 3, NULL);
		V_1 = L_6;
		// float angle = 0;
		V_2 = (0.0f);
		// float angleSteps = 360.0f / segments;
		int32_t L_7 = V_1;
		V_3 = ((float)((360.0f)/((float)L_7)));
		// for (int i = 0; i <= segments; i++)
		V_4 = 0;
		goto IL_0075;
	}

IL_0038:
	{
		// float nextAngle = angle + angleSteps;
		float L_8 = V_2;
		float L_9 = V_3;
		V_5 = ((float)il2cpp_codegen_add(L_8, L_9));
		// var start = center + GetPointOnCircle(angle) * radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_center;
		float L_11 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = DebugDrawUtils_GetPointOnCircle_mB7D4CEA4BA5F8076C0105A8DAAD4D4D0A6579316(L_11, NULL);
		float L_13 = ___1_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_14, NULL);
		// var end = center + GetPointOnCircle(nextAngle) * radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_center;
		float L_17 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = DebugDrawUtils_GetPointOnCircle_mB7D4CEA4BA5F8076C0105A8DAAD4D4D0A6579316(L_17, NULL);
		float L_19 = ___1_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_20, NULL);
		V_6 = L_21;
		// angle = nextAngle;
		float L_22 = V_5;
		V_2 = L_22;
		// Debug.DrawLine(start, end, color);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___2_color;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_15, L_23, L_24, NULL);
		// for (int i = 0; i <= segments; i++)
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0075:
	{
		// for (int i = 0; i <= segments; i++)
		int32_t L_26 = V_4;
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) <= ((int32_t)L_27)))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.DebugDrawUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawUtils__ctor_m2AED67DFE830ECE86AB599198876C7D97E3C9869 (DebugDrawUtils_t5FA8D211C5224051E8466C482D924791216E6CF1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ScriptableObject DungeonArchitect.Utils.InstanceCache::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* InstanceCache_GetInstance_m4975CAF7B9076D8A44B9362F44536DDC996847E1 (InstanceCache_tEE9B6C7A5C35B1F8A07B42695DD9E97BD2984EE8* __this, String_t* ___0_typeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB30F836A8BDAC17BF69A20B7CE09E4CFF8B1F174_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB4AF0360B46F2BB26142EFD4DAB8C08BC435A698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A309BF79F0F65B180CB39E7669AAAF711E95A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceCache_GetInstance_m4975CAF7B9076D8A44B9362F44536DDC996847E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* V_1 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (string.IsNullOrEmpty(typeName))
		String_t* L_0 = ___0_typeName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A*)NULL;
	}

IL_000a:
	{
		// if (!instanceByType.ContainsKey(typeName))
		Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* L_2 = __this->___instanceByType_0;
		String_t* L_3 = ___0_typeName;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mB4AF0360B46F2BB26142EFD4DAB8C08BC435A698(L_2, L_3, Dictionary_2_ContainsKey_mB4AF0360B46F2BB26142EFD4DAB8C08BC435A698_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0068;
		}
	}
	{
		// var type = System.Type.GetType(typeName);
		String_t* L_5 = ___0_typeName;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = il2cpp_codegen_get_type(L_5, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, InstanceCache_GetInstance_m4975CAF7B9076D8A44B9362F44536DDC996847E1_RuntimeMethod_var);
		V_0 = L_6;
		// if (type == null)
		Type_t* L_7 = V_0;
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, (Type_t*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// foreach (Assembly asm in AppDomain.CurrentDomain.GetAssemblies())
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_9;
		L_9 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_9);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_10;
		L_10 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_9, NULL);
		V_2 = L_10;
		V_3 = 0;
		goto IL_004e;
	}

IL_0037:
	{
		// foreach (Assembly asm in AppDomain.CurrentDomain.GetAssemblies())
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_11 = V_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Assembly_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		// type = asm.GetType(typeName);
		String_t* L_15 = ___0_typeName;
		NullCheck(L_14);
		Type_t* L_16;
		L_16 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_14, L_15);
		V_0 = L_16;
		// if (type != null)
		Type_t* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_17, (Type_t*)NULL, NULL);
		if (L_18)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004e:
	{
		// foreach (Assembly asm in AppDomain.CurrentDomain.GetAssemblies())
		int32_t L_20 = V_3;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0037;
		}
	}

IL_0054:
	{
		// var obj = ScriptableObject.CreateInstance(type);
		Type_t* L_22 = V_0;
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_23;
		L_23 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_22, NULL);
		V_1 = L_23;
		// instanceByType.Add(typeName, obj);
		Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* L_24 = __this->___instanceByType_0;
		String_t* L_25 = ___0_typeName;
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_26 = V_1;
		NullCheck(L_24);
		Dictionary_2_Add_mB30F836A8BDAC17BF69A20B7CE09E4CFF8B1F174(L_24, L_25, L_26, Dictionary_2_Add_mB30F836A8BDAC17BF69A20B7CE09E4CFF8B1F174_RuntimeMethod_var);
	}

IL_0068:
	{
		// return instanceByType[typeName];
		Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* L_27 = __this->___instanceByType_0;
		String_t* L_28 = ___0_typeName;
		NullCheck(L_27);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_29;
		L_29 = Dictionary_2_get_Item_m5A309BF79F0F65B180CB39E7669AAAF711E95A29(L_27, L_28, Dictionary_2_get_Item_m5A309BF79F0F65B180CB39E7669AAAF711E95A29_RuntimeMethod_var);
		return L_29;
	}
}
// System.Void DungeonArchitect.Utils.InstanceCache::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceCache_Clear_m1B5BB3407DFDF7FDD3537C47894590881E66FDF6 (InstanceCache_tEE9B6C7A5C35B1F8A07B42695DD9E97BD2984EE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m144594753B5C23A1F4BEFC158B2462F689169BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m07D4477AD6AAE3FB98EFD238E828A9859E4E0C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3F979FD92AC985D0AC1B05712F32267ED76CB0C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD68561E0EA506F033660C5BCD24B1A15721F4125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m70B24696C6DB7792A277D105AADF97CCCAFBE0A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE3A9BA7F7F9C923FDB045F668102A27CF7146160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t73F9559B324BF8F13699C83C752150FAE21A0900 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* V_2 = NULL;
	{
		// foreach (var entry in instanceByType)
		Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* L_0 = __this->___instanceByType_0;
		NullCheck(L_0);
		Enumerator_t06F0FD57BA3F36B09154DB856CAD5BB4EA7873B2 L_1;
		L_1 = Dictionary_2_GetEnumerator_m07D4477AD6AAE3FB98EFD238E828A9859E4E0C70(L_0, Dictionary_2_GetEnumerator_m07D4477AD6AAE3FB98EFD238E828A9859E4E0C70_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3F979FD92AC985D0AC1B05712F32267ED76CB0C7((&V_0), Enumerator_Dispose_m3F979FD92AC985D0AC1B05712F32267ED76CB0C7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_000e_1:
			{
				// foreach (var entry in instanceByType)
				KeyValuePair_2_t73F9559B324BF8F13699C83C752150FAE21A0900 L_2;
				L_2 = Enumerator_get_Current_m70B24696C6DB7792A277D105AADF97CCCAFBE0A6_inline((&V_0), Enumerator_get_Current_m70B24696C6DB7792A277D105AADF97CCCAFBE0A6_RuntimeMethod_var);
				V_1 = L_2;
				// var obj = entry.Value;
				ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_3;
				L_3 = KeyValuePair_2_get_Value_mE3A9BA7F7F9C923FDB045F668102A27CF7146160_inline((&V_1), KeyValuePair_2_get_Value_mE3A9BA7F7F9C923FDB045F668102A27CF7146160_RuntimeMethod_var);
				V_2 = L_3;
				// if (obj != null)
				ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_4 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_5)
				{
					goto IL_002d_1;
				}
			}
			{
				// ObjectUtils.DestroyObject(obj);
				ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_6 = V_2;
				ObjectUtils_DestroyObject_mC271D83974DC951E3DB21DD3AAD58227CD4096CB(L_6, NULL);
			}

IL_002d_1:
			{
				// foreach (var entry in instanceByType)
				bool L_7;
				L_7 = Enumerator_MoveNext_mD68561E0EA506F033660C5BCD24B1A15721F4125((&V_0), Enumerator_MoveNext_mD68561E0EA506F033660C5BCD24B1A15721F4125_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// instanceByType.Clear();
		Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* L_8 = __this->___instanceByType_0;
		NullCheck(L_8);
		Dictionary_2_Clear_m144594753B5C23A1F4BEFC158B2462F689169BC4(L_8, Dictionary_2_Clear_m144594753B5C23A1F4BEFC158B2462F689169BC4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.InstanceCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceCache__ctor_m66940AA5FDC2ADCA1D738CF3353E10359B6DF740 (InstanceCache_tEE9B6C7A5C35B1F8A07B42695DD9E97BD2984EE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m76643E4AA62180575A2DCB37A1A1436DB736544B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Dictionary<string, ScriptableObject> instanceByType = new Dictionary<string, ScriptableObject>();
		Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19* L_0 = (Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19*)il2cpp_codegen_object_new(Dictionary_2_t48F0087143A5C09B671AA119C2C7F01D32821E19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m76643E4AA62180575A2DCB37A1A1436DB736544B(L_0, Dictionary_2__ctor_m76643E4AA62180575A2DCB37A1A1436DB736544B_RuntimeMethod_var);
		__this->___instanceByType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceByType_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object DungeonArchitect.Utils.KeyValueDataEntryBase::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyValueDataEntryBase_GetValue_m7205213453B8B56C31E6C636CACAA6DB12781523 (KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A* __this, const RuntimeMethod* method) 
{
	{
		// public virtual object GetValue() { return null; }
		return NULL;
	}
}
// System.Void DungeonArchitect.Utils.KeyValueDataEntryBase::SetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryBase_SetValue_m9F05A6F9CE4971710348C2F51B890EECC4F21E64 (KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public virtual void SetValue(object value) { }
		return;
	}
}
// System.Void DungeonArchitect.Utils.KeyValueDataEntryBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryBase__ctor_m0D86A0A353FC32CCDE32E3B057A985A36B3FF8D7 (KeyValueDataEntryBase_t082539F9E545C57E340E90DC4E8753AB987C755A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.Utils.KeyValueDataEntryFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryFloat__ctor_m418731CABF339728BF8609F3B9B7A8D1C87B891C (KeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueDataEntryTyped_1__ctor_m81DCC8628C4133CE48F63AE776DB09C5D852FB88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValueDataEntryTyped_1__ctor_m81DCC8628C4133CE48F63AE776DB09C5D852FB88(__this, KeyValueDataEntryTyped_1__ctor_m81DCC8628C4133CE48F63AE776DB09C5D852FB88_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.Utils.KeyValueDataEntryInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryInt__ctor_m18E124CA7D44E44B2CBC6FAA70F1A5A1EBD365FE (KeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueDataEntryTyped_1__ctor_mD4B01168DAF86042FB69526505DD6EE8C1827B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValueDataEntryTyped_1__ctor_mD4B01168DAF86042FB69526505DD6EE8C1827B4C(__this, KeyValueDataEntryTyped_1__ctor_mD4B01168DAF86042FB69526505DD6EE8C1827B4C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.Utils.KeyValueDataEntryString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryString__ctor_m43B2A4CA0A10D8A2EA576B947A197D7EC95836AC (KeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueDataEntryTyped_1__ctor_m098F34A8E7E57CA2B137A55C3059B32E8DB9747D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValueDataEntryTyped_1__ctor_m098F34A8E7E57CA2B137A55C3059B32E8DB9747D(__this, KeyValueDataEntryTyped_1__ctor_m098F34A8E7E57CA2B137A55C3059B32E8DB9747D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.Utils.KeyValueDataEntryVector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryVector3__ctor_m721AECFBF20DEA9A37B3C86E8BA311FD50A85640 (KeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueDataEntryTyped_1__ctor_mEAA55E0BFCDCC273457CE907040F95EB534B33F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValueDataEntryTyped_1__ctor_mEAA55E0BFCDCC273457CE907040F95EB534B33F7(__this, KeyValueDataEntryTyped_1__ctor_mEAA55E0BFCDCC273457CE907040F95EB534B33F7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.Utils.KeyValueDataEntryVector2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataEntryVector2__ctor_mA727E571F523A90764C367CD3F2FF48778C047DC (KeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueDataEntryTyped_1__ctor_m1CE8BB971A01D85ED638E2F6A396D8D02BC250CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValueDataEntryTyped_1__ctor_m1CE8BB971A01D85ED638E2F6A396D8D02BC250CB(__this, KeyValueDataEntryTyped_1__ctor_m1CE8BB971A01D85ED638E2F6A396D8D02BC250CB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetFloat(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetFloat_mC81BBB18F9F36559D2AC352DF514236EC7D22A74 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, float* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_GetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5BD91C5B3290E371B4B4EB26A257E40B1402551B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool GetFloat(string key, ref float value) { return GetValue(dataFloat, key, ref value); }
		List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228* L_0 = __this->___dataFloat_0;
		String_t* L_1 = ___0_key;
		float* L_2 = ___1_value;
		bool L_3;
		L_3 = KeyValueData_GetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5BD91C5B3290E371B4B4EB26A257E40B1402551B(__this, L_0, L_1, L_2, KeyValueData_GetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5BD91C5B3290E371B4B4EB26A257E40B1402551B_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetInt(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetInt_m78AC9AD3BE606C3DA730EF9ABD22209729B366E0 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_GetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3A717ED4EDCFF2AE51D38E60973DCCDBE2737A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool GetInt(string key, ref int value) { return GetValue(dataInt, key, ref value); }
		List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F* L_0 = __this->___dataInt_1;
		String_t* L_1 = ___0_key;
		int32_t* L_2 = ___1_value;
		bool L_3;
		L_3 = KeyValueData_GetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3A717ED4EDCFF2AE51D38E60973DCCDBE2737A(__this, L_0, L_1, L_2, KeyValueData_GetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3A717ED4EDCFF2AE51D38E60973DCCDBE2737A_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetString(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetString_m29A9D5C0D74C67DF01E978679D08A129E347BEF8 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, String_t** ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_GetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_TisString_t_m291277BF28D1CDDD756FCB4C2597B43B580E460E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool GetString(string key, ref string value) { return GetValue(dataString, key, ref value); }
		List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4* L_0 = __this->___dataString_2;
		String_t* L_1 = ___0_key;
		String_t** L_2 = ___1_value;
		bool L_3;
		L_3 = KeyValueData_GetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_TisString_t_m291277BF28D1CDDD756FCB4C2597B43B580E460E(__this, L_0, L_1, L_2, KeyValueData_GetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_TisString_t_m291277BF28D1CDDD756FCB4C2597B43B580E460E_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetVector3(System.String,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetVector3_mE733DD0D3C10F8B44BD89D6D8D5DD8591D4878B5 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_GetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB89606EBD7C45E45BE22223F8D7BF17CBFA65F5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool GetVector3(string key, ref Vector3 value) { return GetValue(dataVector3, key, ref value); }
		List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D* L_0 = __this->___dataVector3_3;
		String_t* L_1 = ___0_key;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_value;
		bool L_3;
		L_3 = KeyValueData_GetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB89606EBD7C45E45BE22223F8D7BF17CBFA65F5F(__this, L_0, L_1, L_2, KeyValueData_GetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB89606EBD7C45E45BE22223F8D7BF17CBFA65F5F_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean DungeonArchitect.Utils.KeyValueData::GetVector2(System.String,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueData_GetVector2_m42EA61E2CB65999BB0B6D6C101D42277AB1EA69D (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_GetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m53044E46EFC125E3F1EFB71AB829D1E2A84EEEB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool GetVector2(string key, ref Vector2 value) { return GetValue(dataVector2, key, ref value); }
		List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52* L_0 = __this->___dataVector2_4;
		String_t* L_1 = ___0_key;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___1_value;
		bool L_3;
		L_3 = KeyValueData_GetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m53044E46EFC125E3F1EFB71AB829D1E2A84EEEB9(__this, L_0, L_1, L_2, KeyValueData_GetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m53044E46EFC125E3F1EFB71AB829D1E2A84EEEB9_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void DungeonArchitect.Utils.KeyValueData::Set(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueData_Set_m792889948AD20518127491DBDBA893D5C733E1DE (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_SetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_mFEBBFEE36FD8F78DAFC2776863FFFD75249FCEFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Set(string key, float value) { SetValue(dataFloat, key, value); }
		List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228* L_0 = __this->___dataFloat_0;
		String_t* L_1 = ___0_key;
		float L_2 = ___1_value;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		KeyValueData_SetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_mFEBBFEE36FD8F78DAFC2776863FFFD75249FCEFB(__this, L_0, L_1, L_4, KeyValueData_SetValue_TisKeyValueDataEntryFloat_tCA2ACD719F7A30E54249E66DDD9EF52A9312B8FA_mFEBBFEE36FD8F78DAFC2776863FFFD75249FCEFB_RuntimeMethod_var);
		// public void Set(string key, float value) { SetValue(dataFloat, key, value); }
		return;
	}
}
// System.Void DungeonArchitect.Utils.KeyValueData::Set(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueData_Set_m200D86686B1F4D7180F516F0BF48FE683A5D7A32 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_SetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_m8B76ADD21BD257C236DF5C5F3C2F78C3EC3637A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Set(string key, int value) { SetValue(dataInt, key, value); }
		List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F* L_0 = __this->___dataInt_1;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_value;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		KeyValueData_SetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_m8B76ADD21BD257C236DF5C5F3C2F78C3EC3637A2(__this, L_0, L_1, L_4, KeyValueData_SetValue_TisKeyValueDataEntryInt_t5A748745A7BFAB9ACFF5B6270F1D633B0F8252D9_m8B76ADD21BD257C236DF5C5F3C2F78C3EC3637A2_RuntimeMethod_var);
		// public void Set(string key, int value) { SetValue(dataInt, key, value); }
		return;
	}
}
// System.Void DungeonArchitect.Utils.KeyValueData::Set(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueData_Set_mE97AD61CE3AD3EAB5ADC793C3D16EC65B8A7CBBB (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_SetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_m0DBB3026477467215D2F38C2141FA7FF860431D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Set(string key, string value) { SetValue(dataString, key, value); }
		List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4* L_0 = __this->___dataString_2;
		String_t* L_1 = ___0_key;
		String_t* L_2 = ___1_value;
		KeyValueData_SetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_m0DBB3026477467215D2F38C2141FA7FF860431D1(__this, L_0, L_1, L_2, KeyValueData_SetValue_TisKeyValueDataEntryString_tBB00A366EFDB3D1B5681334DFCD264872B9E3486_m0DBB3026477467215D2F38C2141FA7FF860431D1_RuntimeMethod_var);
		// public void Set(string key, string value) { SetValue(dataString, key, value); }
		return;
	}
}
// System.Void DungeonArchitect.Utils.KeyValueData::Set(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueData_Set_mBCAA8A73D720AFBA3C78E3AC28921591AFFFF42A (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_SetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_mD0E4E94FF6AC3B71253AFA37BB3CDF0B6D771CD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Set(string key, Vector3 value) { SetValue(dataVector3, key, value); }
		List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D* L_0 = __this->___dataVector3_3;
		String_t* L_1 = ___0_key;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2;
		RuntimeObject* L_4 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_3);
		KeyValueData_SetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_mD0E4E94FF6AC3B71253AFA37BB3CDF0B6D771CD1(__this, L_0, L_1, L_4, KeyValueData_SetValue_TisKeyValueDataEntryVector3_tBC8F0E6C8CD9B81EEB71A49D9AFA5EBF294A4C7F_mD0E4E94FF6AC3B71253AFA37BB3CDF0B6D771CD1_RuntimeMethod_var);
		// public void Set(string key, Vector3 value) { SetValue(dataVector3, key, value); }
		return;
	}
}
// System.Void DungeonArchitect.Utils.KeyValueData::Set(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueData_Set_mB12E228EB5F6268C2D1892C74A4CB15BB60EA9C7 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, String_t* ___0_key, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueData_SetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_m399117A50E50EEA9EDCB7F136C62A02653317D64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Set(string key, Vector2 value) { SetValue(dataVector2, key, value); }
		List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52* L_0 = __this->___dataVector2_4;
		String_t* L_1 = ___0_key;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2;
		RuntimeObject* L_4 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_3);
		KeyValueData_SetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_m399117A50E50EEA9EDCB7F136C62A02653317D64(__this, L_0, L_1, L_4, KeyValueData_SetValue_TisKeyValueDataEntryVector2_tF08FB02E8CBD479BD892A404B1E7CFB195591B29_m399117A50E50EEA9EDCB7F136C62A02653317D64_RuntimeMethod_var);
		// public void Set(string key, Vector2 value) { SetValue(dataVector2, key, value); }
		return;
	}
}
// System.Void DungeonArchitect.Utils.KeyValueData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueData__ctor_m748FD0254443A6C5DC342554305FEDFD567A72E8 (KeyValueData_tB91783EAD4B66426F8B752309A5749541A82E432* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2427D00F94769C53E36FAF2BEB46B5165B85B061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2CCCAF47903E6070AC1D85DD293C4A825136B978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3BCF517E17EBFF9B5A579310D2016985370F7B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m62483C26136687F0402FEB8D79733D413EF490E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA658E93876950C19B37BD9BEF004EF1BEFF8A290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] List<KeyValueDataEntryFloat> dataFloat = new List<KeyValueDataEntryFloat>();
		List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228* L_0 = (List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228*)il2cpp_codegen_object_new(List_1_tC65FE0DC83D0EE5B7439F15D6AA003083F163228_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m62483C26136687F0402FEB8D79733D413EF490E0(L_0, List_1__ctor_m62483C26136687F0402FEB8D79733D413EF490E0_RuntimeMethod_var);
		__this->___dataFloat_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataFloat_0), (void*)L_0);
		// [SerializeField] List<KeyValueDataEntryInt> dataInt = new List<KeyValueDataEntryInt>();
		List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F* L_1 = (List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F*)il2cpp_codegen_object_new(List_1_tB67BDC3D4DB0C59447C105967CC599DA2F6F5B7F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m3BCF517E17EBFF9B5A579310D2016985370F7B27(L_1, List_1__ctor_m3BCF517E17EBFF9B5A579310D2016985370F7B27_RuntimeMethod_var);
		__this->___dataInt_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataInt_1), (void*)L_1);
		// [SerializeField] List<KeyValueDataEntryString> dataString = new List<KeyValueDataEntryString>();
		List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4* L_2 = (List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4*)il2cpp_codegen_object_new(List_1_tE8992C00724349019FFC3C4DFFB2F56FC64F5BA4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m2427D00F94769C53E36FAF2BEB46B5165B85B061(L_2, List_1__ctor_m2427D00F94769C53E36FAF2BEB46B5165B85B061_RuntimeMethod_var);
		__this->___dataString_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataString_2), (void*)L_2);
		// [SerializeField] List<KeyValueDataEntryVector3> dataVector3 = new List<KeyValueDataEntryVector3>();
		List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D* L_3 = (List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D*)il2cpp_codegen_object_new(List_1_t93C4061C5503047FE61672362DEBC4211C53DC7D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mA658E93876950C19B37BD9BEF004EF1BEFF8A290(L_3, List_1__ctor_mA658E93876950C19B37BD9BEF004EF1BEFF8A290_RuntimeMethod_var);
		__this->___dataVector3_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataVector3_3), (void*)L_3);
		// [SerializeField] List<KeyValueDataEntryVector2> dataVector2 = new List<KeyValueDataEntryVector2>();
		List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52* L_4 = (List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52*)il2cpp_codegen_object_new(List_1_tC1C8B7EEDF5A39C41F70CF4DCFE2D7CA5996DF52_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m2CCCAF47903E6070AC1D85DD293C4A825136B978(L_4, List_1__ctor_m2CCCAF47903E6070AC1D85DD293C4A825136B978_RuntimeMethod_var);
		__this->___dataVector2_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataVector2_4), (void*)L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DungeonArchitect.Rectangle DungeonArchitect.Utils.MathUtils::Copy(DungeonArchitect.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E MathUtils_Copy_m8AD2898A1DEDF904A8DD2CFF0192DF1DC685B375 (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E ___0_other, const RuntimeMethod* method) 
{
	{
		// return new Rectangle(other.X, other.Z, other.Width, other.Length);
		int32_t L_0;
		L_0 = Rectangle_get_X_mD341734E31CFC938EC2F3E84BFBCFEC5508AF1F9((&___0_other), NULL);
		int32_t L_1;
		L_1 = Rectangle_get_Z_mA65FD7EB998C73981F6B38913C44EA26AEF345F4((&___0_other), NULL);
		int32_t L_2;
		L_2 = Rectangle_get_Width_m8EF061695117C080FF4BA340AFF6FCC43746A38C((&___0_other), NULL);
		int32_t L_3;
		L_3 = Rectangle_get_Length_mED01F5FFE1B4FFF9A67FE93A0C2D9258CECBB435((&___0_other), NULL);
		Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rectangle__ctor_m414C7059151B811D6B4A62521D618023D7EC25AA((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::Divide(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_Divide_m9C46A2658AFD35FF7A94D26EAC0CF7653E3B5423 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	{
		// return new Vector3(
		//     a.x / b.x,
		//     a.y / b.y,
		//     a.z / b.z
		//     );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)(L_1/L_3)), ((float)(L_5/L_7)), ((float)(L_9/L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::ToVector3(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_ToVector3_mAE6974448DEAE5A1A626372CB502927FED56CA49 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3(v.x, v.y, v.z);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_v;
		int32_t L_1 = L_0.___x_0;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___0_v;
		int32_t L_3 = L_2.___y_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_4 = ___0_v;
		int32_t L_5 = L_4.___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((float)L_1), ((float)L_3), ((float)L_5), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::ToVector3(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_ToVector3_mC1A99715CB1F8090B0B26CF499A7EA41981C6982 (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3(v.x, v.y, v.z);
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_v), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_v), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_v), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector4 DungeonArchitect.Utils.MathUtils::ToVector4(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 MathUtils_ToVector4_m15E377448CD28CE50F9D80CE02B9399D65B4F7FE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, float ___1_w, const RuntimeMethod* method) 
{
	{
		// return new Vector4(v.x, v.y, v.z, w);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z_4;
		float L_6 = ___1_w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.Utils.MathUtils::WorldToGrid(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C MathUtils_WorldToGrid_m4F9E814C61EB5019A7C51614E231E40C6560B65F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_WorldCoord, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_GridCellSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ToIntVector(Divide (WorldCoord, GridCellSize));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_WorldCoord;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_GridCellSize;
		il2cpp_codegen_runtime_class_init_inline(MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = MathUtils_Divide_m9C46A2658AFD35FF7A94D26EAC0CF7653E3B5423(L_0, L_1, NULL);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_3;
		L_3 = MathUtils_ToIntVector_mBB1A27762E1EB2064865DE6AC6A54A5B4A4C525E(L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::GridToWorld(UnityEngine.Vector3,DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_GridToWorld_m3832521897A30123F714FC01716AB2B26AD9788E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_GridCellSize, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___1_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GridToWorld(GridCellSize, ToVector3(v));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_GridCellSize;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_1 = ___1_v;
		il2cpp_codegen_runtime_class_init_inline(MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = MathUtils_ToVector3_mAE6974448DEAE5A1A626372CB502927FED56CA49(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = MathUtils_GridToWorld_m3196CF39CDABF14746162A6562AB802ABE9A138E(L_0, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::GridToWorld(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_GridToWorld_m3196CF39CDABF14746162A6562AB802ABE9A138E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_GridCellSize, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_v, const RuntimeMethod* method) 
{
	{
		// return Vector3.Scale (GridCellSize, v);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_GridCellSize;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.Utils.MathUtils::ToIntVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C MathUtils_ToIntVector_mBB1A27762E1EB2064865DE6AC6A54A5B4A4C525E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new IntVector(
		//     Mathf.FloorToInt(v.x),
		//     Mathf.FloorToInt(v.y),
		//     Mathf.FloorToInt(v.z)
		//     );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_v;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_v;
		float L_7 = L_6.___z_4;
		int32_t L_8;
		L_8 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_7, NULL);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_9;
		memset((&L_9), 0, sizeof(L_9));
		IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3Int DungeonArchitect.Utils.MathUtils::FloorToVector3Int(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 MathUtils_FloorToVector3Int_m8CFE293FD97BA79F244AE8E0F424E709908BD018 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3Int(
		//     Mathf.FloorToInt(v.x),
		//     Mathf.FloorToInt(v.y),
		//     Mathf.FloorToInt(v.z)
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_v;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_v;
		float L_7 = L_6.___z_4;
		int32_t L_8;
		L_8 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_7, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3Int DungeonArchitect.Utils.MathUtils::RoundToVector3Int(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 MathUtils_RoundToVector3Int_mE51CDEC19C95F4E5F9586C9653E84772BFD23E78 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3Int(
		//     Mathf.RoundToInt(v.x),
		//     Mathf.RoundToInt(v.y),
		//     Mathf.RoundToInt(v.z)
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_v;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_v;
		float L_7 = L_6.___z_4;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_7, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector2Int DungeonArchitect.Utils.MathUtils::RoundToVector2Int(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A MathUtils_RoundToVector2Int_m7D7C986F612838ECDB7895FEEDAEC6431103C71A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector2Int(
		//     Mathf.RoundToInt(v.x),
		//     Mathf.RoundToInt(v.y)
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_v;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::V3FloorToInt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_V3FloorToInt_m73FC3AD339F1FBF3F8EA7297C11F8674E3240039 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3(
		//     Mathf.FloorToInt(v.x),
		//     Mathf.FloorToInt(v.y),
		//     Mathf.FloorToInt(v.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_v;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_v;
		float L_7 = L_6.___z_4;
		int32_t L_8;
		L_8 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)L_2), ((float)L_5), ((float)L_8), /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::V3RoundToInt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_V3RoundToInt_mB8B196368370EADAB5D0DAA4A640D90D9574E367 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3(
		//     Mathf.RoundToInt(v.x),
		//     Mathf.RoundToInt(v.y),
		//     Mathf.RoundToInt(v.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_v;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_v;
		float L_7 = L_6.___z_4;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)L_2), ((float)L_5), ((float)L_8), /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::ComponentMin(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_ComponentMin_m6605D012F5D4E8E78A9F978171C11996BD3816B4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	{
		// return new Vector3(
		//     Mathf.Min(a.x, b.x),
		//     Mathf.Min(a.y, b.y),
		//     Mathf.Min(a.z, b.z)
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_1, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_a;
		float L_6 = L_5.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_b;
		float L_8 = L_7.___y_3;
		float L_9;
		L_9 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_a;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_b;
		float L_13 = L_12.___z_4;
		float L_14;
		L_14 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::ComponentMax(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_ComponentMax_m54269CF9DF17A2270290D7F91A239AAB60316F2A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	{
		// return new Vector3(
		//     Mathf.Max(a.x, b.x),
		//     Mathf.Max(a.y, b.y),
		//     Mathf.Max(a.z, b.z)
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_1, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_a;
		float L_6 = L_5.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_b;
		float L_8 = L_7.___y_3;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_a;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_b;
		float L_13 = L_12.___z_4;
		float L_14;
		L_14 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.Utils.MathUtils::RoundToIntVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C MathUtils_RoundToIntVector_m24E69B4AB0B8B7CE45A66DDB6DB130775AB597E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new IntVector(
		//     Mathf.RoundToInt(v.x),
		//     Mathf.RoundToInt(v.y),
		//     Mathf.RoundToInt(v.z)
		//     );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_v;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_v;
		float L_7 = L_6.___z_4;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_7, NULL);
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_9;
		memset((&L_9), 0, sizeof(L_9));
		IntVector__ctor_mA5653A9122DC5F76C09064F96D45BD4A1255EE34((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::SnapToGrid(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_SnapToGrid_m0A7D9FE28FCEFC0B0A134CEE78BB74C045DCD78F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_gridCellSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SnapToGrid(position, gridCellSize, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_gridCellSize;
		il2cpp_codegen_runtime_class_init_inline(MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = MathUtils_SnapToGrid_mAF5AF4D5C5BDDBB972CBEBB164A93F6FCD400919(L_0, L_1, (bool)1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::SnapToGrid(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_SnapToGrid_mAF5AF4D5C5BDDBB972CBEBB164A93F6FCD400919 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_gridCellSize, bool ___2_useRounding, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (useRounding) {
		bool L_0 = ___2_useRounding;
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		// gridPosition = new Vector3(
		//     Mathf.RoundToInt(position.x / gridCellSize.x),
		//     Mathf.RoundToInt(position.y / gridCellSize.y),
		//     Mathf.RoundToInt(position.z / gridCellSize.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_position;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_gridCellSize;
		float L_4 = L_3.___x_2;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_2/L_4)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_position;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_gridCellSize;
		float L_9 = L_8.___y_3;
		int32_t L_10;
		L_10 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_7/L_9)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_position;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_gridCellSize;
		float L_14 = L_13.___z_4;
		int32_t L_15;
		L_15 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_12/L_14)), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)L_5), ((float)L_10), ((float)L_15), NULL);
		goto IL_0085;
	}

IL_0045:
	{
		// gridPosition = new Vector3(
		//     Mathf.FloorToInt(position.x / gridCellSize.x),
		//     Mathf.FloorToInt(position.y / gridCellSize.y),
		//     Mathf.FloorToInt(position.z / gridCellSize.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_position;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_gridCellSize;
		float L_19 = L_18.___x_2;
		int32_t L_20;
		L_20 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_17/L_19)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___0_position;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___1_gridCellSize;
		float L_24 = L_23.___y_3;
		int32_t L_25;
		L_25 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_22/L_24)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___0_position;
		float L_27 = L_26.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___1_gridCellSize;
		float L_29 = L_28.___z_4;
		int32_t L_30;
		L_30 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_27/L_29)), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)L_20), ((float)L_25), ((float)L_30), NULL);
	}

IL_0085:
	{
		// return Vector3.Scale(gridPosition, gridCellSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___1_gridCellSize;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_31, L_32, NULL);
		return L_33;
	}
}
// System.Boolean DungeonArchitect.Utils.MathUtils::Intersects(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_Intersects_m08B7A695815246FA4C5584722BED3ADABCDEC7ED (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_a, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_b, const RuntimeMethod* method) 
{
	int32_t G_B5_0 = 0;
	{
		// bool notIntersecting = (a.xMin > b.xMax || a.xMax < b.xMin || a.yMin > b.yMax || a.yMax < b.yMin);
		float L_0;
		L_0 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_a), NULL);
		float L_1;
		L_1 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___1_b), NULL);
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		float L_2;
		L_2 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_a), NULL);
		float L_3;
		L_3 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___1_b), NULL);
		if ((((float)L_2) < ((float)L_3)))
		{
			goto IL_0042;
		}
	}
	{
		float L_4;
		L_4 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_a), NULL);
		float L_5;
		L_5 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___1_b), NULL);
		if ((((float)L_4) > ((float)L_5)))
		{
			goto IL_0042;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_a), NULL);
		float L_7;
		L_7 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___1_b), NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 1;
	}

IL_0043:
	{
		// return !notIntersecting;
		return (bool)((((int32_t)G_B5_0) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector2 DungeonArchitect.Utils.MathUtils::ClosestPointOnRect(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MathUtils_ClosestPointOnRect_m6FEC0DFDACF5725A3325AE94343A2C233F38B8F6 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_p, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = new Vector2();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// result.x = Mathf.Clamp(p.x, rect.xMin, rect.xMax);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_p;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect), NULL);
		float L_3;
		L_3 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect), NULL);
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_1, L_2, L_3, NULL);
		(&V_0)->___x_0 = L_4;
		// result.y = Mathf.Clamp(p.y, rect.yMin, rect.yMax);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_p;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect), NULL);
		float L_8;
		L_8 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect), NULL);
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, L_7, L_8, NULL);
		(&V_0)->___y_1 = L_9;
		// return result;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Rect DungeonArchitect.Utils.MathUtils::ExpandRect(UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MathUtils_ExpandRect_mD18FF53219C676AC9F6D580847FA24E2411B4B06 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_bounds, float ___1_amount, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var rect = new Rect(bounds);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_bounds;
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&V_0), L_0, NULL);
		// rect.x -= amount;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&V_0);
		float L_2;
		L_2 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_1, NULL);
		float L_3 = ___1_amount;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_1, ((float)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		// rect.y -= amount;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&V_0);
		float L_5;
		L_5 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_4, NULL);
		float L_6 = ___1_amount;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_4, ((float)il2cpp_codegen_subtract(L_5, L_6)), NULL);
		// rect.width += amount * 2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_7 = (&V_0);
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_7, NULL);
		float L_9 = ___1_amount;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_7, ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_9, (2.0f))))), NULL);
		// rect.height += amount * 2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_10 = (&V_0);
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_10, NULL);
		float L_12 = ___1_amount;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_10, ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(L_12, (2.0f))))), NULL);
		// return rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Utils.MathUtils::ClampToRect(UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MathUtils_ClampToRect_m0A2601BEFB082FFF29754F1106104378DA06E166 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_bounds, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_position;
		V_0 = L_0;
		// result.x = Mathf.Clamp(result.x, bounds.x, bounds.x + bounds.width);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_bounds), NULL);
		float L_4;
		L_4 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_bounds), NULL);
		float L_5;
		L_5 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___1_bounds), NULL);
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, L_3, ((float)il2cpp_codegen_add(L_4, L_5)), NULL);
		(&V_0)->___x_0 = L_6;
		// result.y = Mathf.Clamp(result.y, bounds.y, bounds.y + bounds.height);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_bounds), NULL);
		float L_10;
		L_10 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_bounds), NULL);
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___1_bounds), NULL);
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, L_9, ((float)il2cpp_codegen_add(L_10, L_11)), NULL);
		(&V_0)->___y_1 = L_12;
		// return result;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		return L_13;
	}
}
// System.Void DungeonArchitect.Utils.MathUtils::FlipYZ(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtils_FlipYZ_mFFC7BE1AD36441E37ACB9AEBA05F7D8BADEF51A2 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_bounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bounds.size = FlipYZ (bounds.size);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = ___0_bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_1 = ___0_bounds;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = MathUtils_FlipYZ_m8347EAD3A9298AE62232FA514EEC5BE09ECCC8F0(L_2, NULL);
		Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128(L_0, L_3, NULL);
		// var center = FlipYZ (bounds.center);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4 = ___0_bounds;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = MathUtils_FlipYZ_m8347EAD3A9298AE62232FA514EEC5BE09ECCC8F0(L_5, NULL);
		V_0 = L_6;
		// center.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// bounds.center = center;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_7 = ___0_bounds;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B(L_7, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::FlipYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_FlipYZ_m8347EAD3A9298AE62232FA514EEC5BE09ECCC8F0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_bounds, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var z = bounds.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_bounds;
		float L_1 = L_0.___z_4;
		V_0 = L_1;
		// bounds.z = bounds.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_bounds;
		float L_3 = L_2.___y_3;
		(&___0_bounds)->___z_4 = L_3;
		// bounds.y = z;
		float L_4 = V_0;
		(&___0_bounds)->___y_3 = L_4;
		// return bounds;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_bounds;
		return L_5;
	}
}
// DungeonArchitect.IntVector DungeonArchitect.Utils.MathUtils::FlipYZ(DungeonArchitect.IntVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C MathUtils_FlipYZ_m19A539577F79C585E8B904EAD433F0AE7234A054 (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_bounds, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var z = bounds.z;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_bounds;
		int32_t L_1 = L_0.___z_2;
		V_0 = L_1;
		// bounds.z = bounds.y;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_2 = ___0_bounds;
		int32_t L_3 = L_2.___y_1;
		(&___0_bounds)->___z_2 = L_3;
		// bounds.y = z;
		int32_t L_4 = V_0;
		(&___0_bounds)->___y_1 = L_4;
		// return bounds;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_5 = ___0_bounds;
		return L_5;
	}
}
// System.Void DungeonArchitect.Utils.MathUtils::Abs(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtils_Abs_m76DE8396A922DFAB1D309272D4A1211543189698 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_v, const RuntimeMethod* method) 
{
	{
		// v.x = Mathf.Abs(v.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___0_v;
		float L_2 = L_1->___x_2;
		float L_3;
		L_3 = fabsf(L_2);
		L_0->___x_2 = L_3;
		// v.y = Mathf.Abs(v.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___0_v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_v;
		float L_6 = L_5->___y_3;
		float L_7;
		L_7 = fabsf(L_6);
		L_4->___y_3 = L_7;
		// v.z = Mathf.Abs(v.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___0_v;
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = fabsf(L_10);
		L_8->___z_4 = L_11;
		// }
		return;
	}
}
// System.Int32[] DungeonArchitect.Utils.MathUtils::GetShuffledIndices(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* MathUtils_GetShuffledIndices_m29407BAF8E6EA344DC561C69B76D4B9415FD5C8F (int32_t ___0_Count, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___1_Random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m321167505C8CD6E2E8C0CEAA52C8F1D11D36CD47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var Indices = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < Count; i++)
		V_1 = 0;
		goto IL_0015;
	}

IL_000a:
	{
		// Indices.Add(i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int i = 0; i < Count; i++)
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < Count; i++)
		int32_t L_4 = V_1;
		int32_t L_5 = ___0_Count;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000a;
		}
	}
	{
		// Shuffle(Indices, Random);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = V_0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_7 = ___1_Random;
		il2cpp_codegen_runtime_class_init_inline(MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		MathUtils_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m321167505C8CD6E2E8C0CEAA52C8F1D11D36CD47(L_6, L_7, MathUtils_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m321167505C8CD6E2E8C0CEAA52C8F1D11D36CD47_RuntimeMethod_var);
		// return Indices.ToArray();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = V_0;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9;
		L_9 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_8, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		return L_9;
	}
}
// UnityEngine.Bounds DungeonArchitect.Utils.MathUtils::TransformBounds(UnityEngine.Matrix4x4,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 MathUtils_TransformBounds_m10E03924B25A8FEB3A8AE607ED84D92189192249 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_transform, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_bounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var vertices = new Vector3[8];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		// var center = bounds.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___1_bounds), NULL);
		V_1 = L_1;
		// var extents = bounds.extents;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___1_bounds), NULL);
		V_2 = L_2;
		// vertices[0] = center + new Vector3(extents.x, extents.y, extents.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_6, L_8, L_10, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_11, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_12);
		// vertices[1] = center + new Vector3(extents.x, extents.y, -extents.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = L_17.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20 = L_19.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_16, L_18, ((-L_20)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_22);
		// vertices[2] = center + new Vector3(extents.x, -extents.y, extents.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		float L_28 = L_27.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		float L_30 = L_29.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), L_26, ((-L_28)), L_30, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_31, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_32);
		// vertices[3] = center + new Vector3(extents.x, -extents.y, -extents.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
		float L_36 = L_35.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_2;
		float L_38 = L_37.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_2;
		float L_40 = L_39.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), L_36, ((-L_38)), ((-L_40)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_41, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_42);
		// vertices[4] = center + new Vector3(-extents.x, extents.y, extents.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_2;
		float L_46 = L_45.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_2;
		float L_48 = L_47.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_2;
		float L_50 = L_49.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_51), ((-L_46)), L_48, L_50, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_51, NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_52);
		// vertices[5] = center + new Vector3(-extents.x, extents.y, -extents.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		float L_56 = L_55.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_2;
		float L_58 = L_57.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_2;
		float L_60 = L_59.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), ((-L_56)), L_58, ((-L_60)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_54, L_61, NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_62);
		// vertices[6] = center + new Vector3(-extents.x, -extents.y, extents.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_63 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_2;
		float L_66 = L_65.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_2;
		float L_68 = L_67.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_2;
		float L_70 = L_69.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_71), ((-L_66)), ((-L_68)), L_70, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_64, L_71, NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_72);
		// vertices[7] = center + new Vector3(-extents.x, -extents.y, -extents.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_73 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_2;
		float L_76 = L_75.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_2;
		float L_78 = L_77.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_2;
		float L_80 = L_79.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_81), ((-L_76)), ((-L_78)), ((-L_80)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_74, L_81, NULL);
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_82);
		// for (int i = 0; i < 8; i++)
		V_4 = 0;
		goto IL_0165;
	}

IL_0148:
	{
		// vertices[i] = transform.MultiplyPoint3x4(vertices[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83 = V_0;
		int32_t L_84 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_85 = V_0;
		int32_t L_86 = V_4;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___0_transform), L_88, NULL);
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_89);
		// for (int i = 0; i < 8; i++)
		int32_t L_90 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_0165:
	{
		// for (int i = 0; i < 8; i++)
		int32_t L_91 = V_4;
		if ((((int32_t)L_91) < ((int32_t)8)))
		{
			goto IL_0148;
		}
	}
	{
		// var newBounds = new Bounds(vertices[0], Vector3.zero);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_3), L_94, L_95, NULL);
		// for (int i = 1; i < 8; i++) {
		V_5 = 1;
		goto IL_0197;
	}

IL_0182:
	{
		// newBounds.Encapsulate(vertices[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_96 = V_0;
		int32_t L_97 = V_5;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F((&V_3), L_99, NULL);
		// for (int i = 1; i < 8; i++) {
		int32_t L_100 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0197:
	{
		// for (int i = 1; i < 8; i++) {
		int32_t L_101 = V_5;
		if ((((int32_t)L_101) < ((int32_t)8)))
		{
			goto IL_0182;
		}
	}
	{
		// return newBounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_102 = V_3;
		return L_102;
	}
}
// UnityEngine.Bounds DungeonArchitect.Utils.MathUtils::TransformBoundsX(UnityEngine.Matrix4x4,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 MathUtils_TransformBoundsX_mE99DB0FA7D5700455AE7D8BC5DFA761174BDC35C (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_transform, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_localBounds, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var center = transform * localBounds.center;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___1_localBounds), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_1, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_0, L_2, NULL);
		V_0 = L_3;
		// var extents = localBounds.extents;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___1_localBounds), NULL);
		V_1 = L_4;
		// var axisX = transform * new Vector3(extents.x, 0, 0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_7, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_8, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_5, L_9, NULL);
		V_2 = L_10;
		// var axisY = transform * new Vector3(0, extents.y, 0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.0f), L_13, (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_14, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		L_16 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_11, L_15, NULL);
		V_3 = L_16;
		// var axisZ = transform * new Vector3(0, 0, extents.z);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (0.0f), (0.0f), L_19, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21;
		L_21 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_20, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		L_22 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_17, L_21, NULL);
		V_4 = L_22;
		// extents.x = Mathf.Abs(axisX.x) + Mathf.Abs(axisY.x) + Mathf.Abs(axisZ.x);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_2;
		float L_24 = L_23.___x_1;
		float L_25;
		L_25 = fabsf(L_24);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = V_3;
		float L_27 = L_26.___x_1;
		float L_28;
		L_28 = fabsf(L_27);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29 = V_4;
		float L_30 = L_29.___x_1;
		float L_31;
		L_31 = fabsf(L_30);
		(&V_1)->___x_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_25, L_28)), L_31));
		// extents.y = Mathf.Abs(axisX.y) + Mathf.Abs(axisY.y) + Mathf.Abs(axisZ.y);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32 = V_2;
		float L_33 = L_32.___y_2;
		float L_34;
		L_34 = fabsf(L_33);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = V_3;
		float L_36 = L_35.___y_2;
		float L_37;
		L_37 = fabsf(L_36);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38 = V_4;
		float L_39 = L_38.___y_2;
		float L_40;
		L_40 = fabsf(L_39);
		(&V_1)->___y_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_34, L_37)), L_40));
		// extents.z = Mathf.Abs(axisX.z) + Mathf.Abs(axisY.z) + Mathf.Abs(axisZ.z);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41 = V_2;
		float L_42 = L_41.___z_3;
		float L_43;
		L_43 = fabsf(L_42);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_44 = V_3;
		float L_45 = L_44.___z_3;
		float L_46;
		L_46 = fabsf(L_45);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_47 = V_4;
		float L_48 = L_47.___z_3;
		float L_49;
		L_49 = fabsf(L_48);
		(&V_1)->___z_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_43, L_46)), L_49));
		// return new Bounds { center = center, extents = extents };
		il2cpp_codegen_initobj((&V_5), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_50 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_50, NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B((&V_5), L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_1;
		Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F((&V_5), L_52, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_53 = V_5;
		return L_53;
	}
}
// System.Boolean DungeonArchitect.Utils.MathUtils::V3Equals(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_V3Equals_m9FEAF19CE93B9411709519EEA15FEE9A94904163 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return V3Equals(a, b, 1e-6f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = MathUtils_V3Equals_m1673C78B1ACDC5D1FE37393B2D50D6DDCF85586A(L_0, L_1, (9.99999997E-07f), NULL);
		return L_2;
	}
}
// System.Boolean DungeonArchitect.Utils.MathUtils::V3Equals(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_V3Equals_m1673C78B1ACDC5D1FE37393B2D50D6DDCF85586A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_threshold, const RuntimeMethod* method) 
{
	{
		// return Vector3.Magnitude(a - b) < threshold;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_2, NULL);
		float L_4 = ___2_threshold;
		return (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
	}
}
// System.Byte DungeonArchitect.Utils.MathUtils::ToByte(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MathUtils_ToByte_m9A55A4A2A5F74FD06A12A84E4B8C134794E37A53 (float ___0_value01, const RuntimeMethod* method) 
{
	{
		// return (byte)Mathf.RoundToInt(Mathf.Clamp01(value01) * 255);
		float L_0 = ___0_value01;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_1, (255.0f))), NULL);
		return (uint8_t)((int32_t)(uint8_t)L_2);
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::ReflectVector(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_ReflectVector_m3DD739A8FA439F49E445C969C6DCE446B5B49E28 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_normal, const RuntimeMethod* method) 
{
	{
		// return direction - 2 * Vector3.Dot(direction, normal) * normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_normal;
		float L_3;
		L_3 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply((2.0f), L_3)), L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_5, NULL);
		return L_6;
	}
}
// System.Void DungeonArchitect.Utils.MathUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtils__ctor_mA25717BBDA8E90D38DE9E0C33B478D2442EEB975 (MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DungeonArchitect.Utils.MathUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtils__cctor_m34E1BF6C0649013FC7C427831249BB8282B02C53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int INVALID_LOCATION = -1000000;
		((MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_StaticFields*)il2cpp_codegen_static_fields_for(MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var))->___INVALID_LOCATION_0 = ((int32_t)-1000000);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 DungeonArchitect.Utils.Matrix::GetTranslation(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix_GetTranslation_mB62810FB3AF7E6E5DF0093725DD51A9E313FC4E6 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// translate.x = matrix.m03;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_matrix;
		float L_1 = L_0->___m03_12;
		(&V_0)->___x_2 = L_1;
		// translate.y = matrix.m13;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = ___0_matrix;
		float L_3 = L_2->___m13_13;
		(&V_0)->___y_3 = L_3;
		// translate.z = matrix.m23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = ___0_matrix;
		float L_5 = L_4->___m23_14;
		(&V_0)->___z_4 = L_5;
		// return translate;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.Matrix::GetTranslationDivW(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix_GetTranslationDivW_mF14D95109FC23D4327117FF6E134FC5627527F2F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float w = matrix.m33;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_matrix;
		float L_1 = L_0->___m33_15;
		V_0 = L_1;
		// translate.x = matrix.m03 / w;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = ___0_matrix;
		float L_3 = L_2->___m03_12;
		float L_4 = V_0;
		(&V_1)->___x_2 = ((float)(L_3/L_4));
		// translate.y = matrix.m13 / w;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_5 = ___0_matrix;
		float L_6 = L_5->___m13_13;
		float L_7 = V_0;
		(&V_1)->___y_3 = ((float)(L_6/L_7));
		// translate.z = matrix.m23 / w;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8 = ___0_matrix;
		float L_9 = L_8->___m23_14;
		float L_10 = V_0;
		(&V_1)->___z_4 = ((float)(L_9/L_10));
		// return translate;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		return L_11;
	}
}
// System.Void DungeonArchitect.Utils.Matrix::SetTranslation(UnityEngine.Matrix4x4&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SetTranslation_mAA917514414E05888555DF3453E6DBDE160538A1 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_translate, const RuntimeMethod* method) 
{
	{
		// matrix.m03 = translate.x;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_matrix;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_translate;
		float L_2 = L_1.___x_2;
		L_0->___m03_12 = L_2;
		// matrix.m13 = translate.y;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___0_matrix;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_translate;
		float L_5 = L_4.___y_3;
		L_3->___m13_13 = L_5;
		// matrix.m23 = translate.z;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6 = ___0_matrix;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_translate;
		float L_8 = L_7.___z_4;
		L_6->___m23_14 = L_8;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.Matrix::SetTransform(UnityEngine.Matrix4x4&,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SetTransform_mA8C0E83B6457A1B413BF249D8A18B6901C35F23F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_transform, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, const RuntimeMethod* method) 
{
	{
		// transform = Matrix4x4.TRS(position, rotation, scale);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3_scale;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_1, L_2, L_3, NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_0 = L_4;
		// }
		return;
	}
}
// UnityEngine.Quaternion DungeonArchitect.Utils.Matrix::GetRotation(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Matrix_GetRotation_m9C9279D228DC3622E77F89C3CD9E1C2AE4012ED5 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// forward.x = matrix.m02;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_matrix;
		float L_1 = L_0->___m02_8;
		(&V_0)->___x_2 = L_1;
		// forward.y = matrix.m12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = ___0_matrix;
		float L_3 = L_2->___m12_9;
		(&V_0)->___y_3 = L_3;
		// forward.z = matrix.m22;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = ___0_matrix;
		float L_5 = L_4->___m22_10;
		(&V_0)->___z_4 = L_5;
		// upwards.x = matrix.m01;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6 = ___0_matrix;
		float L_7 = L_6->___m01_4;
		(&V_1)->___x_2 = L_7;
		// upwards.y = matrix.m11;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8 = ___0_matrix;
		float L_9 = L_8->___m11_5;
		(&V_1)->___y_3 = L_9;
		// upwards.z = matrix.m21;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_10 = ___0_matrix;
		float L_11 = L_10->___m21_6;
		(&V_1)->___z_4 = L_11;
		// if (forward == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_14;
		L_14 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		// return Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		return L_15;
	}

IL_0061:
	{
		// return Quaternion.LookRotation(forward, upwards);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_16, L_17, NULL);
		return L_18;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Utils.Matrix::GetScale(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix_GetScale_mB4129435BCD704E75A7A0175465CBF423EA43B5E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) 
{
	{
		// return matrix.lossyScale;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_matrix;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Matrix4x4_get_lossyScale_mFB3D4CF6408D710D607CA1D2AF94B2E4E0B57EB7(L_0, NULL);
		return L_1;
	}
}
// System.Void DungeonArchitect.Utils.Matrix::DecomposeMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_DecomposeMatrix_mF670E9C9FBCCA971BCE5E3D8C4A0B7DAB0AE5243 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_localPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_localRotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_localScale, const RuntimeMethod* method) 
{
	{
		// localPosition = GetTranslation(ref matrix);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_localPosition;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_1 = ___0_matrix;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Matrix_GetTranslation_mB62810FB3AF7E6E5DF0093725DD51A9E313FC4E6(L_1, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_2;
		// localRotation = GetRotation(ref matrix);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___2_localRotation;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = ___0_matrix;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Matrix_GetRotation_m9C9279D228DC3622E77F89C3CD9E1C2AE4012ED5(L_4, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_3 = L_5;
		// localScale = GetScale(ref matrix);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___3_localScale;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_7 = ___0_matrix;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Matrix_GetScale_mB4129435BCD704E75A7A0175465CBF423EA43B5E(L_7, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6 = L_8;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.Matrix::SetTransformFromMatrix(UnityEngine.Transform,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SetTransformFromMatrix_m8B08275AAF0064DC4A62F30E8D8041059CFDACD1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_matrix, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = GetTranslation(ref matrix);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_1 = ___1_matrix;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Matrix_GetTranslation_mB62810FB3AF7E6E5DF0093725DD51A9E313FC4E6(L_1, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_2, NULL);
		// transform.localRotation = GetRotation(ref matrix);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = ___1_matrix;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Matrix_GetRotation_m9C9279D228DC3622E77F89C3CD9E1C2AE4012ED5(L_4, NULL);
		NullCheck(L_3);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_3, L_5, NULL);
		// transform.localScale = GetScale(ref matrix);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_transform;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_7 = ___1_matrix;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Matrix_GetScale_mB4129435BCD704E75A7A0175465CBF423EA43B5E(L_7, NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 DungeonArchitect.Utils.Matrix::Copy(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix_Copy_m5508086234C027B909A5363CCF41D59CA064B0E6 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_In, const RuntimeMethod* method) 
{
	{
		// return In * Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_In;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Matrix4x4 DungeonArchitect.Utils.Matrix::FromGameTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix_FromGameTransform_mC51B7E15F87A62CEB132EF53921EC3E904A78089 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	{
		// return Matrix4x4.TRS(t.position, t.rotation, t.localScale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_t;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_t;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
// System.Void DungeonArchitect.Utils.Matrix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_m2EE423436E17096B334658FAA37439EA2D9B20E1 (Matrix_tFFF54FC76C9A8485DF75E14044525A1404BB1E76* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.Utils.ObjectUtils::DestroyObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectUtils_DestroyObject_mC271D83974DC951E3DB21DD3AAD58227CD4096CB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_go, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Object.Destroy(go);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___0_go;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		return;
	}

IL_000e:
	{
		// Object.DestroyImmediate(go);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___0_go;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.ObjectUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectUtils__ctor_m0CE4F9390DE96E34203D2892709893C15370AC5D (ObjectUtils_tADADCC1C6D4F0513EEEC290F6CF60A7A5DC71931* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Random DungeonArchitect.Utils.PMRandom::get_UniformRandom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* PMRandom_get_UniformRandom_m048B11294E888E6F51847E45F62BB48D3FE23F2F (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, const RuntimeMethod* method) 
{
	{
		// return random;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = __this->___random_3;
		return L_0;
	}
}
// System.Void DungeonArchitect.Utils.PMRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PMRandom__ctor_mBEC4A49F4929819F1872C90BE9AE17787F260F05 (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Random random = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->___random_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_3), (void*)L_0);
		// public PMRandom()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Initialize(0);
		PMRandom_Initialize_m37A0E1661EDDB56A541BBE5FF4583F76E0A51025(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.PMRandom::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PMRandom__ctor_m706882B3460D0948D7D5CE2FACF9550FD4D74883 (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, uint32_t ___0_seed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Random random = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->___random_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_3), (void*)L_0);
		// public PMRandom(uint seed)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Initialize(seed);
		uint32_t L_1 = ___0_seed;
		PMRandom_Initialize_m37A0E1661EDDB56A541BBE5FF4583F76E0A51025(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.PMRandom::Initialize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PMRandom_Initialize_m37A0E1661EDDB56A541BBE5FF4583F76E0A51025 (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, uint32_t ___0_seed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.seed = seed;
		uint32_t L_0 = ___0_seed;
		__this->___seed_2 = L_0;
		// random = new Random((int)this.seed);
		uint32_t L_1 = __this->___seed_2;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_2, L_1, NULL);
		__this->___random_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_3), (void*)L_2);
		// }
		return;
	}
}
// System.Single DungeonArchitect.Utils.PMRandom::NextGaussianFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PMRandom_NextGaussianFloat_m9DD458EAC0E501ADE111B01D0B761EE130BCCAD8 (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// double u1 = random.NextDouble(); //these are uniform(0,1) random doubles
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = __this->___random_3;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_0);
		V_0 = L_1;
		// double u2 = random.NextDouble();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = __this->___random_3;
		NullCheck(L_2);
		double L_3;
		L_3 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_2);
		V_1 = L_3;
		// double randStdNormal = Math.Sqrt(-2.0 * Math.Log(u1)) *
		//              Math.Sin(2.0 * Math.PI * u2); //random normal(0,1)
		double L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = log(L_4);
		double L_6;
		L_6 = sqrt(((double)il2cpp_codegen_multiply((-2.0), L_5)));
		double L_7 = V_1;
		double L_8;
		L_8 = sin(((double)il2cpp_codegen_multiply((6.2831853071795862), L_7)));
		// return (float)randStdNormal;
		return ((float)((double)il2cpp_codegen_multiply(L_6, L_8)));
	}
}
// System.Single DungeonArchitect.Utils.PMRandom::NextGaussianFloat(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PMRandom_NextGaussianFloat_m7F3F2867CE9571663A4D47828872FEB83DC63991 (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, float ___0_mean, float ___1_stdDev, const RuntimeMethod* method) 
{
	{
		// return mean + stdDev * NextGaussianFloat();
		float L_0 = ___0_mean;
		float L_1 = ___1_stdDev;
		float L_2;
		L_2 = PMRandom_NextGaussianFloat_m9DD458EAC0E501ADE111B01D0B761EE130BCCAD8(__this, NULL);
		return ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
	}
}
// UnityEngine.Vector2 DungeonArchitect.Utils.PMRandom::RandomPointOnCircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PMRandom_RandomPointOnCircle_m8DC1B96865934BAF1881F0A96E95FE82026EF4F8 (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float angle = GetNextUniformFloat() * UnityEngine.Mathf.PI * 2;
		float L_0;
		L_0 = PMRandom_GetNextUniformFloat_m70400BBE43312170CC9F5129D914844215E0D6EC(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, (3.14159274f))), (2.0f)));
		// return new UnityEngine.Vector2(UnityEngine.Mathf.Cos(angle), UnityEngine.Mathf.Sin(angle));
		float L_1 = V_0;
		float L_2;
		L_2 = cosf(L_1);
		float L_3 = V_0;
		float L_4;
		L_4 = sinf(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single DungeonArchitect.Utils.PMRandom::GetNextUniformFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PMRandom_GetNextUniformFloat_m70400BBE43312170CC9F5129D914844215E0D6EC (PMRandom_t8CD5631E068EF89CA6462C20604DE83B9EAEDAEB* __this, const RuntimeMethod* method) 
{
	{
		// return (float)random.NextDouble();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = __this->___random_3;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_0);
		return ((float)L_1);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.Utils.TexturedMaterialInstances::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TexturedMaterialInstances__ctor_mB3641CDF8B43BAE86D8BC2A538D797E57D36CBA6 (TexturedMaterialInstances_tEE0A7146031D97130A99B05904E497E75900CCCF* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0A41A10FAABAA6BE6C006A516D263937EE240995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<Texture2D, Material> materialsByTexture = new Dictionary<Texture2D, Material>();
		Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312* L_0 = (Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312*)il2cpp_codegen_object_new(Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m0A41A10FAABAA6BE6C006A516D263937EE240995(L_0, Dictionary_2__ctor_m0A41A10FAABAA6BE6C006A516D263937EE240995_RuntimeMethod_var);
		__this->___materialsByTexture_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materialsByTexture_1), (void*)L_0);
		// public TexturedMaterialInstances(Shader shader)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.shader = shader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = ___0_shader;
		__this->___shader_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_0), (void*)L_1);
		// }
		return;
	}
}
// UnityEngine.Material DungeonArchitect.Utils.TexturedMaterialInstances::GetMaterial(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TexturedMaterialInstances_GetMaterial_mEB27600D1046A9C1D8B1BDBC2F202A69C16BD7E4 (TexturedMaterialInstances_tEE0A7146031D97130A99B05904E497E75900CCCF* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4AF4721BE182AA33E2533F7CA7A171AF8386661E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4627DF5C86AD54583C64DC3BCCF1A682D6EA2B1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m956F620FBADB1DE5785F5249DB1A72684B53FAC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	{
		// if (!materialsByTexture.ContainsKey(texture))
		Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312* L_0 = __this->___materialsByTexture_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___0_texture;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4AF4721BE182AA33E2533F7CA7A171AF8386661E(L_0, L_1, Dictionary_2_ContainsKey_m4AF4721BE182AA33E2533F7CA7A171AF8386661E_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// var material = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = __this->___shader_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_4, L_3, NULL);
		V_0 = L_4;
		// material.mainTexture = texture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___0_texture;
		NullCheck(L_5);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_5, L_6, NULL);
		// materialsByTexture[texture] = material;
		Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312* L_7 = __this->___materialsByTexture_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = V_0;
		NullCheck(L_7);
		Dictionary_2_set_Item_m956F620FBADB1DE5785F5249DB1A72684B53FAC6(L_7, L_8, L_9, Dictionary_2_set_Item_m956F620FBADB1DE5785F5249DB1A72684B53FAC6_RuntimeMethod_var);
	}

IL_002e:
	{
		// return materialsByTexture[texture];
		Dictionary_2_t28639CF147427AA2788A32F202A87BAA93744312* L_10 = __this->___materialsByTexture_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___0_texture;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Dictionary_2_get_Item_m4627DF5C86AD54583C64DC3BCCF1A682D6EA2B1B(L_10, L_11, Dictionary_2_get_Item_m4627DF5C86AD54583C64DC3BCCF1A682D6EA2B1B_RuntimeMethod_var);
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DungeonArchitect.Utils.SmoothValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SmoothValue_get_Value_mE4B0E4B3DD6E89F55284F6E2C01C1587D983F143 (SmoothValue_t01914EB63A259D445CB7BE6A2CDDC5E34CFFC82B* __this, const RuntimeMethod* method) 
{
	{
		// get => currentValue;
		float L_0 = __this->___currentValue_1;
		return L_0;
	}
}
// System.Void DungeonArchitect.Utils.SmoothValue::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothValue_set_Value_m48E94E2D0DE19A46CD87FB1969B739895A43F174 (SmoothValue_t01914EB63A259D445CB7BE6A2CDDC5E34CFFC82B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// targetValue = value;
		float L_0 = ___0_value;
		__this->___targetValue_0 = L_0;
		// t = 0;
		__this->___t_2 = (0.0f);
		// }
		return;
	}
}
// System.Single DungeonArchitect.Utils.SmoothValue::get_TargetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SmoothValue_get_TargetValue_m01EFAA88282C3EAFC8AECC159AE8EC0BE8DC885E (SmoothValue_t01914EB63A259D445CB7BE6A2CDDC5E34CFFC82B* __this, const RuntimeMethod* method) 
{
	{
		// get => targetValue;
		float L_0 = __this->___targetValue_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.Utils.SmoothValue::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothValue__ctor_mB071E4D4701D7C7067DC02AD48A1217F7FA974E9 (SmoothValue_t01914EB63A259D445CB7BE6A2CDDC5E34CFFC82B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float TimeToArrive = 0.1f;
		__this->___TimeToArrive_3 = (0.100000001f);
		// public SmoothValue(float value)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Set(value);
		float L_0 = ___0_value;
		SmoothValue_Set_m1FCE05E80FCBCF3CA5AB108E3BA689310DB5539F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.SmoothValue::Set(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothValue_Set_m1FCE05E80FCBCF3CA5AB108E3BA689310DB5539F (SmoothValue_t01914EB63A259D445CB7BE6A2CDDC5E34CFFC82B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// currentValue = value;
		float L_0 = ___0_value;
		__this->___currentValue_1 = L_0;
		// targetValue = value;
		float L_1 = ___0_value;
		__this->___targetValue_0 = L_1;
		// t = 0;
		__this->___t_2 = (0.0f);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Utils.SmoothValue::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothValue_Update_mFE9B45DBEA9C7DCCE3A452015155D05191E428D9 (SmoothValue_t01914EB63A259D445CB7BE6A2CDDC5E34CFFC82B* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	{
		// if (t < 1)
		float L_0 = __this->___t_2;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// t += deltaTime / TimeToArrive;
		float L_1 = __this->___t_2;
		float L_2 = ___0_deltaTime;
		float L_3 = __this->___TimeToArrive_3;
		__this->___t_2 = ((float)il2cpp_codegen_add(L_1, ((float)(L_2/L_3))));
		// t = Mathf.Clamp01(t);
		float L_4 = __this->___t_2;
		float L_5;
		L_5 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_4, NULL);
		__this->___t_2 = L_5;
		// currentValue = Mathf.Lerp(currentValue, targetValue, t);
		float L_6 = __this->___currentValue_1;
		float L_7 = __this->___targetValue_0;
		float L_8 = __this->___t_2;
		float L_9;
		L_9 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_6, L_7, L_8, NULL);
		__this->___currentValue_1 = L_9;
	}

IL_0050:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DungeonArchitect.Utils.Noise.GradientNoisePolicy::Sample(System.Single,System.Single,DungeonArchitect.Utils.Noise.INoiseTable`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GradientNoisePolicy_Sample_mA545118100EFB4F37FAF23316CC1F737AB3225D6 (GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2* __this, float ___0_x, float ___1_y, RuntimeObject* ___2_NoiseTable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INoiseTable_1_t0EF3CA4865E448FF674F805B29D565A4D4C67EEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoiseTableCell_1_t62A92FAD3718DBF86B36D147CA80A553D605A7BF V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var Cell = NoiseTable.GetCell(x, y);
		RuntimeObject* L_0 = ___2_NoiseTable;
		float L_1 = ___0_x;
		float L_2 = ___1_y;
		NullCheck(L_0);
		NoiseTableCell_1_t62A92FAD3718DBF86B36D147CA80A553D605A7BF L_3;
		L_3 = InterfaceFuncInvoker2< NoiseTableCell_1_t62A92FAD3718DBF86B36D147CA80A553D605A7BF, float, float >::Invoke(2 /* DungeonArchitect.Utils.Noise.NoiseTableCell`1<T> DungeonArchitect.Utils.Noise.INoiseTable`1<UnityEngine.Vector2>::GetCell(System.Single,System.Single) */, INoiseTable_1_t0EF3CA4865E448FF674F805B29D565A4D4C67EEF_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		V_0 = L_3;
		// float fx = x % 1;
		float L_4 = ___0_x;
		V_1 = (fmodf(L_4, (1.0f)));
		// float fy = y % 1;
		float L_5 = ___1_y;
		V_2 = (fmodf(L_5, (1.0f)));
		// var P = new Vector2(fx, fy);
		float L_6 = V_1;
		float L_7 = V_2;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_6, L_7, NULL);
		// return Mathf.Lerp(
		//     Mathf.Lerp(
		//         Vector2.Dot(Cell.N00, P - new Vector2(0, 0)),
		//         Vector2.Dot(Cell.N10, P - new Vector2(1, 0)),
		//         fx),
		//     Mathf.Lerp(
		//         Vector2.Dot(Cell.N01, P - new Vector2(0, 1)),
		//         Vector2.Dot(Cell.N11, P - new Vector2(1, 1)),
		//         fx),
		//     fy);
		NoiseTableCell_1_t62A92FAD3718DBF86B36D147CA80A553D605A7BF L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = L_8.___N00_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_9, L_12, NULL);
		NoiseTableCell_1_t62A92FAD3718DBF86B36D147CA80A553D605A7BF L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = L_14.___N10_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_16, L_17, NULL);
		float L_19;
		L_19 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_15, L_18, NULL);
		float L_20 = V_1;
		float L_21;
		L_21 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_13, L_19, L_20, NULL);
		NoiseTableCell_1_t62A92FAD3718DBF86B36D147CA80A553D605A7BF L_22 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = L_22.___N01_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_24, L_25, NULL);
		float L_27;
		L_27 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_23, L_26, NULL);
		NoiseTableCell_1_t62A92FAD3718DBF86B36D147CA80A553D605A7BF L_28 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = L_28.___N11_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_30, L_31, NULL);
		float L_33;
		L_33 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_29, L_32, NULL);
		float L_34 = V_1;
		float L_35;
		L_35 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_27, L_33, L_34, NULL);
		float L_36 = V_2;
		float L_37;
		L_37 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_21, L_35, L_36, NULL);
		return L_37;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Utils.Noise.GradientNoisePolicy::GetRandom(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GradientNoisePolicy_GetRandom_m4650B62E99C06803E54271A318E9A1C38D1EAFAF (GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2* __this, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___0_random, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var angle = random.NextFloat() * Mathf.PI * 2.0f;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ___0_random;
		float L_1;
		L_1 = RandomExtensions_NextFloat_m83B4036CA53E0F8F86D3A8D8ABC1C564D0673A67(L_0, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, (3.14159274f))), (2.0f)));
		// return new Vector2(
		//     Mathf.Cos(angle),
		//     Mathf.Sin(angle));
		float L_2 = V_0;
		float L_3;
		L_3 = cosf(L_2);
		float L_4 = V_0;
		float L_5;
		L_5 = sinf(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void DungeonArchitect.Utils.Noise.GradientNoisePolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientNoisePolicy__ctor_m872E14DBF6689B0D940C48CA586BAE29619B82A8 (GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DungeonArchitect.Utils.Noise.INoisePolicy`1<UnityEngine.Vector2> DungeonArchitect.Utils.Noise.GradientNoiseTable::CreateNoisePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GradientNoiseTable_CreateNoisePolicy_mB937811BD607E4610627D82894F96B9B88AEE9C5 (GradientNoiseTable_t80B9C4A113191141F8ADB168B53969689475F448* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new GradientNoisePolicy();
		GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2* L_0 = (GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2*)il2cpp_codegen_object_new(GradientNoisePolicy_tD3C754A0D8099BD31413807006585FC49D84A6F2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GradientNoisePolicy__ctor_m872E14DBF6689B0D940C48CA586BAE29619B82A8(L_0, NULL);
		return L_0;
	}
}
// System.Void DungeonArchitect.Utils.Noise.GradientNoiseTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientNoiseTable__ctor_mD30B68FF2469823862498414E81640394359149E (GradientNoiseTable_t80B9C4A113191141F8ADB168B53969689475F448* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseTable_1__ctor_m882520BCB75C40877D994FBCCA4CF4128D959074_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NoiseTable_1__ctor_m882520BCB75C40877D994FBCCA4CF4128D959074(__this, NoiseTable_1__ctor_m882520BCB75C40877D994FBCCA4CF4128D959074_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_get_Location_mF005282420254BC725474ED27F3E4E7513956D2B_inline (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// return location;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = __this->___location_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rectangle_set_Location_m6BBC646F493116B7888B219B2F48B0E634836185_inline (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_value, const RuntimeMethod* method) 
{
	{
		// location = value;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_value;
		__this->___location_0 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C Rectangle_get_Size_mA55765DC875BB6CEBED2C41C0DBC5258B7A79259_inline (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, const RuntimeMethod* method) 
{
	{
		// return size;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = __this->___size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rectangle_set_Size_m49F71D3947C8EC86A65E51B75BCB096F54839CCB_inline (Rectangle_tA560F5F5599A7C11DDD6E7EC2A93ABD2AAA6C64E* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_value, const RuntimeMethod* method) 
{
	{
		// size = value;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_0 = ___0_value;
		__this->___size_1 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___0_H, float ___1_S, float ___2_V, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_H;
		float L_1 = ___1_S;
		float L_2 = ___2_V;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		int32_t L_2 = ___2_z;
		__this->___m_Z_2 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_v;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_v;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_v;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF01C477CDADA3CC4D7589AF47F15AA10EDB9A371_gshared_inline (List_1_t72F81508323A323FA6727DCAE9E4209241B62383* __this, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C ___0_item, const RuntimeMethod* method) 
{
	IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* L_1 = (IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		IntVectorU5BU5D_t51305BC25B133B84E9B4F1FB09FC5DE6C579C440* L_6 = V_0;
		int32_t L_7 = V_1;
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C)L_8);
		return;
	}

IL_0034:
	{
		IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C L_9 = ___0_item;
		((  void (*) (List_1_t72F81508323A323FA6727DCAE9E4209241B62383*, IntVector_tF31403FD7CA4A560745719B0E36FAF35F1EBC71C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
