#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct IEnumerable_1_t133DFE18F024D0BF3E26F639BB4BB30D3AA9A897;
// System.Collections.Generic.IEqualityComparer`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct IEqualityComparer_1_t6FFF6D7B74EE0B62F8766C2BDE9451F1284377B1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97;
// System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>
struct Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.HashSet`1/Slot<DungeonArchitect.Visibility.VisibilityGraphNode>[]
struct SlotU5BU5D_t47B53A13B5A104D579B9D945EE3C846A13AA5146;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// DungeonArchitect.Visibility.VisibilityGraphNode[]
struct VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6;
// DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState[]
struct VisibilitySearchStateU5BU5D_t3EDDBFA7628C34B5AED7B59E3DDC5D6284259E6A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode
struct GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DungeonArchitect.Visibility.VisibilityGraph
struct VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47;
// DungeonArchitect.Visibility.VisibilityGraphNode
struct VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98_m38B76A38AB24B7470191988ECF51B06EB94666C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m12F197B008F78835DEB5CE7BD22F3CCFF09FE31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m57339B7B6C9ED05A712DA81441EBBC8D8BB44B78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7E196BAFEC3C634DE7A6326D45FD5CA09AF42290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD024961D03B5032A81A6C66E0244B886ED268871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m27A216229D0D522484B4D15DE06DB928A24E1E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAA2A64E60E214249D97107B3145D1323DECB25F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m27F39B4CC31192690D99F738624AA01230959E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m7C2016CBFB21E1F6029F30C3277E56DE108BC663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m53102F4EF46782E94736150892F57529D883DF3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mDD5C347E0478D9A2E66A986663AE1812FAD186E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD030C6F4DFB12D2EBE1CFB114D04191F102FECF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7DCD27A77D826B435AE64968BFCF5E960AE98053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mBEF4708AF2D1A6972F9C2B577A2C4DC9753270F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mCD959CB5D67AD89DCD6B751F57350A56391A1353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m279A8F076DAD7D466209C0CA799305728B7EC80D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m68AABDEA1011647CA9B769FBFB9E1B490FA6D4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m4BD6A1BA30343151DD18E5C796BB43DBC8403DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m03D2069DF70B4E90843AA84CA38A61D3074C46EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mB61FA1997AF5AE140B8697C9B9CC286CCD588A02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mB690F86B95C6FB1424E9BFC67CA82B61E16168D1_RuntimeMethod_var;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3B3CBD69D8BC3D0636AB70BB4F5F1A308E33F7D9 
{
};

// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t47B53A13B5A104D579B9D945EE3C846A13AA5146* ____slots_8;
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

// System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>
struct Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	VisibilitySearchStateU5BU5D_t3EDDBFA7628C34B5AED7B59E3DDC5D6284259E6A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
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

// DungeonArchitect.Visibility.VisibilityGraph
struct VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47  : public RuntimeObject
{
	// System.Int32 DungeonArchitect.Visibility.VisibilityGraph::<VisibilityDepth>k__BackingField
	int32_t ___U3CVisibilityDepthU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode> DungeonArchitect.Visibility.VisibilityGraph::nodes
	List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* ___nodes_1;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Collections.Generic.HashSet`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>
struct Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>
struct Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
struct VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 
{
	// DungeonArchitect.Visibility.VisibilityGraphNode DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState::Node
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___Node_0;
	// System.Int32 DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState::Depth
	int32_t ___Depth_1;
};
// Native definition for P/Invoke marshalling of DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
struct VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_pinvoke
{
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___Node_0;
	int32_t ___Depth_1;
};
// Native definition for COM marshalling of DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
struct VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_com
{
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___Node_0;
	int32_t ___Depth_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// DungeonArchitect.Visibility.VisibilityGraphNode
struct VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98  : public RuntimeObject
{
	// UnityEngine.Bounds DungeonArchitect.Visibility.VisibilityGraphNode::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_0;
	// System.Boolean DungeonArchitect.Visibility.VisibilityGraphNode::_visible
	bool ____visible_1;
	// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode> DungeonArchitect.Visibility.VisibilityGraphNode::connectedNodes
	HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* ___connectedNodes_2;
};

// DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode
struct GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6  : public VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98
{
	// UnityEngine.GameObject[] DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode::gameObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___gameObjects_3;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// <Module>

// <Module>

// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>

// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>

// System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>

// System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>

// System.Collections.Generic.Stack`1<UnityEngine.GameObject>

// System.Collections.Generic.Stack`1<UnityEngine.GameObject>

// System.Collections.Generic.Stack`1<System.Object>

// System.Collections.Generic.Stack`1<System.Object>

// System.ValueType

// System.ValueType

// DungeonArchitect.Visibility.VisibilityGraph

// DungeonArchitect.Visibility.VisibilityGraph

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>

// System.Collections.Generic.HashSet`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

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

// DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState

// DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// DungeonArchitect.Visibility.VisibilityGraphNode

// DungeonArchitect.Visibility.VisibilityGraphNode

// DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode

// DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// DungeonArchitect.Visibility.VisibilityGraphNode[]
struct VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6  : public RuntimeArray
{
	ALIGN_FIELD (8) VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* m_Items[1];

	inline VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m279A8F076DAD7D466209C0CA799305728B7EC80D_gshared (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCD959CB5D67AD89DCD6B751F57350A56391A1353_gshared (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* __this, VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 Queue_1_Dequeue_mBEF4708AF2D1A6972F9C2B577A2C4DC9753270F7_gshared (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m68AABDEA1011647CA9B769FBFB9E1B490FA6D4A1_gshared_inline (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>::Add(T)
inline void List_1_Add_m53102F4EF46782E94736150892F57529D883DF3C_inline (List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* __this, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97*, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void DungeonArchitect.Visibility.VisibilityGraphNode::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraphNode_Initialize_mC78D2A97EE8F41EC2A253EDDBF2593491D23C184 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>::Clear()
inline void List_1_Clear_mDD5C347E0478D9A2E66A986663AE1812FAD186E1_inline (List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode> DungeonArchitect.Visibility.VisibilityGraph::GetVisibleNodes(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* VisibilityGraph_GetVisibleNodes_mA75FAA4601EFBD6BC516D69EF80F5907329E5413 (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_trackedObjects, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>::GetEnumerator()
inline Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD List_1_GetEnumerator_mD030C6F4DFB12D2EBE1CFB114D04191F102FECF6 (List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD (*) (List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>::Dispose()
inline void Enumerator_Dispose_m57339B7B6C9ED05A712DA81441EBBC8D8BB44B78 (Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>::get_Current()
inline VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* Enumerator_get_Current_m27A216229D0D522484B4D15DE06DB928A24E1E1E_inline (Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD* __this, const RuntimeMethod* method)
{
	return ((  VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* (*) (Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>::Contains(T)
inline bool HashSet_1_Contains_m27F39B4CC31192690D99F738624AA01230959E3F (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* __this, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C*, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___0_item, method);
}
// System.Void DungeonArchitect.Visibility.VisibilityGraphNode::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraphNode_SetVisible_mFE1D062C8E512DC71FAA1910BBF8065BB73C0D84 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, bool ___0_visible, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>::MoveNext()
inline bool Enumerator_MoveNext_m7E196BAFEC3C634DE7A6326D45FD5CA09AF42290 (Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>::.ctor()
inline void HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134 (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// UnityEngine.Bounds DungeonArchitect.Visibility.VisibilityGraphNode::get_Bounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 VisibilityGraphNode_get_Bounds_m7F117F2FA2C73A6154DC122C93CEA180CFC72127_inline (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>::Add(T)
inline bool HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9 (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* __this, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C*, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Int32 DungeonArchitect.Visibility.VisibilityGraph::get_VisibilityDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VisibilityGraph_get_VisibilityDepth_mE279F6E5EA38E5E7CA7A0DFAB297192424CDF0D8_inline (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>::.ctor()
inline void Queue_1__ctor_m279A8F076DAD7D466209C0CA799305728B7EC80D (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1*, const RuntimeMethod*))Queue_1__ctor_m279A8F076DAD7D466209C0CA799305728B7EC80D_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>::GetEnumerator()
inline Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715 HashSet_1_GetEnumerator_m7C2016CBFB21E1F6029F30C3277E56DE108BC663 (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715 (*) (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>::Dispose()
inline void Enumerator_Dispose_m12F197B008F78835DEB5CE7BD22F3CCFF09FE31C (Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>::get_Current()
inline VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* Enumerator_get_Current_mAA2A64E60E214249D97107B3145D1323DECB25F0_inline (Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715* __this, const RuntimeMethod* method)
{
	return ((  VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* (*) (Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>::Enqueue(T)
inline void Queue_1_Enqueue_mCD959CB5D67AD89DCD6B751F57350A56391A1353 (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* __this, VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1*, VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0, const RuntimeMethod*))Queue_1_Enqueue_mCD959CB5D67AD89DCD6B751F57350A56391A1353_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<DungeonArchitect.Visibility.VisibilityGraphNode>::MoveNext()
inline bool Enumerator_MoveNext_mD024961D03B5032A81A6C66E0244B886ED268871 (Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>::Dequeue()
inline VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 Queue_1_Dequeue_mBEF4708AF2D1A6972F9C2B577A2C4DC9753270F7 (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* __this, const RuntimeMethod* method)
{
	return ((  VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 (*) (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1*, const RuntimeMethod*))Queue_1_Dequeue_mBEF4708AF2D1A6972F9C2B577A2C4DC9753270F7_gshared)(__this, method);
}
// DungeonArchitect.Visibility.VisibilityGraphNode[] DungeonArchitect.Visibility.VisibilityGraphNode::get_ConnectedNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* VisibilityGraphNode_get_ConnectedNodes_mCD4800DD9D230A28EADBA60B6A0716B29B0A4572 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState>::get_Count()
inline int32_t Queue_1_get_Count_m68AABDEA1011647CA9B769FBFB9E1B490FA6D4A1_inline (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1*, const RuntimeMethod*))Queue_1_get_Count_m68AABDEA1011647CA9B769FBFB9E1B490FA6D4A1_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>::.ctor()
inline void List_1__ctor_m7DCD27A77D826B435AE64968BFCF5E960AE98053 (List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<DungeonArchitect.Visibility.VisibilityGraphNode>(System.Collections.Generic.IEnumerable`1<TSource>)
inline VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* Enumerable_ToArray_TisVisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98_m38B76A38AB24B7470191988ECF51B06EB94666C8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Void DungeonArchitect.Visibility.VisibilityGraphNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraphNode__ctor_m109B99A53ECFDBB9BE13227F52EE61D7C760BE86 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode::CalculateBounds(UnityEngine.GameObject,UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectVisibilityGraphNode_CalculateBounds_m1319F3462558CA796C035243E37A4FA4F11B33E8 (GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_bounds, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<UnityEngine.GameObject>::.ctor()
inline void Stack_1__ctor_mB61FA1997AF5AE140B8697C9B9CC286CCD588A02 (Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<UnityEngine.GameObject>::Push(T)
inline void Stack_1_Push_m03D2069DF70B4E90843AA84CA38A61D3074C46EF (Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// T System.Collections.Generic.Stack`1<UnityEngine.GameObject>::Pop()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Stack_1_Pop_m4BD6A1BA30343151DD18E5C796BB43DBC8403DE8 (Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<UnityEngine.GameObject>::get_Count()
inline int32_t Stack_1_get_Count_mB690F86B95C6FB1424E9BFC67CA82B61E16168D1_inline (Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Int32 DungeonArchitect.Visibility.VisibilityGraph::get_VisibilityDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisibilityGraph_get_VisibilityDepth_mE279F6E5EA38E5E7CA7A0DFAB297192424CDF0D8 (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, const RuntimeMethod* method) 
{
	{
		// public int VisibilityDepth { get; set; } = 1;
		int32_t L_0 = __this->___U3CVisibilityDepthU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.Visibility.VisibilityGraph::set_VisibilityDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraph_set_VisibilityDepth_m0434FACA9E1846190A83CA3BEDC7C53A946940FD (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int VisibilityDepth { get; set; } = 1;
		int32_t L_0 = ___0_value;
		__this->___U3CVisibilityDepthU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void DungeonArchitect.Visibility.VisibilityGraph::RegisterNode(DungeonArchitect.Visibility.VisibilityGraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraph_RegisterNode_m48824CACA574B36EBF51B11F866C798C19A18511 (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m53102F4EF46782E94736150892F57529D883DF3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nodes.Add(node);
		List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* L_0 = __this->___nodes_1;
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_1 = ___0_node;
		NullCheck(L_0);
		List_1_Add_m53102F4EF46782E94736150892F57529D883DF3C_inline(L_0, L_1, List_1_Add_m53102F4EF46782E94736150892F57529D883DF3C_RuntimeMethod_var);
		// node.Initialize();
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_2 = ___0_node;
		NullCheck(L_2);
		VisibilityGraphNode_Initialize_mC78D2A97EE8F41EC2A253EDDBF2593491D23C184(L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Visibility.VisibilityGraph::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraph_Clear_mD1FB952D097CEF3B3557EE1FE76B20FB7EFEAA06 (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mDD5C347E0478D9A2E66A986663AE1812FAD186E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nodes.Clear();
		List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* L_0 = __this->___nodes_1;
		NullCheck(L_0);
		List_1_Clear_mDD5C347E0478D9A2E66A986663AE1812FAD186E1_inline(L_0, List_1_Clear_mDD5C347E0478D9A2E66A986663AE1812FAD186E1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Visibility.VisibilityGraph::UpdateVisibility(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraph_UpdateVisibility_mD405B9D16CEC78957712D50BE52FC58CC1B6D181 (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_trackedObjects, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m57339B7B6C9ED05A712DA81441EBBC8D8BB44B78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E196BAFEC3C634DE7A6326D45FD5CA09AF42290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m27A216229D0D522484B4D15DE06DB928A24E1E1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m27F39B4CC31192690D99F738624AA01230959E3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD030C6F4DFB12D2EBE1CFB114D04191F102FECF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* V_0 = NULL;
	Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* V_2 = NULL;
	bool V_3 = false;
	{
		// var visibleNodes = GetVisibleNodes(trackedObjects);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_trackedObjects;
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_1;
		L_1 = VisibilityGraph_GetVisibleNodes_mA75FAA4601EFBD6BC516D69EF80F5907329E5413(__this, L_0, NULL);
		V_0 = L_1;
		// foreach (var node in nodes)
		List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* L_2 = __this->___nodes_1;
		NullCheck(L_2);
		Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD L_3;
		L_3 = List_1_GetEnumerator_mD030C6F4DFB12D2EBE1CFB114D04191F102FECF6(L_2, List_1_GetEnumerator_mD030C6F4DFB12D2EBE1CFB114D04191F102FECF6_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m57339B7B6C9ED05A712DA81441EBBC8D8BB44B78((&V_1), Enumerator_Dispose_m57339B7B6C9ED05A712DA81441EBBC8D8BB44B78_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0016_1:
			{
				// foreach (var node in nodes)
				VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_4;
				L_4 = Enumerator_get_Current_m27A216229D0D522484B4D15DE06DB928A24E1E1E_inline((&V_1), Enumerator_get_Current_m27A216229D0D522484B4D15DE06DB928A24E1E1E_RuntimeMethod_var);
				V_2 = L_4;
				// bool visible = visibleNodes.Contains(node);
				HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_5 = V_0;
				VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_6 = V_2;
				NullCheck(L_5);
				bool L_7;
				L_7 = HashSet_1_Contains_m27F39B4CC31192690D99F738624AA01230959E3F(L_5, L_6, HashSet_1_Contains_m27F39B4CC31192690D99F738624AA01230959E3F_RuntimeMethod_var);
				V_3 = L_7;
				// node.SetVisible(visible);
				VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_8 = V_2;
				bool L_9 = V_3;
				NullCheck(L_8);
				VisibilityGraphNode_SetVisible_mFE1D062C8E512DC71FAA1910BBF8065BB73C0D84(L_8, L_9, NULL);
			}

IL_002d_1:
			{
				// foreach (var node in nodes)
				bool L_10;
				L_10 = Enumerator_MoveNext_m7E196BAFEC3C634DE7A6326D45FD5CA09AF42290((&V_1), Enumerator_MoveNext_m7E196BAFEC3C634DE7A6326D45FD5CA09AF42290_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0016_1;
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
		// }
		return;
	}
}
// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode> DungeonArchitect.Visibility.VisibilityGraph::GetVisibleNodes(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* VisibilityGraph_GetVisibleNodes_mA75FAA4601EFBD6BC516D69EF80F5907329E5413 (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_trackedObjects, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m12F197B008F78835DEB5CE7BD22F3CCFF09FE31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m57339B7B6C9ED05A712DA81441EBBC8D8BB44B78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E196BAFEC3C634DE7A6326D45FD5CA09AF42290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD024961D03B5032A81A6C66E0244B886ED268871_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m27A216229D0D522484B4D15DE06DB928A24E1E1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAA2A64E60E214249D97107B3145D1323DECB25F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m27F39B4CC31192690D99F738624AA01230959E3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m7C2016CBFB21E1F6029F30C3277E56DE108BC663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD030C6F4DFB12D2EBE1CFB114D04191F102FECF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mBEF4708AF2D1A6972F9C2B577A2C4DC9753270F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mCD959CB5D67AD89DCD6B751F57350A56391A1353_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m279A8F076DAD7D466209C0CA799305728B7EC80D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m68AABDEA1011647CA9B769FBFB9E1B490FA6D4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* V_0 = NULL;
	HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* V_1 = NULL;
	Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* V_2 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* V_7 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715 V_9;
	memset((&V_9), 0, sizeof(V_9));
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* V_10 = NULL;
	VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 V_11;
	memset((&V_11), 0, sizeof(V_11));
	VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 V_12;
	memset((&V_12), 0, sizeof(V_12));
	VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* V_13 = NULL;
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* V_14 = NULL;
	VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		// var visibleNodes = new HashSet<VisibilityGraphNode>();
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_0 = (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C*)il2cpp_codegen_object_new(HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134(L_0, HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134_RuntimeMethod_var);
		V_0 = L_0;
		// if (trackedObjects.Length == 0)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___0_trackedObjects;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000c;
		}
	}
	{
		// return visibleNodes;
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_2 = V_0;
		return L_2;
	}

IL_000c:
	{
		// var startNodes = new HashSet<VisibilityGraphNode>();
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_3 = (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C*)il2cpp_codegen_object_new(HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134(L_3, HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134_RuntimeMethod_var);
		V_1 = L_3;
		// foreach (var trackedObjectPosition in trackedObjects)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_trackedObjects;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0079;
	}

IL_0019:
	{
		// foreach (var trackedObjectPosition in trackedObjects)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = L_8;
		// foreach (var node in nodes)
		List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* L_9 = __this->___nodes_1;
		NullCheck(L_9);
		Enumerator_tED51FE2FC34BAAC6B610B6C5C3DF1AE79BD134FD L_10;
		L_10 = List_1_GetEnumerator_mD030C6F4DFB12D2EBE1CFB114D04191F102FECF6(L_9, List_1_GetEnumerator_mD030C6F4DFB12D2EBE1CFB114D04191F102FECF6_RuntimeMethod_var);
		V_6 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m57339B7B6C9ED05A712DA81441EBBC8D8BB44B78((&V_6), Enumerator_Dispose_m57339B7B6C9ED05A712DA81441EBBC8D8BB44B78_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005a_1;
			}

IL_0032_1:
			{
				// foreach (var node in nodes)
				VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_11;
				L_11 = Enumerator_get_Current_m27A216229D0D522484B4D15DE06DB928A24E1E1E_inline((&V_6), Enumerator_get_Current_m27A216229D0D522484B4D15DE06DB928A24E1E1E_RuntimeMethod_var);
				V_7 = L_11;
				// if (node.Bounds.Contains(trackedObjectPosition))
				VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_12 = V_7;
				NullCheck(L_12);
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13;
				L_13 = VisibilityGraphNode_get_Bounds_m7F117F2FA2C73A6154DC122C93CEA180CFC72127_inline(L_12, NULL);
				V_8 = L_13;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_5;
				bool L_15;
				L_15 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555((&V_8), L_14, NULL);
				if (!L_15)
				{
					goto IL_005a_1;
				}
			}
			{
				// startNodes.Add(node);
				HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_16 = V_1;
				VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_17 = V_7;
				NullCheck(L_16);
				bool L_18;
				L_18 = HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9(L_16, L_17, HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9_RuntimeMethod_var);
				// break;
				goto IL_0073;
			}

IL_005a_1:
			{
				// foreach (var node in nodes)
				bool L_19;
				L_19 = Enumerator_MoveNext_m7E196BAFEC3C634DE7A6326D45FD5CA09AF42290((&V_6), Enumerator_MoveNext_m7E196BAFEC3C634DE7A6326D45FD5CA09AF42290_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0079:
	{
		// foreach (var trackedObjectPosition in trackedObjects)
		int32_t L_21 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// if (VisibilityDepth == 0)
		int32_t L_23;
		L_23 = VisibilityGraph_get_VisibilityDepth_mE279F6E5EA38E5E7CA7A0DFAB297192424CDF0D8_inline(__this, NULL);
		if (L_23)
		{
			goto IL_008a;
		}
	}
	{
		// return startNodes;
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_24 = V_1;
		return L_24;
	}

IL_008a:
	{
		// var queue = new Queue<VisibilitySearchState>();
		Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* L_25 = (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1*)il2cpp_codegen_object_new(Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Queue_1__ctor_m279A8F076DAD7D466209C0CA799305728B7EC80D(L_25, Queue_1__ctor_m279A8F076DAD7D466209C0CA799305728B7EC80D_RuntimeMethod_var);
		V_2 = L_25;
		// foreach (var startNode in startNodes)
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_26 = V_1;
		NullCheck(L_26);
		Enumerator_t41840F868C3B19B4FCF6C7839C26DD2D3175D715 L_27;
		L_27 = HashSet_1_GetEnumerator_m7C2016CBFB21E1F6029F30C3277E56DE108BC663(L_26, HashSet_1_GetEnumerator_m7C2016CBFB21E1F6029F30C3277E56DE108BC663_RuntimeMethod_var);
		V_9 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m12F197B008F78835DEB5CE7BD22F3CCFF09FE31C((&V_9), Enumerator_Dispose_m12F197B008F78835DEB5CE7BD22F3CCFF09FE31C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c4_1;
			}

IL_009a_1:
			{
				// foreach (var startNode in startNodes)
				VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_28;
				L_28 = Enumerator_get_Current_mAA2A64E60E214249D97107B3145D1323DECB25F0_inline((&V_9), Enumerator_get_Current_mAA2A64E60E214249D97107B3145D1323DECB25F0_RuntimeMethod_var);
				V_10 = L_28;
				// var state = new VisibilitySearchState();
				il2cpp_codegen_initobj((&V_11), sizeof(VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0));
				// state.Node = startNode;
				VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_29 = V_10;
				(&V_11)->___Node_0 = L_29;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_11)->___Node_0), (void*)L_29);
				// state.Depth = 0;
				(&V_11)->___Depth_1 = 0;
				// queue.Enqueue(state);
				Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* L_30 = V_2;
				VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 L_31 = V_11;
				NullCheck(L_30);
				Queue_1_Enqueue_mCD959CB5D67AD89DCD6B751F57350A56391A1353(L_30, L_31, Queue_1_Enqueue_mCD959CB5D67AD89DCD6B751F57350A56391A1353_RuntimeMethod_var);
			}

IL_00c4_1:
			{
				// foreach (var startNode in startNodes)
				bool L_32;
				L_32 = Enumerator_MoveNext_mD024961D03B5032A81A6C66E0244B886ED268871((&V_9), Enumerator_MoveNext_mD024961D03B5032A81A6C66E0244B886ED268871_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_009a_1;
				}
			}
			{
				goto IL_0160;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e0:
	{
		// var state = queue.Dequeue();
		Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* L_33 = V_2;
		NullCheck(L_33);
		VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 L_34;
		L_34 = Queue_1_Dequeue_mBEF4708AF2D1A6972F9C2B577A2C4DC9753270F7(L_33, Queue_1_Dequeue_mBEF4708AF2D1A6972F9C2B577A2C4DC9753270F7_RuntimeMethod_var);
		V_12 = L_34;
		// visibleNodes.Add(state.Node);
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_35 = V_0;
		VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 L_36 = V_12;
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_37 = L_36.___Node_0;
		NullCheck(L_35);
		bool L_38;
		L_38 = HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9(L_35, L_37, HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9_RuntimeMethod_var);
		// if (state.Depth < VisibilityDepth)
		VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 L_39 = V_12;
		int32_t L_40 = L_39.___Depth_1;
		int32_t L_41;
		L_41 = VisibilityGraph_get_VisibilityDepth_mE279F6E5EA38E5E7CA7A0DFAB297192424CDF0D8_inline(__this, NULL);
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_0160;
		}
	}
	{
		// foreach (var childNode in state.Node.ConnectedNodes)
		VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 L_42 = V_12;
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_43 = L_42.___Node_0;
		NullCheck(L_43);
		VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* L_44;
		L_44 = VisibilityGraphNode_get_ConnectedNodes_mCD4800DD9D230A28EADBA60B6A0716B29B0A4572(L_43, NULL);
		V_13 = L_44;
		V_4 = 0;
		goto IL_0158;
	}

IL_0118:
	{
		// foreach (var childNode in state.Node.ConnectedNodes)
		VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* L_45 = V_13;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_14 = L_48;
		// if (!visibleNodes.Contains(childNode))
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_49 = V_0;
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_50 = V_14;
		NullCheck(L_49);
		bool L_51;
		L_51 = HashSet_1_Contains_m27F39B4CC31192690D99F738624AA01230959E3F(L_49, L_50, HashSet_1_Contains_m27F39B4CC31192690D99F738624AA01230959E3F_RuntimeMethod_var);
		if (L_51)
		{
			goto IL_0152;
		}
	}
	{
		// var childState = new VisibilitySearchState();
		il2cpp_codegen_initobj((&V_15), sizeof(VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0));
		// childState.Node = childNode;
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_52 = V_14;
		(&V_15)->___Node_0 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_15)->___Node_0), (void*)L_52);
		// childState.Depth = state.Depth + 1;
		VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 L_53 = V_12;
		int32_t L_54 = L_53.___Depth_1;
		(&V_15)->___Depth_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		// queue.Enqueue(childState);
		Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* L_55 = V_2;
		VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 L_56 = V_15;
		NullCheck(L_55);
		Queue_1_Enqueue_mCD959CB5D67AD89DCD6B751F57350A56391A1353(L_55, L_56, Queue_1_Enqueue_mCD959CB5D67AD89DCD6B751F57350A56391A1353_RuntimeMethod_var);
	}

IL_0152:
	{
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0158:
	{
		// foreach (var childNode in state.Node.ConnectedNodes)
		int32_t L_58 = V_4;
		VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* L_59 = V_13;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)))))
		{
			goto IL_0118;
		}
	}

IL_0160:
	{
		// while (queue.Count > 0)
		Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = Queue_1_get_Count_m68AABDEA1011647CA9B769FBFB9E1B490FA6D4A1_inline(L_60, Queue_1_get_Count_m68AABDEA1011647CA9B769FBFB9E1B490FA6D4A1_RuntimeMethod_var);
		if ((((int32_t)L_61) > ((int32_t)0)))
		{
			goto IL_00e0;
		}
	}
	{
		// return visibleNodes;
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_62 = V_0;
		return L_62;
	}
}
// System.Void DungeonArchitect.Visibility.VisibilityGraph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraph__ctor_m1025832A38E547A70B546CA307D7EF3261D147B6 (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DCD27A77D826B435AE64968BFCF5E960AE98053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int VisibilityDepth { get; set; } = 1;
		__this->___U3CVisibilityDepthU3Ek__BackingField_0 = 1;
		// private List<VisibilityGraphNode> nodes = new List<VisibilityGraphNode>();
		List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* L_0 = (List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97*)il2cpp_codegen_object_new(List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7DCD27A77D826B435AE64968BFCF5E960AE98053(L_0, List_1__ctor_m7DCD27A77D826B435AE64968BFCF5E960AE98053_RuntimeMethod_var);
		__this->___nodes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodes_1), (void*)L_0);
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
// Conversion methods for marshalling of: DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
IL2CPP_EXTERN_C void VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshal_pinvoke(const VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0& unmarshaled, VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'VisibilitySearchState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
IL2CPP_EXTERN_C void VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshal_pinvoke_back(const VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_pinvoke& marshaled, VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0& unmarshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'VisibilitySearchState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
IL2CPP_EXTERN_C void VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshal_pinvoke_cleanup(VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
IL2CPP_EXTERN_C void VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshal_com(const VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0& unmarshaled, VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_com& marshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'VisibilitySearchState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
IL2CPP_EXTERN_C void VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshal_com_back(const VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_com& marshaled, VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0& unmarshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'VisibilitySearchState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
IL2CPP_EXTERN_C void VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshal_com_cleanup(VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DungeonArchitect.Visibility.VisibilityGraphNode[] DungeonArchitect.Visibility.VisibilityGraphNode::get_ConnectedNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* VisibilityGraphNode_get_ConnectedNodes_mCD4800DD9D230A28EADBA60B6A0716B29B0A4572 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98_m38B76A38AB24B7470191988ECF51B06EB94666C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => connectedNodes.ToArray();
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_0 = __this->___connectedNodes_2;
		VisibilityGraphNodeU5BU5D_t860CA943944F62AB414C3772B3FBADE640A871C6* L_1;
		L_1 = Enumerable_ToArray_TisVisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98_m38B76A38AB24B7470191988ECF51B06EB94666C8(L_0, Enumerable_ToArray_TisVisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98_m38B76A38AB24B7470191988ECF51B06EB94666C8_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Bounds DungeonArchitect.Visibility.VisibilityGraphNode::get_Bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 VisibilityGraphNode_get_Bounds_m7F117F2FA2C73A6154DC122C93CEA180CFC72127 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) 
{
	{
		// get => bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->___bounds_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.Visibility.VisibilityGraphNode::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraphNode_Initialize_mC78D2A97EE8F41EC2A253EDDBF2593491D23C184 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) 
{
	{
		// bounds = CalculateBounds();
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0;
		L_0 = VirtualFuncInvoker0< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(6 /* UnityEngine.Bounds DungeonArchitect.Visibility.VisibilityGraphNode::CalculateBounds() */, __this);
		__this->___bounds_0 = L_0;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Visibility.VisibilityGraphNode::AddConnection(DungeonArchitect.Visibility.VisibilityGraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraphNode_AddConnection_m8DE8F0A396DAFB696F0505986E393134912C72A9 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (node == null || node == this) return;
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_0 = ___0_node;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_1 = ___0_node;
		if ((!(((RuntimeObject*)(VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98*)L_1) == ((RuntimeObject*)(VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98*)__this))))
		{
			goto IL_0008;
		}
	}

IL_0007:
	{
		// if (node == null || node == this) return;
		return;
	}

IL_0008:
	{
		// connectedNodes.Add(node);
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_2 = __this->___connectedNodes_2;
		VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* L_3 = ___0_node;
		NullCheck(L_2);
		bool L_4;
		L_4 = HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9(L_2, L_3, HashSet_1_Add_m8CCD7507581D53016AFF99FC6138BB5D8A713DC9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean DungeonArchitect.Visibility.VisibilityGraphNode::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibilityGraphNode_IsVisible_m7369D7F5C90A08874AD587B36C2BBBEF5FB6FD1A (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) 
{
	{
		// return _visible;
		bool L_0 = __this->____visible_1;
		return L_0;
	}
}
// System.Void DungeonArchitect.Visibility.VisibilityGraphNode::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraphNode_SetVisible_mFE1D062C8E512DC71FAA1910BBF8065BB73C0D84 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, bool ___0_visible, const RuntimeMethod* method) 
{
	{
		// if (IsVisible() != visible)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean DungeonArchitect.Visibility.VisibilityGraphNode::IsVisible() */, __this);
		bool L_1 = ___0_visible;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		// _visible = visible;
		bool L_2 = ___0_visible;
		__this->____visible_1 = L_2;
		// SetVisibleImpl(visible);
		bool L_3 = ___0_visible;
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void DungeonArchitect.Visibility.VisibilityGraphNode::SetVisibleImpl(System.Boolean) */, __this, L_3);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Visibility.VisibilityGraphNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityGraphNode__ctor_m109B99A53ECFDBB9BE13227F52EE61D7C760BE86 (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _visible = true;
		__this->____visible_1 = (bool)1;
		// private HashSet<VisibilityGraphNode> connectedNodes = new HashSet<VisibilityGraphNode>();
		HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* L_0 = (HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C*)il2cpp_codegen_object_new(HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134(L_0, HashSet_1__ctor_m2ADD29D3CC1BD23A8F769D4BEA107EBC6ABCD134_RuntimeMethod_var);
		__this->___connectedNodes_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectedNodes_2), (void*)L_0);
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
// System.Void DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectVisibilityGraphNode__ctor_mE17B43F8F0C1B689F79A32D052213A7D25782F51 (GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObjectVisibilityGraphNode(GameObject gameObject)
		VisibilityGraphNode__ctor_m109B99A53ECFDBB9BE13227F52EE61D7C760BE86(__this, NULL);
		// gameObjects = new GameObject[] { gameObject };
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)1);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_gameObject;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_2);
		__this->___gameObjects_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObjects_3), (void*)L_1);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode::.ctor(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectVisibilityGraphNode__ctor_mDBB3860E0F76CEA1EFB165C6C96713593A8DE9B6 (GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_gameObjects, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObjectVisibilityGraphNode(GameObject[] gameObjects)
		VisibilityGraphNode__ctor_m109B99A53ECFDBB9BE13227F52EE61D7C760BE86(__this, NULL);
		// this.gameObjects = gameObjects.Clone() as GameObject[];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ___0_gameObjects;
		NullCheck((RuntimeArray*)L_0);
		RuntimeObject* L_1;
		L_1 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_0, NULL);
		__this->___gameObjects_3 = ((GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)IsInst((RuntimeObject*)L_1, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObjects_3), (void*)((GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)IsInst((RuntimeObject*)L_1, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode::SetVisibleImpl(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectVisibilityGraphNode_SetVisibleImpl_mDDDF999A24B064664D79972C059E424109653CC2 (GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6* __this, bool ___0_visible, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (gameObjects != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___gameObjects_3;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// foreach (var gameObject in gameObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___gameObjects_3;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0020;
	}

IL_0013:
	{
		// foreach (var gameObject in gameObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// gameObject.SetActive(visible);
		bool L_6 = ___0_visible;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0020:
	{
		// foreach (var gameObject in gameObjects)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Bounds DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode::CalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GameObjectVisibilityGraphNode_CalculateBounds_m789E6022FC6A796B727272543070197B51C7E189 (GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var bounds = new Bounds();
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// bool foundBounds = false;
		V_1 = (bool)0;
		// foreach (var gameObject in gameObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___gameObjects_3;
		V_2 = L_0;
		V_3 = 0;
		goto IL_003d;
	}

IL_0015:
	{
		// foreach (var gameObject in gameObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// if (CalculateBounds(gameObject, out itemBounds))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_4;
		bool L_6;
		L_6 = GameObjectVisibilityGraphNode_CalculateBounds_m1319F3462558CA796C035243E37A4FA4F11B33E8(__this, L_5, (&V_5), NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// if (!foundBounds)
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0030;
		}
	}
	{
		// bounds = itemBounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_8 = V_5;
		V_0 = L_8;
		// foundBounds = true;
		V_1 = (bool)1;
		goto IL_0039;
	}

IL_0030:
	{
		// bounds.Encapsulate(itemBounds);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9 = V_5;
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_0), L_9, NULL);
	}

IL_0039:
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003d:
	{
		// foreach (var gameObject in gameObjects)
		int32_t L_11 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// return bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13 = V_0;
		return L_13;
	}
}
// System.Boolean DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode::CalculateBounds(UnityEngine.GameObject,UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectVisibilityGraphNode_CalculateBounds_m1319F3462558CA796C035243E37A4FA4F11B33E8 (GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_bounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m4BD6A1BA30343151DD18E5C796BB43DBC8403DE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m03D2069DF70B4E90843AA84CA38A61D3074C46EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mB61FA1997AF5AE140B8697C9B9CC286CCD588A02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mB690F86B95C6FB1424E9BFC67CA82B61E16168D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* V_1 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_4 = NULL;
	int32_t V_5 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// bounds = new Bounds();
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_2 = ___1_bounds;
		il2cpp_codegen_initobj(L_2, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// if (target.transform.childCount == 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_target;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_4, NULL);
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		// var renderer = target.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_target;
		NullCheck(L_6);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_6, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		V_2 = L_7;
		// if (renderer == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// bounds = new Bounds();
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_10 = ___1_bounds;
		il2cpp_codegen_initobj(L_10, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// return false;
		return (bool)0;
	}

IL_0038:
	{
		// bounds = renderer.bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = ___1_bounds;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = V_2;
		NullCheck(L_12);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13;
		L_13 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_12, NULL);
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_11 = L_13;
		// return true;
		return (bool)1;
	}

IL_0046:
	{
		// bounds = new Bounds();
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_14 = ___1_bounds;
		il2cpp_codegen_initobj(L_14, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// bool foundBounds = false;
		V_0 = (bool)0;
		// var stack = new Stack<GameObject>();
		Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* L_15 = (Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF*)il2cpp_codegen_object_new(Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Stack_1__ctor_mB61FA1997AF5AE140B8697C9B9CC286CCD588A02(L_15, Stack_1__ctor_mB61FA1997AF5AE140B8697C9B9CC286CCD588A02_RuntimeMethod_var);
		V_1 = L_15;
		// stack.Push(target);
		Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* L_16 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___0_target;
		NullCheck(L_16);
		Stack_1_Push_m03D2069DF70B4E90843AA84CA38A61D3074C46EF(L_16, L_17, Stack_1_Push_m03D2069DF70B4E90843AA84CA38A61D3074C46EF_RuntimeMethod_var);
		goto IL_00e4;
	}

IL_0061:
	{
		// var top = stack.Pop();
		Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* L_18 = V_1;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Stack_1_Pop_m4BD6A1BA30343151DD18E5C796BB43DBC8403DE8(L_18, Stack_1_Pop_m4BD6A1BA30343151DD18E5C796BB43DBC8403DE8_RuntimeMethod_var);
		V_3 = L_19;
		// if (top == null) continue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_21)
		{
			goto IL_00e4;
		}
	}
	{
		// var renderer = top.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_3;
		NullCheck(L_22);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_23;
		L_23 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_22, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		V_4 = L_23;
		// if (renderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_24 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00a4;
		}
	}
	{
		// if (!foundBounds)
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_0097;
		}
	}
	{
		// bounds = renderer.bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_27 = ___1_bounds;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_28 = V_4;
		NullCheck(L_28);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_29;
		L_29 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_28, NULL);
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_27 = L_29;
		// foundBounds = true;
		V_0 = (bool)1;
		goto IL_00a4;
	}

IL_0097:
	{
		// bounds.Encapsulate(renderer.bounds);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_30 = ___1_bounds;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_31 = V_4;
		NullCheck(L_31);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_32;
		L_32 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_31, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22(L_30, L_32, NULL);
	}

IL_00a4:
	{
		// for (int i = 0; i < top.transform.childCount; i++)
		V_5 = 0;
		goto IL_00d5;
	}

IL_00a9:
	{
		// var child = top.transform.GetChild(i);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_3;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		int32_t L_35 = V_5;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_34, L_35, NULL);
		V_6 = L_36;
		// if (child == null) continue;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_38)
		{
			goto IL_00cf;
		}
	}
	{
		// stack.Push(child.gameObject);
		Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* L_39 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = V_6;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_39);
		Stack_1_Push_m03D2069DF70B4E90843AA84CA38A61D3074C46EF(L_39, L_41, Stack_1_Push_m03D2069DF70B4E90843AA84CA38A61D3074C46EF_RuntimeMethod_var);
	}

IL_00cf:
	{
		// for (int i = 0; i < top.transform.childCount; i++)
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d5:
	{
		// for (int i = 0; i < top.transform.childCount; i++)
		int32_t L_43 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = V_3;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		NullCheck(L_45);
		int32_t L_46;
		L_46 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_45, NULL);
		if ((((int32_t)L_43) < ((int32_t)L_46)))
		{
			goto IL_00a9;
		}
	}

IL_00e4:
	{
		// while (stack.Count > 0)
		Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Stack_1_get_Count_mB690F86B95C6FB1424E9BFC67CA82B61E16168D1_inline(L_47, Stack_1_get_Count_mB690F86B95C6FB1424E9BFC67CA82B61E16168D1_RuntimeMethod_var);
		if ((((int32_t)L_48) > ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		// return foundBounds;
		bool L_49 = V_0;
		return L_49;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 VisibilityGraphNode_get_Bounds_m7F117F2FA2C73A6154DC122C93CEA180CFC72127_inline (VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* __this, const RuntimeMethod* method) 
{
	{
		// get => bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->___bounds_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VisibilityGraph_get_VisibilityDepth_mE279F6E5EA38E5E7CA7A0DFAB297192424CDF0D8_inline (VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47* __this, const RuntimeMethod* method) 
{
	{
		// public int VisibilityDepth { get; set; } = 1;
		int32_t L_0 = __this->___U3CVisibilityDepthU3Ek__BackingField_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m68AABDEA1011647CA9B769FBFB9E1B490FA6D4A1_gshared_inline (Queue_1_t61C4B8D53FF41B23EAE0E116C1CAEF83732D1FE1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
