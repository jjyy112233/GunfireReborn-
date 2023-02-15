#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>
struct Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Func`2<DungeonArchitect.Graphs.GraphNode,System.Boolean>
struct Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<DungeonArchitect.Graphs.GraphNode>
struct IEnumerable_1_tFD5E451BB1630CBC4831D928FD306B90C664A7BC;
// System.Collections.Generic.IEnumerable`1<DungeonArchitect.Graphs.GraphPin>
struct IEnumerable_1_t2B2708DB3A1138A87E193549CC1D7737BEA4102F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<DungeonArchitect.Graphs.GraphNode>
struct IEqualityComparer_1_t018D69877523A13232A7BEFAC24445ADD00E9328;
// System.Collections.Generic.Dictionary`2/KeyCollection<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>
struct KeyCollection_tF388A0F3A38DF1566C798572016149C773FDB674;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>
struct List_1_t5B2B2081BF8097131F5848A462357FBB09D50112;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>
struct List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>
struct List_1_tC958F6791FB4E4315279F35506727A207EBFFF03;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>
struct ValueCollection_t9C4C79CC95A07EF5FF293B0E09818A465AC13C5A;
// System.Collections.Generic.Dictionary`2/Entry<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>[]
struct EntryU5BU5D_t679637C66BF0AF437714488F0D33F99B3FFF62DA;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// DungeonArchitect.Graphs.GraphLink[]
struct GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D;
// DungeonArchitect.Graphs.GraphNode[]
struct GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70;
// DungeonArchitect.Graphs.GraphPin[]
struct GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// DungeonArchitect.Graphs.CommentNode
struct CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4;
// DungeonArchitect.Graphs.Layouts.DefaultGraphLayoutNodeActions
struct DefaultGraphLayoutNodeActions_t00E0CA5D9ACCDAACC5E0375AF5C8331F9BF85FDC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// DungeonArchitect.Graphs.Graph
struct Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520;
// DungeonArchitect.Graphs.GraphBuilder
struct GraphBuilder_t3ABC8DFFE16CC2C1A876F82CE56469A202547258;
// DungeonArchitect.Graphs.GraphCamera
struct GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727;
// DungeonArchitect.Graphs.Layouts.Layered.GraphLayoutLayeredConfig
struct GraphLayoutLayeredConfig_tEC788D299A6CBE9F24C475E799F1792E172ED9CE;
// DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig
struct GraphLayoutSpringConfig_tDF6F601D20C28C22A0C466EAC36E983BE9E8ECE9;
// DungeonArchitect.Graphs.GraphLink
struct GraphLink_t167090219997E1F874E24A93015AD8333374E463;
// DungeonArchitect.Graphs.GraphNode
struct GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA;
// DungeonArchitect.Graphs.GraphPin
struct GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00;
// DungeonArchitect.Graphs.GraphSchema
struct GraphSchema_t8A0FFDA40767F4EF57DABE465795497F2C2AECE6;
// DungeonArchitect.Graphs.GraphUtils
struct GraphUtils_t9AE81DD12DBF6F3C1BEDC07FDD8294A0C2F2F688;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// DungeonArchitect.Graphs.IndexCounter
struct IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// DungeonArchitect.Graphs.NonEditorGraphBuilder
struct NonEditorGraphBuilder_tD3570E2BCA8F16B8466E5D5AF3C2DECF2D21A411;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// DungeonArchitect.RuntimeGraphs.RuntimeGraphBuilder
struct RuntimeGraphBuilder_t376BF3E5F4474DAF19CFFA46518ECBA7F8A930D0;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// DungeonArchitect.Graphs.Graph/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8;
// DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed
struct OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75;

IL2CPP_EXTERN_C RuntimeClass* CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5B2B2081BF8097131F5848A462357FBB09D50112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3EBF7CFEC7929F196835D5D12FBBE2F845BF2A5F;
IL2CPP_EXTERN_C String_t* _stringLiteral4025E38C47D31F48DA15148B12D5C2257E70429E;
IL2CPP_EXTERN_C String_t* _stringLiteral9489037AC0DE5C92702DBB68E26BE51573415855;
IL2CPP_EXTERN_C String_t* _stringLiteralB9B8C3ED504FC6C7F58ECB8917C16F010CF2C319;
IL2CPP_EXTERN_C String_t* _stringLiteralC1FF17ED250395F660A2E397510D538DE1168AAE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAB52502CFAFC9A9697EA84535089C111F7D9BDD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m91CB6F46833273B335805FF1DE9AAB569CD4FBB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4FC0601CDAC86F9326A9C0D738A145E92B0C8219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD6169CAE5ABCFEC4FDAEC64F083AFD42652C4465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m2095B74BEB3CF8CFB9E525EB052A31A88D4FE775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Single_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_mB2401F59B78CDEECCAF7AB5E1C88EBEC0EB0FA5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m0A7718E87AA38BDDC09DFEE02DBD93DEFD5BB1B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB910922BCFAD38E7A19D9D93EB6B148C84867FE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE65FD6662DFEAD6BB370AD1A803F483923013A5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0084DCC066F8BB102AC5737AC76B68D6F89BFAC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraphNode_CreatePinOfType_TisGraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00_m2416C97D7C479C364C104A8DC655F1E0BAC5DB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m966A7FF4817ECEB2A809241DFCE2D22BC5E0C974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m91C330C053EABC403CED9CF9C0F9ECAE43F9ED60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m8AC1E1EE87F6E325EBB13B20761C08FDC11E1E8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m6D5BB18190AB982706A6DD4BD0452437A41A8A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDAE43D9A4B5E76139214C85F3F66DF3B488A52EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB3C5805BECBB48E4ABC7CD9AF07C28D1643080B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m17C879F892AD5ACF8CEB531B48888891D7276848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m42AE40CC863F746FEAC04E739ED73998825C14B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetNodeU3Eb__0_m79C0F138E734A51E053E40D25E2C385EEE20A337_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D;
struct GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70;
struct GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t863D756065C128D08DC77E043E002428EF793658 
{
};

// System.Collections.Generic.Dictionary`2<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>
struct Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t679637C66BF0AF437714488F0D33F99B3FFF62DA* ____entries_1;
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
	KeyCollection_tF388A0F3A38DF1566C798572016149C773FDB674* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9C4C79CC95A07EF5FF293B0E09818A465AC13C5A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>
struct List_1_t5B2B2081BF8097131F5848A462357FBB09D50112  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>
struct List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>
struct List_1_tC958F6791FB4E4315279F35506727A207EBFFF03  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// DungeonArchitect.Graphs.Layouts.DefaultGraphLayoutNodeActions
struct DefaultGraphLayoutNodeActions_t00E0CA5D9ACCDAACC5E0375AF5C8331F9BF85FDC  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>> DungeonArchitect.Graphs.Layouts.DefaultGraphLayoutNodeActions::outgoingNodes
	Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* ___outgoingNodes_0;
};

// DungeonArchitect.Graphs.GraphBuilder
struct GraphBuilder_t3ABC8DFFE16CC2C1A876F82CE56469A202547258  : public RuntimeObject
{
	// DungeonArchitect.Graphs.Graph DungeonArchitect.Graphs.GraphBuilder::graph
	Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___graph_0;
};

// DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig
struct GraphLayoutSpringConfig_tDF6F601D20C28C22A0C466EAC36E983BE9E8ECE9  : public RuntimeObject
{
	// System.Single DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig::interNodeDistance
	float ___interNodeDistance_0;
	// System.Single DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig::interNodeTension
	float ___interNodeTension_1;
	// System.Single DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig::springDistance
	float ___springDistance_2;
	// System.Single DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig::springTension
	float ___springTension_3;
	// System.Int32 DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig::iterations
	int32_t ___iterations_4;
	// System.Single DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig::timeStep
	float ___timeStep_5;
};

// DungeonArchitect.Graphs.GraphSchema
struct GraphSchema_t8A0FFDA40767F4EF57DABE465795497F2C2AECE6  : public RuntimeObject
{
};

// DungeonArchitect.Graphs.GraphUtils
struct GraphUtils_t9AE81DD12DBF6F3C1BEDC07FDD8294A0C2F2F688  : public RuntimeObject
{
};

// DungeonArchitect.Graphs.IndexCounter
struct IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586  : public RuntimeObject
{
	// System.Int32 DungeonArchitect.Graphs.IndexCounter::index
	int32_t ___index_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// DungeonArchitect.RuntimeGraphs.RuntimeGraphBuilder
struct RuntimeGraphBuilder_t376BF3E5F4474DAF19CFFA46518ECBA7F8A930D0  : public RuntimeObject
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

// DungeonArchitect.Graphs.Graph/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8  : public RuntimeObject
{
	// System.String DungeonArchitect.Graphs.Graph/<>c__DisplayClass13_0::id
	String_t* ___id_0;
};

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphLink>
struct Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GraphLink_t167090219997E1F874E24A93015AD8333374E463* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphNode>
struct Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphPin>
struct Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// DungeonArchitect.Graphs.NonEditorGraphBuilder
struct NonEditorGraphBuilder_tD3570E2BCA8F16B8466E5D5AF3C2DECF2D21A411  : public GraphBuilder_t3ABC8DFFE16CC2C1A876F82CE56469A202547258
{
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// DungeonArchitect.Graphs.GraphCamera
struct GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727  : public RuntimeObject
{
	// System.Single DungeonArchitect.Graphs.GraphCamera::maxAllowedZoom
	float ___maxAllowedZoom_0;
	// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphCamera::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_1;
	// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphCamera::ScreenOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenOffset_2;
	// System.Single DungeonArchitect.Graphs.GraphCamera::zoomLevel
	float ___zoomLevel_3;
};

// DungeonArchitect.Graphs.Layouts.Layered.GraphLayoutLayeredConfig
struct GraphLayoutLayeredConfig_tEC788D299A6CBE9F24C475E799F1792E172ED9CE  : public RuntimeObject
{
	// UnityEngine.Vector2 DungeonArchitect.Graphs.Layouts.Layered.GraphLayoutLayeredConfig::separation
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___separation_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Func`2<DungeonArchitect.Graphs.GraphNode,System.Boolean>
struct Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// DungeonArchitect.Graphs.Graph
struct Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// DungeonArchitect.Graphs.IndexCounter DungeonArchitect.Graphs.Graph::indexCounter
	IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* ___indexCounter_4;
	// DungeonArchitect.Graphs.IndexCounter DungeonArchitect.Graphs.Graph::topZIndex
	IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* ___topZIndex_5;
	// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode> DungeonArchitect.Graphs.Graph::nodes
	List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* ___nodes_6;
	// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink> DungeonArchitect.Graphs.Graph::links
	List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* ___links_7;
};

// DungeonArchitect.Graphs.GraphLink
struct GraphLink_t167090219997E1F874E24A93015AD8333374E463  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 DungeonArchitect.Graphs.GraphLink::id
	int32_t ___id_4;
	// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphLink::input
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___input_5;
	// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphLink::output
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___output_6;
	// DungeonArchitect.Graphs.Graph DungeonArchitect.Graphs.GraphLink::graph
	Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___graph_7;
};

// DungeonArchitect.Graphs.GraphNode
struct GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String DungeonArchitect.Graphs.GraphNode::id
	String_t* ___id_4;
	// System.String DungeonArchitect.Graphs.GraphNode::caption
	String_t* ___caption_5;
	// UnityEngine.Rect DungeonArchitect.Graphs.GraphNode::bounds
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___bounds_6;
	// System.Boolean DungeonArchitect.Graphs.GraphNode::canBeDeleted
	bool ___canBeDeleted_7;
	// System.Boolean DungeonArchitect.Graphs.GraphNode::canBeSelected
	bool ___canBeSelected_8;
	// System.Boolean DungeonArchitect.Graphs.GraphNode::canBeMoved
	bool ___canBeMoved_9;
	// System.Boolean DungeonArchitect.Graphs.GraphNode::selected
	bool ___selected_10;
	// System.Int32 DungeonArchitect.Graphs.GraphNode::zIndex
	int32_t ___zIndex_11;
	// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin> DungeonArchitect.Graphs.GraphNode::inputPins
	List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* ___inputPins_12;
	// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin> DungeonArchitect.Graphs.GraphNode::outputPins
	List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* ___outputPins_13;
	// DungeonArchitect.Graphs.Graph DungeonArchitect.Graphs.GraphNode::graph
	Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___graph_14;
	// System.Boolean DungeonArchitect.Graphs.GraphNode::dragging
	bool ___dragging_15;
};

// DungeonArchitect.Graphs.GraphPin
struct GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// DungeonArchitect.Graphs.GraphPinMouseState DungeonArchitect.Graphs.GraphPin::clickState
	int32_t ___clickState_4;
	// DungeonArchitect.Graphs.GraphPinType DungeonArchitect.Graphs.GraphPin::pinType
	int32_t ___pinType_5;
	// DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed DungeonArchitect.Graphs.GraphPin::PinLinksDestroyed
	OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* ___PinLinksDestroyed_6;
	// DungeonArchitect.Graphs.GraphNode DungeonArchitect.Graphs.GraphPin::node
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___node_7;
	// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphPin::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_8;
	// UnityEngine.Rect DungeonArchitect.Graphs.GraphPin::boundsOffset
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___boundsOffset_9;
	// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphPin::tangent
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tangent_10;
	// System.Single DungeonArchitect.Graphs.GraphPin::tangentStrength
	float ___tangentStrength_11;
	// System.Boolean DungeonArchitect.Graphs.GraphPin::requestLinkDeletionInitiated
	bool ___requestLinkDeletionInitiated_12;
};

// DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed
struct OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75  : public MulticastDelegate_t
{
};

// DungeonArchitect.Graphs.CommentNode
struct CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4  : public GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA
{
	// System.String DungeonArchitect.Graphs.CommentNode::message
	String_t* ___message_16;
	// UnityEngine.Color DungeonArchitect.Graphs.CommentNode::background
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___background_17;
	// System.Int32 DungeonArchitect.Graphs.CommentNode::fontSize
	int32_t ___fontSize_18;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>

// System.Collections.Generic.Dictionary`2<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>

// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>
struct List_1_t5B2B2081BF8097131F5848A462357FBB09D50112_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>

// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>
struct List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>

// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>
struct List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// DungeonArchitect.Graphs.Layouts.DefaultGraphLayoutNodeActions

// DungeonArchitect.Graphs.Layouts.DefaultGraphLayoutNodeActions

// DungeonArchitect.Graphs.GraphBuilder

// DungeonArchitect.Graphs.GraphBuilder

// DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig

// DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig

// DungeonArchitect.Graphs.GraphSchema

// DungeonArchitect.Graphs.GraphSchema

// DungeonArchitect.Graphs.GraphUtils

// DungeonArchitect.Graphs.GraphUtils

// DungeonArchitect.Graphs.IndexCounter

// DungeonArchitect.Graphs.IndexCounter

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// DungeonArchitect.RuntimeGraphs.RuntimeGraphBuilder

// DungeonArchitect.RuntimeGraphs.RuntimeGraphBuilder

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// DungeonArchitect.Graphs.Graph/<>c__DisplayClass13_0

// DungeonArchitect.Graphs.Graph/<>c__DisplayClass13_0

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphLink>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphLink>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphNode>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphNode>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphPin>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphPin>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

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

// DungeonArchitect.Graphs.NonEditorGraphBuilder

// DungeonArchitect.Graphs.NonEditorGraphBuilder

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

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

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent_2;
};

// UnityEngine.Event

// DungeonArchitect.Graphs.GraphCamera

// DungeonArchitect.Graphs.GraphCamera

// DungeonArchitect.Graphs.Layouts.Layered.GraphLayoutLayeredConfig

// DungeonArchitect.Graphs.Layouts.Layered.GraphLayoutLayeredConfig

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

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

// System.Func`2<DungeonArchitect.Graphs.GraphNode,System.Boolean>

// System.Func`2<DungeonArchitect.Graphs.GraphNode,System.Boolean>

// System.AsyncCallback

// System.AsyncCallback

// DungeonArchitect.Graphs.Graph

// DungeonArchitect.Graphs.Graph

// DungeonArchitect.Graphs.GraphLink

// DungeonArchitect.Graphs.GraphLink

// DungeonArchitect.Graphs.GraphNode

// DungeonArchitect.Graphs.GraphNode

// DungeonArchitect.Graphs.GraphPin

// DungeonArchitect.Graphs.GraphPin

// DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed

// DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed

// DungeonArchitect.Graphs.CommentNode

// DungeonArchitect.Graphs.CommentNode
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// DungeonArchitect.Graphs.GraphNode[]
struct GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70  : public RuntimeArray
{
	ALIGN_FIELD (8) GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* m_Items[1];

	inline GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// DungeonArchitect.Graphs.GraphPin[]
struct GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036  : public RuntimeArray
{
	ALIGN_FIELD (8) GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* m_Items[1];

	inline GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// DungeonArchitect.Graphs.GraphLink[]
struct GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D  : public RuntimeArray
{
	ALIGN_FIELD (8) GraphLink_t167090219997E1F874E24A93015AD8333374E463* m_Items[1];

	inline GraphLink_t167090219997E1F874E24A93015AD8333374E463* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GraphLink_t167090219997E1F874E24A93015AD8333374E463** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GraphLink_t167090219997E1F874E24A93015AD8333374E463* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GraphLink_t167090219997E1F874E24A93015AD8333374E463* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GraphLink_t167090219997E1F874E24A93015AD8333374E463** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GraphLink_t167090219997E1F874E24A93015AD8333374E463* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T DungeonArchitect.Graphs.GraphNode::CreatePinOfType<System.Object>(DungeonArchitect.Graphs.GraphPinType,UnityEngine.Vector2,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GraphNode_CreatePinOfType_TisRuntimeObject_m5388C947ADCE6040760A9CAE2E4538B86640428B_gshared (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, int32_t ___0_pinType, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_boundsOffset, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_tangent, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphNode::CopyFrom(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_CopyFrom_mC0AD3E9D4EC0FF26488896C4E471D1EA5D763C6C (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode__ctor_m88402BB3DB74830FCBB3FBC049021BA864D274F6 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.IndexCounter DungeonArchitect.Graphs.Graph::get_IndexCounter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* Graph_get_IndexCounter_m2866056FB04F59674EA3026634A52FCEBB289A4D_inline (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.IndexCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexCounter__ctor_m678D95BAED4A0731EFAD3D740227E1E88E32FF26 (IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::.ctor()
inline void List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1 (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>::.ctor()
inline void List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::get_Item(System.Int32)
inline GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* List_1_get_Item_m42AE40CC863F746FEAC04E739ED73998825C14B5 (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m8AC1E1EE87F6E325EBB13B20761C08FDC11E1E8E (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::get_Count()
inline int32_t List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_inline (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void DungeonArchitect.Graphs.Graph/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m3C94123837FBD296C3811B76E1DFB640AF860C4B (U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode> DungeonArchitect.Graphs.Graph::get_Nodes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<DungeonArchitect.Graphs.GraphNode,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAA247217BABDCDCE5A62A51BAED3EBCAD940E7C7 (Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<DungeonArchitect.Graphs.GraphNode>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m0A7718E87AA38BDDC09DFEE02DBD93DEFD5BB1B1 (RuntimeObject* ___0_source, Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Int32 System.Linq.Enumerable::Count<DungeonArchitect.Graphs.GraphNode>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m2095B74BEB3CF8CFB9E525EB052A31A88D4FE775 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___0_source, method);
}
// TSource System.Linq.Enumerable::Single<DungeonArchitect.Graphs.GraphNode>(System.Collections.Generic.IEnumerable`1<TSource>)
inline GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* Enumerable_Single_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_mB2401F59B78CDEECCAF7AB5E1C88EBEC0EB0FA5F (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared)(___0_source, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.String DungeonArchitect.Graphs.GraphNode::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GraphNode_get_Id_m1208226FF4D1BDA590D208AC5FE33899494F581F_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::ToArray()
inline GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, const RuntimeMethod* method)
{
	return ((  GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void DungeonArchitect.Graphs.GraphBuilder::.ctor(DungeonArchitect.Graphs.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphBuilder__ctor_mC3D531CA382E65393DC76C19CEC72C7DE2AE6737 (GraphBuilder_t3ABC8DFFE16CC2C1A876F82CE56469A202547258* __this, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_graph, const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphNode::set_Position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_Position_mC8931EF0CFF819D410AB78ABD1A283E03CDC42B0 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::Add(T)
inline void List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean DungeonArchitect.Graphs.GraphNode::get_CanBeDeleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GraphNode_get_CanBeDeleted_m2153EF4B29B38797FCA5F274E35D0AA5A30EA0B8_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.Graph DungeonArchitect.Graphs.GraphNode::get_Graph()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink> DungeonArchitect.Graphs.Graph::get_Links()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>::GetEnumerator()
inline Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018 (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 (*) (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphLink>::Dispose()
inline void Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE (Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphLink>::get_Current()
inline GraphLink_t167090219997E1F874E24A93015AD8333374E463* Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_inline (Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126* __this, const RuntimeMethod* method)
{
	return ((  GraphLink_t167090219997E1F874E24A93015AD8333374E463* (*) (Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphLink::get_Input()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphLink::get_Output()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphNode DungeonArchitect.Graphs.GraphPin::get_Node()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>::Add(T)
inline void List_1_Add_m966A7FF4817ECEB2A809241DFCE2D22BC5E0C974_inline (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* __this, GraphLink_t167090219997E1F874E24A93015AD8333374E463* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112*, GraphLink_t167090219997E1F874E24A93015AD8333374E463*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphLink>::MoveNext()
inline bool Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C (Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>::Remove(T)
inline bool List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* __this, GraphLink_t167090219997E1F874E24A93015AD8333374E463* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112*, GraphLink_t167090219997E1F874E24A93015AD8333374E463*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void DungeonArchitect.Graphs.NonEditorGraphBuilder::DestroyObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonEditorGraphBuilder_DestroyObject_mA77612B3FFC1206EC2769E44E9901948AE6AE02C (NonEditorGraphBuilder_tD3570E2BCA8F16B8466E5D5AF3C2DECF2D21A411* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>::.ctor()
inline void List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// DungeonArchitect.Graphs.GraphPin[] DungeonArchitect.Graphs.GraphNode::get_InputPins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67 (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// DungeonArchitect.Graphs.GraphPin[] DungeonArchitect.Graphs.GraphNode::get_OutputPins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>::GetEnumerator()
inline Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF (*) (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphPin>::Dispose()
inline void Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10 (Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphPin>::get_Current()
inline GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_inline (Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF* __this, const RuntimeMethod* method)
{
	return ((  GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* (*) (Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphPin>::MoveNext()
inline bool Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A (Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::Remove(T)
inline bool List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphCamera::Pan(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera_Pan_mAB885E307BEDC894A599A1295A8DCEBAC2B6907F (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_delta, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphCamera::ScreenToWorld(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphCamera_ScreenToWorld_m4F847D7AE0B699D356167F483AD52EAE0B79452E (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenCoord, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_delta_m1BBF28E2FC379EDD3907DC987E6BD7E6521D69A0 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Event::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphCamera::WorldToScreen(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_worldCoord, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_position_m9CD8AA25A83A7A893429C0ED56C36641202C3F05 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_size_m346E4F7077E5A1C0F4E21966232CD726CB9E6BAA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.Graphs.GraphCamera::get_ZoomLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::GetEnumerator()
inline Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371 List_1_GetEnumerator_m91C330C053EABC403CED9CF9C0F9ECAE43F9ED60 (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371 (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphNode>::Dispose()
inline void Enumerator_Dispose_mB910922BCFAD38E7A19D9D93EB6B148C84867FE1 (Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphNode>::get_Current()
inline GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* Enumerator_get_Current_m0084DCC066F8BB102AC5737AC76B68D6F89BFAC1_inline (Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371* __this, const RuntimeMethod* method)
{
	return ((  GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* (*) (Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Rect DungeonArchitect.Graphs.GraphNode::get_Bounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphNode>::MoveNext()
inline bool Enumerator_MoveNext_mE65FD6662DFEAD6BB370AD1A803F483923013A5B (Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphLink::UpdateName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLink_UpdateName_mCBA764CE2B515F0135C99678654A762C36AA3F7D (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphPin::get_WorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.Graphs.GraphPin::get_TangentStrength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GraphPin_get_TangentStrength_m3284A0B6002D180F4FBB4CC8A4BCA5195ED24655_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>::ToArray()
inline GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* List_1_ToArray_m6D5BB18190AB982706A6DD4BD0452437A41A8A2E (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* __this, const RuntimeMethod* method)
{
	return ((  GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* (*) (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>::get_Count()
inline int32_t List_1_get_Count_mB3C5805BECBB48E4ABC7CD9AF07C28D1643080B5_inline (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>::get_Item(System.Int32)
inline GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* List_1_get_Item_m17C879F892AD5ACF8CEB531B48888891D7276848 (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* (*) (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String DungeonArchitect.Graphs.GraphNode::get_Caption()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GraphNode_get_Caption_m5CB8A2609C249B98CD2E31A97455BFB695659E04_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// T DungeonArchitect.Graphs.GraphNode::CreatePinOfType<DungeonArchitect.Graphs.GraphPin>(DungeonArchitect.Graphs.GraphPinType,UnityEngine.Vector2,UnityEngine.Rect,UnityEngine.Vector2)
inline GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphNode_CreatePinOfType_TisGraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00_m2416C97D7C479C364C104A8DC655F1E0BAC5DB6F (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, int32_t ___0_pinType, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_boundsOffset, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_tangent, const RuntimeMethod* method)
{
	return ((  GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* (*) (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))GraphNode_CreatePinOfType_TisRuntimeObject_m5388C947ADCE6040760A9CAE2E4538B86640428B_gshared)(__this, ___0_pinType, ___1_position, ___2_boundsOffset, ___3_tangent, method);
}
// DungeonArchitect.Graphs.GraphLink[] DungeonArchitect.Graphs.GraphPin::GetConntectedLinks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* GraphPin_GetConntectedLinks_mB5D45F5630E9AE8BA745F54363C846C24FCC1418 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphNode::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphNode_get_Position_m92FB18D50D76223CB53A63C884AB11C0A4329AB7 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>::ToArray()
inline GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* List_1_ToArray_mDAE43D9A4B5E76139214C85F3F66DF3B488A52EB (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* __this, const RuntimeMethod* method)
{
	return ((  GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* (*) (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.Rect DungeonArchitect.Graphs.GraphPin::GetWorldBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphPin_GetWorldBounds_m395AA00220E15803E96AD1CE81A0465BB2605AAA (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphPin::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphPin_get_Position_m4C40C17C3AFF452D3812A3000706460A458DA425_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed::Invoke(DungeonArchitect.Graphs.GraphPin)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_inline (OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphPinType DungeonArchitect.Graphs.GraphPin::get_PinType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GraphPin_get_PinType_m5402BA889181025BF3960BEFBD4120707511D6D8_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphUtils::GetDirectionalNodes(DungeonArchitect.Graphs.GraphPin,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphUtils_GetDirectionalNodes_mA7DB0702853A8AD9E61A8201FB595B240728E3D6 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, bool ___1_isIncoming, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphUtils::GetDirectionalNodes(DungeonArchitect.Graphs.GraphNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphUtils_GetDirectionalNodes_m18932D4513682B303F5E45F95EF4DE8975649F0A (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_hostNode, bool ___1_isIncoming, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>::.ctor()
inline void Dictionary_2__ctor_m4FC0601CDAC86F9326A9C0D738A145E92B0C8219 (Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m91CB6F46833273B335805FF1DE9AAB569CD4FBB0 (Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844*, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mAB52502CFAFC9A9697EA84535089C111F7D9BDD9 (Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_key, List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844*, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*, List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<DungeonArchitect.Graphs.GraphNode,System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>>::get_Item(TKey)
inline List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* Dictionary_2_get_Item_mD6169CAE5ABCFEC4FDAEC64F083AFD42652C4465 (Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_key, const RuntimeMethod* method)
{
	return ((  List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* (*) (Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844*, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
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
// System.Void DungeonArchitect.RuntimeGraphs.RuntimeGraphBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeGraphBuilder__ctor_m5079E68604688D7ED41075C3B99C1FB4905F0AC5 (RuntimeGraphBuilder_t376BF3E5F4474DAF19CFFA46518ECBA7F8A930D0* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.Graphs.CommentNode::CopyFrom(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommentNode_CopyFrom_m3F6FA7D223817A607000F1F5F0FE3D0A94E72B6C (CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4* V_0 = NULL;
	{
		// base.CopyFrom(node);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		GraphNode_CopyFrom_mC0AD3E9D4EC0FF26488896C4E471D1EA5D763C6C(__this, L_0, NULL);
		// var otherNode = node as CommentNode;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_1 = ___0_node;
		V_0 = ((CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4*)IsInstClass((RuntimeObject*)L_1, CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4_il2cpp_TypeInfo_var));
		// if (otherNode == null) return;
		CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// if (otherNode == null) return;
		return;
	}

IL_0018:
	{
		// message = otherNode.message;
		CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___message_16;
		__this->___message_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_16), (void*)L_5);
		// background = otherNode.background;
		CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4* L_6 = V_0;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___background_17;
		__this->___background_17 = L_7;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.CommentNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommentNode__ctor_m9C4160B21FE2C9E658762E49E580502788574A3D (CommentNode_t6B345B87703CA4707AC607303C609B865B1A36C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EBF7CFEC7929F196835D5D12FBBE2F845BF2A5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string message = "Comment";
		__this->___message_16 = _stringLiteral3EBF7CFEC7929F196835D5D12FBBE2F845BF2A5F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_16), (void*)_stringLiteral3EBF7CFEC7929F196835D5D12FBBE2F845BF2A5F);
		// public Color background = new Color(1.0f, 0.714f, 0.992f, 0.175f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.713999987f), (0.991999984f), (0.174999997f), /*hidden argument*/NULL);
		__this->___background_17 = L_0;
		// public int fontSize = 22;
		__this->___fontSize_18 = ((int32_t)22);
		GraphNode__ctor_m88402BB3DB74830FCBB3FBC049021BA864D274F6(__this, NULL);
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
// System.Int32 DungeonArchitect.Graphs.IndexCounter::GetNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexCounter_GetNext_mC82B0F6BF7A7143C416F0805EDD81C57743F2DAB (IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* __this, const RuntimeMethod* method) 
{
	{
		// index++;
		int32_t L_0 = __this->___index_0;
		__this->___index_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// return index;
		int32_t L_1 = __this->___index_0;
		return L_1;
	}
}
// System.Void DungeonArchitect.Graphs.IndexCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexCounter__ctor_m678D95BAED4A0731EFAD3D740227E1E88E32FF26 (IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* __this, const RuntimeMethod* method) 
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
// DungeonArchitect.Graphs.IndexCounter DungeonArchitect.Graphs.Graph::get_IndexCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* Graph_get_IndexCounter_m2866056FB04F59674EA3026634A52FCEBB289A4D (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	{
		// get { return indexCounter; }
		IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* L_0 = __this->___indexCounter_4;
		return L_0;
	}
}
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode> DungeonArchitect.Graphs.Graph::get_Nodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8 (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	{
		// return nodes;
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_0 = __this->___nodes_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink> DungeonArchitect.Graphs.Graph::get_Links()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	{
		// return links;
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_0 = __this->___links_7;
		return L_0;
	}
}
// DungeonArchitect.Graphs.IndexCounter DungeonArchitect.Graphs.Graph::get_TopZIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* Graph_get_TopZIndex_m35F0B3EECF0604CBDC3F1329AADDDE0542606853 (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	{
		// return topZIndex;
		IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* L_0 = __this->___topZIndex_5;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.Graph::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_OnEnable_m72EAD272148330F9F6C12B36DE1EA671B944198B (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8AC1E1EE87F6E325EBB13B20761C08FDC11E1E8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m42AE40CC863F746FEAC04E739ED73998825C14B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5B2B2081BF8097131F5848A462357FBB09D50112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (IndexCounter == null)
		IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* L_0;
		L_0 = Graph_get_IndexCounter_m2866056FB04F59674EA3026634A52FCEBB289A4D_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// indexCounter = new IndexCounter();
		IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* L_1 = (IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586*)il2cpp_codegen_object_new(IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IndexCounter__ctor_m678D95BAED4A0731EFAD3D740227E1E88E32FF26(L_1, NULL);
		__this->___indexCounter_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexCounter_4), (void*)L_1);
	}

IL_0013:
	{
		// if (topZIndex == null)
		IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* L_2 = __this->___topZIndex_5;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// topZIndex = new IndexCounter();
		IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* L_3 = (IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586*)il2cpp_codegen_object_new(IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IndexCounter__ctor_m678D95BAED4A0731EFAD3D740227E1E88E32FF26(L_3, NULL);
		__this->___topZIndex_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topZIndex_5), (void*)L_3);
	}

IL_0026:
	{
		// if (nodes == null)
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_4 = __this->___nodes_6;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		// nodes = new List<GraphNode>();
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_5 = (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*)il2cpp_codegen_object_new(List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1(L_5, List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		__this->___nodes_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodes_6), (void*)L_5);
	}

IL_0039:
	{
		// if (links == null)
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_6 = __this->___links_7;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// links = new List<GraphLink>();
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_7 = (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112*)il2cpp_codegen_object_new(List_1_t5B2B2081BF8097131F5848A462357FBB09D50112_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D(L_7, List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D_RuntimeMethod_var);
		__this->___links_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___links_7), (void*)L_7);
	}

IL_004c:
	{
		// for (int i = 0; i < nodes.Count; )
		V_0 = 0;
		goto IL_0076;
	}

IL_0050:
	{
		// if (nodes[i] == null)
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_8 = __this->___nodes_6;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_10;
		L_10 = List_1_get_Item_m42AE40CC863F746FEAC04E739ED73998825C14B5(L_8, L_9, List_1_get_Item_m42AE40CC863F746FEAC04E739ED73998825C14B5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// nodes.RemoveAt(i);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_12 = __this->___nodes_6;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_m8AC1E1EE87F6E325EBB13B20761C08FDC11E1E8E(L_12, L_13, List_1_RemoveAt_m8AC1E1EE87F6E325EBB13B20761C08FDC11E1E8E_RuntimeMethod_var);
		goto IL_0076;
	}

IL_0072:
	{
		// i++;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0076:
	{
		// for (int i = 0; i < nodes.Count; )
		int32_t L_15 = V_0;
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_16 = __this->___nodes_6;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_inline(L_16, List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0050;
		}
	}
	{
		// }
		return;
	}
}
// DungeonArchitect.Graphs.GraphNode DungeonArchitect.Graphs.Graph::GetNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* Graph_GetNode_mF07A56E538C10DC4AE1BE11BBEA84C22027C11A4 (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m2095B74BEB3CF8CFB9E525EB052A31A88D4FE775_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_mB2401F59B78CDEECCAF7AB5E1C88EBEC0EB0FA5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m0A7718E87AA38BDDC09DFEE02DBD93DEFD5BB1B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetNodeU3Eb__0_m79C0F138E734A51E053E40D25E2C385EEE20A337_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8* L_0 = (U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m3C94123837FBD296C3811B76E1DFB640AF860C4B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8* L_1 = V_0;
		String_t* L_2 = ___0_id;
		NullCheck(L_1);
		L_1->___id_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___id_0), (void*)L_2);
		// var result = from node in Nodes
		//              where node.Id == id
		//              select node;
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_3;
		L_3 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(__this, NULL);
		U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8* L_4 = V_0;
		Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403* L_5 = (Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403*)il2cpp_codegen_object_new(Func_2_t768A6A4B4205BE505C58605F2A3E4743443DA403_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mAA247217BABDCDCE5A62A51BAED3EBCAD940E7C7(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetNodeU3Eb__0_m79C0F138E734A51E053E40D25E2C385EEE20A337_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m0A7718E87AA38BDDC09DFEE02DBD93DEFD5BB1B1(L_3, L_5, Enumerable_Where_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m0A7718E87AA38BDDC09DFEE02DBD93DEFD5BB1B1_RuntimeMethod_var);
		V_1 = L_6;
		// return (result.Count() > 0) ? result.Single() : null;
		RuntimeObject* L_7 = V_1;
		int32_t L_8;
		L_8 = Enumerable_Count_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m2095B74BEB3CF8CFB9E525EB052A31A88D4FE775(L_7, Enumerable_Count_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_m2095B74BEB3CF8CFB9E525EB052A31A88D4FE775_RuntimeMethod_var);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		return (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*)NULL;
	}

IL_0030:
	{
		RuntimeObject* L_9 = V_1;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_10;
		L_10 = Enumerable_Single_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_mB2401F59B78CDEECCAF7AB5E1C88EBEC0EB0FA5F(L_9, Enumerable_Single_TisGraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_mB2401F59B78CDEECCAF7AB5E1C88EBEC0EB0FA5F_RuntimeMethod_var);
		return L_10;
	}
}
// System.Void DungeonArchitect.Graphs.Graph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph__ctor_mB6C33FC156BDC793908203260AF80260D3563DA1 (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void DungeonArchitect.Graphs.Graph/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m3C94123837FBD296C3811B76E1DFB640AF860C4B (U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean DungeonArchitect.Graphs.Graph/<>c__DisplayClass13_0::<GetNode>b__0(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetNodeU3Eb__0_m79C0F138E734A51E053E40D25E2C385EEE20A337 (U3CU3Ec__DisplayClass13_0_tA5E792A54497FE225E3DB1E027DE75A8775396D8* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) 
{
	{
		// where node.Id == id
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = GraphNode_get_Id_m1208226FF4D1BDA590D208AC5FE33899494F581F_inline(L_0, NULL);
		String_t* L_2 = __this->___id_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// DungeonArchitect.Graphs.Graph DungeonArchitect.Graphs.GraphBuilder::get_Graph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* GraphBuilder_get_Graph_m9A6A8369FF18E0F69F70F905308CEDF599359C46 (GraphBuilder_t3ABC8DFFE16CC2C1A876F82CE56469A202547258* __this, const RuntimeMethod* method) 
{
	{
		// public Graph Graph { get { return graph; } }
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = __this->___graph_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphBuilder::.ctor(DungeonArchitect.Graphs.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphBuilder__ctor_mC3D531CA382E65393DC76C19CEC72C7DE2AE6737 (GraphBuilder_t3ABC8DFFE16CC2C1A876F82CE56469A202547258* __this, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_graph, const RuntimeMethod* method) 
{
	{
		// public GraphBuilder(Graph graph)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.graph = graph;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = ___0_graph;
		__this->___graph_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___graph_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphBuilder::DestroyAllNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphBuilder_DestroyAllNodes_m0B868554DA82ED03CCD9EF1F1C34761EDFCD61B8 (GraphBuilder_t3ABC8DFFE16CC2C1A876F82CE56469A202547258* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* V_0 = NULL;
	int32_t V_1 = 0;
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_2 = NULL;
	{
		// var nodes = graph.Nodes.ToArray();
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = __this->___graph_0;
		NullCheck(L_0);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_1;
		L_1 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(L_0, NULL);
		NullCheck(L_1);
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_2;
		L_2 = List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE(L_1, List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		// foreach (var node in nodes)
		V_0 = L_2;
		V_1 = 0;
		goto IL_0024;
	}

IL_0015:
	{
		// foreach (var node in nodes)
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// DestroyNode(node);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_7 = V_2;
		VirtualActionInvoker1< GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* >::Invoke(4 /* System.Void DungeonArchitect.Graphs.GraphBuilder::DestroyNode(DungeonArchitect.Graphs.GraphNode) */, __this, L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0024:
	{
		// foreach (var node in nodes)
		int32_t L_9 = V_1;
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0015;
		}
	}
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
// System.Void DungeonArchitect.Graphs.NonEditorGraphBuilder::.ctor(DungeonArchitect.Graphs.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonEditorGraphBuilder__ctor_m3066C8893FACBD70EA9F8C8676E10E691A329AA4 (NonEditorGraphBuilder_tD3570E2BCA8F16B8466E5D5AF3C2DECF2D21A411* __this, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_graph, const RuntimeMethod* method) 
{
	{
		// : base(graph)
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = ___0_graph;
		GraphBuilder__ctor_mC3D531CA382E65393DC76C19CEC72C7DE2AE6737(__this, L_0, NULL);
		// }
		return;
	}
}
// DungeonArchitect.Graphs.GraphNode DungeonArchitect.Graphs.NonEditorGraphBuilder::CreateNode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* NonEditorGraphBuilder_CreateNode_m8B459B5899CAF734425599C6BC4C907725514C05 (NonEditorGraphBuilder_tD3570E2BCA8F16B8466E5D5AF3C2DECF2D21A411* __this, Type_t* ___0_nodeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_0 = NULL;
	String_t* V_1 = NULL;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GraphNode node = ScriptableObject.CreateInstance(nodeType) as GraphNode;
		Type_t* L_0 = ___0_nodeType;
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_1;
		L_1 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_0, NULL);
		V_0 = ((GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*)IsInstClass((RuntimeObject*)L_1, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_il2cpp_TypeInfo_var));
		// var id = System.Guid.NewGuid().ToString();
		Guid_t L_2;
		L_2 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_2 = L_2;
		String_t* L_3;
		L_3 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_2), NULL);
		V_1 = L_3;
		// node.Initialize(id, graph);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_4 = V_0;
		String_t* L_5 = V_1;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_6 = ((GraphBuilder_t3ABC8DFFE16CC2C1A876F82CE56469A202547258*)__this)->___graph_0;
		NullCheck(L_4);
		VirtualActionInvoker2< String_t*, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* >::Invoke(5 /* System.Void DungeonArchitect.Graphs.GraphNode::Initialize(System.String,DungeonArchitect.Graphs.Graph) */, L_4, L_5, L_6);
		// node.Position = Vector2.zero;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_7 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_7);
		GraphNode_set_Position_mC8931EF0CFF819D410AB78ABD1A283E03CDC42B0(L_7, L_8, NULL);
		// graph.Nodes.Add(node);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_9 = ((GraphBuilder_t3ABC8DFFE16CC2C1A876F82CE56469A202547258*)__this)->___graph_0;
		NullCheck(L_9);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_10;
		L_10 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(L_9, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_11 = V_0;
		NullCheck(L_10);
		List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline(L_10, L_11, List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
		// return node;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_12 = V_0;
		return L_12;
	}
}
// System.Void DungeonArchitect.Graphs.NonEditorGraphBuilder::DestroyNode(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonEditorGraphBuilder_DestroyNode_m1BFAD8BCF58CDE6B95FD656A048CCB6455F77E9A (NonEditorGraphBuilder_tD3570E2BCA8F16B8466E5D5AF3C2DECF2D21A411* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m966A7FF4817ECEB2A809241DFCE2D22BC5E0C974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5B2B2081BF8097131F5848A462357FBB09D50112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* V_0 = NULL;
	List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* V_1 = NULL;
	Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GraphLink_t167090219997E1F874E24A93015AD8333374E463* V_3 = NULL;
	GraphLink_t167090219997E1F874E24A93015AD8333374E463* V_4 = NULL;
	Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF V_5;
	memset((&V_5), 0, sizeof(V_5));
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* V_6 = NULL;
	{
		// if (node == null || !node.CanBeDeleted)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2 = ___0_node;
		NullCheck(L_2);
		bool L_3;
		L_3 = GraphNode_get_CanBeDeleted_m2153EF4B29B38797FCA5F274E35D0AA5A30EA0B8_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// var graph = node.Graph;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_4 = ___0_node;
		NullCheck(L_4);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_5;
		L_5 = GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline(L_4, NULL);
		V_0 = L_5;
		// var linksToBreak = new List<GraphLink>();
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_6 = (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112*)il2cpp_codegen_object_new(List_1_t5B2B2081BF8097131F5848A462357FBB09D50112_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D(L_6, List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D_RuntimeMethod_var);
		V_1 = L_6;
		// foreach (var link in graph.Links) {
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_7 = V_0;
		NullCheck(L_7);
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_8;
		L_8 = Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline(L_7, NULL);
		NullCheck(L_8);
		Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 L_9;
		L_9 = List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018(L_8, List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE((&V_2), Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0087_1;
			}

IL_002d_1:
			{
				// foreach (var link in graph.Links) {
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_10;
				L_10 = Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_inline((&V_2), Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
				V_3 = L_10;
				// if (link != null && link.Input != null && link.Output != null)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_11 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_12)
				{
					goto IL_0087_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_13 = V_3;
				NullCheck(L_13);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_14;
				L_14 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_13, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_15)
				{
					goto IL_0087_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_16 = V_3;
				NullCheck(L_16);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_17;
				L_17 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_18)
				{
					goto IL_0087_1;
				}
			}
			{
				// if (link.Input.Node == node || link.Output.Node == node)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_19 = V_3;
				NullCheck(L_19);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_20;
				L_20 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_19, NULL);
				NullCheck(L_20);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_21;
				L_21 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_20, NULL);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_22 = ___0_node;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_23;
				L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_21, L_22, NULL);
				if (L_23)
				{
					goto IL_0080_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_24 = V_3;
				NullCheck(L_24);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_25;
				L_25 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_24, NULL);
				NullCheck(L_25);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_26;
				L_26 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_25, NULL);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_27 = ___0_node;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_28;
				L_28 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_26, L_27, NULL);
				if (!L_28)
				{
					goto IL_0087_1;
				}
			}

IL_0080_1:
			{
				// linksToBreak.Add(link);
				List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_29 = V_1;
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_30 = V_3;
				NullCheck(L_29);
				List_1_Add_m966A7FF4817ECEB2A809241DFCE2D22BC5E0C974_inline(L_29, L_30, List_1_Add_m966A7FF4817ECEB2A809241DFCE2D22BC5E0C974_RuntimeMethod_var);
			}

IL_0087_1:
			{
				// foreach (var link in graph.Links) {
				bool L_31;
				L_31 = Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C((&V_2), Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		// foreach(var link in linksToBreak)
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_32 = V_1;
		NullCheck(L_32);
		Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 L_33;
		L_33 = List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018(L_32, List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		V_2 = L_33;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d3:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE((&V_2), Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c8_1;
			}

IL_00a9_1:
			{
				// foreach(var link in linksToBreak)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_34;
				L_34 = Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_inline((&V_2), Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
				V_4 = L_34;
				// graph.Links.Remove(link);
				Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_35 = V_0;
				NullCheck(L_35);
				List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_36;
				L_36 = Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline(L_35, NULL);
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_37 = V_4;
				NullCheck(L_36);
				bool L_38;
				L_38 = List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E(L_36, L_37, List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E_RuntimeMethod_var);
				// DestroyObject(link);
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_39 = V_4;
				NonEditorGraphBuilder_DestroyObject_mA77612B3FFC1206EC2769E44E9901948AE6AE02C(__this, L_39, NULL);
			}

IL_00c8_1:
			{
				// foreach(var link in linksToBreak)
				bool L_40;
				L_40 = Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C((&V_2), Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_00a9_1;
				}
			}
			{
				goto IL_00e1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e1:
	{
		// var pins = new List<GraphPin>();
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_41 = (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*)il2cpp_codegen_object_new(List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D(L_41, List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var);
		// pins.AddRange(node.InputPins);
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_42 = L_41;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_43 = ___0_node;
		NullCheck(L_43);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_44;
		L_44 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(L_43, NULL);
		NullCheck(L_42);
		List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67(L_42, (RuntimeObject*)L_44, List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		// pins.AddRange(node.OutputPins);
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_45 = L_42;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_46 = ___0_node;
		NullCheck(L_46);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_47;
		L_47 = GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8(L_46, NULL);
		NullCheck(L_45);
		List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67(L_45, (RuntimeObject*)L_47, List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		// foreach (var pin in pins)
		NullCheck(L_45);
		Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF L_48;
		L_48 = List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB(L_45, List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var);
		V_5 = L_48;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0123:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10((&V_5), Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0118_1;
			}

IL_0107_1:
			{
				// foreach (var pin in pins)
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_49;
				L_49 = Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_inline((&V_5), Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var);
				V_6 = L_49;
				// DestroyObject(pin);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_50 = V_6;
				NonEditorGraphBuilder_DestroyObject_mA77612B3FFC1206EC2769E44E9901948AE6AE02C(__this, L_50, NULL);
			}

IL_0118_1:
			{
				// foreach (var pin in pins)
				bool L_51;
				L_51 = Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A((&V_5), Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var);
				if (L_51)
				{
					goto IL_0107_1;
				}
			}
			{
				goto IL_0131;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0131:
	{
		// graph.Nodes.Remove(node);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_52 = V_0;
		NullCheck(L_52);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_53;
		L_53 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(L_52, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_54 = ___0_node;
		NullCheck(L_53);
		bool L_55;
		L_55 = List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA(L_53, L_54, List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA_RuntimeMethod_var);
		// DestroyObject(node);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_56 = ___0_node;
		NonEditorGraphBuilder_DestroyObject_mA77612B3FFC1206EC2769E44E9901948AE6AE02C(__this, L_56, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.NonEditorGraphBuilder::DestroyObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonEditorGraphBuilder_DestroyObject_mA77612B3FFC1206EC2769E44E9901948AE6AE02C (NonEditorGraphBuilder_tD3570E2BCA8F16B8466E5D5AF3C2DECF2D21A411* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Object.DestroyImmediate(obj);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_1, NULL);
		return;
	}

IL_000e:
	{
		// Object.Destroy(obj);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
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
// System.Single DungeonArchitect.Graphs.GraphCamera::get_MaxAllowedZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GraphCamera_get_MaxAllowedZoom_mABFAD50DC9A2B56A72BAC505DB0D131183AF3D27 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, const RuntimeMethod* method) 
{
	{
		// get { return maxAllowedZoom; }
		float L_0 = __this->___maxAllowedZoom_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphCamera::set_MaxAllowedZoom(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera_set_MaxAllowedZoom_mE6D17878AA56095EEE552EF2E5784378429D3D2B (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { maxAllowedZoom = value; }
		float L_0 = ___0_value;
		__this->___maxAllowedZoom_0 = L_0;
		// set { maxAllowedZoom = value; }
		return;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphCamera::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphCamera_get_Position_mBDECDD73B8B2C97AD0D729EF7DEB8CD798257E94 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, const RuntimeMethod* method) 
{
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___position_1;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphCamera::set_Position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera_set_Position_m7EF3D8D29EBB2E175BB5AF94B325121048E51929 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// position = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___position_1 = L_0;
		// }
		return;
	}
}
// System.Single DungeonArchitect.Graphs.GraphCamera::get_ZoomLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, const RuntimeMethod* method) 
{
	{
		// return zoomLevel;
		float L_0 = __this->___zoomLevel_3;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphCamera::set_ZoomLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera_set_ZoomLevel_m359C10E47987C2175046BEF9AF494E30DDA388B3 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// zoomLevel = value;
		float L_0 = ___0_value;
		__this->___zoomLevel_3 = L_0;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphCamera::Pan(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera_Pan_mC1BCA7BD318E092F2096BBFC626642410EA91ABD (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		// Pan(new Vector2(x, y));
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)L_0), ((float)L_1), /*hidden argument*/NULL);
		GraphCamera_Pan_mAB885E307BEDC894A599A1295A8DCEBAC2B6907F(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphCamera::Pan(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera_Pan_mAB885E307BEDC894A599A1295A8DCEBAC2B6907F (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_delta, const RuntimeMethod* method) 
{
	{
		// position += delta * zoomLevel;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___position_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_delta;
		float L_2 = __this->___zoomLevel_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_3, NULL);
		__this->___position_1 = L_4;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphCamera::HandleInput(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera_HandleInput_m8E0EAB7B3FD8C3EDC497B397934920B16B369F5A (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_e, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (e.type == EventType.ScrollWheel) {
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0 = ___0_e;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)6))))
		{
			goto IL_007a;
		}
	}
	{
		// var originalGraphPosition = ScreenToWorld(e.mousePosition);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2 = ___0_e;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = GraphCamera_ScreenToWorld_m4F847D7AE0B699D356167F483AD52EAE0B79452E(__this, L_3, NULL);
		V_2 = L_4;
		// float zoomMultiplier = 0.1f;
		V_3 = (0.100000001f);
		// zoomMultiplier *= Mathf.Sign(e.delta.y);
		float L_5 = V_3;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_6 = ___0_e;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Event_get_delta_m1BBF28E2FC379EDD3907DC987E6BD7E6521D69A0(L_6, NULL);
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_8, NULL);
		V_3 = ((float)il2cpp_codegen_multiply(L_5, L_9));
		// zoomLevel = Mathf.Clamp(zoomLevel * (1 + zoomMultiplier), 1, maxAllowedZoom);
		float L_10 = __this->___zoomLevel_3;
		float L_11 = V_3;
		float L_12 = __this->___maxAllowedZoom_0;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_10, ((float)il2cpp_codegen_add((1.0f), L_11)))), (1.0f), L_12, NULL);
		__this->___zoomLevel_3 = L_13;
		// var newGraphPosition = ScreenToWorld (e.mousePosition);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_14 = ___0_e;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = GraphCamera_ScreenToWorld_m4F847D7AE0B699D356167F483AD52EAE0B79452E(__this, L_15, NULL);
		V_4 = L_16;
		// position += originalGraphPosition - newGraphPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___position_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_18, L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_17, L_20, NULL);
		__this->___position_1 = L_21;
	}

IL_007a:
	{
		// int dragButton1 = 1;
		V_0 = 1;
		// int dragButton2 = 2;
		V_1 = 2;
		// if (e.type == EventType.MouseDrag && (e.button == dragButton1 || e.button == dragButton2))
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_22 = ___0_e;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_22, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_00c0;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_24 = ___0_e;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08(L_24, NULL);
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_0099;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_27 = ___0_e;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08(L_27, NULL);
		int32_t L_29 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_00c0;
		}
	}

IL_0099:
	{
		// if (e.delta.magnitude < 150)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_30 = ___0_e;
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Event_get_delta_m1BBF28E2FC379EDD3907DC987E6BD7E6521D69A0(L_30, NULL);
		V_5 = L_31;
		float L_32;
		L_32 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		if ((!(((float)L_32) < ((float)(150.0f)))))
		{
			goto IL_00c0;
		}
	}
	{
		// Pan(-e.delta);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_33 = ___0_e;
		NullCheck(L_33);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Event_get_delta_m1BBF28E2FC379EDD3907DC987E6BD7E6521D69A0(L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_34, NULL);
		GraphCamera_Pan_mAB885E307BEDC894A599A1295A8DCEBAC2B6907F(__this, L_35, NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphCamera::WorldToScreen(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_worldCoord, const RuntimeMethod* method) 
{
	{
		// return (worldCoord - position) / zoomLevel + ScreenOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_worldCoord;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___position_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		float L_3 = __this->___zoomLevel_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_2, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___ScreenOffset_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphCamera::ScreenToWorld(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphCamera_ScreenToWorld_m4F847D7AE0B699D356167F483AD52EAE0B79452E (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenCoord, const RuntimeMethod* method) 
{
	{
		// screenCoord -= ScreenOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_screenCoord;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___ScreenOffset_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		___0_screenCoord = L_2;
		// return screenCoord * zoomLevel + position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_screenCoord;
		float L_4 = __this->___zoomLevel_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___position_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_5, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.Rect DungeonArchitect.Graphs.GraphCamera::WorldToScreen(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphCamera_WorldToScreen_m83179C234CCA93463007C488F9287C0CD3D4B56A (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_worldCoord, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var screen = worldCoord;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_worldCoord;
		V_0 = L_0;
		// screen.position = WorldToScreen(worldCoord.position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___0_worldCoord), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2(__this, L_1, NULL);
		Rect_set_position_m9CD8AA25A83A7A893429C0ED56C36641202C3F05((&V_0), L_2, NULL);
		// screen.size = worldCoord.size / zoomLevel;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&___0_worldCoord), NULL);
		float L_4 = __this->___zoomLevel_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		Rect_set_size_m346E4F7077E5A1C0F4E21966232CD726CB9E6BAA((&V_0), L_5, NULL);
		// return screen;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Rect DungeonArchitect.Graphs.GraphCamera::ScreenToWorld(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphCamera_ScreenToWorld_m112D95C2116038F265A72FE15B564101259945C9 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_screenCoord, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var world = screenCoord;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_screenCoord;
		V_0 = L_0;
		// world.position = ScreenToWorld(screenCoord.position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___0_screenCoord), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = GraphCamera_ScreenToWorld_m4F847D7AE0B699D356167F483AD52EAE0B79452E(__this, L_1, NULL);
		Rect_set_position_m9CD8AA25A83A7A893429C0ED56C36641202C3F05((&V_0), L_2, NULL);
		// world.size = screenCoord.size * ZoomLevel;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&___0_screenCoord), NULL);
		float L_4;
		L_4 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_4, NULL);
		Rect_set_size_m346E4F7077E5A1C0F4E21966232CD726CB9E6BAA((&V_0), L_5, NULL);
		// return world;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = V_0;
		return L_6;
	}
}
// System.Void DungeonArchitect.Graphs.GraphCamera::FocusOnBestFit(DungeonArchitect.Graphs.Graph,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera_FocusOnBestFit_mA93EBDEF4A96C6B807E248F168999FF186737FE6 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_graph, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_editorBounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB910922BCFAD38E7A19D9D93EB6B148C84867FE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE65FD6662DFEAD6BB370AD1A803F483923013A5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0084DCC066F8BB102AC5737AC76B68D6F89BFAC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m91C330C053EABC403CED9CF9C0F9ECAE43F9ED60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_3 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (graph == null) return;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = ___0_graph;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (graph == null) return;
		return;
	}

IL_000a:
	{
		// if (graph.Nodes.Count > 0)
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_2 = ___0_graph;
		NullCheck(L_2);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_3;
		L_3 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_inline(L_3, List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		// var graphVisibleSize = editorBounds.size * zoomLevel;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&___1_editorBounds), NULL);
		float L_6 = __this->___zoomLevel_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// Vector2 average = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_8;
		// foreach (var node in graph.Nodes)
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_9 = ___0_graph;
		NullCheck(L_9);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_10;
		L_10 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(L_9, NULL);
		NullCheck(L_10);
		Enumerator_tA45D1C5207A6CBF45D0E99B15E59E067D10C2371 L_11;
		L_11 = List_1_GetEnumerator_m91C330C053EABC403CED9CF9C0F9ECAE43F9ED60(L_10, List_1_GetEnumerator_m91C330C053EABC403CED9CF9C0F9ECAE43F9ED60_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB910922BCFAD38E7A19D9D93EB6B148C84867FE1((&V_2), Enumerator_Dispose_mB910922BCFAD38E7A19D9D93EB6B148C84867FE1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0042_1:
			{
				// foreach (var node in graph.Nodes)
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_12;
				L_12 = Enumerator_get_Current_m0084DCC066F8BB102AC5737AC76B68D6F89BFAC1_inline((&V_2), Enumerator_get_Current_m0084DCC066F8BB102AC5737AC76B68D6F89BFAC1_RuntimeMethod_var);
				V_3 = L_12;
				// if (node == null) continue;
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_13 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_14)
				{
					goto IL_0069_1;
				}
			}
			{
				// average += node.Bounds.center;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_16 = V_3;
				NullCheck(L_16);
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17;
				L_17 = GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline(L_16, NULL);
				V_4 = L_17;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
				L_18 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&V_4), NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
				L_19 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_15, L_18, NULL);
				V_1 = L_19;
			}

IL_0069_1:
			{
				// foreach (var node in graph.Nodes)
				bool L_20;
				L_20 = Enumerator_MoveNext_mE65FD6662DFEAD6BB370AD1A803F483923013A5B((&V_2), Enumerator_MoveNext_mE65FD6662DFEAD6BB370AD1A803F483923013A5B_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0042_1;
				}
			}
			{
				goto IL_0082;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		// average /= graph.Nodes.Count;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_1;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_22 = ___0_graph;
		NullCheck(L_22);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_23;
		L_23 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_inline(L_23, List_1_get_Count_m2909F3D876184B815120F4B3CD571EE0ED11693A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_21, ((float)L_24), NULL);
		V_1 = L_25;
		// position = average - graphVisibleSize / 2.0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_27, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_26, L_28, NULL);
		__this->___position_1 = L_29;
		return;
	}

IL_00ad:
	{
		// position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_30, NULL);
		__this->___position_1 = L_31;
		// zoomLevel = 1.0f;
		__this->___zoomLevel_3 = (1.0f);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphCamera::FocusOnNode(DungeonArchitect.Graphs.GraphNode,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera_FocusOnNode_m72C2055AB3C7998C1C296B6762265461920EB12F (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_editorBounds, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var graphVisibleSize = editorBounds.size * zoomLevel;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&___1_editorBounds), NULL);
		float L_1 = __this->___zoomLevel_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// var nodePosition = node.Bounds.center;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_3 = ___0_node;
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline(L_3, NULL);
		V_2 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&V_2), NULL);
		V_1 = L_5;
		// position = nodePosition - graphVisibleSize / 2.0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_7, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_8, NULL);
		__this->___position_1 = L_9;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphCamera__ctor_mB2071A9D97C06E7F1A5F4D5D2FAC1057878A0A2F (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, const RuntimeMethod* method) 
{
	{
		// float maxAllowedZoom = 6.0f;
		__this->___maxAllowedZoom_0 = (6.0f);
		// Vector2 position = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___position_1 = L_0;
		// public Vector2 ScreenOffset = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___ScreenOffset_2 = L_1;
		// float zoomLevel = 1;
		__this->___zoomLevel_3 = (1.0f);
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
// System.Int32 DungeonArchitect.Graphs.GraphLink::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphLink_get_Id_m16BEE7931414CC6E6A60AD20836534F8CDE6831E (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	{
		// return id;
		int32_t L_0 = __this->___id_4;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphLink::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLink_set_Id_m7E55E3BCEF7C849270FC908178F3B40949D37B78 (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// id = value;
		int32_t L_0 = ___0_value;
		__this->___id_4 = L_0;
		// UpdateName();
		GraphLink_UpdateName_mCBA764CE2B515F0135C99678654A762C36AA3F7D(__this, NULL);
		// }
		return;
	}
}
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphLink::get_Input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91 (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	{
		// return input;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = __this->___input_5;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphLink::set_Input(DungeonArchitect.Graphs.GraphPin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLink_set_Input_mF445F412CA28535968DBAADE854ED8D6DC8C0A64 (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_value, const RuntimeMethod* method) 
{
	{
		// input = value;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___0_value;
		__this->___input_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_5), (void*)L_0);
		// }
		return;
	}
}
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphLink::get_Output()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9 (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	{
		// return output;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = __this->___output_6;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphLink::set_Output(DungeonArchitect.Graphs.GraphPin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLink_set_Output_mE6CB24470E285E523487BC10DFAA49B7F4025B9C (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_value, const RuntimeMethod* method) 
{
	{
		// output = value;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___0_value;
		__this->___output_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___output_6), (void*)L_0);
		// }
		return;
	}
}
// DungeonArchitect.Graphs.Graph DungeonArchitect.Graphs.GraphLink::get_Graph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* GraphLink_get_Graph_m7D055380A86AFE933842BC24CEFC526D122B637F (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	{
		// return graph;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = __this->___graph_7;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphLink::set_Graph(DungeonArchitect.Graphs.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLink_set_Graph_mF29BD3879D93745D744AF1FA633D907E1E676A4E (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_value, const RuntimeMethod* method) 
{
	{
		// graph = value;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = ___0_value;
		__this->___graph_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___graph_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphLink::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLink_OnEnable_m7873FAA2629B5D902C0554BB9E3CB34740A68A5F (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	{
		// hideFlags = HideFlags.HideInHierarchy;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(__this, 1, NULL);
		// UpdateName();
		GraphLink_UpdateName_mCBA764CE2B515F0135C99678654A762C36AA3F7D(__this, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphLink::UpdateName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLink_UpdateName_mCBA764CE2B515F0135C99678654A762C36AA3F7D (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4025E38C47D31F48DA15148B12D5C2257E70429E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.name = "Link_" + id;
		int32_t* L_0 = (&__this->___id_4);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4025E38C47D31F48DA15148B12D5C2257E70429E, L_1, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Single DungeonArchitect.Graphs.GraphLink::GetTangentStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GraphLink_GetTangentStrength_m496C7920D17384DDFF9C064A63D05DC4DCE63267 (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var distance = (output.WorldPosition - input.WorldPosition).magnitude;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = __this->___output_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_0, NULL);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_2 = __this->___input_5;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_1, L_3, NULL);
		V_1 = L_4;
		float L_5;
		L_5 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		V_0 = L_5;
		// var tangentStrength = Mathf.Min(output.TangentStrength, distance / 2.0f);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_6 = __this->___output_6;
		NullCheck(L_6);
		float L_7;
		L_7 = GraphPin_get_TangentStrength_m3284A0B6002D180F4FBB4CC8A4BCA5195ED24655_inline(L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_7, ((float)(L_8/(2.0f))), NULL);
		// return tangentStrength;
		return L_9;
	}
}
// System.Void DungeonArchitect.Graphs.GraphLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLink__ctor_mE6BCC1D779C7EDE1DE600D96B66D3FE7927FFD92 (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.String DungeonArchitect.Graphs.GraphNode::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GraphNode_get_Id_m1208226FF4D1BDA590D208AC5FE33899494F581F (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return id;
		String_t* L_0 = __this->___id_4;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_Id_mFA16537652CCF0356671639AFEC1908EF9E641F9 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { id = value; }
		String_t* L_0 = ___0_value;
		__this->___id_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_4), (void*)L_0);
		// set { id = value; }
		return;
	}
}
// System.String DungeonArchitect.Graphs.GraphNode::get_Caption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GraphNode_get_Caption_m5CB8A2609C249B98CD2E31A97455BFB695659E04 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return caption;
		String_t* L_0 = __this->___caption_5;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::set_Caption(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_Caption_m5C891C1D66DCE60DA38C44C9BCEA258D9A18F59F (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// caption = value;
		String_t* L_0 = ___0_value;
		__this->___caption_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___caption_5), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Rect DungeonArchitect.Graphs.GraphNode::get_Bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return bounds;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___bounds_6;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::set_Bounds(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_Bounds_m81B772D4B4C948A1104D9079F28C1ABF26F994FE (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_value, const RuntimeMethod* method) 
{
	{
		// bounds = value;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_value;
		__this->___bounds_6 = L_0;
		// }
		return;
	}
}
// System.Boolean DungeonArchitect.Graphs.GraphNode::get_CanBeDeleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphNode_get_CanBeDeleted_m2153EF4B29B38797FCA5F274E35D0AA5A30EA0B8 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return canBeDeleted; }
		bool L_0 = __this->___canBeDeleted_7;
		return L_0;
	}
}
// System.Boolean DungeonArchitect.Graphs.GraphNode::get_CanBeSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphNode_get_CanBeSelected_mA6ADEE6BFDB2996694AD492E84904D8E5122A124 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return canBeSelected; }
		bool L_0 = __this->___canBeSelected_8;
		return L_0;
	}
}
// System.Boolean DungeonArchitect.Graphs.GraphNode::get_CanBeMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphNode_get_CanBeMoved_mF4A499B8EBC3F636F7EF0805E08B88905606DC0D (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return canBeMoved; }
		bool L_0 = __this->___canBeMoved_9;
		return L_0;
	}
}
// System.Boolean DungeonArchitect.Graphs.GraphNode::get_Selected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphNode_get_Selected_m9C828A505E1BA3E0263CC51DB59D3E64179D467F (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return selected;
		bool L_0 = __this->___selected_10;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::set_Selected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_Selected_m9D6877E8C7CCAE9A54F7B999925CF5AA1DD1D2C5 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (canBeSelected)
		bool L_0 = __this->___canBeSelected_8;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// selected = value;
		bool L_1 = ___0_value;
		__this->___selected_10 = L_1;
		return;
	}

IL_0010:
	{
		// selected = false;
		__this->___selected_10 = (bool)0;
		// }
		return;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphNode::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphNode_get_Size_m215BC04EF821C3B3221DC55F3447DDF97CDBB7E1 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return bounds.size; }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___bounds_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267(L_0, NULL);
		return L_1;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::set_Size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_Size_m26BAC6D9113B76E604141079761993C07CCC7153 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// bounds.size = value;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___bounds_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		Rect_set_size_m346E4F7077E5A1C0F4E21966232CD726CB9E6BAA(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphNode::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphNode_get_Position_m92FB18D50D76223CB53A63C884AB11C0A4329AB7 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return bounds.position; }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___bounds_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38(L_0, NULL);
		return L_1;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::set_Position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_Position_mC8931EF0CFF819D410AB78ABD1A283E03CDC42B0 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// bounds.position = value;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___bounds_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		Rect_set_position_m9CD8AA25A83A7A893429C0ED56C36641202C3F05(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Int32 DungeonArchitect.Graphs.GraphNode::get_ZIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return zIndex;
		int32_t L_0 = __this->___zIndex_11;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::set_ZIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_ZIndex_m69F84D36AB71716B635C56A624D6BECB27E46B9E (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// zIndex = value;
		int32_t L_0 = ___0_value;
		__this->___zIndex_11 = L_0;
		// }
		return;
	}
}
// DungeonArchitect.Graphs.GraphPin[] DungeonArchitect.Graphs.GraphNode::get_InputPins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m6D5BB18190AB982706A6DD4BD0452437A41A8A2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return inputPins != null ? inputPins.ToArray() : new GraphPin[0];
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_0 = __this->___inputPins_12;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_1 = (GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036*)(GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036*)SZArrayNew(GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_1;
	}

IL_000f:
	{
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_2 = __this->___inputPins_12;
		NullCheck(L_2);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_3;
		L_3 = List_1_ToArray_m6D5BB18190AB982706A6DD4BD0452437A41A8A2E(L_2, List_1_ToArray_m6D5BB18190AB982706A6DD4BD0452437A41A8A2E_RuntimeMethod_var);
		return L_3;
	}
}
// DungeonArchitect.Graphs.GraphPin[] DungeonArchitect.Graphs.GraphNode::get_OutputPins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m6D5BB18190AB982706A6DD4BD0452437A41A8A2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return outputPins != null ? outputPins.ToArray() : new GraphPin[0];
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_0 = __this->___outputPins_13;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_1 = (GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036*)(GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036*)SZArrayNew(GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_1;
	}

IL_000f:
	{
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_2 = __this->___outputPins_13;
		NullCheck(L_2);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_3;
		L_3 = List_1_ToArray_m6D5BB18190AB982706A6DD4BD0452437A41A8A2E(L_2, List_1_ToArray_m6D5BB18190AB982706A6DD4BD0452437A41A8A2E_RuntimeMethod_var);
		return L_3;
	}
}
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphNode::get_OutputPin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphNode_get_OutputPin_m750698867CC9A96A75B59739E743B46F93DF9F47 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB3C5805BECBB48E4ABC7CD9AF07C28D1643080B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m17C879F892AD5ACF8CEB531B48888891D7276848_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (outputPins == null || outputPins.Count == 0) return null;
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_0 = __this->___outputPins_13;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_1 = __this->___outputPins_13;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB3C5805BECBB48E4ABC7CD9AF07C28D1643080B5_inline(L_1, List_1_get_Count_mB3C5805BECBB48E4ABC7CD9AF07C28D1643080B5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// if (outputPins == null || outputPins.Count == 0) return null;
		return (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00*)NULL;
	}

IL_0017:
	{
		// return outputPins[0];
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_3 = __this->___outputPins_13;
		NullCheck(L_3);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_4;
		L_4 = List_1_get_Item_m17C879F892AD5ACF8CEB531B48888891D7276848(L_3, 0, List_1_get_Item_m17C879F892AD5ACF8CEB531B48888891D7276848_RuntimeMethod_var);
		return L_4;
	}
}
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphNode::get_InputPin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphNode_get_InputPin_m4195708399CD7D221AEAAC20739A12BBCA46ACC4 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB3C5805BECBB48E4ABC7CD9AF07C28D1643080B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m17C879F892AD5ACF8CEB531B48888891D7276848_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputPins == null || inputPins.Count == 0) return null;
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_0 = __this->___inputPins_12;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_1 = __this->___inputPins_12;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB3C5805BECBB48E4ABC7CD9AF07C28D1643080B5_inline(L_1, List_1_get_Count_mB3C5805BECBB48E4ABC7CD9AF07C28D1643080B5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// if (inputPins == null || inputPins.Count == 0) return null;
		return (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00*)NULL;
	}

IL_0017:
	{
		// return inputPins[0];
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_3 = __this->___inputPins_12;
		NullCheck(L_3);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_4;
		L_4 = List_1_get_Item_m17C879F892AD5ACF8CEB531B48888891D7276848(L_3, 0, List_1_get_Item_m17C879F892AD5ACF8CEB531B48888891D7276848_RuntimeMethod_var);
		return L_4;
	}
}
// DungeonArchitect.Graphs.Graph DungeonArchitect.Graphs.GraphNode::get_Graph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return graph;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = __this->___graph_14;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_OnEnable_mF1C6431B650B6CC3C83EB7EA64BE011E7E7613B8 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// hideFlags = HideFlags.HideInHierarchy;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::Initialize(System.String,DungeonArchitect.Graphs.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_Initialize_m2B041E95B6F2B08CDFBF0B742AAD81B262D04C43 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, String_t* ___0_id, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___1_graph, const RuntimeMethod* method) 
{
	{
		// this.id = id;
		String_t* L_0 = ___0_id;
		__this->___id_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_4), (void*)L_0);
		// this.graph = graph;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_1 = ___1_graph;
		__this->___graph_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___graph_14), (void*)L_1);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::CopyFrom(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_CopyFrom_mC0AD3E9D4EC0FF26488896C4E471D1EA5D763C6C (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (node != null)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// caption = node.Caption;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2 = ___0_node;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GraphNode_get_Caption_m5CB8A2609C249B98CD2E31A97455BFB695659E04_inline(L_2, NULL);
		__this->___caption_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___caption_5), (void*)L_3);
		// this.bounds = node.Bounds;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_4 = ___0_node;
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline(L_4, NULL);
		__this->___bounds_6 = L_5;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::UpdateName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_UpdateName_mF89F85CB0996BF6063F7691A16CB6ADB92EFC485 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, String_t* ___0_prefix, const RuntimeMethod* method) 
{
	{
		// this.name = prefix + id;
		String_t* L_0 = ___0_prefix;
		String_t* L_1 = __this->___id_4;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean DungeonArchitect.Graphs.GraphNode::get_Dragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphNode_get_Dragging_m078B8A3D3D6D4C8776EB5482E1206694F1E78897 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return dragging; }
		bool L_0 = __this->___dragging_15;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::set_Dragging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_Dragging_mC95390CD9A00B4F0BB31893630D72CAEF23B6FC3 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { dragging = value; }
		bool L_0 = ___0_value;
		__this->___dragging_15 = L_0;
		// set { dragging = value; }
		return;
	}
}
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphNode::CreatePin(DungeonArchitect.Graphs.GraphPinType,UnityEngine.Vector2,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphNode_CreatePin_m0488D6E8C2D94D8D0EF7453A1E3A55C9B149D4E8 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, int32_t ___0_pinType, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_boundsOffset, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_tangent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphNode_CreatePinOfType_TisGraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00_m2416C97D7C479C364C104A8DC655F1E0BAC5DB6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreatePinOfType<GraphPin>(pinType, position, boundsOffset, tangent);
		int32_t L_0 = ___0_pinType;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_position;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___2_boundsOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___3_tangent;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_4;
		L_4 = GraphNode_CreatePinOfType_TisGraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00_m2416C97D7C479C364C104A8DC655F1E0BAC5DB6F(__this, L_0, L_1, L_2, L_3, GraphNode_CreatePinOfType_TisGraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00_m2416C97D7C479C364C104A8DC655F1E0BAC5DB6F_RuntimeMethod_var);
		return L_4;
	}
}
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphNode::GetParentNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphNode_GetParentNodes_m75462775A8F35B70FE30E33FB37F755FE6B56696 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* V_0 = NULL;
	GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* V_1 = NULL;
	int32_t V_2 = 0;
	GraphLink_t167090219997E1F874E24A93015AD8333374E463* V_3 = NULL;
	{
		// var parents = new List<GraphNode>();
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_0 = (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*)il2cpp_codegen_object_new(List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1(L_0, List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		V_0 = L_0;
		// if (InputPins.Length > 0)
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_1;
		L_1 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(__this, NULL);
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_006a;
		}
	}
	{
		// foreach (var link in InputPins[0].GetConntectedLinks())
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_2;
		L_2 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(__this, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_5;
		L_5 = GraphPin_GetConntectedLinks_mB5D45F5630E9AE8BA745F54363C846C24FCC1418(L_4, NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0064;
	}

IL_0021:
	{
		// foreach (var link in InputPins[0].GetConntectedLinks())
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (link != null && link.Output != null && link.Output.Node != null)
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_10 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_12 = V_3;
		NullCheck(L_12);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_13;
		L_13 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_15 = V_3;
		NullCheck(L_15);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_16;
		L_16 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_15, NULL);
		NullCheck(L_16);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_17;
		L_17 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		// parents.Add(link.Output.Node);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_19 = V_0;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_20 = V_3;
		NullCheck(L_20);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_21;
		L_21 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_20, NULL);
		NullCheck(L_21);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_22;
		L_22 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_21, NULL);
		NullCheck(L_19);
		List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline(L_19, L_22, List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
	}

IL_0060:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0064:
	{
		// foreach (var link in InputPins[0].GetConntectedLinks())
		int32_t L_24 = V_2;
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0021;
		}
	}

IL_006a:
	{
		// return parents.ToArray();
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_26 = V_0;
		NullCheck(L_26);
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_27;
		L_27 = List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE(L_26, List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		return L_27;
	}
}
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphNode::GetChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphNode_GetChildNodes_mC0EB7EF413C144369BD033BA67B79D5300469CFC (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* V_0 = NULL;
	GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* V_1 = NULL;
	int32_t V_2 = 0;
	GraphLink_t167090219997E1F874E24A93015AD8333374E463* V_3 = NULL;
	{
		// var children = new List<GraphNode>();
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_0 = (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*)il2cpp_codegen_object_new(List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1(L_0, List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		V_0 = L_0;
		// if (OutputPins.Length > 0)
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_1;
		L_1 = GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8(__this, NULL);
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_006a;
		}
	}
	{
		// foreach (var link in OutputPins[0].GetConntectedLinks())
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_2;
		L_2 = GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8(__this, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_5;
		L_5 = GraphPin_GetConntectedLinks_mB5D45F5630E9AE8BA745F54363C846C24FCC1418(L_4, NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0064;
	}

IL_0021:
	{
		// foreach (var link in OutputPins[0].GetConntectedLinks())
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (link != null && link.Input != null && link.Input.Node != null)
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_10 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_12 = V_3;
		NullCheck(L_12);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_13;
		L_13 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_15 = V_3;
		NullCheck(L_15);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_16;
		L_16 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_15, NULL);
		NullCheck(L_16);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_17;
		L_17 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		// children.Add(link.Input.Node);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_19 = V_0;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_20 = V_3;
		NullCheck(L_20);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_21;
		L_21 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_20, NULL);
		NullCheck(L_21);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_22;
		L_22 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_21, NULL);
		NullCheck(L_19);
		List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline(L_19, L_22, List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
	}

IL_0060:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0064:
	{
		// foreach (var link in OutputPins[0].GetConntectedLinks())
		int32_t L_24 = V_2;
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0021;
		}
	}

IL_006a:
	{
		// return children.ToArray();
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_26 = V_0;
		NullCheck(L_26);
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_27;
		L_27 = List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE(L_26, List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		return L_27;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::DragNode(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_DragNode_mBF407200CF9314C5F65E69358F6FDFE2D2689B34 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_delta, const RuntimeMethod* method) 
{
	{
		// Position += delta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = GraphNode_get_Position_m92FB18D50D76223CB53A63C884AB11C0A4329AB7(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_delta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_1, NULL);
		GraphNode_set_Position_mC8931EF0CFF819D410AB78ABD1A283E03CDC42B0(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode__ctor_m88402BB3DB74830FCBB3FBC049021BA864D274F6 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// protected Rect bounds = new Rect(10, 10, 120, 120);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (10.0f), (10.0f), (120.0f), (120.0f), /*hidden argument*/NULL);
		__this->___bounds_6 = L_0;
		// protected bool canBeDeleted = true;
		__this->___canBeDeleted_7 = (bool)1;
		// protected bool canBeSelected = true;
		__this->___canBeSelected_8 = (bool)1;
		// protected bool canBeMoved = true;
		__this->___canBeMoved_9 = (bool)1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// DungeonArchitect.Graphs.GraphPinMouseState DungeonArchitect.Graphs.GraphPin::get_ClickState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphPin_get_ClickState_m8EC450B5DE760F06E1583DC6B906C339EC4A4FB6 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return clickState;
		int32_t L_0 = __this->___clickState_4;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::set_ClickState(DungeonArchitect.Graphs.GraphPinMouseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_set_ClickState_m394EE7F3CAC7411BD28C08271BA7DDDDA22AD22E (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// clickState = value;
		int32_t L_0 = ___0_value;
		__this->___clickState_4 = L_0;
		// }
		return;
	}
}
// DungeonArchitect.Graphs.GraphPinType DungeonArchitect.Graphs.GraphPin::get_PinType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphPin_get_PinType_m5402BA889181025BF3960BEFBD4120707511D6D8 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return pinType;
		int32_t L_0 = __this->___pinType_5;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::set_PinType(DungeonArchitect.Graphs.GraphPinType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_set_PinType_mCA15C26994EC3A8C029E518A964B9F0B67FC653B (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// pinType = value;
		int32_t L_0 = ___0_value;
		__this->___pinType_5 = L_0;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::add_PinLinksDestroyed(DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_add_PinLinksDestroyed_mC15236BE7F8276D8B60AD0305B24ECB72A23B3B7 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* V_0 = NULL;
	OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* V_1 = NULL;
	OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* V_2 = NULL;
	{
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_0 = __this->___PinLinksDestroyed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_1 = V_0;
		V_1 = L_1;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_2 = V_1;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75*)CastclassSealed((RuntimeObject*)L_4, OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75_il2cpp_TypeInfo_var));
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75** L_5 = (&__this->___PinLinksDestroyed_6);
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_6 = V_2;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_7 = V_1;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_9 = V_0;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75*)L_9) == ((RuntimeObject*)(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::remove_PinLinksDestroyed(DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_remove_PinLinksDestroyed_m70CD715C5A9870DCCD94D10BD2C88714CFAF0AB0 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* V_0 = NULL;
	OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* V_1 = NULL;
	OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* V_2 = NULL;
	{
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_0 = __this->___PinLinksDestroyed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_1 = V_0;
		V_1 = L_1;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_2 = V_1;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75*)CastclassSealed((RuntimeObject*)L_4, OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75_il2cpp_TypeInfo_var));
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75** L_5 = (&__this->___PinLinksDestroyed_6);
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_6 = V_2;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_7 = V_1;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_9 = V_0;
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75*)L_9) == ((RuntimeObject*)(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// DungeonArchitect.Graphs.GraphNode DungeonArchitect.Graphs.GraphPin::get_Node()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return node;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = __this->___node_7;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::set_Node(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_set_Node_m5CEA3280B0098AB356B306375C0DEAB4756646EB (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_value, const RuntimeMethod* method) 
{
	{
		// node = value;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_value;
		__this->___node_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node_7), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphPin::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphPin_get_Position_m4C40C17C3AFF452D3812A3000706460A458DA425 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___position_8;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::set_Position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_set_Position_m25D59FB410232DEFCA986B467E59B6EF12045AA2 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// position = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___position_8 = L_0;
		// }
		return;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphPin::get_WorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (node != null)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = __this->___node_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// return position + node.Position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___position_8;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_3 = __this->___node_7;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = GraphNode_get_Position_m92FB18D50D76223CB53A63C884AB11C0A4329AB7(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_2, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___position_8;
		return L_6;
	}
}
// UnityEngine.Rect DungeonArchitect.Graphs.GraphPin::get_BoundsOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphPin_get_BoundsOffset_m997B443D341CF9342CFC91BC48BA8DB8F1C917E4 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return boundsOffset;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___boundsOffset_9;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::set_BoundsOffset(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_set_BoundsOffset_mEEA920386C0DF672687D2F0BFD91CAC522A4F093 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_value, const RuntimeMethod* method) 
{
	{
		// boundsOffset = value;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_value;
		__this->___boundsOffset_9 = L_0;
		// }
		return;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphPin::get_Tangent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphPin_get_Tangent_mCB2E9C1CCDC0ED5BD288E51024C691404990D6AB (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return tangent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___tangent_10;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::set_Tangent(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_set_Tangent_m85640894B3FCE3276D7034CA2F0D01AF56AB6E3A (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// tangent = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___tangent_10 = L_0;
		// }
		return;
	}
}
// System.Single DungeonArchitect.Graphs.GraphPin::get_TangentStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GraphPin_get_TangentStrength_m3284A0B6002D180F4FBB4CC8A4BCA5195ED24655 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return tangentStrength;
		float L_0 = __this->___tangentStrength_11;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::set_TangentStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_set_TangentStrength_m905534EBFAC973AD9EA0FFFAFA4CC3AED38E1ABB (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// tangentStrength = value;
		float L_0 = ___0_value;
		__this->___tangentStrength_11 = L_0;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_OnEnable_m2B2DD43EC117B8D9F6D679CC0C765A3062ACDD6E (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// hideFlags = HideFlags.HideInHierarchy;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(__this, 1, NULL);
		// }
		return;
	}
}
// DungeonArchitect.Graphs.GraphLink[] DungeonArchitect.Graphs.GraphPin::GetConntectedLinks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* GraphPin_GetConntectedLinks_mB5D45F5630E9AE8BA745F54363C846C24FCC1418 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m966A7FF4817ECEB2A809241DFCE2D22BC5E0C974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDAE43D9A4B5E76139214C85F3F66DF3B488A52EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5B2B2081BF8097131F5848A462357FBB09D50112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* V_0 = NULL;
	Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GraphLink_t167090219997E1F874E24A93015AD8333374E463* V_2 = NULL;
	{
		// var result = new List<GraphLink>();
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_0 = (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112*)il2cpp_codegen_object_new(List_1_t5B2B2081BF8097131F5848A462357FBB09D50112_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D(L_0, List_1__ctor_mF586549EF925CCF4CA133FBD0636F6A1C012DF3D_RuntimeMethod_var);
		V_0 = L_0;
		// if (node != null && node.Graph != null)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_1 = __this->___node_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_008c;
		}
	}
	{
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_3 = __this->___node_7;
		NullCheck(L_3);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_4;
		L_4 = GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		// foreach (var link in node.Graph.Links)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_6 = __this->___node_7;
		NullCheck(L_6);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_7;
		L_7 = GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline(L_6, NULL);
		NullCheck(L_7);
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_8;
		L_8 = Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline(L_7, NULL);
		NullCheck(L_8);
		Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 L_9;
		L_9 = List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018(L_8, List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE((&V_1), Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_003f_1:
			{
				// foreach (var link in node.Graph.Links)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_10;
				L_10 = Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_inline((&V_1), Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
				V_2 = L_10;
				// if (link == null)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_11 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_12)
				{
					goto IL_0073_1;
				}
			}
			{
				// if (link.Input == this || link.Output == this)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_13 = V_2;
				NullCheck(L_13);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_14;
				L_14 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_13, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, __this, NULL);
				if (L_15)
				{
					goto IL_006c_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_16 = V_2;
				NullCheck(L_16);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_17;
				L_17 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, __this, NULL);
				if (!L_18)
				{
					goto IL_0073_1;
				}
			}

IL_006c_1:
			{
				// result.Add(link);
				List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_19 = V_0;
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_20 = V_2;
				NullCheck(L_19);
				List_1_Add_m966A7FF4817ECEB2A809241DFCE2D22BC5E0C974_inline(L_19, L_20, List_1_Add_m966A7FF4817ECEB2A809241DFCE2D22BC5E0C974_RuntimeMethod_var);
			}

IL_0073_1:
			{
				// foreach (var link in node.Graph.Links)
				bool L_21;
				L_21 = Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C((&V_1), Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_003f_1;
				}
			}
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		// return result.ToArray();
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_22 = V_0;
		NullCheck(L_22);
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_23;
		L_23 = List_1_ToArray_mDAE43D9A4B5E76139214C85F3F66DF3B488A52EB(L_22, List_1_ToArray_mDAE43D9A4B5E76139214C85F3F66DF3B488A52EB_RuntimeMethod_var);
		return L_23;
	}
}
// System.Boolean DungeonArchitect.Graphs.GraphPin::ContainsPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphPin_ContainsPoint_mFB0C8E239529C77328DB4E5A2C4DCAE3151EA4E0 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_worldPoint, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return GetWorldBounds().Contains(worldPoint);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = GraphPin_GetWorldBounds_m395AA00220E15803E96AD1CE81A0465BB2605AAA(__this, NULL);
		V_0 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_worldPoint;
		bool L_2;
		L_2 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_0), L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Rect DungeonArchitect.Graphs.GraphPin::GetWorldBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphPin_GetWorldBounds_m395AA00220E15803E96AD1CE81A0465BB2605AAA (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var position = this.WorldPosition + boundsOffset.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(__this, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&__this->___boundsOffset_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_2, NULL);
		V_0 = L_3;
		// var bounds = new Rect(position.x, position.y, boundsOffset.size.x, boundsOffset.size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = (&__this->___boundsOffset_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267(L_8, NULL);
		float L_10 = L_9.___x_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = (&__this->___boundsOffset_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267(L_11, NULL);
		float L_13 = L_12.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_14), L_5, L_7, L_10, L_13, /*hidden argument*/NULL);
		// return bounds;
		return L_14;
	}
}
// UnityEngine.Rect DungeonArchitect.Graphs.GraphPin::GetBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphPin_GetBounds_m6DD3E1052A99B53E7E91856A9FCE0D6D0ADB94E5 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var position = this.Position + boundsOffset.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = GraphPin_get_Position_m4C40C17C3AFF452D3812A3000706460A458DA425_inline(__this, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&__this->___boundsOffset_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_2, NULL);
		V_0 = L_3;
		// var bounds = new Rect(position.x, position.y, boundsOffset.size.x, boundsOffset.size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = (&__this->___boundsOffset_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267(L_8, NULL);
		float L_10 = L_9.___x_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = (&__this->___boundsOffset_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267(L_11, NULL);
		float L_13 = L_12.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_14), L_5, L_7, L_10, L_13, /*hidden argument*/NULL);
		// return bounds;
		return L_14;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::NotifyPinLinksDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_NotifyPinLinksDestroyed_mFFD740D9B7D393BD231965FE9B12FCCA2FED93CE (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// if (PinLinksDestroyed != null)
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_0 = __this->___PinLinksDestroyed_6;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// PinLinksDestroyed(this);
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* L_1 = __this->___PinLinksDestroyed_6;
		NullCheck(L_1);
		OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_inline(L_1, __this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Boolean DungeonArchitect.Graphs.GraphPin::get_RequestLinkDeletionInitiated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphPin_get_RequestLinkDeletionInitiated_m2A62A9311E8491DE48A4B4DEEAAE8A411423CCF9 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// get { return requestLinkDeletionInitiated; }
		bool L_0 = __this->___requestLinkDeletionInitiated_12;
		return L_0;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::set_RequestLinkDeletionInitiated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_set_RequestLinkDeletionInitiated_mD46D0FE6F33E5E288CF5D0AC4A1B7E0D175ACE44 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { requestLinkDeletionInitiated = value; }
		bool L_0 = ___0_value;
		__this->___requestLinkDeletionInitiated_12 = L_0;
		// set { requestLinkDeletionInitiated = value; }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.GraphPin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin__ctor_m5DCC74D7DB9BF2FB3CBEB62FADA17BC63590E7E4 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// GraphPinMouseState clickState = GraphPinMouseState.None;
		__this->___clickState_4 = 2;
		// Rect boundsOffset = new Rect(0, 0, 20, 20);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (20.0f), (20.0f), /*hidden argument*/NULL);
		__this->___boundsOffset_9 = L_0;
		// float tangentStrength = 50;
		__this->___tangentStrength_11 = (50.0f);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_Multicast(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* currentDelegate = reinterpret_cast<OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pin, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenInst(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method)
{
	NullCheck(___0_pin);
	typedef void (*FunctionPointerType) (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pin, method);
}
void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenStatic(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pin, method);
}
void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenStaticInvoker(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_pin);
}
void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_ClosedStaticInvoker(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pin);
}
void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenVirtual(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method)
{
	NullCheck(___0_pin);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_pin);
}
void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenInterface(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method)
{
	NullCheck(___0_pin);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_pin);
}
void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenGenericVirtual(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method)
{
	NullCheck(___0_pin);
	GenericVirtualActionInvoker0::Invoke(method, ___0_pin);
}
void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenGenericInterface(OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method)
{
	NullCheck(___0_pin);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_pin);
}
// System.Void DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPinLinksDestroyed__ctor_m173A050AD6E0CD0E1CCD8EF53A16CF98FBDFDCD1 (OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_Multicast;
}
// System.Void DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed::Invoke(DungeonArchitect.Graphs.GraphPin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4 (OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pin, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed::BeginInvoke(DungeonArchitect.Graphs.GraphPin,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPinLinksDestroyed_BeginInvoke_mC7A41E41520ACD59361AF9AC9CE86F09B00A32B7 (OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_pin;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPinLinksDestroyed_EndInvoke_m39A271D9589A756F8AEBB51EE61204EE7964F75E (OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DungeonArchitect.Graphs.GraphSchema::CanCreateLink(DungeonArchitect.Graphs.GraphPin,DungeonArchitect.Graphs.GraphPin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphSchema_CanCreateLink_mABB0D2CBF016DCC2375A974953304FFC62923C01 (GraphSchema_t8A0FFDA40767F4EF57DABE465795497F2C2AECE6* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_output, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___1_input, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return CanCreateLink(output, input, out errorMessage);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___0_output;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_1 = ___1_input;
		bool L_2;
		L_2 = VirtualFuncInvoker3< bool, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00*, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00*, String_t** >::Invoke(5 /* System.Boolean DungeonArchitect.Graphs.GraphSchema::CanCreateLink(DungeonArchitect.Graphs.GraphPin,DungeonArchitect.Graphs.GraphPin,System.String&) */, __this, L_0, L_1, (&V_0));
		return L_2;
	}
}
// System.Boolean DungeonArchitect.Graphs.GraphSchema::CanCreateLink(DungeonArchitect.Graphs.GraphPin,DungeonArchitect.Graphs.GraphPin,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphSchema_CanCreateLink_m63272D9F2301D078A49B46C5998B81181084435C (GraphSchema_t8A0FFDA40767F4EF57DABE465795497F2C2AECE6* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_output, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___1_input, String_t** ___2_errorMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9489037AC0DE5C92702DBB68E26BE51573415855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9B8C3ED504FC6C7F58ECB8917C16F010CF2C319);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1FF17ED250395F660A2E397510D538DE1168AAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// errorMessage = "";
		String_t** L_0 = ___2_errorMessage;
		*((RuntimeObject**)L_0) = (RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// if (output == null || input == null)
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_1 = ___0_output;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_3 = ___1_input;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}

IL_0019:
	{
		// errorMessage = "Invalid connection";
		String_t** L_5 = ___2_errorMessage;
		*((RuntimeObject**)L_5) = (RuntimeObject*)_stringLiteralC1FF17ED250395F660A2E397510D538DE1168AAE;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)_stringLiteralC1FF17ED250395F660A2E397510D538DE1168AAE);
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		// if (output.PinType != GraphPinType.Output || input.PinType != GraphPinType.Input)
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_6 = ___0_output;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = GraphPin_get_PinType_m5402BA889181025BF3960BEFBD4120707511D6D8_inline(L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_8 = ___1_input;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GraphPin_get_PinType_m5402BA889181025BF3960BEFBD4120707511D6D8_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}

IL_0033:
	{
		// errorMessage = "Not Allowed";
		String_t** L_10 = ___2_errorMessage;
		*((RuntimeObject**)L_10) = (RuntimeObject*)_stringLiteral9489037AC0DE5C92702DBB68E26BE51573415855;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_10, (void*)(RuntimeObject*)_stringLiteral9489037AC0DE5C92702DBB68E26BE51573415855);
		// return false;
		return (bool)0;
	}

IL_003c:
	{
		// foreach (var link in output.GetConntectedLinks())
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_11 = ___0_output;
		NullCheck(L_11);
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_12;
		L_12 = GraphPin_GetConntectedLinks_mB5D45F5630E9AE8BA745F54363C846C24FCC1418(L_11, NULL);
		V_0 = L_12;
		V_1 = 0;
		goto IL_0064;
	}

IL_0047:
	{
		// foreach (var link in output.GetConntectedLinks())
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		// if (link.Input == input)
		NullCheck(L_16);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_17;
		L_17 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_16, NULL);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_18 = ___1_input;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		// errorMessage = "Not Allowed: Already connected";
		String_t** L_20 = ___2_errorMessage;
		*((RuntimeObject**)L_20) = (RuntimeObject*)_stringLiteralB9B8C3ED504FC6C7F58ECB8917C16F010CF2C319;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)(RuntimeObject*)_stringLiteralB9B8C3ED504FC6C7F58ECB8917C16F010CF2C319);
		// return false;
		return (bool)0;
	}

IL_0060:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0064:
	{
		// foreach (var link in output.GetConntectedLinks())
		int32_t L_22 = V_1;
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void DungeonArchitect.Graphs.GraphSchema::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphSchema__ctor_m4396B0651CE3D97FA8E922BD48AED17E51CBBBC4 (GraphSchema_t8A0FFDA40767F4EF57DABE465795497F2C2AECE6* __this, const RuntimeMethod* method) 
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
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphUtils::GetDirectionalNodes(DungeonArchitect.Graphs.GraphPin,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphUtils_GetDirectionalNodes_mA7DB0702853A8AD9E61A8201FB595B240728E3D6 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, bool ___1_isIncoming, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* V_0 = NULL;
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_1 = NULL;
	Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GraphLink_t167090219997E1F874E24A93015AD8333374E463* V_3 = NULL;
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_4 = NULL;
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_5 = NULL;
	{
		// var result = new List<GraphNode>();
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_0 = (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*)il2cpp_codegen_object_new(List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1(L_0, List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		V_0 = L_0;
		// var hostNode = pin.Node;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_1 = ___0_pin;
		NullCheck(L_1);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2;
		L_2 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_1, NULL);
		V_1 = L_2;
		// if (hostNode && hostNode.Graph)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_00aa;
		}
	}
	{
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_5 = V_1;
		NullCheck(L_5);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_6;
		L_6 = GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_00aa;
		}
	}
	{
		// var graph = hostNode.Graph;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_8 = V_1;
		NullCheck(L_8);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_9;
		L_9 = GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline(L_8, NULL);
		// foreach (var link in graph.Links)
		NullCheck(L_9);
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_10;
		L_10 = Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline(L_9, NULL);
		NullCheck(L_10);
		Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 L_11;
		L_11 = List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018(L_10, List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE((&V_2), Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0091_1;
			}

IL_003b_1:
			{
				// foreach (var link in graph.Links)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_12;
				L_12 = Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_inline((&V_2), Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
				V_3 = L_12;
				// if (isIncoming && link.Input == pin)
				bool L_13 = ___1_isIncoming;
				if (!L_13)
				{
					goto IL_006b_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_14 = V_3;
				NullCheck(L_14);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_15;
				L_15 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_14, NULL);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_16 = ___0_pin;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, L_16, NULL);
				if (!L_17)
				{
					goto IL_006b_1;
				}
			}
			{
				// var otherNode = link.Output.Node;
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_18 = V_3;
				NullCheck(L_18);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_19;
				L_19 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_18, NULL);
				NullCheck(L_19);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_20;
				L_20 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_19, NULL);
				V_4 = L_20;
				// result.Add(otherNode);
				List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_21 = V_0;
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_22 = V_4;
				NullCheck(L_21);
				List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline(L_21, L_22, List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
				goto IL_0091_1;
			}

IL_006b_1:
			{
				// else if (!isIncoming && link.Output == pin)
				bool L_23 = ___1_isIncoming;
				if (L_23)
				{
					goto IL_0091_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_24 = V_3;
				NullCheck(L_24);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_25;
				L_25 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_24, NULL);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_26 = ___0_pin;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_27;
				L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, L_26, NULL);
				if (!L_27)
				{
					goto IL_0091_1;
				}
			}
			{
				// var otherNode = link.Input.Node;
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_28 = V_3;
				NullCheck(L_28);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_29;
				L_29 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_28, NULL);
				NullCheck(L_29);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_30;
				L_30 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_29, NULL);
				V_5 = L_30;
				// result.Add(otherNode);
				List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_31 = V_0;
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_32 = V_5;
				NullCheck(L_31);
				List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline(L_31, L_32, List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
			}

IL_0091_1:
			{
				// foreach (var link in graph.Links)
				bool L_33;
				L_33 = Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C((&V_2), Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// return result.ToArray();
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_34 = V_0;
		NullCheck(L_34);
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_35;
		L_35 = List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE(L_34, List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		return L_35;
	}
}
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphUtils::GetDirectionalNodes(DungeonArchitect.Graphs.GraphNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphUtils_GetDirectionalNodes_m18932D4513682B303F5E45F95EF4DE8975649F0A (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_hostNode, bool ___1_isIncoming, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* V_0 = NULL;
	Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GraphLink_t167090219997E1F874E24A93015AD8333374E463* V_2 = NULL;
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_3 = NULL;
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_4 = NULL;
	{
		// var result = new List<GraphNode>();
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_0 = (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*)il2cpp_codegen_object_new(List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1(L_0, List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		V_0 = L_0;
		// if (hostNode && hostNode.Graph)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_1 = ___0_hostNode;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_00ab;
		}
	}
	{
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_3 = ___0_hostNode;
		NullCheck(L_3);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_4;
		L_4 = GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_00ab;
		}
	}
	{
		// var graph = hostNode.Graph;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_6 = ___0_hostNode;
		NullCheck(L_6);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_7;
		L_7 = GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline(L_6, NULL);
		// foreach (var link in graph.Links)
		NullCheck(L_7);
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_8;
		L_8 = Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline(L_7, NULL);
		NullCheck(L_8);
		Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 L_9;
		L_9 = List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018(L_8, List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE((&V_1), Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0092_1;
			}

IL_0034_1:
			{
				// foreach (var link in graph.Links)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_10;
				L_10 = Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_inline((&V_1), Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
				V_2 = L_10;
				// if (isIncoming && link.Input.Node == hostNode)
				bool L_11 = ___1_isIncoming;
				if (!L_11)
				{
					goto IL_0067_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_12 = V_2;
				NullCheck(L_12);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_13;
				L_13 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_12, NULL);
				NullCheck(L_13);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_14;
				L_14 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_13, NULL);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_15 = ___0_hostNode;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_16;
				L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, L_15, NULL);
				if (!L_16)
				{
					goto IL_0067_1;
				}
			}
			{
				// var otherNode = link.Output.Node;
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_17 = V_2;
				NullCheck(L_17);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_18;
				L_18 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_17, NULL);
				NullCheck(L_18);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_19;
				L_19 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_18, NULL);
				V_3 = L_19;
				// result.Add(otherNode);
				List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_20 = V_0;
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_21 = V_3;
				NullCheck(L_20);
				List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline(L_20, L_21, List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
				goto IL_0092_1;
			}

IL_0067_1:
			{
				// else if (!isIncoming && link.Output.Node == hostNode)
				bool L_22 = ___1_isIncoming;
				if (L_22)
				{
					goto IL_0092_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_23 = V_2;
				NullCheck(L_23);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_24;
				L_24 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_23, NULL);
				NullCheck(L_24);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_25;
				L_25 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_24, NULL);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_26 = ___0_hostNode;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_27;
				L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, L_26, NULL);
				if (!L_27)
				{
					goto IL_0092_1;
				}
			}
			{
				// var otherNode = link.Input.Node;
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_28 = V_2;
				NullCheck(L_28);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_29;
				L_29 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_28, NULL);
				NullCheck(L_29);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_30;
				L_30 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_29, NULL);
				V_4 = L_30;
				// result.Add(otherNode);
				List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_31 = V_0;
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_32 = V_4;
				NullCheck(L_31);
				List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline(L_31, L_32, List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
			}

IL_0092_1:
			{
				// foreach (var link in graph.Links)
				bool L_33;
				L_33 = Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C((&V_1), Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		// return result.ToArray();
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_34 = V_0;
		NullCheck(L_34);
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_35;
		L_35 = List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE(L_34, List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		return L_35;
	}
}
// System.Boolean DungeonArchitect.Graphs.GraphUtils::Intersects(UnityEngine.Rect,DungeonArchitect.Graphs.GraphLink)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphUtils_Intersects_mF03CB2E43C0E4DDBE6B540210982FDEA595136F7 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_outer, GraphLink_t167090219997E1F874E24A93015AD8333374E463* ___1_link, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t G_B17_0 = 0;
	{
		// if (link == null || link.Input == null || link.Output == null) return false;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_0 = ___1_link;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_2 = ___1_link;
		NullCheck(L_2);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_3;
		L_3 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_5 = ___1_link;
		NullCheck(L_5);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_6;
		L_6 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0027;
		}
	}

IL_0025:
	{
		// if (link == null || link.Input == null || link.Output == null) return false;
		return (bool)0;
	}

IL_0027:
	{
		// var p0 = link.Input.WorldPosition;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_8 = ___1_link;
		NullCheck(L_8);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_9;
		L_9 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_8, NULL);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_9, NULL);
		V_0 = L_10;
		// var p1 = link.Output.WorldPosition;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_11 = ___1_link;
		NullCheck(L_11);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_12;
		L_12 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_11, NULL);
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_12, NULL);
		V_1 = L_13;
		// if (outer.Contains(p0) || outer.Contains(p1)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		bool L_15;
		L_15 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&___0_outer), L_14, NULL);
		if (L_15)
		{
			goto IL_0053;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		bool L_17;
		L_17 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&___0_outer), L_16, NULL);
		if (!L_17)
		{
			goto IL_0055;
		}
	}

IL_0053:
	{
		// return true;
		return (bool)1;
	}

IL_0055:
	{
		// var x0 = outer.position.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___0_outer), NULL);
		float L_19 = L_18.___x_0;
		V_2 = L_19;
		// var x1 = outer.position.x + outer.size.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___0_outer), NULL);
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&___0_outer), NULL);
		float L_23 = L_22.___x_0;
		V_3 = ((float)il2cpp_codegen_add(L_21, L_23));
		// var y0 = outer.position.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___0_outer), NULL);
		float L_25 = L_24.___y_1;
		V_4 = L_25;
		// var y1 = outer.position.y + outer.size.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___0_outer), NULL);
		float L_27 = L_26.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&___0_outer), NULL);
		float L_29 = L_28.___y_1;
		V_5 = ((float)il2cpp_codegen_add(L_27, L_29));
		// var outside =
		//     (p0.x < x0 && p1.x < x0) ||
		//     (p0.x > x1 && p1.x > x1) ||
		//     (p0.y < y0 && p1.y < y0) ||
		//     (p0.y > y1 && p1.y > y1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_0;
		float L_31 = L_30.___x_0;
		float L_32 = V_2;
		if ((!(((float)L_31) < ((float)L_32))))
		{
			goto IL_00b7;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_1;
		float L_34 = L_33.___x_0;
		float L_35 = V_2;
		if ((((float)L_34) < ((float)L_35)))
		{
			goto IL_00f6;
		}
	}

IL_00b7:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_0;
		float L_37 = L_36.___x_0;
		float L_38 = V_3;
		if ((!(((float)L_37) > ((float)L_38))))
		{
			goto IL_00c9;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_1;
		float L_40 = L_39.___x_0;
		float L_41 = V_3;
		if ((((float)L_40) > ((float)L_41)))
		{
			goto IL_00f6;
		}
	}

IL_00c9:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_0;
		float L_43 = L_42.___y_1;
		float L_44 = V_4;
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_00dd;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_1;
		float L_46 = L_45.___y_1;
		float L_47 = V_4;
		if ((((float)L_46) < ((float)L_47)))
		{
			goto IL_00f6;
		}
	}

IL_00dd:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_0;
		float L_49 = L_48.___y_1;
		float L_50 = V_5;
		if ((!(((float)L_49) > ((float)L_50))))
		{
			goto IL_00f3;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_1;
		float L_52 = L_51.___y_1;
		float L_53 = V_5;
		G_B17_0 = ((((float)L_52) > ((float)L_53))? 1 : 0);
		goto IL_00f7;
	}

IL_00f3:
	{
		G_B17_0 = 0;
		goto IL_00f7;
	}

IL_00f6:
	{
		G_B17_0 = 1;
	}

IL_00f7:
	{
		// return !outside;
		return (bool)((((int32_t)G_B17_0) == ((int32_t)0))? 1 : 0);
	}
}
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphUtils::GetIncomingNodes(DungeonArchitect.Graphs.GraphPin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphUtils_GetIncomingNodes_m7BC1485E1BC87097AF80E3C95025C6789B1CE9E6 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method) 
{
	{
		// return GetDirectionalNodes(pin, true);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___0_pin;
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_1;
		L_1 = GraphUtils_GetDirectionalNodes_mA7DB0702853A8AD9E61A8201FB595B240728E3D6(L_0, (bool)1, NULL);
		return L_1;
	}
}
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphUtils::GetOutgoingNodes(DungeonArchitect.Graphs.GraphPin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphUtils_GetOutgoingNodes_m21AA8A6A81C250E694E9E49324B5E279F7D13557 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method) 
{
	{
		// return GetDirectionalNodes(pin, false);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___0_pin;
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_1;
		L_1 = GraphUtils_GetDirectionalNodes_mA7DB0702853A8AD9E61A8201FB595B240728E3D6(L_0, (bool)0, NULL);
		return L_1;
	}
}
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphUtils::GetIncomingNodes(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphUtils_GetIncomingNodes_m7FC681BB48E7C9CF449CF448F7292A8F17F1C9F6 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) 
{
	{
		// return GetDirectionalNodes(node, true);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_1;
		L_1 = GraphUtils_GetDirectionalNodes_m18932D4513682B303F5E45F95EF4DE8975649F0A(L_0, (bool)1, NULL);
		return L_1;
	}
}
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.GraphUtils::GetOutgoingNodes(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphUtils_GetOutgoingNodes_mEDAFD66F8297A4CA21F080E9CFEF1973D2AD723C (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) 
{
	{
		// return GetDirectionalNodes(node, false);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_1;
		L_1 = GraphUtils_GetDirectionalNodes_m18932D4513682B303F5E45F95EF4DE8975649F0A(L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Void DungeonArchitect.Graphs.GraphUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphUtils__ctor_mEC6A32400F6B13F9812383727A107C4895CAC4A5 (GraphUtils_t9AE81DD12DBF6F3C1BEDC07FDD8294A0C2F2F688* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.Graphs.Layouts.DefaultGraphLayoutNodeActions::.ctor(DungeonArchitect.Graphs.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultGraphLayoutNodeActions__ctor_mBD850D2B9CD4F8AC575036EE89B5A54B2F7FB16D (DefaultGraphLayoutNodeActions_t00E0CA5D9ACCDAACC5E0375AF5C8331F9BF85FDC* __this, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_graph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAB52502CFAFC9A9697EA84535089C111F7D9BDD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m91CB6F46833273B335805FF1DE9AAB569CD4FBB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4FC0601CDAC86F9326A9C0D738A145E92B0C8219_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD6169CAE5ABCFEC4FDAEC64F083AFD42652C4465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GraphLink_t167090219997E1F874E24A93015AD8333374E463* V_1 = NULL;
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_2 = NULL;
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_3 = NULL;
	{
		// Dictionary<GraphNode, List<GraphNode>> outgoingNodes = new Dictionary<GraphNode, List<GraphNode>>();
		Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* L_0 = (Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844*)il2cpp_codegen_object_new(Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4FC0601CDAC86F9326A9C0D738A145E92B0C8219(L_0, Dictionary_2__ctor_m4FC0601CDAC86F9326A9C0D738A145E92B0C8219_RuntimeMethod_var);
		__this->___outgoingNodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outgoingNodes_0), (void*)L_0);
		// public DefaultGraphLayoutNodeActions(Graph graph) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (graph != null)
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_1 = ___0_graph;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00d2;
		}
	}
	{
		// foreach (var link in graph.Links)
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_3 = ___0_graph;
		NullCheck(L_3);
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_4;
		L_4 = Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline(L_3, NULL);
		NullCheck(L_4);
		Enumerator_tD8685AA0FCA2EC45ECBC927BCEB5E77A38546126 L_5;
		L_5 = List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018(L_4, List_1_GetEnumerator_mFD0CEEF8FB610328C410DA48BA57EF80D351B018_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE((&V_0), Enumerator_Dispose_m4416EA7A59000B5016E61CF7957E020A1ABAF9FE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b6_1;
			}

IL_002e_1:
			{
				// foreach (var link in graph.Links)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_6;
				L_6 = Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_inline((&V_0), Enumerator_get_Current_m747B95F484214BB8C6353850A19AD7ACF2B032D1_RuntimeMethod_var);
				V_1 = L_6;
				// if (link != null && link.Output != null && link.Input != null)
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_7 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_8;
				L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_8)
				{
					goto IL_00b6_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_9 = V_1;
				NullCheck(L_9);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_10;
				L_10 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_9, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_11)
				{
					goto IL_00b6_1;
				}
			}
			{
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_12 = V_1;
				NullCheck(L_12);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_13;
				L_13 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_14)
				{
					goto IL_00b6_1;
				}
			}
			{
				// var startNode = link.Output.Node;
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_15 = V_1;
				NullCheck(L_15);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_16;
				L_16 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_15, NULL);
				NullCheck(L_16);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_17;
				L_17 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_16, NULL);
				V_2 = L_17;
				// var endNode = link.Input.Node;
				GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_18 = V_1;
				NullCheck(L_18);
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_19;
				L_19 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_18, NULL);
				NullCheck(L_19);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_20;
				L_20 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_19, NULL);
				V_3 = L_20;
				// if (startNode != null && endNode != null)
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_21 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_22;
				L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_22)
				{
					goto IL_00b6_1;
				}
			}
			{
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_23 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_24;
				L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_24)
				{
					goto IL_00b6_1;
				}
			}
			{
				// if (!outgoingNodes.ContainsKey(startNode))
				Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* L_25 = __this->___outgoingNodes_0;
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_26 = V_2;
				NullCheck(L_25);
				bool L_27;
				L_27 = Dictionary_2_ContainsKey_m91CB6F46833273B335805FF1DE9AAB569CD4FBB0(L_25, L_26, Dictionary_2_ContainsKey_m91CB6F46833273B335805FF1DE9AAB569CD4FBB0_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_00a4_1;
				}
			}
			{
				// outgoingNodes.Add(startNode, new List<GraphNode>());
				Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* L_28 = __this->___outgoingNodes_0;
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_29 = V_2;
				List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_30 = (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*)il2cpp_codegen_object_new(List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A_il2cpp_TypeInfo_var);
				NullCheck(L_30);
				List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1(L_30, List_1__ctor_mB0EBFD549AF0FD7C7B46069E2C2EF3ADF382D0C1_RuntimeMethod_var);
				NullCheck(L_28);
				Dictionary_2_Add_mAB52502CFAFC9A9697EA84535089C111F7D9BDD9(L_28, L_29, L_30, Dictionary_2_Add_mAB52502CFAFC9A9697EA84535089C111F7D9BDD9_RuntimeMethod_var);
			}

IL_00a4_1:
			{
				// outgoingNodes[startNode].Add(endNode);
				Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* L_31 = __this->___outgoingNodes_0;
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_32 = V_2;
				NullCheck(L_31);
				List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_33;
				L_33 = Dictionary_2_get_Item_mD6169CAE5ABCFEC4FDAEC64F083AFD42652C4465(L_31, L_32, Dictionary_2_get_Item_mD6169CAE5ABCFEC4FDAEC64F083AFD42652C4465_RuntimeMethod_var);
				GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_34 = V_3;
				NullCheck(L_33);
				List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline(L_33, L_34, List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
			}

IL_00b6_1:
			{
				// foreach (var link in graph.Links)
				bool L_35;
				L_35 = Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C((&V_0), Enumerator_MoveNext_m6EAA0725AB4AC63888B68637E9B67140F90C381C_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_00d2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Graphs.Layouts.DefaultGraphLayoutNodeActions::SetNodePosition(DungeonArchitect.Graphs.GraphNode,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultGraphLayoutNodeActions_SetNodePosition_m9716CCB82E3C7AE53A7685DC641CC80C509C663C (DefaultGraphLayoutNodeActions_t00E0CA5D9ACCDAACC5E0375AF5C8331F9BF85FDC* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, const RuntimeMethod* method) 
{
	{
		// node.Position = position;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_position;
		NullCheck(L_0);
		GraphNode_set_Position_mC8931EF0CFF819D410AB78ABD1A283E03CDC42B0(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 DungeonArchitect.Graphs.Layouts.DefaultGraphLayoutNodeActions::GetNodePosition(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DefaultGraphLayoutNodeActions_GetNodePosition_m18508034683B35F7E31A24A200C761B0E814F9B0 (DefaultGraphLayoutNodeActions_t00E0CA5D9ACCDAACC5E0375AF5C8331F9BF85FDC* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) 
{
	{
		// return node.Position;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = GraphNode_get_Position_m92FB18D50D76223CB53A63C884AB11C0A4329AB7(L_0, NULL);
		return L_1;
	}
}
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.Graphs.Layouts.DefaultGraphLayoutNodeActions::GetOutgoingNodes(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* DefaultGraphLayoutNodeActions_GetOutgoingNodes_m2E597B4223BD73499B3701DD063A8161E46D7C7A (DefaultGraphLayoutNodeActions_t00E0CA5D9ACCDAACC5E0375AF5C8331F9BF85FDC* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m91CB6F46833273B335805FF1DE9AAB569CD4FBB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD6169CAE5ABCFEC4FDAEC64F083AFD42652C4465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (outgoingNodes.ContainsKey(node))
		Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* L_0 = __this->___outgoingNodes_0;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_1 = ___0_node;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m91CB6F46833273B335805FF1DE9AAB569CD4FBB0(L_0, L_1, Dictionary_2_ContainsKey_m91CB6F46833273B335805FF1DE9AAB569CD4FBB0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return outgoingNodes[node].ToArray();
		Dictionary_2_t627678A56AC0D955FF72F4A4B44E9C001C5A3844* L_3 = __this->___outgoingNodes_0;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_4 = ___0_node;
		NullCheck(L_3);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_5;
		L_5 = Dictionary_2_get_Item_mD6169CAE5ABCFEC4FDAEC64F083AFD42652C4465(L_3, L_4, Dictionary_2_get_Item_mD6169CAE5ABCFEC4FDAEC64F083AFD42652C4465_RuntimeMethod_var);
		NullCheck(L_5);
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_6;
		L_6 = List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE(L_5, List_1_ToArray_m5A54F0757176487F038B6854259D7E391320F0DE_RuntimeMethod_var);
		return L_6;
	}

IL_0020:
	{
		// return new GraphNode[0];
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_7 = (GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70*)(GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70*)SZArrayNew(GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_7;
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
// System.Void DungeonArchitect.Graphs.Layouts.Spring.GraphLayoutSpringConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLayoutSpringConfig__ctor_m903906FFB85978364584266E417EE12DBEA3599D (GraphLayoutSpringConfig_tDF6F601D20C28C22A0C466EAC36E983BE9E8ECE9* __this, const RuntimeMethod* method) 
{
	{
		// public float interNodeDistance = 120;
		__this->___interNodeDistance_0 = (120.0f);
		// public float interNodeTension = 0.5f;
		__this->___interNodeTension_1 = (0.5f);
		// public float springDistance = 30;
		__this->___springDistance_2 = (30.0f);
		// public float springTension = 0.1f;
		__this->___springTension_3 = (0.100000001f);
		// public int iterations = 200;
		__this->___iterations_4 = ((int32_t)200);
		// public float timeStep = 1.0f;
		__this->___timeStep_5 = (1.0f);
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
// System.Void DungeonArchitect.Graphs.Layouts.Layered.GraphLayoutLayeredConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphLayoutLayeredConfig__ctor_mD9D8A28C7393CD376221534E3B61535521B14FE1 (GraphLayoutLayeredConfig_tEC788D299A6CBE9F24C475E799F1792E172ED9CE* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 separation = new Vector2(130, 100);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (130.0f), (100.0f), /*hidden argument*/NULL);
		__this->___separation_0 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* Graph_get_IndexCounter_m2866056FB04F59674EA3026634A52FCEBB289A4D_inline (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	{
		// get { return indexCounter; }
		IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586* L_0 = __this->___indexCounter_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	{
		// return nodes;
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_0 = __this->___nodes_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GraphNode_get_Id_m1208226FF4D1BDA590D208AC5FE33899494F581F_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return id;
		String_t* L_0 = __this->___id_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GraphNode_get_CanBeDeleted_m2153EF4B29B38797FCA5F274E35D0AA5A30EA0B8_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return canBeDeleted; }
		bool L_0 = __this->___canBeDeleted_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return graph;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = __this->___graph_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	{
		// return links;
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_0 = __this->___links_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	{
		// return input;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = __this->___input_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	{
		// return output;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = __this->___output_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return node;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = __this->___node_7;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, const RuntimeMethod* method) 
{
	{
		// return zoomLevel;
		float L_0 = __this->___zoomLevel_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return bounds;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___bounds_6;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GraphPin_get_TangentStrength_m3284A0B6002D180F4FBB4CC8A4BCA5195ED24655_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return tangentStrength;
		float L_0 = __this->___tangentStrength_11;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GraphNode_get_Caption_m5CB8A2609C249B98CD2E31A97455BFB695659E04_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return caption;
		String_t* L_0 = __this->___caption_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphPin_get_Position_m4C40C17C3AFF452D3812A3000706460A458DA425_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___position_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnPinLinksDestroyed_Invoke_m81CC6C0BA1ACD1990A1E52701FF59AC6205621B4_inline (OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75* __this, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pin, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GraphPin_get_PinType_m5402BA889181025BF3960BEFBD4120707511D6D8_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return pinType;
		int32_t L_0 = __this->___pinType_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
