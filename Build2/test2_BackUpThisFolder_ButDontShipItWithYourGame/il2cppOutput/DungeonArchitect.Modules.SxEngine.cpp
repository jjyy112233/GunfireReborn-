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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Action`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>
struct Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMaterial>
struct Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6;
// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMesh>
struct Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC;
// System.Collections.Generic.HashSet`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct IEnumerable_1_t515C3FAEDE690DA6C89A40DCF3680C1FD0E66CD3;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct IEqualityComparer_1_t747CBC004768915363E8CAB2300DFDFACE4620FB;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>
struct KeyCollection_tDF70BA4DD41BEEEF7F2D1DF9EECFD2C83B7F8664;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,DungeonArchitect.SxEngine.SxMaterial>
struct KeyCollection_t15C3ED0766771EC35E5AD6EBDB83EAB3148BCB48;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,DungeonArchitect.SxEngine.SxMesh>
struct KeyCollection_t377B2D279AC9782E2715EB266574081F40EB0CFA;
// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxActorComponent>
struct List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6;
// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxMeshVertex>
struct List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1;
// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand>
struct List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4;
// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderer/MergedMesh>
struct List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE;
// System.Collections.Generic.Stack`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>
struct ValueCollection_t3652577DE3BA8AC4E5C8A1781B2F873954EB292A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,DungeonArchitect.SxEngine.SxMaterial>
struct ValueCollection_t332DEF8AD1215E78BA29A6AA989C98EB5D1AEA38;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,DungeonArchitect.SxEngine.SxMesh>
struct ValueCollection_tB81F9A5E96CCF8705E1F97B13D586446B416EFB8;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>[]
struct EntryU5BU5D_t22489B91EB8F1AFAC36E483BD35660286135396D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,DungeonArchitect.SxEngine.SxMaterial>[]
struct EntryU5BU5D_t417889A02F058F4932EC8C03DCF8565D99CEF7B7;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,DungeonArchitect.SxEngine.SxMesh>[]
struct EntryU5BU5D_t2BB00ED866D9F8423269CFE6B978BBEC835066F9;
// System.Collections.Generic.HashSet`1/Slot<DungeonArchitect.SxEngine.ISxSceneNode>[]
struct SlotU5BU5D_tE088C23C212952205373A8900E0F660F08BD4F01;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// DungeonArchitect.SxEngine.ISxSceneNode[]
struct ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// DungeonArchitect.SxEngine.SxActorComponent[]
struct SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE;
// DungeonArchitect.SxEngine.SxMeshVertex[]
struct SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C;
// DungeonArchitect.SxEngine.SxRenderCommand[]
struct SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C;
// DungeonArchitect.SxEngine.SxRenderer/MergedMesh[]
struct MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// DungeonArchitect.SxEngine.ISxSceneNode
struct ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// DungeonArchitect.SxEngine.SxActor
struct SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB;
// DungeonArchitect.SxEngine.SxActorComponent
struct SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348;
// DungeonArchitect.SxEngine.SxCamera
struct SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825;
// DungeonArchitect.SxEngine.SxDefaultMaterial
struct SxDefaultMaterial_t150442D5B9A3F86A9E2D7EFC76E6F53D459E73B6;
// DungeonArchitect.SxEngine.SxMaterial
struct SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9;
// DungeonArchitect.SxEngine.SxMaterialRegistry
struct SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB;
// DungeonArchitect.SxEngine.SxMesh
struct SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B;
// DungeonArchitect.SxEngine.SxMeshActor
struct SxMeshActor_t2DA2E51CCA7391FDEB5ACFEA3A45B00ED46B82B4;
// DungeonArchitect.SxEngine.SxMeshComponent
struct SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0;
// DungeonArchitect.SxEngine.SxMeshRegistry
struct SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6;
// DungeonArchitect.SxEngine.SxMeshSection
struct SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2;
// DungeonArchitect.SxEngine.Utils.SxMeshUtils
struct SxMeshUtils_tF92E6AF0CB6B79344EA0A8248BABCBE5D08E0336;
// DungeonArchitect.SxEngine.SxMeshVertex
struct SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1;
// DungeonArchitect.SxEngine.SxQuadMesh
struct SxQuadMesh_t755941132817A004E51784FBACEF02590B9A7E50;
// DungeonArchitect.SxEngine.SxRenderCommand
struct SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9;
// DungeonArchitect.SxEngine.SxRenderCommandList
struct SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E;
// DungeonArchitect.SxEngine.SxRenderer
struct SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323;
// DungeonArchitect.SxEngine.SxRootSceneNode
struct SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245;
// DungeonArchitect.SxEngine.SxSceneGraph
struct SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC;
// DungeonArchitect.SxEngine.SxSceneGraphUtils
struct SxSceneGraphUtils_tA9C4843841C5A3EBBB526E9997803FF517AA18B8;
// DungeonArchitect.SxEngine.SxSceneNodeBase
struct SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1;
// DungeonArchitect.SxEngine.SxTextActor
struct SxTextActor_t2EF408AA3E99597B91EA271BBD82AA0898E4C0AC;
// DungeonArchitect.SxEngine.SxTextComponent
struct SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90;
// DungeonArchitect.SxEngine.SxUnityMaterial
struct SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68;
// DungeonArchitect.SxEngine.SxUnityResourceMaterial
struct SxUnityResourceMaterial_t4CF8EE5542FBAE4D99A53250349058595F3AAE67;
// DungeonArchitect.SxEngine.SxWorld
struct SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// DungeonArchitect.SxEngine.SxRenderer/ClearState
struct ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E;
// DungeonArchitect.SxEngine.SxRenderer/DrawDelegate
struct DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71;
// DungeonArchitect.SxEngine.SxRenderer/MergeMeshList
struct MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B;
// DungeonArchitect.SxEngine.SxRenderer/MergedMesh
struct MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2;
// DungeonArchitect.SxEngine.SxWorld/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD8142D9C5E9540A954459F4B9D0F4B80C450B612_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m3D173F933EF0E03C7262BE097662FE15D9B3AE32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF420EEE32C56DB13DB3A9A21DB50E23BCCD1C93C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC73891D0E8BDA2C8D5614F82CCD8272E97EA65DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m21C8D525032C221A0E00BDE6BACBAF8D6F08EC69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4D1A5BA38EEFBD55762278FE52D040EEE6575EB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m52A0F0B464E049697643A6A065E5FCFF726B0A66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_m2F2D88C1C0537C0114A90F80004876E8369759AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0A4BDF0D1B2F60D1A2945EE762E80BA636C5129C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAED596B5A803EFECE524D1847C167D1B8B041FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB70B5279ACA3A1CCD85476D9A086A7C2EC1A58AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF07A0F08711D22C380DD0BE24AE310715BEABCBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m02D31CFBAF72B8171CD08FE7B0DB8B9F46C083D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2E26B46AAB9C3ECAD7BD87F4CFF7B9E126A6560C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3D044C0B84B08CD23D7667266E4EAE64DD66B518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFB14966B2581EB4433BC3D0994255EE1A473B76B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2340E415C6153047F2988871339524D771EEC676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4795656B8125D5A2103323F74EFDE4590E0E2216_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m697E49FD0AF04C3EE1726FF16BCC073443D01C10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDB8825BFB3E28455C75A5F2676F7DD6D9AD6DC57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mCCAA4D1F0BD177F6E0364BDB08D76F9DE49AEE27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m6740A7D1B558BD1F4D9F81F604835B53EA8344B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m455FE606C98C5386DF71A5AE34195438DF331E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m6577A0E4E57C81E5170123FFC99EE89D349184EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1CBFDDF7BE88345F0FA5C88FC64D6B2D26D3436F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m30FE8B75A437C105A7CB19AC800BE8EBE20A72E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDEC17C5EEE555F014C690DBD95BE737712DEA69F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m12465260E5D629AFF062FE05BA3E226AA851800F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m45618A2BEFC2C6F2308AF348133F1EDFA155CDE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0735EA26CD7124A4E2D4ED1B7AC7653A62EB3714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1DEC805C20715DE8B32653877DC3E64C7351A8AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4B5F5636201F98593C00F09F3C0D2375545147D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mFE9946F021371C8497A17BBF266918EB013461B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m11506892BCA7D0C8498393BE3AAD0F02C9FDAB80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m0F5CD194B54EA10C1BDBB2EE77EF411183C15B30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m1B05344A1098A1C37A6D4133999EBE3B11081B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB6CEF4EA8794E4966DA5708D65B68034C1B7160D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB885925FF9349C5675464CE42A6DC4CBDF8D3EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF2E5BBFE7D1D3171C3FC37BCECDCBFFA05EF785D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m67FCFB482B11234C442153B6EFD1CF3907D18BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m887FE759D948FAA4E39A05B8B19C520A95D771DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA599088549E3B2ADD06FCF3DEC3619AFE1D6E07F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCFCEFD0450B771537BE4C7E8DEB0EE2E8624A6E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m8AF0A323FDAC0395A9BC2658910A841BBE3FE8D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m63D3C012260FD8322387AC34AE5E3425029B67A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m13AEC524FC79BEAC72CA7B68C14F9BEC3E5F8E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SxActor_AddComponent_TisSxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0_mB4030DE8893E42B9FB0B1D9E786F4828885F1187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SxActor_AddComponent_TisSxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90_mBD9141C2CEB90763AA56F1E08BEF87F8EB23E77C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SxMaterialRegistry_Get_TisSxDefaultMaterial_t150442D5B9A3F86A9E2D7EFC76E6F53D459E73B6_mE4AD314BA1BEDCC6ACF8B7D019C157291594E04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SxTextComponent_OnTextureRebuilt_mC7E5A0A51A2CD2252F132ED47E1F221C86483588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SxWorld_U3CClearU3Eb__6_0_m6757E969E1D0CEB3D09960B65086EFA4F09F510A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CTickU3Eb__0_m59480D74A6DA412B451D4840793D15CE65B63D40_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE;
struct SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C;
struct SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C;
struct MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5DD5D498666092502D5F79C77A3BAB5179EFB8A8 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>
struct Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t22489B91EB8F1AFAC36E483BD35660286135396D* ____entries_1;
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
	KeyCollection_tDF70BA4DD41BEEEF7F2D1DF9EECFD2C83B7F8664* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3652577DE3BA8AC4E5C8A1781B2F873954EB292A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMaterial>
struct Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t417889A02F058F4932EC8C03DCF8565D99CEF7B7* ____entries_1;
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
	KeyCollection_t15C3ED0766771EC35E5AD6EBDB83EAB3148BCB48* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t332DEF8AD1215E78BA29A6AA989C98EB5D1AEA38* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMesh>
struct Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2BB00ED866D9F8423269CFE6B978BBEC835066F9* ____entries_1;
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
	KeyCollection_t377B2D279AC9782E2715EB266574081F40EB0CFA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB81F9A5E96CCF8705E1F97B13D586446B416EFB8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tE088C23C212952205373A8900E0F660F08BD4F01* ____slots_8;
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

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* ____items_1;
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

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxActorComponent>
struct List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxMeshVertex>
struct List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand>
struct List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderer/MergedMesh>
struct List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Stack`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* ____array_0;
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// DungeonArchitect.SxEngine.SxActorComponent
struct SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348  : public RuntimeObject
{
};

// DungeonArchitect.SxEngine.SxMaterial
struct SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9  : public RuntimeObject
{
	// UnityEngine.Material DungeonArchitect.SxEngine.SxMaterial::unityMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___unityMaterial_0;
	// System.Single DungeonArchitect.SxEngine.SxMaterial::DepthBias
	float ___DepthBias_1;
};

// DungeonArchitect.SxEngine.SxMaterialRegistry
struct SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB  : public RuntimeObject
{
};

// DungeonArchitect.SxEngine.SxMesh
struct SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection> DungeonArchitect.SxEngine.SxMesh::Sections
	Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* ___Sections_0;
};

// DungeonArchitect.SxEngine.SxMeshRegistry
struct SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6  : public RuntimeObject
{
};

// DungeonArchitect.SxEngine.SxMeshSection
struct SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2  : public RuntimeObject
{
	// System.Int32 DungeonArchitect.SxEngine.SxMeshSection::<DrawMode>k__BackingField
	int32_t ___U3CDrawModeU3Ek__BackingField_0;
	// DungeonArchitect.SxEngine.SxMeshVertex[] DungeonArchitect.SxEngine.SxMeshSection::<Vertices>k__BackingField
	SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* ___U3CVerticesU3Ek__BackingField_1;
};

// DungeonArchitect.SxEngine.Utils.SxMeshUtils
struct SxMeshUtils_tF92E6AF0CB6B79344EA0A8248BABCBE5D08E0336  : public RuntimeObject
{
};

// DungeonArchitect.SxEngine.SxRenderCommandList
struct SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E  : public RuntimeObject
{
	// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand> DungeonArchitect.SxEngine.SxRenderCommandList::renderCommands
	List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* ___renderCommands_0;
};

// DungeonArchitect.SxEngine.SxRenderer
struct SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323  : public RuntimeObject
{
	// UnityEngine.RenderTexture DungeonArchitect.SxEngine.SxRenderer::<Texture>k__BackingField
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3CTextureU3Ek__BackingField_0;
	// DungeonArchitect.SxEngine.SxCamera DungeonArchitect.SxEngine.SxRenderer::<Camera>k__BackingField
	SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* ___U3CCameraU3Ek__BackingField_1;
	// DungeonArchitect.SxEngine.SxRenderer/ClearState DungeonArchitect.SxEngine.SxRenderer::clearState
	ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* ___clearState_2;
	// System.Single DungeonArchitect.SxEngine.SxRenderer::<FOV>k__BackingField
	float ___U3CFOVU3Ek__BackingField_3;
	// DungeonArchitect.SxEngine.SxRenderer/DrawDelegate DungeonArchitect.SxEngine.SxRenderer::Draw
	DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* ___Draw_4;
};

// DungeonArchitect.SxEngine.SxSceneGraph
struct SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC  : public RuntimeObject
{
	// DungeonArchitect.SxEngine.SxRootSceneNode DungeonArchitect.SxEngine.SxSceneGraph::<RootNode>k__BackingField
	SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* ___U3CRootNodeU3Ek__BackingField_0;
};

// DungeonArchitect.SxEngine.SxSceneGraphUtils
struct SxSceneGraphUtils_tA9C4843841C5A3EBBB526E9997803FF517AA18B8  : public RuntimeObject
{
};

// DungeonArchitect.SxEngine.SxWorld
struct SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD  : public RuntimeObject
{
	// DungeonArchitect.SxEngine.SxSceneGraph DungeonArchitect.SxEngine.SxWorld::sceneGraph
	SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* ___sceneGraph_0;
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

// DungeonArchitect.SxEngine.SxRenderer/MergeMeshList
struct MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B  : public RuntimeObject
{
	// DungeonArchitect.SxEngine.SxRenderer/MergedMesh DungeonArchitect.SxEngine.SxRenderer/MergeMeshList::ActiveMesh
	MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* ___ActiveMesh_0;
	// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderer/MergedMesh> DungeonArchitect.SxEngine.SxRenderer/MergeMeshList::mergedMeshes
	List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE* ___mergedMeshes_1;
};

// DungeonArchitect.SxEngine.SxRenderer/MergedMesh
struct MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2  : public RuntimeObject
{
	// System.Int32 DungeonArchitect.SxEngine.SxRenderer/MergedMesh::DrawMode
	int32_t ___DrawMode_0;
	// DungeonArchitect.SxEngine.SxMaterial DungeonArchitect.SxEngine.SxRenderer/MergedMesh::Material
	SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ___Material_1;
	// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxMeshVertex> DungeonArchitect.SxEngine.SxRenderer/MergedMesh::Vertices
	List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* ___Vertices_2;
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

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxActorComponent>
struct Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxMeshVertex>
struct Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxRenderCommand>
struct Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>
struct KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// DungeonArchitect.SxEngine.SxDefaultMaterial
struct SxDefaultMaterial_t150442D5B9A3F86A9E2D7EFC76E6F53D459E73B6  : public SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9
{
};

// DungeonArchitect.SxEngine.SxMeshComponent
struct SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0  : public SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348
{
	// DungeonArchitect.SxEngine.SxMesh DungeonArchitect.SxEngine.SxMeshComponent::Mesh
	SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* ___Mesh_0;
	// DungeonArchitect.SxEngine.SxMaterial DungeonArchitect.SxEngine.SxMeshComponent::_material
	SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ____material_1;
};

// DungeonArchitect.SxEngine.SxQuadMesh
struct SxQuadMesh_t755941132817A004E51784FBACEF02590B9A7E50  : public SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B
{
};

// DungeonArchitect.SxEngine.SxUnityMaterial
struct SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68  : public SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9
{
};

// DungeonArchitect.SxEngine.SxUnityResourceMaterial
struct SxUnityResourceMaterial_t4CF8EE5542FBAE4D99A53250349058595F3AAE67  : public SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9
{
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>
struct Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.CharacterInfo
struct CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889 
{
	// System.Int32 UnityEngine.CharacterInfo::index
	int32_t ___index_0;
	// UnityEngine.Rect UnityEngine.CharacterInfo::uv
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv_1;
	// UnityEngine.Rect UnityEngine.CharacterInfo::vert
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___vert_2;
	// System.Single UnityEngine.CharacterInfo::width
	float ___width_3;
	// System.Int32 UnityEngine.CharacterInfo::size
	int32_t ___size_4;
	// UnityEngine.FontStyle UnityEngine.CharacterInfo::style
	int32_t ___style_5;
	// System.Boolean UnityEngine.CharacterInfo::flipped
	bool ___flipped_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.CharacterInfo
struct CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889_marshaled_pinvoke
{
	int32_t ___index_0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv_1;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___vert_2;
	float ___width_3;
	int32_t ___size_4;
	int32_t ___style_5;
	int32_t ___flipped_6;
};
// Native definition for COM marshalling of UnityEngine.CharacterInfo
struct CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889_marshaled_com
{
	int32_t ___index_0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv_1;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___vert_2;
	float ___width_3;
	int32_t ___size_4;
	int32_t ___style_5;
	int32_t ___flipped_6;
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

// DungeonArchitect.SxEngine.SxCamera
struct SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825  : public RuntimeObject
{
	// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxCamera::location
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___location_0;
	// UnityEngine.Quaternion DungeonArchitect.SxEngine.SxCamera::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
	// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.SxCamera::viewMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix_2;
	// System.Boolean DungeonArchitect.SxEngine.SxCamera::dirty
	bool ___dirty_3;
};

// DungeonArchitect.SxEngine.SxMeshVertex
struct SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1  : public RuntimeObject
{
	// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxMeshVertex::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_0;
	// UnityEngine.Color DungeonArchitect.SxEngine.SxMeshVertex::<Color>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CColorU3Ek__BackingField_1;
	// UnityEngine.Vector2 DungeonArchitect.SxEngine.SxMeshVertex::<UV0>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CUV0U3Ek__BackingField_2;
};

// DungeonArchitect.SxEngine.SxRenderCommand
struct SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9  : public RuntimeObject
{
	// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.SxRenderCommand::AccumWorldTransform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___AccumWorldTransform_0;
	// DungeonArchitect.SxEngine.SxMesh DungeonArchitect.SxEngine.SxRenderCommand::Mesh
	SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* ___Mesh_1;
	// DungeonArchitect.SxEngine.SxMaterial DungeonArchitect.SxEngine.SxRenderCommand::Material
	SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ___Material_2;
	// System.Single DungeonArchitect.SxEngine.SxRenderCommand::distanceSqToCam
	float ___distanceSqToCam_3;
};

// DungeonArchitect.SxEngine.SxRenderContext
struct SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 
{
	// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxRenderContext::CameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CameraPosition_0;
};

// DungeonArchitect.SxEngine.SxTextComponentSettings
struct SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9 
{
	// UnityEngine.Font DungeonArchitect.SxEngine.SxTextComponentSettings::Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___Font_0;
	// UnityEngine.Color DungeonArchitect.SxEngine.SxTextComponentSettings::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_1;
	// System.Single DungeonArchitect.SxEngine.SxTextComponentSettings::Scale
	float ___Scale_2;
	// DungeonArchitect.SxEngine.SxTextHAlign DungeonArchitect.SxEngine.SxTextComponentSettings::HAlign
	int32_t ___HAlign_3;
	// DungeonArchitect.SxEngine.SxTextVAlign DungeonArchitect.SxEngine.SxTextComponentSettings::VAlign
	int32_t ___VAlign_4;
	// System.Single DungeonArchitect.SxEngine.SxTextComponentSettings::DepthBias
	float ___DepthBias_5;
};
// Native definition for P/Invoke marshalling of DungeonArchitect.SxEngine.SxTextComponentSettings
struct SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___Font_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_1;
	float ___Scale_2;
	int32_t ___HAlign_3;
	int32_t ___VAlign_4;
	float ___DepthBias_5;
};
// Native definition for COM marshalling of DungeonArchitect.SxEngine.SxTextComponentSettings
struct SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___Font_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_1;
	float ___Scale_2;
	int32_t ___HAlign_3;
	int32_t ___VAlign_4;
	float ___DepthBias_5;
};

// DungeonArchitect.SxEngine.Utils.SxTransform
struct SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 
{
	// UnityEngine.Vector3 DungeonArchitect.SxEngine.Utils.SxTransform::_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_0;
	// UnityEngine.Quaternion DungeonArchitect.SxEngine.Utils.SxTransform::_rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____rotation_1;
	// UnityEngine.Vector3 DungeonArchitect.SxEngine.Utils.SxTransform::_scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scale_2;
	// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.Utils.SxTransform::_matrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____matrix_3;
	// System.Boolean DungeonArchitect.SxEngine.Utils.SxTransform::dirty
	bool ___dirty_4;
};
// Native definition for P/Invoke marshalling of DungeonArchitect.SxEngine.Utils.SxTransform
struct SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____rotation_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scale_2;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____matrix_3;
	int32_t ___dirty_4;
};
// Native definition for COM marshalling of DungeonArchitect.SxEngine.Utils.SxTransform
struct SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____rotation_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scale_2;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____matrix_3;
	int32_t ___dirty_4;
};

// DungeonArchitect.SxEngine.SxRenderer/ClearState
struct ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E  : public RuntimeObject
{
	// System.Boolean DungeonArchitect.SxEngine.SxRenderer/ClearState::ClearDepth
	bool ___ClearDepth_0;
	// System.Boolean DungeonArchitect.SxEngine.SxRenderer/ClearState::ClearColor
	bool ___ClearColor_1;
	// UnityEngine.Color DungeonArchitect.SxEngine.SxRenderer/ClearState::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_2;
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// DungeonArchitect.SxEngine.SxActor
struct SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxActorComponent> DungeonArchitect.SxEngine.SxActor::components
	List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6* ___components_0;
	// DungeonArchitect.SxEngine.Utils.SxTransform DungeonArchitect.SxEngine.SxActor::worldTransform
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 ___worldTransform_1;
	// DungeonArchitect.SxEngine.SxWorld DungeonArchitect.SxEngine.SxActor::World
	SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* ___World_2;
	// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode> DungeonArchitect.SxEngine.SxActor::children
	List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* ___children_3;
	// DungeonArchitect.SxEngine.ISxSceneNode DungeonArchitect.SxEngine.SxActor::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_4;
};

// DungeonArchitect.SxEngine.SxSceneNodeBase
struct SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1  : public RuntimeObject
{
	// DungeonArchitect.SxEngine.Utils.SxTransform DungeonArchitect.SxEngine.SxSceneNodeBase::<WorldTransform>k__BackingField
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 ___U3CWorldTransformU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode> DungeonArchitect.SxEngine.SxSceneNodeBase::children
	List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* ___children_1;
	// DungeonArchitect.SxEngine.ISxSceneNode DungeonArchitect.SxEngine.SxSceneNodeBase::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_2;
};

// DungeonArchitect.SxEngine.SxTextComponent
struct SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90  : public SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348
{
	// DungeonArchitect.SxEngine.SxMesh DungeonArchitect.SxEngine.SxTextComponent::mesh
	SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* ___mesh_0;
	// DungeonArchitect.SxEngine.SxMaterial DungeonArchitect.SxEngine.SxTextComponent::material
	SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ___material_1;
	// System.String DungeonArchitect.SxEngine.SxTextComponent::text
	String_t* ___text_2;
	// DungeonArchitect.SxEngine.SxTextComponentSettings DungeonArchitect.SxEngine.SxTextComponent::settings
	SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9 ___settings_3;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// DungeonArchitect.SxEngine.SxWorld/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817  : public RuntimeObject
{
	// DungeonArchitect.SxEngine.SxRenderContext DungeonArchitect.SxEngine.SxWorld/<>c__DisplayClass5_0::context
	SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___context_0;
	// System.Single DungeonArchitect.SxEngine.SxWorld/<>c__DisplayClass5_0::deltaTime
	float ___deltaTime_1;
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC  : public MulticastDelegate_t
{
};

// System.Action`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// DungeonArchitect.SxEngine.SxMeshActor
struct SxMeshActor_t2DA2E51CCA7391FDEB5ACFEA3A45B00ED46B82B4  : public SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB
{
	// DungeonArchitect.SxEngine.SxMeshComponent DungeonArchitect.SxEngine.SxMeshActor::MeshComponent
	SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* ___MeshComponent_5;
};

// DungeonArchitect.SxEngine.SxRootSceneNode
struct SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245  : public SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1
{
};

// DungeonArchitect.SxEngine.SxTextActor
struct SxTextActor_t2EF408AA3E99597B91EA271BBD82AA0898E4C0AC  : public SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB
{
	// DungeonArchitect.SxEngine.SxTextComponent DungeonArchitect.SxEngine.SxTextActor::TextComponent
	SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* ___TextComponent_5;
};

// DungeonArchitect.SxEngine.SxRenderer/DrawDelegate
struct DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>

// System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>

// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMaterial>

// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMaterial>

// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMesh>

// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMesh>

// System.Collections.Generic.HashSet`1<DungeonArchitect.SxEngine.ISxSceneNode>

// System.Collections.Generic.HashSet`1<DungeonArchitect.SxEngine.ISxSceneNode>

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>
struct List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxActorComponent>
struct List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxActorComponent>

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxMeshVertex>
struct List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxMeshVertex>

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand>
struct List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand>

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderer/MergedMesh>
struct List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderer/MergedMesh>

// System.Collections.Generic.Stack`1<DungeonArchitect.SxEngine.ISxSceneNode>

// System.Collections.Generic.Stack`1<DungeonArchitect.SxEngine.ISxSceneNode>

// System.Collections.Generic.Stack`1<System.Object>

// System.Collections.Generic.Stack`1<System.Object>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// DungeonArchitect.SxEngine.SxActorComponent

// DungeonArchitect.SxEngine.SxActorComponent

// DungeonArchitect.SxEngine.SxMaterial

// DungeonArchitect.SxEngine.SxMaterial

// DungeonArchitect.SxEngine.SxMaterialRegistry
struct SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMaterial> DungeonArchitect.SxEngine.SxMaterialRegistry::cache
	Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6* ___cache_0;
};

// DungeonArchitect.SxEngine.SxMaterialRegistry

// DungeonArchitect.SxEngine.SxMesh

// DungeonArchitect.SxEngine.SxMesh

// DungeonArchitect.SxEngine.SxMeshRegistry
struct SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMesh> DungeonArchitect.SxEngine.SxMeshRegistry::cache
	Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC* ___cache_0;
};

// DungeonArchitect.SxEngine.SxMeshRegistry

// DungeonArchitect.SxEngine.SxMeshSection

// DungeonArchitect.SxEngine.SxMeshSection

// DungeonArchitect.SxEngine.Utils.SxMeshUtils

// DungeonArchitect.SxEngine.Utils.SxMeshUtils

// DungeonArchitect.SxEngine.SxRenderCommandList

// DungeonArchitect.SxEngine.SxRenderCommandList

// DungeonArchitect.SxEngine.SxRenderer

// DungeonArchitect.SxEngine.SxRenderer

// DungeonArchitect.SxEngine.SxSceneGraph

// DungeonArchitect.SxEngine.SxSceneGraph

// DungeonArchitect.SxEngine.SxSceneGraphUtils

// DungeonArchitect.SxEngine.SxSceneGraphUtils

// DungeonArchitect.SxEngine.SxWorld

// DungeonArchitect.SxEngine.SxWorld

// System.ValueType

// System.ValueType

// DungeonArchitect.SxEngine.SxRenderer/MergeMeshList

// DungeonArchitect.SxEngine.SxRenderer/MergeMeshList

// DungeonArchitect.SxEngine.SxRenderer/MergedMesh

// DungeonArchitect.SxEngine.SxRenderer/MergedMesh

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxActorComponent>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxActorComponent>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxMeshVertex>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxMeshVertex>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxRenderCommand>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxRenderCommand>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>

// System.Collections.Generic.KeyValuePair`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

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

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

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

// DungeonArchitect.SxEngine.SxDefaultMaterial

// DungeonArchitect.SxEngine.SxDefaultMaterial

// DungeonArchitect.SxEngine.SxMeshComponent

// DungeonArchitect.SxEngine.SxMeshComponent

// DungeonArchitect.SxEngine.SxQuadMesh

// DungeonArchitect.SxEngine.SxQuadMesh

// DungeonArchitect.SxEngine.SxUnityMaterial

// DungeonArchitect.SxEngine.SxUnityMaterial

// DungeonArchitect.SxEngine.SxUnityResourceMaterial

// DungeonArchitect.SxEngine.SxUnityResourceMaterial

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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>

// UnityEngine.CharacterInfo

// UnityEngine.CharacterInfo

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// DungeonArchitect.SxEngine.SxCamera

// DungeonArchitect.SxEngine.SxCamera

// DungeonArchitect.SxEngine.SxMeshVertex

// DungeonArchitect.SxEngine.SxMeshVertex

// DungeonArchitect.SxEngine.SxRenderCommand

// DungeonArchitect.SxEngine.SxRenderCommand

// DungeonArchitect.SxEngine.SxRenderContext

// DungeonArchitect.SxEngine.SxRenderContext

// DungeonArchitect.SxEngine.SxTextComponentSettings

// DungeonArchitect.SxEngine.SxTextComponentSettings

// DungeonArchitect.SxEngine.Utils.SxTransform
struct SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_StaticFields
{
	// DungeonArchitect.SxEngine.Utils.SxTransform DungeonArchitect.SxEngine.Utils.SxTransform::identity
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 ___identity_5;
};

// DungeonArchitect.SxEngine.Utils.SxTransform

// DungeonArchitect.SxEngine.SxRenderer/ClearState

// DungeonArchitect.SxEngine.SxRenderer/ClearState

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.Font

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Shader

// UnityEngine.Shader

// DungeonArchitect.SxEngine.SxActor

// DungeonArchitect.SxEngine.SxActor

// DungeonArchitect.SxEngine.SxSceneNodeBase

// DungeonArchitect.SxEngine.SxSceneNodeBase

// DungeonArchitect.SxEngine.SxTextComponent

// DungeonArchitect.SxEngine.SxTextComponent

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// DungeonArchitect.SxEngine.SxWorld/<>c__DisplayClass5_0

// DungeonArchitect.SxEngine.SxWorld/<>c__DisplayClass5_0

// System.Action`1<UnityEngine.Font>

// System.Action`1<UnityEngine.Font>

// System.Action`1<DungeonArchitect.SxEngine.ISxSceneNode>

// System.Action`1<DungeonArchitect.SxEngine.ISxSceneNode>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// DungeonArchitect.SxEngine.SxMeshActor

// DungeonArchitect.SxEngine.SxMeshActor

// DungeonArchitect.SxEngine.SxRootSceneNode

// DungeonArchitect.SxEngine.SxRootSceneNode

// DungeonArchitect.SxEngine.SxTextActor

// DungeonArchitect.SxEngine.SxTextActor

// DungeonArchitect.SxEngine.SxRenderer/DrawDelegate

// DungeonArchitect.SxEngine.SxRenderer/DrawDelegate
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// DungeonArchitect.SxEngine.SxMeshVertex[]
struct SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C  : public RuntimeArray
{
	ALIGN_FIELD (8) SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* m_Items[1];

	inline SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// DungeonArchitect.SxEngine.SxRenderCommand[]
struct SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C  : public RuntimeArray
{
	ALIGN_FIELD (8) SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* m_Items[1];

	inline SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// DungeonArchitect.SxEngine.SxRenderer/MergedMesh[]
struct MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02  : public RuntimeArray
{
	ALIGN_FIELD (8) MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* m_Items[1];

	inline MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* value)
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
// DungeonArchitect.SxEngine.ISxSceneNode[]
struct ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523  : public RuntimeArray
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
// DungeonArchitect.SxEngine.SxActorComponent[]
struct SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE  : public RuntimeArray
{
	ALIGN_FIELD (8) SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* m_Items[1];

	inline SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* value)
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


// T DungeonArchitect.SxEngine.SxActor::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SxActor_AddComponent_TisRuntimeObject_m2EE55F15321EA7D9DD981DF75652E511477A8958_gshared (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) ;
// DungeonArchitect.SxEngine.SxMaterial DungeonArchitect.SxEngine.SxMaterialRegistry::Get<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* SxMaterialRegistry_Get_TisRuntimeObject_m2275CE6E5D03CCE36971DBEFAEA9BFDAE5DA4573_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
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
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___0_source, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void DungeonArchitect.SxEngine.SxActor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor__ctor_m6C363A81C813483EFC1A821CB21282F0967A22F1 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) ;
// T DungeonArchitect.SxEngine.SxActor::AddComponent<DungeonArchitect.SxEngine.SxMeshComponent>()
inline SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* SxActor_AddComponent_TisSxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0_mB4030DE8893E42B9FB0B1D9E786F4828885F1187 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method)
{
	return ((  SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* (*) (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB*, const RuntimeMethod*))SxActor_AddComponent_TisRuntimeObject_m2EE55F15321EA7D9DD981DF75652E511477A8958_gshared)(__this, method);
}
// System.Void DungeonArchitect.SxEngine.SxMeshComponent::set_Material(DungeonArchitect.SxEngine.SxMaterial)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshComponent_set_Material_m27AE81476A0215052D91902267D426E1E6DF9B94_inline (SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* __this, SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ___0_value, const RuntimeMethod* method) ;
// T DungeonArchitect.SxEngine.SxActor::AddComponent<DungeonArchitect.SxEngine.SxTextComponent>()
inline SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* SxActor_AddComponent_TisSxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90_mBD9141C2CEB90763AA56F1E08BEF87F8EB23E77C (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method)
{
	return ((  SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* (*) (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB*, const RuntimeMethod*))SxActor_AddComponent_TisRuntimeObject_m2EE55F15321EA7D9DD981DF75652E511477A8958_gshared)(__this, method);
}
// System.Void DungeonArchitect.SxEngine.SxActorComponent::Draw(DungeonArchitect.SxEngine.SxRenderContext,UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxRenderCommandList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActorComponent_Draw_mA41C996A5286C64207E9B185C51A58AD50A598B0 (SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_accumWorldTransform, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___2_renderCommandList, const RuntimeMethod* method) ;
// DungeonArchitect.SxEngine.SxMaterial DungeonArchitect.SxEngine.SxMeshComponent::get_Material()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* SxMeshComponent_get_Material_mDFE4BE0E590AEE75021AC2524E48FD7596B73F43_inline (SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* __this, const RuntimeMethod* method) ;
// DungeonArchitect.SxEngine.SxMaterial DungeonArchitect.SxEngine.SxMaterialRegistry::Get<DungeonArchitect.SxEngine.SxDefaultMaterial>()
inline SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* SxMaterialRegistry_Get_TisSxDefaultMaterial_t150442D5B9A3F86A9E2D7EFC76E6F53D459E73B6_mE4AD314BA1BEDCC6ACF8B7D019C157291594E04A (const RuntimeMethod* method)
{
	return ((  SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* (*) (const RuntimeMethod*))SxMaterialRegistry_Get_TisRuntimeObject_m2275CE6E5D03CCE36971DBEFAEA9BFDAE5DA4573_gshared)(method);
}
// System.Void DungeonArchitect.SxEngine.SxRenderCommand::.ctor(UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxMesh,DungeonArchitect.SxEngine.SxMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommand__ctor_m4D1D6A5198339A87772087D2D76238171AEC0281 (SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_accumWorldTransform, SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* ___1_mesh, SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ___2_material, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderCommandList::Add(DungeonArchitect.SxEngine.SxRenderCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommandList_Add_m0133D0D0E829AD66DAD7C98BF7948A5CFBE9C717 (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* ___0_command, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxActorComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActorComponent__ctor_m0C6FFD9EAC85FD36B005C58719A769F95F306F5C (SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Font_RequestCharactersInTexture_mB331838B63AEAF610A9EF70815F60ECB255D7C38 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* __this, String_t* ___0_characters, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxTextComponent::RebuildMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent_RebuildMesh_m9CDB096A8786ADADEC185F516B50A3A92FE7C765 (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m970A8DFC8A17354AB74107AC11E2ACE2A3D5200F (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Font_add_textureRebuilt_m0BBB44846C17A580B078599DA5AE231DA9D6DAD7 (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxTextComponent::UpdateMaterial(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent_UpdateMaterial_m6A17DF2C63E6434CB431071DAE5B7E09AFF21481 (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Font::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Font_get_material_m61ABDEC14C6D659DDC5A4F080023699116C17364 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxUnityMaterial::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxUnityMaterial__ctor_mC45EE41F5EDE3B6F4DCC4910429B1C4A100BB94F (SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxActorComponent::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActorComponent_Destroy_mC9B4422A445CD84A553DC6F938122D0B2CCED691 (SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Font_remove_textureRebuilt_mB7EF9EEE803E9C70AF4217190B49C83FE287904A (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Font::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Font_get_fontSize_m02C2F5C7A7C89A878F04C2087248DD46BBF9E26B (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxMeshVertex>::.ctor()
inline void List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4 (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Font_GetCharacterInfo_mEC706A59008A40BEFD7448A2F06589747E138EDB (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* __this, Il2CppChar ___0_ch, CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* ___1_info, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterInfo_get_minX_m69B3FB781E712AE29CDEC596F9932862FB553328 (CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterInfo_get_maxY_m2439B7BB55176E566ECE4CAB87B3AA252DF46927 (CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterInfo_get_maxX_m55625E1CD75FA327A33D2DA9C4A15C846CBB0A20 (CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterInfo_get_minY_m9BC2A892418F3E986B0EAFE56F28FABD8CAA4A3A (CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CharacterInfo_get_uvTopLeft_m8366979523BC656BF87BA43327604E6870BC6A33 (CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CharacterInfo_get_uvTopRight_m706389A181F4E4EAAB886C08D6E1A9C3D8FD2C16 (CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CharacterInfo_get_uvBottomRight_m2A6F8FA7B8C05E65653AE2986E0889CCEAE3EF17 (CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CharacterInfo_get_uvBottomLeft_mDBE99341E4D50DB991F249E438891D118AB2DF9F (CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::.ctor(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11 (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_uv0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxMeshVertex>::Add(T)
inline void List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* __this, SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1*, SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 UnityEngine.CharacterInfo::get_advance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterInfo_get_advance_m0AAC68ABA1BD5B184B53E01F270BA4FD1D2C2B9A (CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxMeshVertex>::GetEnumerator()
inline Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4 List_1_GetEnumerator_m0735EA26CD7124A4E2D4ED1B7AC7653A62EB3714 (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4 (*) (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxMeshVertex>::Dispose()
inline void Enumerator_Dispose_m0A4BDF0D1B2F60D1A2945EE762E80BA636C5129C (Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxMeshVertex>::get_Current()
inline SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* Enumerator_get_Current_m2340E415C6153047F2988871339524D771EEC676_inline (Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4* __this, const RuntimeMethod* method)
{
	return ((  SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* (*) (Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxMeshVertex::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxMeshVertex_get_Position_mAE27FFE26F37AE902092C574695F4AEAE94A10F5_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshVertex_set_Position_m20DCA6423C159798D3A35DECCEEA82FA30B7452A_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxMeshVertex>::MoveNext()
inline bool Enumerator_MoveNext_m2E26B46AAB9C3ECAD7BD87F4CFF7B9E126A6560C (Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void DungeonArchitect.SxEngine.SxMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMesh__ctor_mDF54410B7469AC026B0951FF74D78D230730411E (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxMeshVertex>::ToArray()
inline SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* List_1_ToArray_m1B05344A1098A1C37A6D4133999EBE3B11081B54 (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* __this, const RuntimeMethod* method)
{
	return ((  SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* (*) (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void DungeonArchitect.SxEngine.SxMesh::CreateSection(System.Int32,System.Int32,DungeonArchitect.SxEngine.SxMeshVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMesh_CreateSection_m57EBE3C7ACA6F8B8A40386205A8F0133FB1595EB (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* __this, int32_t ___0_sectionIndex, int32_t ___1_drawMode, SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* ___2_vertices, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::set_Color(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshVertex_set_Color_m1A218CBC467001902157712F8FD8C33BE3764097_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::set_UV0(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshVertex_set_UV0_mF39249B682641156BD43C02A7FD98561215DC628_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMesh::ClearSection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMesh_ClearSection_m60FB9A50D1D0CE253EABFB930CE95567928F4402 (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* __this, int32_t ___0_sectionIndex, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMeshSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshSection__ctor_m9F95EB62D488727C728AE4774A0778A967B2C000 (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMeshSection::set_DrawMode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshSection_set_DrawMode_mAAEEF4E22BF6A15E6DC46DCCBDDE16D31EA73E63_inline (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMeshSection::set_Vertices(DungeonArchitect.SxEngine.SxMeshVertex[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshSection_set_Vertices_m77942424BEC7596C19385CD110A05B6B217A98DC_inline (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>::Add(TKey,TValue)
inline void Dictionary_2_Add_mD8142D9C5E9540A954459F4B9D0F4B80C450B612 (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* __this, int32_t ___0_key, SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6*, int32_t, SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>::Remove(TKey)
inline bool Dictionary_2_Remove_mC73891D0E8BDA2C8D5614F82CCD8272E97EA65DB (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>::Clear()
inline void Dictionary_2_Clear_m3D173F933EF0E03C7262BE097662FE15D9B3AE32 (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>::.ctor()
inline void Dictionary_2__ctor_m21C8D525032C221A0E00BDE6BACBAF8D6F08EC69 (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMesh>::.ctor()
inline void Dictionary_2__ctor_m52A0F0B464E049697643A6A065E5FCFF726B0A66 (Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void DungeonArchitect.SxEngine.SxQuadMesh::Build(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxQuadMesh_Build_mBE5641B0967EEB0E694EA6DA4B7C91B196896FED (SxQuadMesh_t755941132817A004E51784FBACEF02590B9A7E50* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion DungeonArchitect.SxEngine.SxCamera::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SxCamera_get_Rotation_mCA07DDCBF6887AB545E5530067534003925CE481_inline (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxCamera::BuildViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxCamera_BuildViewMatrix_m79EE0DA1075F62AC1D1719868A455E9A4B01BB22 (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxCamera::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxCamera_set_Rotation_m545A8BC14BF8A487598A99D9175F1BFF517F6708 (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_column0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_column1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_column2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___3_column3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_pass, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Material>(T)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_original, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMaterial__ctor_mF821DCB6A09A171E0EB0F2BFD698E39F89793C60 (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.SxEngine.SxMaterial>::.ctor()
inline void Dictionary_2__ctor_m4D1A5BA38EEFBD55762278FE52D040EEE6575EB8 (Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.SxEngine.SxMaterial::get_RenderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SxMaterial_get_RenderQueue_mB88C2DAEF8F79E6E95FB4D2204F37F6AD83A83CA (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.Matrix::GetTranslationDivW(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix_GetTranslationDivW_mF14D95109FC23D4327117FF6E134FC5627527F2F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand>::ToArray()
inline SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* List_1_ToArray_mF2E5BBFE7D1D3171C3FC37BCECDCBFFA05EF785D (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* __this, const RuntimeMethod* method)
{
	return ((  SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* (*) (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand>::Add(T)
inline void List_1_Add_m1CBFDDF7BE88345F0FA5C88FC64D6B2D26D3436F_inline (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* __this, SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4*, SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void DungeonArchitect.SxEngine.SxRenderCommandList::UpdateDistanceFromCam(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommandList_UpdateDistanceFromCam_mB98B74E04FF6A05D9CE0F31B5AC105CFA6570EF9 (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_camLocation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand>::Sort()
inline void List_1_Sort_m11506892BCA7D0C8498393BE3AAD0F02C9FDAB80 (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4*, const RuntimeMethod*))List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand>::GetEnumerator()
inline Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7 List_1_GetEnumerator_m1DEC805C20715DE8B32653877DC3E64C7351A8AE (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7 (*) (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxRenderCommand>::Dispose()
inline void Enumerator_Dispose_mAED596B5A803EFECE524D1847C167D1B8B041FDD (Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxRenderCommand>::get_Current()
inline SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* Enumerator_get_Current_mDB8825BFB3E28455C75A5F2676F7DD6D9AD6DC57_inline (Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7* __this, const RuntimeMethod* method)
{
	return ((  SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* (*) (Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void DungeonArchitect.SxEngine.SxRenderCommand::UpdateDistanceToCam(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommand_UpdateDistanceToCam_m5FBFAACD3C51EB1D8F154E965A7E2BDBBF23EB51 (SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_camLocation, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxRenderCommand>::MoveNext()
inline bool Enumerator_MoveNext_mFB14966B2581EB4433BC3D0994255EE1A473B76B (Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderCommand>::.ctor()
inline void List_1__ctor_mA599088549E3B2ADD06FCF3DEC3619AFE1D6E07F (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// DungeonArchitect.SxEngine.SxCamera DungeonArchitect.SxEngine.SxRenderer::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* SxRenderer_get_Camera_m06F15377120A653FCDD0FBA924E6EF1FC9D96E53_inline (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxCamera::get_Location()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxCamera_get_Location_m310DA09594D938A393746256346A50CCBDB6FE3A_inline (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture DungeonArchitect.SxEngine.SxRenderer::get_Texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderer::AcquireTexture(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_AcquireTexture_mB2E9BB6C2862C3D39A0755E3A7B0AEEB9BA3A55A (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_size, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09 (const RuntimeMethod* method) ;
// System.Single DungeonArchitect.SxEngine.SxRenderer::get_FOV()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SxRenderer_get_FOV_m04B5ECB56E05213629AE62FB5684AA80CADFF072_inline (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.SxEngine.SxRenderer::GetAspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SxRenderer_GetAspectRatio_mD6F1E4F0226BAC33952AF46DC77BD9E7A4C4D38D (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Perspective_m08BFCC6D4F8C7D51CEFBB8F3425954125BF9A743 (float ___0_fov, float ___1_aspect, float ___2_zNear, float ___3_zFar, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadProjectionMatrix_m4310EBD83BF1858124306A227C18FF52152718BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_mat, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09 (bool ___0_clearDepth, bool ___1_clearColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_backgroundColor, const RuntimeMethod* method) ;
// DungeonArchitect.SxEngine.SxRenderContext DungeonArchitect.SxEngine.SxRenderer::CreateRenderContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 SxRenderer_CreateRenderContext_m204F4A6FFE2F5D2724F3B99BD23791331E59EAA1 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderCommandList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommandList__ctor_m4BDCE991E81F5EBC60AE61BAE42E449A52BA682D (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderCommandList::Sort(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommandList_Sort_mCD552229CFD34488AF3C0F3E91246FCC46966077 (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_camLocation, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.SxCamera::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SxCamera_get_ViewMatrix_m4395C364CFEEA88552BFA0E39F7FA7BE2E518EFC (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderer::Render(DungeonArchitect.SxEngine.SxRenderCommandList,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_Render_mE4689176405E9661F9F9CF0B05FA1A4E6EEFE664 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___0_renderCommandList, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_viewMatrix, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderer/DrawDelegate::Invoke(DungeonArchitect.SxEngine.SxRenderContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_inline (DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855 (const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderer::ReleaseTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_ReleaseTexture_m09FDB1C71E6C4FBA1728D2F8EE93F196317A7E9C (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_depth, int32_t ___3_format, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderer::set_Texture(UnityEngine.RenderTexture)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxRenderer_set_Texture_m83039C77317DDF2A217301C376845112F03BB562_inline (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// DungeonArchitect.SxEngine.SxRenderCommand[] DungeonArchitect.SxEngine.SxRenderCommandList::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* SxRenderCommandList_get_Commands_mBE3006C58DED9DE8557216E434C5DFE0F788C1BE (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMaterial::Assign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMaterial_Assign_mEBEE9F3445AE86DBA0E5F0883F8D78E847D0E106 (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::set_modelview(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_set_modelview_mCAE007CC5BE38316397954370950EB43991FBBD4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>::GetEnumerator()
inline Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411 Dictionary_2_GetEnumerator_mF420EEE32C56DB13DB3A9A21DB50E23BCCD1C93C (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411 (*) (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>::Dispose()
inline void Enumerator_Dispose_mF07A0F08711D22C380DD0BE24AE310715BEABCBF (Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>::get_Current()
inline KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F Enumerator_get_Current_m4795656B8125D5A2103323F74EFDE4590E0E2216_inline (Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F (*) (Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>::get_Value()
inline SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* KeyValuePair_2_get_Value_m6577A0E4E57C81E5170123FFC99EE89D349184EF_inline (KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F* __this, const RuntimeMethod* method)
{
	return ((  SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* (*) (KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// System.Int32 DungeonArchitect.SxEngine.SxMeshSection::get_DrawMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SxMeshSection_get_DrawMode_mAEE1C13FD53C6339E803D3738BAB4E7FA9EEB56C_inline (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7 (int32_t ___0_mode, const RuntimeMethod* method) ;
// DungeonArchitect.SxEngine.SxMeshVertex[] DungeonArchitect.SxEngine.SxMeshSection::get_Vertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* SxMeshSection_get_Vertices_m98DC66D5FE65E65FB61242D2A3E81CBAB01C0417_inline (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Color DungeonArchitect.SxEngine.SxMeshVertex::get_Color()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SxMeshVertex_get_Color_mEDEF4776F7756BFACDE6EE7D4D67C953AA82B286_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.SxEngine.SxMeshVertex::get_UV0()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SxMeshVertex_get_UV0_mDC91E4537FA5D156F6F95F51E5E25AAE6E616561_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::TexCoord(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_TexCoord_m0EE71AD25BE8A6A6503474649A1201C8662AE792 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978 (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36 (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,DungeonArchitect.SxEngine.SxMeshSection>::MoveNext()
inline bool Enumerator_MoveNext_m02D31CFBAF72B8171CD08FE7B0DB8B9F46C083D9 (Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// System.Void DungeonArchitect.SxEngine.SxRenderer/MergeMeshList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeMeshList__ctor_m3162B13B5A5109177CF1BF8100E1F8D0627DFB7F (MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderer::GenerateMergedMeshes(DungeonArchitect.SxEngine.SxRenderCommand,DungeonArchitect.SxEngine.SxRenderer/MergeMeshList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_GenerateMergedMeshes_mC0B83778104780D1821AC5647D539F4CE928C8B7 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* ___0_command, MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* ___1_mergedMeshes, const RuntimeMethod* method) ;
// DungeonArchitect.SxEngine.SxRenderer/MergedMesh[] DungeonArchitect.SxEngine.SxRenderer/MergeMeshList::get_Meshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* MergeMeshList_get_Meshes_m3CDF1CE7CC93039B37D839CF13D7F93E5B0165E6 (MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderer::RenderDefault(DungeonArchitect.SxEngine.SxRenderCommandList,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_RenderDefault_m34A584F76D49E5C8EB820CF925F1103DE60A0795 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___0_renderCommandList, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_viewMatrix, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderer/MergeMeshList::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeMeshList_CreateNew_m50DEC11FD56AB4A34E86F61D5917402F5563BE05 (MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex__ctor_m1B7380A846B11D3C5C0B37080C2B85A6EB2C77EA (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 DungeonArchitect.Utils.MathUtils::ToVector4(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 MathUtils_ToVector4_m15E377448CD28CE50F9D80CE02B9399D65B4F7FE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, float ___1_w, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxCamera__ctor_m458AD82A6C437B54D9F243A9E590DC62524663D3 (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxRenderer/ClearState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearState__ctor_mAAD2DE9573389ECFB506417418975A86485D7245 (ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderer/MergedMesh>::ToArray()
inline MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* List_1_ToArray_m0F5CD194B54EA10C1BDBB2EE77EF411183C15B30 (List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE* __this, const RuntimeMethod* method)
{
	return ((  MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* (*) (List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderer/MergedMesh>::.ctor()
inline void List_1__ctor_m67FCFB482B11234C442153B6EFD1CF3907D18BDF (List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void DungeonArchitect.SxEngine.SxRenderer/MergedMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedMesh__ctor_m0E7B6C457814EADA2A8376D9DAD2E87AEB625E9F (MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxRenderer/MergedMesh>::Add(T)
inline void List_1_Add_m30FE8B75A437C105A7CB19AC800BE8EBE20A72E6_inline (List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE* __this, MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE*, MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Stack`1<DungeonArchitect.SxEngine.ISxSceneNode>::.ctor()
inline void Stack_1__ctor_m63D3C012260FD8322387AC34AE5E3425029B67A1 (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// DungeonArchitect.SxEngine.SxRootSceneNode DungeonArchitect.SxEngine.SxSceneGraph::get_RootNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* SxSceneGraph_get_RootNode_mEA95642585AAEA1A9EFD7BC5B941B7D4F012C9AB_inline (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<DungeonArchitect.SxEngine.ISxSceneNode>::Push(T)
inline void Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329 (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51*, RuntimeObject*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// T System.Collections.Generic.Stack`1<DungeonArchitect.SxEngine.ISxSceneNode>::Pop()
inline RuntimeObject* Stack_1_Pop_m8AF0A323FDAC0395A9BC2658910A841BBE3FE8D6 (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void System.Action`1<DungeonArchitect.SxEngine.ISxSceneNode>::Invoke(T)
inline void Action_1_Invoke_m86EF4615C32458396C87452D743F1DFCDCF8C1ED_inline (Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Int32 System.Collections.Generic.Stack`1<DungeonArchitect.SxEngine.ISxSceneNode>::get_Count()
inline int32_t Stack_1_get_Count_m13AEC524FC79BEAC72CA7B68C14F9BEC3E5F8E52_inline (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// System.Boolean System.Linq.Enumerable::Contains<DungeonArchitect.SxEngine.ISxSceneNode>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_m2F2D88C1C0537C0114A90F80004876E8369759AE (RuntimeObject* ___0_source, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___0_source, ___1_value, method);
}
// System.Void DungeonArchitect.SxEngine.SxRootSceneNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRootSceneNode__ctor_mACD873CD808CC94D09FA27FDD2910421A9FE6D58 (SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>::ToArray()
inline ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* List_1_ToArray_mB6CEF4EA8794E4966DA5708D65B68034C1B7160D (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* __this, const RuntimeMethod* method)
{
	return ((  ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* (*) (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>::Add(T)
inline void List_1_Add_mDEC17C5EEE555F014C690DBD95BE737712DEA69F_inline (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>::Clear()
inline void List_1_Clear_m12465260E5D629AFF062FE05BA3E226AA851800F_inline (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>::.ctor()
inline void List_1__ctor_m887FE759D948FAA4E39A05B8B19C520A95D771DF (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.SxSceneGraphUtils::AccumulateTransforms(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SxSceneGraphUtils_AccumulateTransforms_m1DDE3A00D8EE72DE0CF81C8D01AAE5FF027477BA (RuntimeObject* ___0_node, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.Utils.SxTransform::get_Matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SxTransform_get_Matrix_m920F3DD7452B19A9CBC07E7879BD5440863D1CB3 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.SxSceneGraphUtils::FindAbsoluteTransform(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SxSceneGraphUtils_FindAbsoluteTransform_mFFA46157074C9BB2D6EDD2379F0C9D8C6E0AE8BB (RuntimeObject* ___0_node, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxSceneNodeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneNodeBase__ctor_m51EAE7C916E6A25274CB5F0140FACD4172448F02 (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxActorComponent>::ToArray()
inline SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* List_1_ToArray_mB885925FF9349C5675464CE42A6DC4CBDF8D3EF9 (List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6* __this, const RuntimeMethod* method)
{
	return ((  SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* (*) (List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxActorComponent>::GetEnumerator()
inline Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC List_1_GetEnumerator_m4B5F5636201F98593C00F09F3C0D2375545147D8 (List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC (*) (List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxActorComponent>::Dispose()
inline void Enumerator_Dispose_mB70B5279ACA3A1CCD85476D9A086A7C2EC1A58AB (Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxActorComponent>::get_Current()
inline SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* Enumerator_get_Current_m697E49FD0AF04C3EE1726FF16BCC073443D01C10_inline (Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC* __this, const RuntimeMethod* method)
{
	return ((  SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* (*) (Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<DungeonArchitect.SxEngine.SxActorComponent>::MoveNext()
inline bool Enumerator_MoveNext_m3D044C0B84B08CD23D7667266E4EAE64DD66B518 (Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>::Contains(T)
inline bool List_1_Contains_m45618A2BEFC2C6F2308AF348133F1EDFA155CDE0 (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5*, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<DungeonArchitect.SxEngine.ISxSceneNode>::Remove(T)
inline bool List_1_Remove_mFE9946F021371C8497A17BBF266918EB013461B4 (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void DungeonArchitect.SxEngine.SxWorld::DestroyActor(DungeonArchitect.SxEngine.SxActor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_DestroyActor_m98FFA874DC3ADAC44B925EBC106C4CE08025C4AD (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* ___0_actor, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.SxEngine.Utils.SxTransform::get_Positon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxTransform_get_Positon_m85ABD9B6E0F5AA8D1C5EDDA73EB709B409FD2865_inline (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::set_Positon(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform_set_Positon_m35A84BFFBF53F8724116FB90B378DF765EEB1703 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion DungeonArchitect.SxEngine.Utils.SxTransform::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SxTransform_get_Rotation_mF9A33AF7C04A299E9384D8D08DEF52F3C1AA591F_inline (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform_set_Rotation_m2747EA452C289093B980662A38A15C98856DA583 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.SxEngine.Utils.SxTransform::get_Scale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxTransform_get_Scale_m92D32E885F207EBF0D9568380EF71F41197B9597_inline (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform_set_Scale_m98A029AF4F1F0AFCB46DBBDC566ED34F55978416 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.SxEngine.SxActorComponent>::.ctor()
inline void List_1__ctor_mCFCEFD0450B771537BE4C7E8DEB0EE2E8624A6E8 (List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<DungeonArchitect.SxEngine.ISxSceneNode>::.ctor()
inline void HashSet_1__ctor_m455FE606C98C5386DF71A5AE34195438DF331E6D (HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void DungeonArchitect.SxEngine.SxWorld::DrawRecursive(DungeonArchitect.SxEngine.SxRenderContext,DungeonArchitect.SxEngine.ISxSceneNode,UnityEngine.Matrix4x4,System.Collections.Generic.HashSet`1<DungeonArchitect.SxEngine.ISxSceneNode>,DungeonArchitect.SxEngine.SxRenderCommandList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_DrawRecursive_m4323EE431E88C620E0EC5DF49BEBBCA6F0A9E525 (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, RuntimeObject* ___1_node, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_incomingWorldTransform, HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* ___3_visited, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___4_renderCommandList, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<DungeonArchitect.SxEngine.ISxSceneNode>::Contains(T)
inline bool HashSet_1_Contains_m6740A7D1B558BD1F4D9F81F604835B53EA8344B4 (HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<DungeonArchitect.SxEngine.ISxSceneNode>::Add(T)
inline bool HashSet_1_Add_mCCAA4D1F0BD177F6E0364BDB08D76F9DE49AEE27 (HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Void DungeonArchitect.SxEngine.SxWorld/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m0BA9FCA26F31AE263392FD83E67897E6CFA259DC (U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<DungeonArchitect.SxEngine.ISxSceneNode>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m27700D9A3CD21BD88337DC0A2EA4458A1E46075F (Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void DungeonArchitect.SxEngine.SxSceneGraph::IterateNodes(System.Action`1<DungeonArchitect.SxEngine.ISxSceneNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneGraph_IterateNodes_mD224E7FD4A99F96E3DBA7B7AA5083D5484440FFE (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* __this, Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D* ___0_visit, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxSceneNodeBase::RemoveAllChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneNodeBase_RemoveAllChildren_m5BBB4E2CCA654F39FE5ECD483BBF05BEF3903964 (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxWorld::DestroyActorImpl(DungeonArchitect.SxEngine.SxActor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_DestroyActorImpl_m1101B16A3ABCEFE2D5E3946B92A4718166E73098 (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* ___0_actor, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxSceneGraph::Remove(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneGraph_Remove_m0E4031256DB0E49570B7E256AB10E1E59EA11DC9 (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* __this, RuntimeObject* ___0_nodeToRemove, const RuntimeMethod* method) ;
// DungeonArchitect.SxEngine.SxActorComponent[] DungeonArchitect.SxEngine.SxActor::get_Components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* SxActor_get_Components_m39CD7A7B28625EA2BBB65368FFBA43336DB4551A (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxSceneGraph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneGraph__ctor_m700568259AD509CB8CD8102C33FBAF1AFEF84BEC (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::.ctor(UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform__ctor_m0E71AAC1923E45C00235B236582B146312A14067 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::.ctor(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform__ctor_mDB13432BEE2834B219E373333FD108BF4B8BB132 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform__ctor_mCD726FB25E963EEA32042601C1FCBE9119C5E9E1 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform__ctor_m852DCDB8617193A749A994D1ABA6C6B11724BF3F (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
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
// System.Void DungeonArchitect.SxEngine.SxMeshActor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshActor__ctor_m29C254C869945699E63EC4FEDCAC9D3125DA1E1B (SxMeshActor_t2DA2E51CCA7391FDEB5ACFEA3A45B00ED46B82B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxActor_AddComponent_TisSxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0_mB4030DE8893E42B9FB0B1D9E786F4828885F1187_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SxMeshActor()
		SxActor__ctor_m6C363A81C813483EFC1A821CB21282F0967A22F1(__this, NULL);
		// MeshComponent = AddComponent<SxMeshComponent>();
		SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* L_0;
		L_0 = SxActor_AddComponent_TisSxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0_mB4030DE8893E42B9FB0B1D9E786F4828885F1187(__this, SxActor_AddComponent_TisSxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0_mB4030DE8893E42B9FB0B1D9E786F4828885F1187_RuntimeMethod_var);
		__this->___MeshComponent_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MeshComponent_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshActor::SetMesh(DungeonArchitect.SxEngine.SxMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshActor_SetMesh_m63BD667911A519304A0C611C01F0FCEEEF1EE780 (SxMeshActor_t2DA2E51CCA7391FDEB5ACFEA3A45B00ED46B82B4* __this, SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* ___0_mesh, const RuntimeMethod* method) 
{
	{
		// MeshComponent.Mesh = mesh;
		SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* L_0 = __this->___MeshComponent_5;
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_1 = ___0_mesh;
		NullCheck(L_0);
		L_0->___Mesh_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___Mesh_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshActor::SetMaterial(DungeonArchitect.SxEngine.SxMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshActor_SetMaterial_mB21589EABDA0788705C728CFA4E19ACEA572981B (SxMeshActor_t2DA2E51CCA7391FDEB5ACFEA3A45B00ED46B82B4* __this, SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ___0_material, const RuntimeMethod* method) 
{
	{
		// MeshComponent.Material = material;
		SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* L_0 = __this->___MeshComponent_5;
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_1 = ___0_material;
		NullCheck(L_0);
		SxMeshComponent_set_Material_m27AE81476A0215052D91902267D426E1E6DF9B94_inline(L_0, L_1, NULL);
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
// System.Void DungeonArchitect.SxEngine.SxTextActor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextActor__ctor_m26E267B89EE4996E00797A10C72538982525888B (SxTextActor_t2EF408AA3E99597B91EA271BBD82AA0898E4C0AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxActor_AddComponent_TisSxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90_mBD9141C2CEB90763AA56F1E08BEF87F8EB23E77C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SxTextActor()
		SxActor__ctor_m6C363A81C813483EFC1A821CB21282F0967A22F1(__this, NULL);
		// TextComponent = AddComponent<SxTextComponent>();
		SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* L_0;
		L_0 = SxActor_AddComponent_TisSxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90_mBD9141C2CEB90763AA56F1E08BEF87F8EB23E77C(__this, SxActor_AddComponent_TisSxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90_mBD9141C2CEB90763AA56F1E08BEF87F8EB23E77C_RuntimeMethod_var);
		__this->___TextComponent_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextComponent_5), (void*)L_0);
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
// DungeonArchitect.SxEngine.SxMaterial DungeonArchitect.SxEngine.SxMeshComponent::get_Material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* SxMeshComponent_get_Material_mDFE4BE0E590AEE75021AC2524E48FD7596B73F43 (SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* __this, const RuntimeMethod* method) 
{
	{
		// get => _material;
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_0 = __this->____material_1;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshComponent::set_Material(DungeonArchitect.SxEngine.SxMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshComponent_set_Material_m27AE81476A0215052D91902267D426E1E6DF9B94 (SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* __this, SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _material = value;
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_0 = ___0_value;
		__this->____material_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_1), (void*)L_0);
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshComponent::Draw(DungeonArchitect.SxEngine.SxRenderContext,UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxRenderCommandList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshComponent_Draw_mFE464570B1248BA9943DE3E7979DC39D71B0D7CA (SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_accumWorldTransform, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___2_renderCommandList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMaterialRegistry_Get_TisSxDefaultMaterial_t150442D5B9A3F86A9E2D7EFC76E6F53D459E73B6_mE4AD314BA1BEDCC6ACF8B7D019C157291594E04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Draw(context, accumWorldTransform, renderCommandList);
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_0 = ___0_context;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_accumWorldTransform;
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_2 = ___2_renderCommandList;
		SxActorComponent_Draw_mA41C996A5286C64207E9B185C51A58AD50A598B0(__this, L_0, L_1, L_2, NULL);
		// if (Material == null)
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_3;
		L_3 = SxMeshComponent_get_Material_mDFE4BE0E590AEE75021AC2524E48FD7596B73F43_inline(__this, NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		// Material = SxMaterialRegistry.Get<SxDefaultMaterial>();
		il2cpp_codegen_runtime_class_init_inline(SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB_il2cpp_TypeInfo_var);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_4;
		L_4 = SxMaterialRegistry_Get_TisSxDefaultMaterial_t150442D5B9A3F86A9E2D7EFC76E6F53D459E73B6_mE4AD314BA1BEDCC6ACF8B7D019C157291594E04A(SxMaterialRegistry_Get_TisSxDefaultMaterial_t150442D5B9A3F86A9E2D7EFC76E6F53D459E73B6_mE4AD314BA1BEDCC6ACF8B7D019C157291594E04A_RuntimeMethod_var);
		SxMeshComponent_set_Material_m27AE81476A0215052D91902267D426E1E6DF9B94_inline(__this, L_4, NULL);
	}

IL_001c:
	{
		// if (Mesh != null)
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_5 = __this->___Mesh_0;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// renderCommandList.Add(new SxRenderCommand(accumWorldTransform, Mesh, Material));
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_6 = ___2_renderCommandList;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = ___1_accumWorldTransform;
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_8 = __this->___Mesh_0;
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_9;
		L_9 = SxMeshComponent_get_Material_mDFE4BE0E590AEE75021AC2524E48FD7596B73F43_inline(__this, NULL);
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_10 = (SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9*)il2cpp_codegen_object_new(SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		SxRenderCommand__ctor_m4D1D6A5198339A87772087D2D76238171AEC0281(L_10, L_7, L_8, L_9, NULL);
		NullCheck(L_6);
		SxRenderCommandList_Add_m0133D0D0E829AD66DAD7C98BF7948A5CFBE9C717(L_6, L_10, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshComponent__ctor_mE68263A09AC4206DBBD40B3AD2BD4C60341A1168 (SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* __this, const RuntimeMethod* method) 
{
	{
		SxActorComponent__ctor_m0C6FFD9EAC85FD36B005C58719A769F95F306F5C(__this, NULL);
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
// Conversion methods for marshalling of: DungeonArchitect.SxEngine.SxTextComponentSettings
IL2CPP_EXTERN_C void SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshal_pinvoke(const SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9& unmarshaled, SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Font_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Font' of type 'SxTextComponentSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Font_0Exception, NULL);
}
IL2CPP_EXTERN_C void SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshal_pinvoke_back(const SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshaled_pinvoke& marshaled, SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9& unmarshaled)
{
	Exception_t* ___Font_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Font' of type 'SxTextComponentSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Font_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: DungeonArchitect.SxEngine.SxTextComponentSettings
IL2CPP_EXTERN_C void SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshal_pinvoke_cleanup(SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: DungeonArchitect.SxEngine.SxTextComponentSettings
IL2CPP_EXTERN_C void SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshal_com(const SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9& unmarshaled, SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshaled_com& marshaled)
{
	Exception_t* ___Font_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Font' of type 'SxTextComponentSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Font_0Exception, NULL);
}
IL2CPP_EXTERN_C void SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshal_com_back(const SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshaled_com& marshaled, SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9& unmarshaled)
{
	Exception_t* ___Font_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Font' of type 'SxTextComponentSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Font_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: DungeonArchitect.SxEngine.SxTextComponentSettings
IL2CPP_EXTERN_C void SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshal_com_cleanup(SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9_marshaled_com& marshaled)
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
// System.String DungeonArchitect.SxEngine.SxTextComponent::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SxTextComponent_get_Text_m14443AA2AE0BE9930F418141618E4262659CDE0D (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, const RuntimeMethod* method) 
{
	{
		// get => text;
		String_t* L_0 = __this->___text_2;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxTextComponent::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent_set_Text_mEA630521F90B0F6781EBD553A099378DC9E0D703 (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = value;
		String_t* L_0 = ___0_value;
		__this->___text_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_2), (void*)L_0);
		// if (settings.Font != null)
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_1 = (&__this->___settings_3);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_2 = L_1->___Font_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// settings.Font.RequestCharactersInTexture(text);
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_4 = (&__this->___settings_3);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_5 = L_4->___Font_0;
		String_t* L_6 = __this->___text_2;
		NullCheck(L_5);
		Font_RequestCharactersInTexture_mB331838B63AEAF610A9EF70815F60ECB255D7C38(L_5, L_6, NULL);
	}

IL_0030:
	{
		// RebuildMesh();
		SxTextComponent_RebuildMesh_m9CDB096A8786ADADEC185F516B50A3A92FE7C765(__this, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxTextComponent::Initialize(DungeonArchitect.SxEngine.SxTextComponentSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent_Initialize_mDA9434AEFEC602F98FB8B0F27B926FCD49931D46 (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9 ___0_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxTextComponent_OnTextureRebuilt_mC7E5A0A51A2CD2252F132ED47E1F221C86483588_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.settings = settings;
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9 L_0 = ___0_settings;
		__this->___settings_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___settings_3))->___Font_0), (void*)NULL);
		// Font.textureRebuilt += OnTextureRebuilt;
		Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* L_1 = (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC*)il2cpp_codegen_object_new(Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m970A8DFC8A17354AB74107AC11E2ACE2A3D5200F(L_1, __this, (intptr_t)((void*)SxTextComponent_OnTextureRebuilt_mC7E5A0A51A2CD2252F132ED47E1F221C86483588_RuntimeMethod_var), NULL);
		Font_add_textureRebuilt_m0BBB44846C17A580B078599DA5AE231DA9D6DAD7(L_1, NULL);
		// if (settings.Font != null)
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9 L_2 = ___0_settings;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_3 = L_2.___Font_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// UpdateMaterial(settings.Font);
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9 L_5 = ___0_settings;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_6 = L_5.___Font_0;
		SxTextComponent_UpdateMaterial_m6A17DF2C63E6434CB431071DAE5B7E09AFF21481(__this, L_6, NULL);
		// RebuildMesh();
		SxTextComponent_RebuildMesh_m9CDB096A8786ADADEC185F516B50A3A92FE7C765(__this, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxTextComponent::UpdateMaterial(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent_UpdateMaterial_m6A17DF2C63E6434CB431071DAE5B7E09AFF21481 (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	{
		// var unityMat = font.material;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = ___0_font;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Font_get_material_m61ABDEC14C6D659DDC5A4F080023699116C17364(L_0, NULL);
		V_0 = L_1;
		// if (unityMat != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// material = new SxUnityMaterial(unityMat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_0;
		SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68* L_5 = (SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68*)il2cpp_codegen_object_new(SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SxUnityMaterial__ctor_mC45EE41F5EDE3B6F4DCC4910429B1C4A100BB94F(L_5, L_4, NULL);
		__this->___material_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_1), (void*)L_5);
		// material.DepthBias = settings.DepthBias;
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_6 = __this->___material_1;
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_7 = (&__this->___settings_3);
		float L_8 = L_7->___DepthBias_5;
		NullCheck(L_6);
		L_6->___DepthBias_1 = L_8;
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxTextComponent::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent_Destroy_m9F61464934B2B9D7E41C5B11328CADCE667B618A (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxTextComponent_OnTextureRebuilt_mC7E5A0A51A2CD2252F132ED47E1F221C86483588_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Destroy();
		SxActorComponent_Destroy_mC9B4422A445CD84A553DC6F938122D0B2CCED691(__this, NULL);
		// Font.textureRebuilt -= OnTextureRebuilt;
		Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* L_0 = (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC*)il2cpp_codegen_object_new(Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m970A8DFC8A17354AB74107AC11E2ACE2A3D5200F(L_0, __this, (intptr_t)((void*)SxTextComponent_OnTextureRebuilt_mC7E5A0A51A2CD2252F132ED47E1F221C86483588_RuntimeMethod_var), NULL);
		Font_remove_textureRebuilt_mB7EF9EEE803E9C70AF4217190B49C83FE287904A(L_0, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxTextComponent::OnTextureRebuilt(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent_OnTextureRebuilt_mC7E5A0A51A2CD2252F132ED47E1F221C86483588 (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, const RuntimeMethod* method) 
{
	{
		// UpdateMaterial(font);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = ___0_font;
		SxTextComponent_UpdateMaterial_m6A17DF2C63E6434CB431071DAE5B7E09AFF21481(__this, L_0, NULL);
		// RebuildMesh();
		SxTextComponent_RebuildMesh_m9CDB096A8786ADADEC185F516B50A3A92FE7C765(__this, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxTextComponent::Draw(DungeonArchitect.SxEngine.SxRenderContext,UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxRenderCommandList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent_Draw_m04B51C91CA3DDF37FEAE51FE2C9F8C8395066A19 (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_accumWorldTransform, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___2_renderCommandList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Draw(context, accumWorldTransform, renderCommandList);
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_0 = ___0_context;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_accumWorldTransform;
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_2 = ___2_renderCommandList;
		SxActorComponent_Draw_mA41C996A5286C64207E9B185C51A58AD50A598B0(__this, L_0, L_1, L_2, NULL);
		// if (mesh != null && material != null)
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_3 = __this->___mesh_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_4 = __this->___material_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// renderCommandList.Add(new SxRenderCommand(accumWorldTransform, mesh, material));
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_5 = ___2_renderCommandList;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___1_accumWorldTransform;
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_7 = __this->___mesh_0;
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_8 = __this->___material_1;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_9 = (SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9*)il2cpp_codegen_object_new(SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		SxRenderCommand__ctor_m4D1D6A5198339A87772087D2D76238171AEC0281(L_9, L_6, L_7, L_8, NULL);
		NullCheck(L_5);
		SxRenderCommandList_Add_m0133D0D0E829AD66DAD7C98BF7948A5CFBE9C717(L_5, L_9, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxTextComponent::RebuildMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent_RebuildMesh_m9CDB096A8786ADADEC185F516B50A3A92FE7C765 (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0A4BDF0D1B2F60D1A2945EE762E80BA636C5129C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2E26B46AAB9C3ECAD7BD87F4CFF7B9E126A6560C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2340E415C6153047F2988871339524D771EEC676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0735EA26CD7124A4E2D4ED1B7AC7653A62EB3714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m1B05344A1098A1C37A6D4133999EBE3B11081B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	CharacterInfo_t211705CECE52870AEC4DBD0574D581AF765BB889 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		// mesh = null;
		__this->___mesh_0 = (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_0), (void*)(SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B*)NULL);
		// if (material == null || text == null || text.Length == 0 || settings.Font == null)
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_0 = __this->___material_1;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_1 = __this->___text_2;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_2 = __this->___text_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_4 = (&__this->___settings_3);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_5 = L_4->___Font_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}

IL_0037:
	{
		// return;
		return;
	}

IL_0038:
	{
		// UpdateMaterial(settings.Font);
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_7 = (&__this->___settings_3);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_8 = L_7->___Font_0;
		SxTextComponent_UpdateMaterial_m6A17DF2C63E6434CB431071DAE5B7E09AFF21481(__this, L_8, NULL);
		// var scale = settings.Scale / settings.Font.fontSize;
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_9 = (&__this->___settings_3);
		float L_10 = L_9->___Scale_2;
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_11 = (&__this->___settings_3);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_12 = L_11->___Font_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Font_get_fontSize_m02C2F5C7A7C89A878F04C2087248DD46BBF9E26B(L_12, NULL);
		V_0 = ((float)(L_10/((float)L_13)));
		// var vertices = new List<SxMeshVertex>();
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_14 = (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1*)il2cpp_codegen_object_new(List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4(L_14, List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4_RuntimeMethod_var);
		V_1 = L_14;
		// var pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_15;
		// var textHeight = 0.0f;
		V_3 = (0.0f);
		// var textWidth = 0.0f;
		V_4 = (0.0f);
		// for (var i = 0; i < text.Length; i++)
		V_6 = 0;
		goto IL_021a;
	}

IL_0088:
	{
		// settings.Font.GetCharacterInfo(text[i], out ch);
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_16 = (&__this->___settings_3);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_17 = L_16->___Font_0;
		String_t* L_18 = __this->___text_2;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		Il2CppChar L_20;
		L_20 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_18, L_19, NULL);
		NullCheck(L_17);
		bool L_21;
		L_21 = Font_GetCharacterInfo_mEC706A59008A40BEFD7448A2F06589747E138EDB(L_17, L_20, (&V_7), NULL);
		// var p0 = pos + new Vector3(ch.minX, ch.maxY, 0) * scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		int32_t L_23;
		L_23 = CharacterInfo_get_minX_m69B3FB781E712AE29CDEC596F9932862FB553328((&V_7), NULL);
		int32_t L_24;
		L_24 = CharacterInfo_get_maxY_m2439B7BB55176E566ECE4CAB87B3AA252DF46927((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((float)L_23), ((float)L_24), (0.0f), /*hidden argument*/NULL);
		float L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_27, NULL);
		V_8 = L_28;
		// var p1 = pos + new Vector3(ch.maxX, ch.maxY, 0) * scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		int32_t L_30;
		L_30 = CharacterInfo_get_maxX_m55625E1CD75FA327A33D2DA9C4A15C846CBB0A20((&V_7), NULL);
		int32_t L_31;
		L_31 = CharacterInfo_get_maxY_m2439B7BB55176E566ECE4CAB87B3AA252DF46927((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), ((float)L_30), ((float)L_31), (0.0f), /*hidden argument*/NULL);
		float L_33 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_34, NULL);
		V_9 = L_35;
		// var p2 = pos + new Vector3(ch.maxX, ch.minY, 0) * scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_2;
		int32_t L_37;
		L_37 = CharacterInfo_get_maxX_m55625E1CD75FA327A33D2DA9C4A15C846CBB0A20((&V_7), NULL);
		int32_t L_38;
		L_38 = CharacterInfo_get_minY_m9BC2A892418F3E986B0EAFE56F28FABD8CAA4A3A((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), ((float)L_37), ((float)L_38), (0.0f), /*hidden argument*/NULL);
		float L_40 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_41, NULL);
		V_10 = L_42;
		// var p3 = pos + new Vector3(ch.minX, ch.minY, 0) * scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_2;
		int32_t L_44;
		L_44 = CharacterInfo_get_minX_m69B3FB781E712AE29CDEC596F9932862FB553328((&V_7), NULL);
		int32_t L_45;
		L_45 = CharacterInfo_get_minY_m9BC2A892418F3E986B0EAFE56F28FABD8CAA4A3A((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), ((float)L_44), ((float)L_45), (0.0f), /*hidden argument*/NULL);
		float L_47 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_43, L_48, NULL);
		V_11 = L_49;
		// var t0 = ch.uvTopLeft;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = CharacterInfo_get_uvTopLeft_m8366979523BC656BF87BA43327604E6870BC6A33((&V_7), NULL);
		V_12 = L_50;
		// var t1 = ch.uvTopRight;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = CharacterInfo_get_uvTopRight_m706389A181F4E4EAAB886C08D6E1A9C3D8FD2C16((&V_7), NULL);
		V_13 = L_51;
		// var t2 = ch.uvBottomRight;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = CharacterInfo_get_uvBottomRight_m2A6F8FA7B8C05E65653AE2986E0889CCEAE3EF17((&V_7), NULL);
		V_14 = L_52;
		// var t3 = ch.uvBottomLeft;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = CharacterInfo_get_uvBottomLeft_mDBE99341E4D50DB991F249E438891D118AB2DF9F((&V_7), NULL);
		V_15 = L_53;
		// vertices.Add(new SxMeshVertex(p0, settings.Color, t0));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_54 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_8;
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_56 = (&__this->___settings_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57 = L_56->___Color_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_12;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_59 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11(L_59, L_55, L_57, L_58, NULL);
		NullCheck(L_54);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_54, L_59, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(p1, settings.Color, t1));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_60 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_9;
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_62 = (&__this->___settings_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63 = L_62->___Color_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = V_13;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_65 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11(L_65, L_61, L_63, L_64, NULL);
		NullCheck(L_60);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_60, L_65, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(p2, settings.Color, t2));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_66 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_10;
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_68 = (&__this->___settings_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69 = L_68->___Color_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = V_14;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_71 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11(L_71, L_67, L_69, L_70, NULL);
		NullCheck(L_66);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_66, L_71, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(p3, settings.Color, t3));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_72 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_11;
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_74 = (&__this->___settings_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_75 = L_74->___Color_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = V_15;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_77 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11(L_77, L_73, L_75, L_76, NULL);
		NullCheck(L_72);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_72, L_77, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// pos += new Vector3(ch.advance * scale, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_2;
		int32_t L_79;
		L_79 = CharacterInfo_get_advance_m0AAC68ABA1BD5B184B53E01F270BA4FD1D2C2B9A((&V_7), NULL);
		float L_80 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_81), ((float)il2cpp_codegen_multiply(((float)L_79), L_80)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_78, L_81, NULL);
		V_2 = L_82;
		// textHeight = Mathf.Max(textHeight, ch.maxY * scale);
		float L_83 = V_3;
		int32_t L_84;
		L_84 = CharacterInfo_get_maxY_m2439B7BB55176E566ECE4CAB87B3AA252DF46927((&V_7), NULL);
		float L_85 = V_0;
		float L_86;
		L_86 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_83, ((float)il2cpp_codegen_multiply(((float)L_84), L_85)), NULL);
		V_3 = L_86;
		// textWidth += ch.advance * scale;
		float L_87 = V_4;
		int32_t L_88;
		L_88 = CharacterInfo_get_advance_m0AAC68ABA1BD5B184B53E01F270BA4FD1D2C2B9A((&V_7), NULL);
		float L_89 = V_0;
		V_4 = ((float)il2cpp_codegen_add(L_87, ((float)il2cpp_codegen_multiply(((float)L_88), L_89))));
		// for (var i = 0; i < text.Length; i++)
		int32_t L_90 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_021a:
	{
		// for (var i = 0; i < text.Length; i++)
		int32_t L_91 = V_6;
		String_t* L_92 = __this->___text_2;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_92, NULL);
		if ((((int32_t)L_91) < ((int32_t)L_93)))
		{
			goto IL_0088;
		}
	}
	{
		// var offset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_5 = L_94;
		// if (settings.VAlign == SxTextVAlign.Center)
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_95 = (&__this->___settings_3);
		int32_t L_96 = L_95->___VAlign_4;
		if ((!(((uint32_t)L_96) == ((uint32_t)1))))
		{
			goto IL_0255;
		}
	}
	{
		// offset.y -= textHeight * 0.5f;
		float* L_97 = (&(&V_5)->___y_3);
		float* L_98 = L_97;
		float L_99 = *((float*)L_98);
		float L_100 = V_3;
		*((float*)L_98) = (float)((float)il2cpp_codegen_subtract(L_99, ((float)il2cpp_codegen_multiply(L_100, (0.5f)))));
		goto IL_026e;
	}

IL_0255:
	{
		// else if (settings.VAlign == SxTextVAlign.Top)
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_101 = (&__this->___settings_3);
		int32_t L_102 = L_101->___VAlign_4;
		if (L_102)
		{
			goto IL_026e;
		}
	}
	{
		// offset.y -= textHeight;
		float* L_103 = (&(&V_5)->___y_3);
		float* L_104 = L_103;
		float L_105 = *((float*)L_104);
		float L_106 = V_3;
		*((float*)L_104) = (float)((float)il2cpp_codegen_subtract(L_105, L_106));
	}

IL_026e:
	{
		// if (settings.HAlign == SxTextHAlign.Center)
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_107 = (&__this->___settings_3);
		int32_t L_108 = L_107->___HAlign_3;
		if ((!(((uint32_t)L_108) == ((uint32_t)1))))
		{
			goto IL_0291;
		}
	}
	{
		// offset.x -= textWidth * 0.5f;
		float* L_109 = (&(&V_5)->___x_2);
		float* L_110 = L_109;
		float L_111 = *((float*)L_110);
		float L_112 = V_4;
		*((float*)L_110) = (float)((float)il2cpp_codegen_subtract(L_111, ((float)il2cpp_codegen_multiply(L_112, (0.5f)))));
		goto IL_02ac;
	}

IL_0291:
	{
		// else if (settings.HAlign == SxTextHAlign.Right)
		SxTextComponentSettings_t24C82AEEF483A523D38A7BBB63C278BE184D6AA9* L_113 = (&__this->___settings_3);
		int32_t L_114 = L_113->___HAlign_3;
		if ((!(((uint32_t)L_114) == ((uint32_t)2))))
		{
			goto IL_02ac;
		}
	}
	{
		// offset.x -= textWidth;
		float* L_115 = (&(&V_5)->___x_2);
		float* L_116 = L_115;
		float L_117 = *((float*)L_116);
		float L_118 = V_4;
		*((float*)L_116) = (float)((float)il2cpp_codegen_subtract(L_117, L_118));
	}

IL_02ac:
	{
		// foreach (var vertex in vertices)
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_119 = V_1;
		NullCheck(L_119);
		Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4 L_120;
		L_120 = List_1_GetEnumerator_m0735EA26CD7124A4E2D4ED1B7AC7653A62EB3714(L_119, List_1_GetEnumerator_m0735EA26CD7124A4E2D4ED1B7AC7653A62EB3714_RuntimeMethod_var);
		V_16 = L_120;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02da:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0A4BDF0D1B2F60D1A2945EE762E80BA636C5129C((&V_16), Enumerator_Dispose_m0A4BDF0D1B2F60D1A2945EE762E80BA636C5129C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02cf_1;
			}

IL_02b6_1:
			{
				// foreach (var vertex in vertices)
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_121;
				L_121 = Enumerator_get_Current_m2340E415C6153047F2988871339524D771EEC676_inline((&V_16), Enumerator_get_Current_m2340E415C6153047F2988871339524D771EEC676_RuntimeMethod_var);
				// vertex.Position += offset;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_122 = L_121;
				NullCheck(L_122);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
				L_123 = SxMeshVertex_get_Position_mAE27FFE26F37AE902092C574695F4AEAE94A10F5_inline(L_122, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
				L_125 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_123, L_124, NULL);
				NullCheck(L_122);
				SxMeshVertex_set_Position_m20DCA6423C159798D3A35DECCEEA82FA30B7452A_inline(L_122, L_125, NULL);
			}

IL_02cf_1:
			{
				// foreach (var vertex in vertices)
				bool L_126;
				L_126 = Enumerator_MoveNext_m2E26B46AAB9C3ECAD7BD87F4CFF7B9E126A6560C((&V_16), Enumerator_MoveNext_m2E26B46AAB9C3ECAD7BD87F4CFF7B9E126A6560C_RuntimeMethod_var);
				if (L_126)
				{
					goto IL_02b6_1;
				}
			}
			{
				goto IL_02e8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02e8:
	{
		// mesh = new SxMesh();
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_127 = (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B*)il2cpp_codegen_object_new(SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B_il2cpp_TypeInfo_var);
		NullCheck(L_127);
		SxMesh__ctor_mDF54410B7469AC026B0951FF74D78D230730411E(L_127, NULL);
		__this->___mesh_0 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_0), (void*)L_127);
		// mesh.CreateSection(0, GL.QUADS, vertices.ToArray());
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_128 = __this->___mesh_0;
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_129 = V_1;
		NullCheck(L_129);
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_130;
		L_130 = List_1_ToArray_m1B05344A1098A1C37A6D4133999EBE3B11081B54(L_129, List_1_ToArray_m1B05344A1098A1C37A6D4133999EBE3B11081B54_RuntimeMethod_var);
		NullCheck(L_128);
		SxMesh_CreateSection_m57EBE3C7ACA6F8B8A40386205A8F0133FB1595EB(L_128, 0, 7, L_130, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxTextComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTextComponent__ctor_mEB468DEF49699E4294D6FBA894975EB8A71646E5 (SxTextComponent_t7E50FBC1C65438016F0759CCF9E4BE7B1AC49A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string text = "";
		__this->___text_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		SxActorComponent__ctor_m0C6FFD9EAC85FD36B005C58719A769F95F306F5C(__this, NULL);
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
// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxMeshVertex::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxMeshVertex_get_Position_mAE27FFE26F37AE902092C574695F4AEAE94A10F5 (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPositionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex_set_Position_m20DCA6423C159798D3A35DECCEEA82FA30B7452A (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// UnityEngine.Color DungeonArchitect.SxEngine.SxMeshVertex::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SxMeshVertex_get_Color_mEDEF4776F7756BFACDE6EE7D4D67C953AA82B286 (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { get; set; } = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CColorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex_set_Color_m1A218CBC467001902157712F8FD8C33BE3764097 (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color Color { get; set; } = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___U3CColorU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Vector2 DungeonArchitect.SxEngine.SxMeshVertex::get_UV0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SxMeshVertex_get_UV0_mDC91E4537FA5D156F6F95F51E5E25AAE6E616561 (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 UV0 { get; set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CUV0U3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::set_UV0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex_set_UV0_mF39249B682641156BD43C02A7FD98561215DC628 (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 UV0 { get; set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CUV0U3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex__ctor_m1B7380A846B11D3C5C0B37080C2B85A6EB2C77EA (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		// public Color Color { get; set; } = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___U3CColorU3Ek__BackingField_1 = L_1;
		// public Vector2 UV0 { get; set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___U3CUV0U3Ek__BackingField_2 = L_2;
		// public SxMeshVertex()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex__ctor_m68F3A39ACE02CCFFF5A15C7D54A90DEDDCB275E3 (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		// public Color Color { get; set; } = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___U3CColorU3Ek__BackingField_1 = L_1;
		// public Vector2 UV0 { get; set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___U3CUV0U3Ek__BackingField_2 = L_2;
		// public SxMeshVertex(Vector3 position)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.Position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		SxMeshVertex_set_Position_m20DCA6423C159798D3A35DECCEEA82FA30B7452A_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::.ctor(UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		// public Color Color { get; set; } = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___U3CColorU3Ek__BackingField_1 = L_1;
		// public Vector2 UV0 { get; set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___U3CUV0U3Ek__BackingField_2 = L_2;
		// public SxMeshVertex(Vector3 position, Color color)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.Position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		SxMeshVertex_set_Position_m20DCA6423C159798D3A35DECCEEA82FA30B7452A_inline(__this, L_3, NULL);
		// this.Color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_color;
		SxMeshVertex_set_Color_m1A218CBC467001902157712F8FD8C33BE3764097_inline(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshVertex::.ctor(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11 (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_uv0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		// public Color Color { get; set; } = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___U3CColorU3Ek__BackingField_1 = L_1;
		// public Vector2 UV0 { get; set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___U3CUV0U3Ek__BackingField_2 = L_2;
		// public SxMeshVertex(Vector3 position, Color color, Vector2 uv0)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.Position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		SxMeshVertex_set_Position_m20DCA6423C159798D3A35DECCEEA82FA30B7452A_inline(__this, L_3, NULL);
		// this.Color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_color;
		SxMeshVertex_set_Color_m1A218CBC467001902157712F8FD8C33BE3764097_inline(__this, L_4, NULL);
		// this.UV0 = uv0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___2_uv0;
		SxMeshVertex_set_UV0_mF39249B682641156BD43C02A7FD98561215DC628_inline(__this, L_5, NULL);
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
// System.Int32 DungeonArchitect.SxEngine.SxMeshSection::get_DrawMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SxMeshSection_get_DrawMode_mAEE1C13FD53C6339E803D3738BAB4E7FA9EEB56C (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, const RuntimeMethod* method) 
{
	{
		// public int DrawMode { get; set; } = GL.LINES;
		int32_t L_0 = __this->___U3CDrawModeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshSection::set_DrawMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshSection_set_DrawMode_mAAEEF4E22BF6A15E6DC46DCCBDDE16D31EA73E63 (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int DrawMode { get; set; } = GL.LINES;
		int32_t L_0 = ___0_value;
		__this->___U3CDrawModeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// DungeonArchitect.SxEngine.SxMeshVertex[] DungeonArchitect.SxEngine.SxMeshSection::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* SxMeshSection_get_Vertices_m98DC66D5FE65E65FB61242D2A3E81CBAB01C0417 (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, const RuntimeMethod* method) 
{
	{
		// public SxMeshVertex[] Vertices { get; set; } = new SxMeshVertex[0];
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_0 = __this->___U3CVerticesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshSection::set_Vertices(DungeonArchitect.SxEngine.SxMeshVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshSection_set_Vertices_m77942424BEC7596C19385CD110A05B6B217A98DC (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SxMeshVertex[] Vertices { get; set; } = new SxMeshVertex[0];
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_0 = ___0_value;
		__this->___U3CVerticesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVerticesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshSection__ctor_m9F95EB62D488727C728AE4774A0778A967B2C000 (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int DrawMode { get; set; } = GL.LINES;
		__this->___U3CDrawModeU3Ek__BackingField_0 = 1;
		// public SxMeshVertex[] Vertices { get; set; } = new SxMeshVertex[0];
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_0 = (SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C*)(SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C*)SZArrayNew(SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___U3CVerticesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVerticesU3Ek__BackingField_1), (void*)L_0);
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
// System.Void DungeonArchitect.SxEngine.SxMesh::CreateSection(System.Int32,System.Int32,DungeonArchitect.SxEngine.SxMeshVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMesh_CreateSection_m57EBE3C7ACA6F8B8A40386205A8F0133FB1595EB (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* __this, int32_t ___0_sectionIndex, int32_t ___1_drawMode, SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* ___2_vertices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD8142D9C5E9540A954459F4B9D0F4B80C450B612_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* V_0 = NULL;
	{
		// ClearSection(sectionIndex);
		int32_t L_0 = ___0_sectionIndex;
		SxMesh_ClearSection_m60FB9A50D1D0CE253EABFB930CE95567928F4402(__this, L_0, NULL);
		// var section = new SxMeshSection();
		SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_1 = (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2*)il2cpp_codegen_object_new(SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SxMeshSection__ctor_m9F95EB62D488727C728AE4774A0778A967B2C000(L_1, NULL);
		V_0 = L_1;
		// section.DrawMode = drawMode;
		SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_2 = V_0;
		int32_t L_3 = ___1_drawMode;
		NullCheck(L_2);
		SxMeshSection_set_DrawMode_mAAEEF4E22BF6A15E6DC46DCCBDDE16D31EA73E63_inline(L_2, L_3, NULL);
		// section.Vertices = vertices;
		SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_4 = V_0;
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_5 = ___2_vertices;
		NullCheck(L_4);
		SxMeshSection_set_Vertices_m77942424BEC7596C19385CD110A05B6B217A98DC_inline(L_4, L_5, NULL);
		// Sections.Add(sectionIndex, section);
		Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* L_6 = __this->___Sections_0;
		int32_t L_7 = ___0_sectionIndex;
		SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_8 = V_0;
		NullCheck(L_6);
		Dictionary_2_Add_mD8142D9C5E9540A954459F4B9D0F4B80C450B612(L_6, L_7, L_8, Dictionary_2_Add_mD8142D9C5E9540A954459F4B9D0F4B80C450B612_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMesh::ClearSection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMesh_ClearSection_m60FB9A50D1D0CE253EABFB930CE95567928F4402 (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* __this, int32_t ___0_sectionIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC73891D0E8BDA2C8D5614F82CCD8272E97EA65DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Sections.Remove(sectionIndex);
		Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* L_0 = __this->___Sections_0;
		int32_t L_1 = ___0_sectionIndex;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_mC73891D0E8BDA2C8D5614F82CCD8272E97EA65DB(L_0, L_1, Dictionary_2_Remove_mC73891D0E8BDA2C8D5614F82CCD8272E97EA65DB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMesh::ClearAllSections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMesh_ClearAllSections_mD286555A6896BA9A29CFF7E48813B8D147F6C337 (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m3D173F933EF0E03C7262BE097662FE15D9B3AE32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Sections.Clear();
		Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* L_0 = __this->___Sections_0;
		NullCheck(L_0);
		Dictionary_2_Clear_m3D173F933EF0E03C7262BE097662FE15D9B3AE32(L_0, Dictionary_2_Clear_m3D173F933EF0E03C7262BE097662FE15D9B3AE32_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMesh__ctor_mDF54410B7469AC026B0951FF74D78D230730411E (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m21C8D525032C221A0E00BDE6BACBAF8D6F08EC69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<int, SxMeshSection> Sections = new Dictionary<int, SxMeshSection>();
		Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* L_0 = (Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6*)il2cpp_codegen_object_new(Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m21C8D525032C221A0E00BDE6BACBAF8D6F08EC69(L_0, Dictionary_2__ctor_m21C8D525032C221A0E00BDE6BACBAF8D6F08EC69_RuntimeMethod_var);
		__this->___Sections_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sections_0), (void*)L_0);
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
// System.Void DungeonArchitect.SxEngine.SxMeshRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshRegistry__ctor_m292185D419F05BC7C5DCFC6FE41C1B61CDE776ED (SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMeshRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshRegistry__cctor_mCC84890D25E94A7BD5894E414288F3F147AFC575 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m52A0F0B464E049697643A6A065E5FCFF726B0A66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<System.Type, SxMesh> cache = new Dictionary<System.Type, SxMesh>();
		Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC* L_0 = (Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC*)il2cpp_codegen_object_new(Dictionary_2_tD868B2529FAC18713084BF2C91AC9826538806CC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m52A0F0B464E049697643A6A065E5FCFF726B0A66(L_0, Dictionary_2__ctor_m52A0F0B464E049697643A6A065E5FCFF726B0A66_RuntimeMethod_var);
		((SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6_StaticFields*)il2cpp_codegen_static_fields_for(SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6_il2cpp_TypeInfo_var))->___cache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6_StaticFields*)il2cpp_codegen_static_fields_for(SxMeshRegistry_t9D7C08C02CC23939C533444FCEBF0301AE42CAA6_il2cpp_TypeInfo_var))->___cache_0), (void*)L_0);
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
// System.Void DungeonArchitect.SxEngine.SxQuadMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxQuadMesh__ctor_m06D80A4CC26177D0FD56D5C3C67380F38DB35C68 (SxQuadMesh_t755941132817A004E51784FBACEF02590B9A7E50* __this, const RuntimeMethod* method) 
{
	{
		// public SxQuadMesh()
		SxMesh__ctor_mDF54410B7469AC026B0951FF74D78D230730411E(__this, NULL);
		// Build(Color.white);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		SxQuadMesh_Build_mBE5641B0967EEB0E694EA6DA4B7C91B196896FED(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxQuadMesh::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxQuadMesh__ctor_m403B3BE6AC6A6424D05D9422F46F59B97F0EE9AE (SxQuadMesh_t755941132817A004E51784FBACEF02590B9A7E50* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// public SxQuadMesh(Color color)
		SxMesh__ctor_mDF54410B7469AC026B0951FF74D78D230730411E(__this, NULL);
		// Build(color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		SxQuadMesh_Build_mBE5641B0967EEB0E694EA6DA4B7C91B196896FED(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxQuadMesh::Build(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxQuadMesh_Build_mBE5641B0967EEB0E694EA6DA4B7C91B196896FED (SxQuadMesh_t755941132817A004E51784FBACEF02590B9A7E50* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* V_0 = NULL;
	{
		// var vertices = new SxMeshVertex[]
		// {
		//     new SxMeshVertex(new Vector3(-1, -1, 0), color, new Vector2(0, 0)),
		//     new SxMeshVertex(new Vector3(1, -1, 0), color, new Vector2(1, 0)),
		//     new SxMeshVertex(new Vector3(1, 1, 0), color, new Vector2(1, 1)),
		//     new SxMeshVertex(new Vector3(-1, 1, 0), color, new Vector2(0, 1))
		// };
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_0 = (SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C*)(SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C*)SZArrayNew(SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C_il2cpp_TypeInfo_var, (uint32_t)4);
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_5 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11(L_5, L_2, L_3, L_4, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)L_5);
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_6 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_color;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), (1.0f), (0.0f), /*hidden argument*/NULL);
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_10 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11(L_10, L_7, L_8, L_9, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)L_10);
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_11 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_color;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (1.0f), (1.0f), /*hidden argument*/NULL);
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_15 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11(L_15, L_12, L_13, L_14, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)L_15);
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_16 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (-1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___0_color;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), (0.0f), (1.0f), /*hidden argument*/NULL);
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_20 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		SxMeshVertex__ctor_m506C9E48B57E9F6655B6C3A4F363BA1F7606EE11(L_20, L_17, L_18, L_19, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)L_20);
		V_0 = L_16;
		// CreateSection(0, GL.QUADS, vertices);
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_21 = V_0;
		SxMesh_CreateSection_m57EBE3C7ACA6F8B8A40386205A8F0133FB1595EB(__this, 0, 7, L_21, NULL);
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
// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxCamera::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxCamera_get_Location_m310DA09594D938A393746256346A50CCBDB6FE3A (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) 
{
	{
		// get => location;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___location_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxCamera::set_Location(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxCamera_set_Location_m5A52DD4489A70488C3315B9ACCE2996C09CF0BCA (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (location != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___location_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// location = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		__this->___location_0 = L_3;
		// dirty = true;
		__this->___dirty_3 = (bool)1;
	}

IL_001c:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion DungeonArchitect.SxEngine.SxCamera::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SxCamera_get_Rotation_mCA07DDCBF6887AB545E5530067534003925CE481 (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) 
{
	{
		// get => rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___rotation_1;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxCamera::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxCamera_set_Rotation_m545A8BC14BF8A487598A99D9175F1BFF517F6708 (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (rotation != value)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_value;
		bool L_2;
		L_2 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// rotation = value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___0_value;
		__this->___rotation_1 = L_3;
		// dirty = true;
		__this->___dirty_3 = (bool)1;
	}

IL_001c:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxCamera::GetRightVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxCamera_GetRightVector_m4CDBB62CC7BA1935ECF5040CA525CFD4AF9139A7 (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var axisZ = Rotation * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = SxCamera_get_Rotation_mCA07DDCBF6887AB545E5530067534003925CE481_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_0, L_1, NULL);
		V_0 = L_2;
		// return Vector3.Cross(Vector3.up, axisZ);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_3, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.SxCamera::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SxCamera_get_ViewMatrix_m4395C364CFEEA88552BFA0E39F7FA7BE2E518EFC (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) 
{
	{
		// if (dirty)
		bool L_0 = __this->___dirty_3;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// BuildViewMatrix();
		SxCamera_BuildViewMatrix_m79EE0DA1075F62AC1D1719868A455E9A4B01BB22(__this, NULL);
	}

IL_000e:
	{
		// return viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = __this->___viewMatrix_2;
		return L_1;
	}
}
// System.Void DungeonArchitect.SxEngine.SxCamera::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxCamera_LookAt_m485A1554F566383EBA91A4D2596E511C62BFBB9F (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rotation = Quaternion.LookRotation((location - target).normalized);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___location_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_3, NULL);
		SxCamera_set_Rotation_m545A8BC14BF8A487598A99D9175F1BFF517F6708(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxCamera::BuildViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxCamera_BuildViewMatrix_m79EE0DA1075F62AC1D1719868A455E9A4B01BB22 (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var baseTransform = new Matrix4x4(
		//     new Vector4(-1, 0, 0, 0),
		//     new Vector4(0, 1, 0, 0),
		//     new Vector4(0, 0, 1, 0),
		//     new Vector4(0, 0, 0, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_0), (-1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_1), (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_2), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_3), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99((&V_0), L_0, L_1, L_2, L_3, NULL);
		// var camTransform = Matrix4x4.TRS(location, rotation, Vector3.one) * baseTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___location_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_4, L_5, L_6, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_7, L_8, NULL);
		V_1 = L_9;
		// viewMatrix = camTransform.inverse;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_1), NULL);
		__this->___viewMatrix_2 = L_10;
		// dirty = false;
		__this->___dirty_3 = (bool)0;
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxCamera__ctor_m458AD82A6C437B54D9F243A9E590DC62524663D3 (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 location = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___location_0 = L_0;
		// private Quaternion rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___rotation_1 = L_1;
		// private Matrix4x4 viewMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___viewMatrix_2 = L_2;
		// private bool dirty = true;
		__this->___dirty_3 = (bool)1;
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
// UnityEngine.Material DungeonArchitect.SxEngine.SxMaterial::get_UnityMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SxMaterial_get_UnityMaterial_m02A3EB2FE601E9AA25B98213AA07AFFD243A1AF1 (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, const RuntimeMethod* method) 
{
	{
		// public Material UnityMaterial { get => unityMaterial; }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___unityMaterial_0;
		return L_0;
	}
}
// System.Int32 DungeonArchitect.SxEngine.SxMaterial::get_RenderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SxMaterial_get_RenderQueue_mB88C2DAEF8F79E6E95FB4D2204F37F6AD83A83CA (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (unityMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___unityMaterial_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return unityMaterial.renderQueue;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___unityMaterial_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		// return 0;
		return 0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMaterial::Assign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMaterial_Assign_mEBEE9F3445AE86DBA0E5F0883F8D78E847D0E106 (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (unityMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___unityMaterial_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// unityMaterial.SetPass(0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___unityMaterial_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_2, 0, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// DungeonArchitect.SxEngine.SxMaterial DungeonArchitect.SxEngine.SxMaterial::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* SxMaterial_Clone_m566606453F0B94FA15B3FFC1B490B3BC4AD00BB2 (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	{
		// Material clonedMat = null;
		V_0 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		// if (unityMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___unityMaterial_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// clonedMat = Object.Instantiate(unityMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___unityMaterial_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171(L_2, Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001c:
	{
		// return new SxUnityMaterial(clonedMat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_0;
		SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68* L_5 = (SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68*)il2cpp_codegen_object_new(SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SxUnityMaterial__ctor_mC45EE41F5EDE3B6F4DCC4910429B1C4A100BB94F(L_5, L_4, NULL);
		return L_5;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMaterial::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMaterial_SetFloat_m3D59C336C8DA5A0FCD49ED2042A95A44D6758905 (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	{
		// unityMaterial.SetFloat(name, value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___unityMaterial_0;
		String_t* L_1 = ___0_name;
		float L_2 = ___1_value;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMaterial::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMaterial_SetInt_m720776FA257DF270871C946331ABA6190E00DDEF (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		// unityMaterial.SetInt(name, value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___unityMaterial_0;
		String_t* L_1 = ___0_name;
		int32_t L_2 = ___1_value;
		NullCheck(L_0);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMaterial::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMaterial_SetColor_m5DF6177231F54E6CAEAD6A1CD3471F9EDF8DEE5A (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) 
{
	{
		// unityMaterial.SetColor(name, value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___unityMaterial_0;
		String_t* L_1 = ___0_name;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_value;
		NullCheck(L_0);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMaterial__ctor_mF821DCB6A09A171E0EB0F2BFD698E39F89793C60 (SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.SxEngine.SxUnityMaterial::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxUnityMaterial__ctor_mC45EE41F5EDE3B6F4DCC4910429B1C4A100BB94F (SxUnityMaterial_t48D64B981EA9CE4374331725939E60B7D2A25E68* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	{
		// public SxUnityMaterial(Material material)
		SxMaterial__ctor_mF821DCB6A09A171E0EB0F2BFD698E39F89793C60(__this, NULL);
		// this.unityMaterial = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		((SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)__this)->___unityMaterial_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)__this)->___unityMaterial_0), (void*)L_0);
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
// System.Void DungeonArchitect.SxEngine.SxUnityResourceMaterial::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxUnityResourceMaterial__ctor_mA431922C67671D95F2A0DF5CEBE194FF917D3CF8 (SxUnityResourceMaterial_t4CF8EE5542FBAE4D99A53250349058595F3AAE67* __this, String_t* ___0_resourceName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SxUnityResourceMaterial(string resourceName)
		SxMaterial__ctor_mF821DCB6A09A171E0EB0F2BFD698E39F89793C60(__this, NULL);
		// unityMaterial = Resources.Load<Material>(resourceName);
		String_t* L_0 = ___0_resourceName;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E(L_0, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		((SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)__this)->___unityMaterial_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)__this)->___unityMaterial_0), (void*)L_1);
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
// System.Void DungeonArchitect.SxEngine.SxMaterialRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMaterialRegistry__ctor_mFE1E5F8382EE4DD1DE64FBBBB6F22F53B264CA79 (SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxMaterialRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMaterialRegistry__cctor_mB939C27BE7B15CF000C302FD825A3B37CCAA9685 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4D1A5BA38EEFBD55762278FE52D040EEE6575EB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<System.Type, SxMaterial> cache = new Dictionary<Type, SxMaterial>();
		Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6* L_0 = (Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6*)il2cpp_codegen_object_new(Dictionary_2_t8BA39A551D8C1B75124ED9F1263E41A64CC4E5E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4D1A5BA38EEFBD55762278FE52D040EEE6575EB8(L_0, Dictionary_2__ctor_m4D1A5BA38EEFBD55762278FE52D040EEE6575EB8_RuntimeMethod_var);
		((SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB_StaticFields*)il2cpp_codegen_static_fields_for(SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB_il2cpp_TypeInfo_var))->___cache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB_StaticFields*)il2cpp_codegen_static_fields_for(SxMaterialRegistry_t20F7CAA76B11B121DD86147B3EB8D0B2E8F2BCCB_il2cpp_TypeInfo_var))->___cache_0), (void*)L_0);
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
// System.Void DungeonArchitect.SxEngine.SxDefaultMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxDefaultMaterial__ctor_mCF52597BA079790E19EEC91E8E725EF487E9A615 (SxDefaultMaterial_t150442D5B9A3F86A9E2D7EFC76E6F53D459E73B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// public SxDefaultMaterial()
		SxMaterial__ctor_mF821DCB6A09A171E0EB0F2BFD698E39F89793C60(__this, NULL);
		// Shader shader = Shader.Find("Hidden/Internal-Colored");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE, NULL);
		V_0 = L_0;
		// unityMaterial = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_2, L_1, NULL);
		((SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)__this)->___unityMaterial_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)__this)->___unityMaterial_0), (void*)L_2);
		// unityMaterial.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ((SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)__this)->___unityMaterial_0;
		NullCheck(L_3);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_3, ((int32_t)61), NULL);
		// unityMaterial.SetInt("_SrcBlend", (int) UnityEngine.Rendering.BlendMode.SrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)__this)->___unityMaterial_0;
		NullCheck(L_4);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_4, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, NULL);
		// unityMaterial.SetInt("_DstBlend", (int) UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ((SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)__this)->___unityMaterial_0;
		NullCheck(L_5);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_5, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DungeonArchitect.SxEngine.SxRenderCommand::.ctor(UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxMesh,DungeonArchitect.SxEngine.SxMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommand__ctor_m4D1D6A5198339A87772087D2D76238171AEC0281 (SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_accumWorldTransform, SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* ___1_mesh, SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ___2_material, const RuntimeMethod* method) 
{
	{
		// public SxRenderCommand(Matrix4x4 accumWorldTransform, SxMesh mesh, SxMaterial material)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AccumWorldTransform = accumWorldTransform;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_accumWorldTransform;
		__this->___AccumWorldTransform_0 = L_0;
		// Mesh = mesh;
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_1 = ___1_mesh;
		__this->___Mesh_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Mesh_1), (void*)L_1);
		// Material = material;
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_2 = ___2_material;
		__this->___Material_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Material_2), (void*)L_2);
		// }
		return;
	}
}
// System.Int32 DungeonArchitect.SxEngine.SxRenderCommand::CompareTo(DungeonArchitect.SxEngine.SxRenderCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SxRenderCommand_CompareTo_m0D5FAEBB0E6DCAD7B1F2F838BC973719BEF792F3 (SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* __this, SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* ___0_b, const RuntimeMethod* method) 
{
	SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	float G_B10_0 = 0.0f;
	float G_B13_0 = 0.0f;
	{
		// var a = this;
		V_0 = __this;
		// var queueA = a.Material != null ? a.Material.RenderQueue : 0;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_0 = V_0;
		NullCheck(L_0);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_1 = L_0->___Material_2;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0018;
	}

IL_000d:
	{
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_2 = V_0;
		NullCheck(L_2);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_3 = L_2->___Material_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SxMaterial_get_RenderQueue_mB88C2DAEF8F79E6E95FB4D2204F37F6AD83A83CA(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0018:
	{
		V_1 = G_B3_0;
		// var queueB = b.Material != null ? b.Material.RenderQueue : 0;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_5 = ___0_b;
		NullCheck(L_5);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_6 = L_5->___Material_2;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_002f;
	}

IL_0024:
	{
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_7 = ___0_b;
		NullCheck(L_7);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_8 = L_7->___Material_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SxMaterial_get_RenderQueue_mB88C2DAEF8F79E6E95FB4D2204F37F6AD83A83CA(L_8, NULL);
		G_B6_0 = L_9;
	}

IL_002f:
	{
		V_2 = G_B6_0;
		// if (queueA == queueB)
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0092;
		}
	}
	{
		// var depthBiasA = a.Material != null ? a.Material.DepthBias : 0;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_12 = V_0;
		NullCheck(L_12);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_13 = L_12->___Material_2;
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		G_B10_0 = (0.0f);
		goto IL_004e;
	}

IL_0043:
	{
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_14 = V_0;
		NullCheck(L_14);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_15 = L_14->___Material_2;
		NullCheck(L_15);
		float L_16 = L_15->___DepthBias_1;
		G_B10_0 = L_16;
	}

IL_004e:
	{
		V_3 = G_B10_0;
		// var depthBiasB = b.Material != null ? b.Material.DepthBias : 0;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_17 = ___0_b;
		NullCheck(L_17);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_18 = L_17->___Material_2;
		if (L_18)
		{
			goto IL_005e;
		}
	}
	{
		G_B13_0 = (0.0f);
		goto IL_0069;
	}

IL_005e:
	{
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_19 = ___0_b;
		NullCheck(L_19);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_20 = L_19->___Material_2;
		NullCheck(L_20);
		float L_21 = L_20->___DepthBias_1;
		G_B13_0 = L_21;
	}

IL_0069:
	{
		V_4 = G_B13_0;
		// var da = a.distanceSqToCam + depthBiasA;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_22 = V_0;
		NullCheck(L_22);
		float L_23 = L_22->___distanceSqToCam_3;
		float L_24 = V_3;
		V_5 = ((float)il2cpp_codegen_add(L_23, L_24));
		// var db = b.distanceSqToCam + depthBiasB;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_25 = ___0_b;
		NullCheck(L_25);
		float L_26 = L_25->___distanceSqToCam_3;
		float L_27 = V_4;
		V_6 = ((float)il2cpp_codegen_add(L_26, L_27));
		// if (da == db) return 0;
		float L_28 = V_5;
		float L_29 = V_6;
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0088;
		}
	}
	{
		// if (da == db) return 0;
		return 0;
	}

IL_0088:
	{
		// return da > db ? -1 : 1;
		float L_30 = V_5;
		float L_31 = V_6;
		if ((((float)L_30) > ((float)L_31)))
		{
			goto IL_0090;
		}
	}
	{
		return 1;
	}

IL_0090:
	{
		return (-1);
	}

IL_0092:
	{
		// return queueA < queueB ? -1 : 1;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0098;
		}
	}
	{
		return 1;
	}

IL_0098:
	{
		return (-1);
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderCommand::UpdateDistanceToCam(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommand_UpdateDistanceToCam_m5FBFAACD3C51EB1D8F154E965A7E2BDBBF23EB51 (SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_camLocation, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// distanceSqToCam = (Matrix.GetTranslationDivW(ref AccumWorldTransform) - camLocation).sqrMagnitude;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = (&__this->___AccumWorldTransform_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Matrix_GetTranslationDivW_mF14D95109FC23D4327117FF6E134FC5627527F2F(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_camLocation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		__this->___distanceSqToCam_3 = L_4;
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
// DungeonArchitect.SxEngine.SxRenderCommand[] DungeonArchitect.SxEngine.SxRenderCommandList::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* SxRenderCommandList_get_Commands_mBE3006C58DED9DE8557216E434C5DFE0F788C1BE (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF2E5BBFE7D1D3171C3FC37BCECDCBFFA05EF785D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => renderCommands.ToArray();
		List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* L_0 = __this->___renderCommands_0;
		NullCheck(L_0);
		SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* L_1;
		L_1 = List_1_ToArray_mF2E5BBFE7D1D3171C3FC37BCECDCBFFA05EF785D(L_0, List_1_ToArray_mF2E5BBFE7D1D3171C3FC37BCECDCBFFA05EF785D_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderCommandList::Add(DungeonArchitect.SxEngine.SxRenderCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommandList_Add_m0133D0D0E829AD66DAD7C98BF7948A5CFBE9C717 (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* ___0_command, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CBFDDF7BE88345F0FA5C88FC64D6B2D26D3436F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderCommands.Add(command);
		List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* L_0 = __this->___renderCommands_0;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_1 = ___0_command;
		NullCheck(L_0);
		List_1_Add_m1CBFDDF7BE88345F0FA5C88FC64D6B2D26D3436F_inline(L_0, L_1, List_1_Add_m1CBFDDF7BE88345F0FA5C88FC64D6B2D26D3436F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderCommandList::Sort(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommandList_Sort_mCD552229CFD34488AF3C0F3E91246FCC46966077 (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_camLocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m11506892BCA7D0C8498393BE3AAD0F02C9FDAB80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateDistanceFromCam(camLocation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_camLocation;
		SxRenderCommandList_UpdateDistanceFromCam_mB98B74E04FF6A05D9CE0F31B5AC105CFA6570EF9(__this, L_0, NULL);
		// renderCommands.Sort();
		List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* L_1 = __this->___renderCommands_0;
		NullCheck(L_1);
		List_1_Sort_m11506892BCA7D0C8498393BE3AAD0F02C9FDAB80(L_1, List_1_Sort_m11506892BCA7D0C8498393BE3AAD0F02C9FDAB80_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderCommandList::UpdateDistanceFromCam(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommandList_UpdateDistanceFromCam_mB98B74E04FF6A05D9CE0F31B5AC105CFA6570EF9 (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_camLocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAED596B5A803EFECE524D1847C167D1B8B041FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFB14966B2581EB4433BC3D0994255EE1A473B76B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDB8825BFB3E28455C75A5F2676F7DD6D9AD6DC57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1DEC805C20715DE8B32653877DC3E64C7351A8AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var command in renderCommands)
		List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* L_0 = __this->___renderCommands_0;
		NullCheck(L_0);
		Enumerator_t21AA666C8D74FED01E1A064DBC5C46FAE7D935D7 L_1;
		L_1 = List_1_GetEnumerator_m1DEC805C20715DE8B32653877DC3E64C7351A8AE(L_0, List_1_GetEnumerator_m1DEC805C20715DE8B32653877DC3E64C7351A8AE_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAED596B5A803EFECE524D1847C167D1B8B041FDD((&V_0), Enumerator_Dispose_mAED596B5A803EFECE524D1847C167D1B8B041FDD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach (var command in renderCommands)
				SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_2;
				L_2 = Enumerator_get_Current_mDB8825BFB3E28455C75A5F2676F7DD6D9AD6DC57_inline((&V_0), Enumerator_get_Current_mDB8825BFB3E28455C75A5F2676F7DD6D9AD6DC57_RuntimeMethod_var);
				// command.UpdateDistanceToCam(camLocation);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_camLocation;
				NullCheck(L_2);
				SxRenderCommand_UpdateDistanceToCam_m5FBFAACD3C51EB1D8F154E965A7E2BDBBF23EB51(L_2, L_3, NULL);
			}

IL_001b_1:
			{
				// foreach (var command in renderCommands)
				bool L_4;
				L_4 = Enumerator_MoveNext_mFB14966B2581EB4433BC3D0994255EE1A473B76B((&V_0), Enumerator_MoveNext_mFB14966B2581EB4433BC3D0994255EE1A473B76B_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderCommandList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderCommandList__ctor_m4BDCE991E81F5EBC60AE61BAE42E449A52BA682D (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA599088549E3B2ADD06FCF3DEC3619AFE1D6E07F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<SxRenderCommand> renderCommands = new List<SxRenderCommand>();
		List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4* L_0 = (List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4*)il2cpp_codegen_object_new(List_1_tEF2466ACEAB9372712FF2226A2B1B8865F7A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA599088549E3B2ADD06FCF3DEC3619AFE1D6E07F(L_0, List_1__ctor_mA599088549E3B2ADD06FCF3DEC3619AFE1D6E07F_RuntimeMethod_var);
		__this->___renderCommands_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderCommands_0), (void*)L_0);
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
// UnityEngine.RenderTexture DungeonArchitect.SxEngine.SxRenderer::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	{
		// public RenderTexture Texture { get; private set; }
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3CTextureU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::set_Texture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_set_Texture_m83039C77317DDF2A217301C376845112F03BB562 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) 
{
	{
		// public RenderTexture Texture { get; private set; }
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_value;
		__this->___U3CTextureU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextureU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// DungeonArchitect.SxEngine.SxCamera DungeonArchitect.SxEngine.SxRenderer::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* SxRenderer_get_Camera_m06F15377120A653FCDD0FBA924E6EF1FC9D96E53 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	{
		// public SxCamera Camera { get; } = new SxCamera();
		SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* L_0 = __this->___U3CCameraU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Single DungeonArchitect.SxEngine.SxRenderer::get_FOV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SxRenderer_get_FOV_m04B5ECB56E05213629AE62FB5684AA80CADFF072 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	{
		// public float FOV { get; } = 75;
		float L_0 = __this->___U3CFOVU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::add_Draw(DungeonArchitect.SxEngine.SxRenderer/DrawDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_add_Draw_mFBEF73AAD3D9876AB5A94FDF70C5D268A6A13BAB (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* V_0 = NULL;
	DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* V_1 = NULL;
	DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* V_2 = NULL;
	{
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_0 = __this->___Draw_4;
		V_0 = L_0;
	}

IL_0007:
	{
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_1 = V_0;
		V_1 = L_1;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_2 = V_1;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71*)CastclassSealed((RuntimeObject*)L_4, DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71_il2cpp_TypeInfo_var));
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71** L_5 = (&__this->___Draw_4);
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_6 = V_2;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_7 = V_1;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_8;
		L_8 = InterlockedCompareExchangeImpl<DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71*>(L_5, L_6, L_7);
		V_0 = L_8;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_9 = V_0;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_10 = V_1;
		if ((!(((RuntimeObject*)(DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71*)L_9) == ((RuntimeObject*)(DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::remove_Draw(DungeonArchitect.SxEngine.SxRenderer/DrawDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_remove_Draw_mDD5E14FD3DFEC0784D46186C10845CEE86D2A941 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* V_0 = NULL;
	DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* V_1 = NULL;
	DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* V_2 = NULL;
	{
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_0 = __this->___Draw_4;
		V_0 = L_0;
	}

IL_0007:
	{
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_1 = V_0;
		V_1 = L_1;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_2 = V_1;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71*)CastclassSealed((RuntimeObject*)L_4, DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71_il2cpp_TypeInfo_var));
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71** L_5 = (&__this->___Draw_4);
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_6 = V_2;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_7 = V_1;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_8;
		L_8 = InterlockedCompareExchangeImpl<DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71*>(L_5, L_6, L_7);
		V_0 = L_8;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_9 = V_0;
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_10 = V_1;
		if ((!(((RuntimeObject*)(DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71*)L_9) == ((RuntimeObject*)(DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::SetClearState(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_SetClearState_m4A28072217AFBF98015598725A717000CF501311 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, bool ___0_clearDepth, bool ___1_clearColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	{
		// clearState.ClearDepth = clearDepth;
		ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* L_0 = __this->___clearState_2;
		bool L_1 = ___0_clearDepth;
		NullCheck(L_0);
		L_0->___ClearDepth_0 = L_1;
		// clearState.ClearColor = clearColor;
		ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* L_2 = __this->___clearState_2;
		bool L_3 = ___1_clearColor;
		NullCheck(L_2);
		L_2->___ClearColor_1 = L_3;
		// clearState.Color = color;
		ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* L_4 = __this->___clearState_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___2_color;
		NullCheck(L_4);
		L_4->___Color_2 = L_5;
		// }
		return;
	}
}
// DungeonArchitect.SxEngine.SxRenderContext DungeonArchitect.SxEngine.SxRenderer::CreateRenderContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 SxRenderer_CreateRenderContext_m204F4A6FFE2F5D2724F3B99BD23791331E59EAA1 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new SxRenderContext
		// {
		//     CameraPosition = Camera.Location
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63));
		SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* L_0;
		L_0 = SxRenderer_get_Camera_m06F15377120A653FCDD0FBA924E6EF1FC9D96E53_inline(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SxCamera_get_Location_m310DA09594D938A393746256346A50CCBDB6FE3A_inline(L_0, NULL);
		(&V_0)->___CameraPosition_0 = L_1;
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_2 = V_0;
		return L_2;
	}
}
// System.Single DungeonArchitect.SxEngine.SxRenderer::GetAspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SxRenderer_GetAspectRatio_mD6F1E4F0226BAC33952AF46DC77BD9E7A4C4D38D (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Texture != null ? (float) Texture.width / Texture.height : 1.0f;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0;
		L_0 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return (1.0f);
	}

IL_0014:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2;
		L_2 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		return ((float)(((float)L_3)/((float)L_5)));
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::Render(UnityEngine.Vector2,DungeonArchitect.SxEngine.SxWorld)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_Render_mFD8B833C6E61D0F89437381BEBF7086EF9E3A8CD (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_size, SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* ___1_world, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B2_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B1_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B3_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B5_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B4_0 = NULL;
	{
		// AcquireTexture(size);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_size;
		SxRenderer_AcquireTexture_mB2E9BB6C2862C3D39A0755E3A7B0AEEB9BA3A55A(__this, L_0, NULL);
		// var oldRTT = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1;
		L_1 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		// RenderTexture.active = Texture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2;
		L_2 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_2, NULL);
		// GL.PushMatrix();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadProjectionMatrix(Matrix4x4.Perspective(FOV, GetAspectRatio(), 0.1f, 100.0f));
		float L_3;
		L_3 = SxRenderer_get_FOV_m04B5ECB56E05213629AE62FB5684AA80CADFF072_inline(__this, NULL);
		float L_4;
		L_4 = SxRenderer_GetAspectRatio_mD6F1E4F0226BAC33952AF46DC77BD9E7A4C4D38D(__this, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_Perspective_m08BFCC6D4F8C7D51CEFBB8F3425954125BF9A743(L_3, L_4, (0.100000001f), (100.0f), NULL);
		GL_LoadProjectionMatrix_m4310EBD83BF1858124306A227C18FF52152718BD(L_5, NULL);
		// if (clearState.ClearColor || clearState.ClearDepth)
		ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* L_6 = __this->___clearState_2;
		NullCheck(L_6);
		bool L_7 = L_6->___ClearColor_1;
		G_B1_0 = L_1;
		if (L_7)
		{
			G_B2_0 = L_1;
			goto IL_0056;
		}
	}
	{
		ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* L_8 = __this->___clearState_2;
		NullCheck(L_8);
		bool L_9 = L_8->___ClearDepth_0;
		G_B2_0 = G_B1_0;
		if (!L_9)
		{
			G_B3_0 = G_B1_0;
			goto IL_007c;
		}
	}

IL_0056:
	{
		// GL.Clear(clearState.ClearDepth, clearState.ClearColor, clearState.Color);
		ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* L_10 = __this->___clearState_2;
		NullCheck(L_10);
		bool L_11 = L_10->___ClearDepth_0;
		ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* L_12 = __this->___clearState_2;
		NullCheck(L_12);
		bool L_13 = L_12->___ClearColor_1;
		ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* L_14 = __this->___clearState_2;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = L_14->___Color_2;
		GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09(L_11, L_13, L_15, NULL);
		G_B3_0 = G_B2_0;
	}

IL_007c:
	{
		// var context = CreateRenderContext();
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_16;
		L_16 = SxRenderer_CreateRenderContext_m204F4A6FFE2F5D2724F3B99BD23791331E59EAA1(__this, NULL);
		V_0 = L_16;
		// var renderCommandList = new SxRenderCommandList();
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_17 = (SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E*)il2cpp_codegen_object_new(SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		SxRenderCommandList__ctor_m4BDCE991E81F5EBC60AE61BAE42E449A52BA682D(L_17, NULL);
		V_1 = L_17;
		// world.Draw(context, renderCommandList);
		SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* L_18 = ___1_world;
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_19 = V_0;
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_20 = V_1;
		NullCheck(L_18);
		VirtualActionInvoker2< SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* >::Invoke(4 /* System.Void DungeonArchitect.SxEngine.SxWorld::Draw(DungeonArchitect.SxEngine.SxRenderContext,DungeonArchitect.SxEngine.SxRenderCommandList) */, L_18, L_19, L_20);
		// renderCommandList.Sort(context.CameraPosition);
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_21 = V_1;
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22.___CameraPosition_0;
		NullCheck(L_21);
		SxRenderCommandList_Sort_mCD552229CFD34488AF3C0F3E91246FCC46966077(L_21, L_23, NULL);
		// Render(renderCommandList, Camera.ViewMatrix);
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_24 = V_1;
		SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* L_25;
		L_25 = SxRenderer_get_Camera_m06F15377120A653FCDD0FBA924E6EF1FC9D96E53_inline(__this, NULL);
		NullCheck(L_25);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = SxCamera_get_ViewMatrix_m4395C364CFEEA88552BFA0E39F7FA7BE2E518EFC(L_25, NULL);
		SxRenderer_Render_mE4689176405E9661F9F9CF0B05FA1A4E6EEFE664(__this, L_24, L_26, NULL);
		// if (Draw != null)
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_27 = __this->___Draw_4;
		G_B4_0 = G_B3_0;
		if (!L_27)
		{
			G_B5_0 = G_B3_0;
			goto IL_00c3;
		}
	}
	{
		// Draw.Invoke(context);
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* L_28 = __this->___Draw_4;
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_29 = V_0;
		NullCheck(L_28);
		DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_inline(L_28, L_29, NULL);
		G_B5_0 = G_B4_0;
	}

IL_00c3:
	{
		// GL.PopMatrix();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// RenderTexture.active = oldRTT;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_Release_mF50EE4C4FE50833D0176FF231E0CB040DBF1E41B (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	{
		// ReleaseTexture();
		SxRenderer_ReleaseTexture_m09FDB1C71E6C4FBA1728D2F8EE93F196317A7E9C(__this, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::AcquireTexture(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_AcquireTexture_mB2E9BB6C2862C3D39A0755E3A7B0AEEB9BA3A55A (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var width = Mathf.RoundToInt(size.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_size;
		float L_1 = L_0.___x_0;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		V_0 = L_2;
		// var height = Mathf.RoundToInt(size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_size;
		float L_4 = L_3.___y_1;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		V_1 = L_5;
		// if (Texture != null && (Texture.width != width || Texture.height != height))
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6;
		L_6 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8;
		L_8 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0042;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11;
		L_11 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_0048;
		}
	}

IL_0042:
	{
		// ReleaseTexture();
		SxRenderer_ReleaseTexture_m09FDB1C71E6C4FBA1728D2F8EE93F196317A7E9C(__this, NULL);
	}

IL_0048:
	{
		// if (Texture == null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14;
		L_14 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		// Texture = new RenderTexture(Mathf.RoundToInt(size.x), Mathf.RoundToInt(size.y), 16, RenderTextureFormat.ARGB32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___0_size;
		float L_17 = L_16.___x_0;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___0_size;
		float L_20 = L_19.___y_1;
		int32_t L_21;
		L_21 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_20, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_22, L_18, L_21, ((int32_t)16), 0, NULL);
		SxRenderer_set_Texture_m83039C77317DDF2A217301C376845112F03BB562_inline(__this, L_22, NULL);
		// Texture.Create();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23;
		L_23 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		NullCheck(L_23);
		bool L_24;
		L_24 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_23, NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::ReleaseTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_ReleaseTexture_m09FDB1C71E6C4FBA1728D2F8EE93F196317A7E9C (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Texture.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0;
		L_0 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		NullCheck(L_0);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_0, NULL);
		// Object.DestroyImmediate(Texture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1;
		L_1 = SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_1, NULL);
		// Texture = null;
		SxRenderer_set_Texture_m83039C77317DDF2A217301C376845112F03BB562_inline(__this, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::RenderDefault(DungeonArchitect.SxEngine.SxRenderCommandList,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_RenderDefault_m34A584F76D49E5C8EB820CF925F1103DE60A0795 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___0_renderCommandList, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_viewMatrix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF420EEE32C56DB13DB3A9A21DB50E23BCCD1C93C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF07A0F08711D22C380DD0BE24AE310715BEABCBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m02D31CFBAF72B8171CD08FE7B0DB8B9F46C083D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4795656B8125D5A2103323F74EFDE4590E0E2216_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6577A0E4E57C81E5170123FFC99EE89D349184EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* V_0 = NULL;
	int32_t V_1 = 0;
	SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* V_2 = NULL;
	Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F V_4;
	memset((&V_4), 0, sizeof(V_4));
	SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* V_5 = NULL;
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// foreach (var command in renderCommandList.Commands)
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_0 = ___0_renderCommandList;
		NullCheck(L_0);
		SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* L_1;
		L_1 = SxRenderCommandList_get_Commands_mBE3006C58DED9DE8557216E434C5DFE0F788C1BE(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_00dc;
	}

IL_000e:
	{
		// foreach (var command in renderCommandList.Commands)
		SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// command.Material.Assign();
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_6 = V_2;
		NullCheck(L_6);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_7 = L_6->___Material_2;
		NullCheck(L_7);
		SxMaterial_Assign_mEBEE9F3445AE86DBA0E5F0883F8D78E847D0E106(L_7, NULL);
		// GL.modelview = viewMatrix * command.AccumWorldTransform;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___1_viewMatrix;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_9 = V_2;
		NullCheck(L_9);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = L_9->___AccumWorldTransform_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_8, L_10, NULL);
		GL_set_modelview_mCAE007CC5BE38316397954370950EB43991FBBD4(L_11, NULL);
		// foreach (var entry in command.Mesh.Sections)
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_12 = V_2;
		NullCheck(L_12);
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_13 = L_12->___Mesh_1;
		NullCheck(L_13);
		Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* L_14 = L_13->___Sections_0;
		NullCheck(L_14);
		Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411 L_15;
		L_15 = Dictionary_2_GetEnumerator_mF420EEE32C56DB13DB3A9A21DB50E23BCCD1C93C(L_14, Dictionary_2_GetEnumerator_mF420EEE32C56DB13DB3A9A21DB50E23BCCD1C93C_RuntimeMethod_var);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF07A0F08711D22C380DD0BE24AE310715BEABCBF((&V_3), Enumerator_Dispose_mF07A0F08711D22C380DD0BE24AE310715BEABCBF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bc_1;
			}

IL_0041_1:
			{
				// foreach (var entry in command.Mesh.Sections)
				KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F L_16;
				L_16 = Enumerator_get_Current_m4795656B8125D5A2103323F74EFDE4590E0E2216_inline((&V_3), Enumerator_get_Current_m4795656B8125D5A2103323F74EFDE4590E0E2216_RuntimeMethod_var);
				V_4 = L_16;
				// var section = entry.Value;
				SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_17;
				L_17 = KeyValuePair_2_get_Value_m6577A0E4E57C81E5170123FFC99EE89D349184EF_inline((&V_4), KeyValuePair_2_get_Value_m6577A0E4E57C81E5170123FFC99EE89D349184EF_RuntimeMethod_var);
				// GL.Begin(section.DrawMode);
				SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_18 = L_17;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = SxMeshSection_get_DrawMode_mAEE1C13FD53C6339E803D3738BAB4E7FA9EEB56C_inline(L_18, NULL);
				GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(L_19, NULL);
				// foreach (var vertex in section.Vertices)
				NullCheck(L_18);
				SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_20;
				L_20 = SxMeshSection_get_Vertices_m98DC66D5FE65E65FB61242D2A3E81CBAB01C0417_inline(L_18, NULL);
				V_5 = L_20;
				V_6 = 0;
				goto IL_00af_1;
			}

IL_0068_1:
			{
				// foreach (var vertex in section.Vertices)
				SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_21 = V_5;
				int32_t L_22 = V_6;
				NullCheck(L_21);
				int32_t L_23 = L_22;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				// GL.Color(vertex.Color);
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_25 = L_24;
				NullCheck(L_25);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
				L_26 = SxMeshVertex_get_Color_mEDEF4776F7756BFACDE6EE7D4D67C953AA82B286_inline(L_25, NULL);
				GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E(L_26, NULL);
				// GL.TexCoord(vertex.UV0);
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_27 = L_25;
				NullCheck(L_27);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
				L_28 = SxMeshVertex_get_UV0_mDC91E4537FA5D156F6F95F51E5E25AAE6E616561_inline(L_27, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
				L_29 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_28, NULL);
				GL_TexCoord_m0EE71AD25BE8A6A6503474649A1201C8662AE792(L_29, NULL);
				// var p = vertex.Position;
				NullCheck(L_27);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = SxMeshVertex_get_Position_mAE27FFE26F37AE902092C574695F4AEAE94A10F5_inline(L_27, NULL);
				V_7 = L_30;
				// GL.Vertex3(p.x, p.y, p.z);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
				float L_32 = L_31.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_7;
				float L_34 = L_33.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_7;
				float L_36 = L_35.___z_4;
				GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_32, L_34, L_36, NULL);
				int32_t L_37 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			}

IL_00af_1:
			{
				// foreach (var vertex in section.Vertices)
				int32_t L_38 = V_6;
				SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_39 = V_5;
				NullCheck(L_39);
				if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
				{
					goto IL_0068_1;
				}
			}
			{
				// GL.End();
				GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
			}

IL_00bc_1:
			{
				// foreach (var entry in command.Mesh.Sections)
				bool L_40;
				L_40 = Enumerator_MoveNext_m02D31CFBAF72B8171CD08FE7B0DB8B9F46C083D9((&V_3), Enumerator_MoveNext_m02D31CFBAF72B8171CD08FE7B0DB8B9F46C083D9_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_00d8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d8:
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00dc:
	{
		// foreach (var command in renderCommandList.Commands)
		int32_t L_42 = V_1;
		SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::RenderMerged(DungeonArchitect.SxEngine.SxRenderCommandList,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_RenderMerged_m55B2B2C0BBF397A91D9A44222E3B572838DB1836 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___0_renderCommandList, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_viewMatrix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0A4BDF0D1B2F60D1A2945EE762E80BA636C5129C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2E26B46AAB9C3ECAD7BD87F4CFF7B9E126A6560C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2340E415C6153047F2988871339524D771EEC676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0735EA26CD7124A4E2D4ED1B7AC7653A62EB3714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* V_0 = NULL;
	SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* V_1 = NULL;
	int32_t V_2 = 0;
	SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* V_3 = NULL;
	MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* V_4 = NULL;
	Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// GL.modelview = viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___1_viewMatrix;
		GL_set_modelview_mCAE007CC5BE38316397954370950EB43991FBBD4(L_0, NULL);
		// var mergedMeshes = new MergeMeshList();
		MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_1 = (MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B*)il2cpp_codegen_object_new(MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MergeMeshList__ctor_m3162B13B5A5109177CF1BF8100E1F8D0627DFB7F(L_1, NULL);
		V_0 = L_1;
		// foreach (var command in renderCommandList.Commands)
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_2 = ___0_renderCommandList;
		NullCheck(L_2);
		SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* L_3;
		L_3 = SxRenderCommandList_get_Commands_mBE3006C58DED9DE8557216E434C5DFE0F788C1BE(L_2, NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0027;
	}

IL_0017:
	{
		// foreach (var command in renderCommandList.Commands)
		SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// GenerateMergedMeshes(command, mergedMeshes);
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_8 = V_3;
		MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_9 = V_0;
		SxRenderer_GenerateMergedMeshes_mC0B83778104780D1821AC5647D539F4CE928C8B7(__this, L_8, L_9, NULL);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0027:
	{
		// foreach (var command in renderCommandList.Commands)
		int32_t L_11 = V_2;
		SxRenderCommandU5BU5D_t07B2E5D5353E61C9F4001B4015C98D3B558EC61C* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// foreach (var mesh in mergedMeshes.Meshes)
		MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_13 = V_0;
		NullCheck(L_13);
		MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* L_14;
		L_14 = MergeMeshList_get_Meshes_m3CDF1CE7CC93039B37D839CF13D7F93E5B0165E6(L_13, NULL);
		V_4 = L_14;
		V_2 = 0;
		goto IL_00c9;
	}

IL_003c:
	{
		// foreach (var mesh in mergedMeshes.Meshes)
		MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* L_15 = V_4;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		// mesh.Material.Assign();
		MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_19 = L_18;
		NullCheck(L_19);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_20 = L_19->___Material_1;
		NullCheck(L_20);
		SxMaterial_Assign_mEBEE9F3445AE86DBA0E5F0883F8D78E847D0E106(L_20, NULL);
		// GL.Begin(mesh.DrawMode);
		MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_21 = L_19;
		NullCheck(L_21);
		int32_t L_22 = L_21->___DrawMode_0;
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(L_22, NULL);
		// foreach (var vertex in mesh.Vertices)
		NullCheck(L_21);
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_23 = L_21->___Vertices_2;
		NullCheck(L_23);
		Enumerator_tF0069D37D496CF44D97640ABC12DA84DD29C94F4 L_24;
		L_24 = List_1_GetEnumerator_m0735EA26CD7124A4E2D4ED1B7AC7653A62EB3714(L_23, List_1_GetEnumerator_m0735EA26CD7124A4E2D4ED1B7AC7653A62EB3714_RuntimeMethod_var);
		V_5 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0A4BDF0D1B2F60D1A2945EE762E80BA636C5129C((&V_5), Enumerator_Dispose_m0A4BDF0D1B2F60D1A2945EE762E80BA636C5129C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a7_1;
			}

IL_0064_1:
			{
				// foreach (var vertex in mesh.Vertices)
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_25;
				L_25 = Enumerator_get_Current_m2340E415C6153047F2988871339524D771EEC676_inline((&V_5), Enumerator_get_Current_m2340E415C6153047F2988871339524D771EEC676_RuntimeMethod_var);
				// GL.Color(vertex.Color);
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_26 = L_25;
				NullCheck(L_26);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
				L_27 = SxMeshVertex_get_Color_mEDEF4776F7756BFACDE6EE7D4D67C953AA82B286_inline(L_26, NULL);
				GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E(L_27, NULL);
				// GL.TexCoord(vertex.UV0);
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_28 = L_26;
				NullCheck(L_28);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
				L_29 = SxMeshVertex_get_UV0_mDC91E4537FA5D156F6F95F51E5E25AAE6E616561_inline(L_28, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_29, NULL);
				GL_TexCoord_m0EE71AD25BE8A6A6503474649A1201C8662AE792(L_30, NULL);
				// var p = vertex.Position;
				NullCheck(L_28);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = SxMeshVertex_get_Position_mAE27FFE26F37AE902092C574695F4AEAE94A10F5_inline(L_28, NULL);
				V_6 = L_31;
				// GL.Vertex3(p.x, p.y, p.z);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_6;
				float L_33 = L_32.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_6;
				float L_35 = L_34.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_6;
				float L_37 = L_36.___z_4;
				GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_33, L_35, L_37, NULL);
			}

IL_00a7_1:
			{
				// foreach (var vertex in mesh.Vertices)
				bool L_38;
				L_38 = Enumerator_MoveNext_m2E26B46AAB9C3ECAD7BD87F4CFF7B9E126A6560C((&V_5), Enumerator_MoveNext_m2E26B46AAB9C3ECAD7BD87F4CFF7B9E126A6560C_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_00c0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c0:
	{
		// GL.End();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c9:
	{
		// foreach (var mesh in mergedMeshes.Meshes)
		int32_t L_40 = V_2;
		MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::Render(DungeonArchitect.SxEngine.SxRenderCommandList,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_Render_mE4689176405E9661F9F9CF0B05FA1A4E6EEFE664 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___0_renderCommandList, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_viewMatrix, const RuntimeMethod* method) 
{
	{
		// RenderDefault(renderCommandList, viewMatrix);
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_0 = ___0_renderCommandList;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_viewMatrix;
		SxRenderer_RenderDefault_m34A584F76D49E5C8EB820CF925F1103DE60A0795(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::GenerateMergedMeshes(DungeonArchitect.SxEngine.SxRenderCommand,DungeonArchitect.SxEngine.SxRenderer/MergeMeshList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer_GenerateMergedMeshes_mC0B83778104780D1821AC5647D539F4CE928C8B7 (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* ___0_command, MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* ___1_mergedMeshes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF420EEE32C56DB13DB3A9A21DB50E23BCCD1C93C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF07A0F08711D22C380DD0BE24AE310715BEABCBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m02D31CFBAF72B8171CD08FE7B0DB8B9F46C083D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4795656B8125D5A2103323F74EFDE4590E0E2216_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6577A0E4E57C81E5170123FFC99EE89D349184EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F V_1;
	memset((&V_1), 0, sizeof(V_1));
	SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* V_2 = NULL;
	SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* V_3 = NULL;
	int32_t V_4 = 0;
	SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* V_5 = NULL;
	SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* V_6 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B9_0 = 0;
	{
		// if (command.Material == null || command.Mesh == null) return;
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_0 = ___0_command;
		NullCheck(L_0);
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_1 = L_0->___Material_2;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_2 = ___0_command;
		NullCheck(L_2);
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_3 = L_2->___Mesh_1;
		if (L_3)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (command.Material == null || command.Mesh == null) return;
		return;
	}

IL_0011:
	{
		// foreach (var entry in command.Mesh.Sections)
		SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_4 = ___0_command;
		NullCheck(L_4);
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_5 = L_4->___Mesh_1;
		NullCheck(L_5);
		Dictionary_2_tEBD2129845DE979FB1F3E4D619F251ECBF3D72A6* L_6 = L_5->___Sections_0;
		NullCheck(L_6);
		Enumerator_t3FFF9D0A12F1EA33FFDB691C60BEEA2FC4031411 L_7;
		L_7 = Dictionary_2_GetEnumerator_mF420EEE32C56DB13DB3A9A21DB50E23BCCD1C93C(L_6, Dictionary_2_GetEnumerator_mF420EEE32C56DB13DB3A9A21DB50E23BCCD1C93C_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0136:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF07A0F08711D22C380DD0BE24AE310715BEABCBF((&V_0), Enumerator_Dispose_mF07A0F08711D22C380DD0BE24AE310715BEABCBF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0128_1;
			}

IL_0027_1:
			{
				// foreach (var entry in command.Mesh.Sections)
				KeyValuePair_2_t1DB9F1EA22A1CCC35971B22198C4A90FDD8C3A9F L_8;
				L_8 = Enumerator_get_Current_m4795656B8125D5A2103323F74EFDE4590E0E2216_inline((&V_0), Enumerator_get_Current_m4795656B8125D5A2103323F74EFDE4590E0E2216_RuntimeMethod_var);
				V_1 = L_8;
				// var section = entry.Value;
				SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_9;
				L_9 = KeyValuePair_2_get_Value_m6577A0E4E57C81E5170123FFC99EE89D349184EF_inline((&V_1), KeyValuePair_2_get_Value_m6577A0E4E57C81E5170123FFC99EE89D349184EF_RuntimeMethod_var);
				V_2 = L_9;
				// bool createNewMesh = mergedMeshes.ActiveMesh == null
				//                      || mergedMeshes.ActiveMesh.Material != command.Material
				//                      || mergedMeshes.ActiveMesh.DrawMode != section.DrawMode;
				MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_10 = ___1_mergedMeshes;
				NullCheck(L_10);
				MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_11 = L_10->___ActiveMesh_0;
				if (!L_11)
				{
					goto IL_006a_1;
				}
			}
			{
				MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_12 = ___1_mergedMeshes;
				NullCheck(L_12);
				MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_13 = L_12->___ActiveMesh_0;
				NullCheck(L_13);
				SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_14 = L_13->___Material_1;
				SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_15 = ___0_command;
				NullCheck(L_15);
				SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_16 = L_15->___Material_2;
				if ((!(((RuntimeObject*)(SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)L_14) == ((RuntimeObject*)(SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9*)L_16))))
				{
					goto IL_006a_1;
				}
			}
			{
				MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_17 = ___1_mergedMeshes;
				NullCheck(L_17);
				MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_18 = L_17->___ActiveMesh_0;
				NullCheck(L_18);
				int32_t L_19 = L_18->___DrawMode_0;
				SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_20 = V_2;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = SxMeshSection_get_DrawMode_mAEE1C13FD53C6339E803D3738BAB4E7FA9EEB56C_inline(L_20, NULL);
				G_B9_0 = ((((int32_t)((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_006b_1;
			}

IL_006a_1:
			{
				G_B9_0 = 1;
			}

IL_006b_1:
			{
				// if (createNewMesh)
				if (!G_B9_0)
				{
					goto IL_0095_1;
				}
			}
			{
				// mergedMeshes.CreateNew();
				MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_22 = ___1_mergedMeshes;
				NullCheck(L_22);
				MergeMeshList_CreateNew_m50DEC11FD56AB4A34E86F61D5917402F5563BE05(L_22, NULL);
				// mergedMeshes.ActiveMesh.Material = command.Material;
				MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_23 = ___1_mergedMeshes;
				NullCheck(L_23);
				MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_24 = L_23->___ActiveMesh_0;
				SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_25 = ___0_command;
				NullCheck(L_25);
				SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_26 = L_25->___Material_2;
				NullCheck(L_24);
				L_24->___Material_1 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&L_24->___Material_1), (void*)L_26);
				// mergedMeshes.ActiveMesh.DrawMode = section.DrawMode;
				MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_27 = ___1_mergedMeshes;
				NullCheck(L_27);
				MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_28 = L_27->___ActiveMesh_0;
				SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_29 = V_2;
				NullCheck(L_29);
				int32_t L_30;
				L_30 = SxMeshSection_get_DrawMode_mAEE1C13FD53C6339E803D3738BAB4E7FA9EEB56C_inline(L_29, NULL);
				NullCheck(L_28);
				L_28->___DrawMode_0 = L_30;
			}

IL_0095_1:
			{
				// foreach (var vertex in section.Vertices)
				SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* L_31 = V_2;
				NullCheck(L_31);
				SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_32;
				L_32 = SxMeshSection_get_Vertices_m98DC66D5FE65E65FB61242D2A3E81CBAB01C0417_inline(L_31, NULL);
				V_3 = L_32;
				V_4 = 0;
				goto IL_011e_1;
			}

IL_00a1_1:
			{
				// foreach (var vertex in section.Vertices)
				SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_33 = V_3;
				int32_t L_34 = V_4;
				NullCheck(L_33);
				int32_t L_35 = L_34;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
				V_5 = L_36;
				// var mergedVertex = new SxMeshVertex();
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_37 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
				NullCheck(L_37);
				SxMeshVertex__ctor_m1B7380A846B11D3C5C0B37080C2B85A6EB2C77EA(L_37, NULL);
				V_6 = L_37;
				// mergedVertex.Color = vertex.Color;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_38 = V_6;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_39 = V_5;
				NullCheck(L_39);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
				L_40 = SxMeshVertex_get_Color_mEDEF4776F7756BFACDE6EE7D4D67C953AA82B286_inline(L_39, NULL);
				NullCheck(L_38);
				SxMeshVertex_set_Color_m1A218CBC467001902157712F8FD8C33BE3764097_inline(L_38, L_40, NULL);
				// mergedVertex.UV0 = vertex.UV0;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_41 = V_6;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_42 = V_5;
				NullCheck(L_42);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
				L_43 = SxMeshVertex_get_UV0_mDC91E4537FA5D156F6F95F51E5E25AAE6E616561_inline(L_42, NULL);
				NullCheck(L_41);
				SxMeshVertex_set_UV0_mF39249B682641156BD43C02A7FD98561215DC628_inline(L_41, L_43, NULL);
				// var p = command.AccumWorldTransform * MathUtils.ToVector4(vertex.Position, 1);
				SxRenderCommand_tA878712CF8D568C7900BCDF61A5631AA52E09CB9* L_44 = ___0_command;
				NullCheck(L_44);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_45 = L_44->___AccumWorldTransform_0;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_46 = V_5;
				NullCheck(L_46);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
				L_47 = SxMeshVertex_get_Position_mAE27FFE26F37AE902092C574695F4AEAE94A10F5_inline(L_46, NULL);
				il2cpp_codegen_runtime_class_init_inline(MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_48;
				L_48 = MathUtils_ToVector4_m15E377448CD28CE50F9D80CE02B9399D65B4F7FE(L_47, (1.0f), NULL);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49;
				L_49 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_45, L_48, NULL);
				V_7 = L_49;
				// p /= p.w;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_50 = V_7;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51 = V_7;
				float L_52 = L_51.___w_4;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_53;
				L_53 = Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline(L_50, L_52, NULL);
				V_7 = L_53;
				// mergedVertex.Position = p;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_54 = V_6;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_55 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
				L_56 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_55, NULL);
				NullCheck(L_54);
				SxMeshVertex_set_Position_m20DCA6423C159798D3A35DECCEEA82FA30B7452A_inline(L_54, L_56, NULL);
				// mergedMeshes.ActiveMesh.Vertices.Add(mergedVertex);
				MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* L_57 = ___1_mergedMeshes;
				NullCheck(L_57);
				MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_58 = L_57->___ActiveMesh_0;
				NullCheck(L_58);
				List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_59 = L_58->___Vertices_2;
				SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_60 = V_6;
				NullCheck(L_59);
				List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_59, L_60, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
				int32_t L_61 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_61, 1));
			}

IL_011e_1:
			{
				// foreach (var vertex in section.Vertices)
				int32_t L_62 = V_4;
				SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_63 = V_3;
				NullCheck(L_63);
				if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
				{
					goto IL_00a1_1;
				}
			}

IL_0128_1:
			{
				// foreach (var entry in command.Mesh.Sections)
				bool L_64;
				L_64 = Enumerator_MoveNext_m02D31CFBAF72B8171CD08FE7B0DB8B9F46C083D9((&V_0), Enumerator_MoveNext_m02D31CFBAF72B8171CD08FE7B0DB8B9F46C083D9_RuntimeMethod_var);
				if (L_64)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_0144;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0144:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRenderer__ctor_mF26DD4669AC9A8FF07475FDFF614F974643C82FD (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SxCamera Camera { get; } = new SxCamera();
		SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* L_0 = (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825*)il2cpp_codegen_object_new(SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SxCamera__ctor_m458AD82A6C437B54D9F243A9E590DC62524663D3(L_0, NULL);
		__this->___U3CCameraU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCameraU3Ek__BackingField_1), (void*)L_0);
		// private ClearState clearState = new ClearState();
		ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* L_1 = (ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E*)il2cpp_codegen_object_new(ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ClearState__ctor_mAAD2DE9573389ECFB506417418975A86485D7245(L_1, NULL);
		__this->___clearState_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearState_2), (void*)L_1);
		// public float FOV { get; } = 75;
		__this->___U3CFOVU3Ek__BackingField_3 = (75.0f);
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
// System.Void DungeonArchitect.SxEngine.SxRenderer/ClearState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearState__ctor_mAAD2DE9573389ECFB506417418975A86485D7245 (ClearState_t5AFC9CE3BB3B839E846307CDB91293662866441E* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___Color_2 = L_0;
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
void DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_Multicast(DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* currentDelegate = reinterpret_cast<DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_OpenInst(DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_context, method);
}
void DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_OpenStatic(DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_context, method);
}
void DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_OpenStaticInvoker(DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, const RuntimeMethod* method)
{
	InvokerActionInvoker1< SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_context);
}
void DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_ClosedStaticInvoker(DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71 (DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_context);

}
// System.Void DungeonArchitect.SxEngine.SxRenderer/DrawDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDelegate__ctor_m1BA0DA1B3059B3970C8BA4F17A1121DEBC0F98AB (DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_Multicast;
}
// System.Void DungeonArchitect.SxEngine.SxRenderer/DrawDelegate::Invoke(DungeonArchitect.SxEngine.SxRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29 (DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DungeonArchitect.SxEngine.SxRenderer/DrawDelegate::BeginInvoke(DungeonArchitect.SxEngine.SxRenderContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DrawDelegate_BeginInvoke_mF16A3BFF2333683A311EF7B061BC39AA23F28282 (DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63_il2cpp_TypeInfo_var, &___0_context);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void DungeonArchitect.SxEngine.SxRenderer/DrawDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDelegate_EndInvoke_m995DC342B9E23ED3AA991749526576B16F1442ED (DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.SxEngine.SxRenderer/MergedMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedMesh__ctor_m0E7B6C457814EADA2A8376D9DAD2E87AEB625E9F (MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<SxMeshVertex> Vertices = new List<SxMeshVertex>();
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_0 = (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1*)il2cpp_codegen_object_new(List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4(L_0, List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4_RuntimeMethod_var);
		__this->___Vertices_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Vertices_2), (void*)L_0);
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
// DungeonArchitect.SxEngine.SxRenderer/MergedMesh[] DungeonArchitect.SxEngine.SxRenderer/MergeMeshList::get_Meshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* MergeMeshList_get_Meshes_m3CDF1CE7CC93039B37D839CF13D7F93E5B0165E6 (MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m0F5CD194B54EA10C1BDBB2EE77EF411183C15B30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => mergedMeshes.ToArray();
		List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE* L_0 = __this->___mergedMeshes_1;
		NullCheck(L_0);
		MergedMeshU5BU5D_t38C99053E8B262565BD8CE5146D81D7516ABDE02* L_1;
		L_1 = List_1_ToArray_m0F5CD194B54EA10C1BDBB2EE77EF411183C15B30(L_0, List_1_ToArray_m0F5CD194B54EA10C1BDBB2EE77EF411183C15B30_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer/MergeMeshList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeMeshList__ctor_m3162B13B5A5109177CF1BF8100E1F8D0627DFB7F (MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m67FCFB482B11234C442153B6EFD1CF3907D18BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<MergedMesh> mergedMeshes = new List<MergedMesh>();
		List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE* L_0 = (List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE*)il2cpp_codegen_object_new(List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m67FCFB482B11234C442153B6EFD1CF3907D18BDF(L_0, List_1__ctor_m67FCFB482B11234C442153B6EFD1CF3907D18BDF_RuntimeMethod_var);
		__this->___mergedMeshes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mergedMeshes_1), (void*)L_0);
		// public MergeMeshList()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRenderer/MergeMeshList::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergeMeshList_CreateNew_m50DEC11FD56AB4A34E86F61D5917402F5563BE05 (MergeMeshList_tE1442FD202731FB09163B9BD3637AFD9FE099A6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30FE8B75A437C105A7CB19AC800BE8EBE20A72E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActiveMesh = new MergedMesh();
		MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_0 = (MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2*)il2cpp_codegen_object_new(MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MergedMesh__ctor_m0E7B6C457814EADA2A8376D9DAD2E87AEB625E9F(L_0, NULL);
		__this->___ActiveMesh_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ActiveMesh_0), (void*)L_0);
		// mergedMeshes.Add(ActiveMesh);
		List_1_t78EA1848E2CCB771D59F012F6F603407F5A36EBE* L_1 = __this->___mergedMeshes_1;
		MergedMesh_t02DDB1AEA8E93851DB1B2BE04FECFE30327D57C2* L_2 = __this->___ActiveMesh_0;
		NullCheck(L_1);
		List_1_Add_m30FE8B75A437C105A7CB19AC800BE8EBE20A72E6_inline(L_1, L_2, List_1_Add_m30FE8B75A437C105A7CB19AC800BE8EBE20A72E6_RuntimeMethod_var);
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
// DungeonArchitect.SxEngine.SxRootSceneNode DungeonArchitect.SxEngine.SxSceneGraph::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* SxSceneGraph_get_RootNode_mEA95642585AAEA1A9EFD7BC5B941B7D4F012C9AB (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* __this, const RuntimeMethod* method) 
{
	{
		// public SxRootSceneNode RootNode { get; } = new SxRootSceneNode();
		SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* L_0 = __this->___U3CRootNodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneGraph::IterateNodes(System.Action`1<DungeonArchitect.SxEngine.ISxSceneNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneGraph_IterateNodes_mD224E7FD4A99F96E3DBA7B7AA5083D5484440FFE (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* __this, Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D* ___0_visit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m8AF0A323FDAC0395A9BC2658910A841BBE3FE8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m63D3C012260FD8322387AC34AE5E3425029B67A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m13AEC524FC79BEAC72CA7B68C14F9BEC3E5F8E52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var stack = new Stack<ISxSceneNode>();
		Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* L_0 = (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51*)il2cpp_codegen_object_new(Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m63D3C012260FD8322387AC34AE5E3425029B67A1(L_0, Stack_1__ctor_m63D3C012260FD8322387AC34AE5E3425029B67A1_RuntimeMethod_var);
		V_0 = L_0;
		// stack.Push(RootNode);
		Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* L_1 = V_0;
		SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* L_2;
		L_2 = SxSceneGraph_get_RootNode_mEA95642585AAEA1A9EFD7BC5B941B7D4F012C9AB_inline(__this, NULL);
		NullCheck(L_1);
		Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329(L_1, L_2, Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329_RuntimeMethod_var);
		goto IL_0047;
	}

IL_0014:
	{
		// var top = stack.Pop();
		Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Stack_1_Pop_m8AF0A323FDAC0395A9BC2658910A841BBE3FE8D6(L_3, Stack_1_Pop_m8AF0A323FDAC0395A9BC2658910A841BBE3FE8D6_RuntimeMethod_var);
		V_1 = L_4;
		// if (top == null) continue;
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// visit(top);
		Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D* L_6 = ___0_visit;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_6);
		Action_1_Invoke_m86EF4615C32458396C87452D743F1DFCDCF8C1ED_inline(L_6, L_7, NULL);
		// foreach (var childNode in top.Children)
		RuntimeObject* L_8 = V_1;
		NullCheck(L_8);
		ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* L_9;
		L_9 = InterfaceFuncInvoker0< ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* >::Invoke(5 /* DungeonArchitect.SxEngine.ISxSceneNode[] DungeonArchitect.SxEngine.ISxSceneNode::get_Children() */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
		V_3 = 0;
		goto IL_0041;
	}

IL_0030:
	{
		// foreach (var childNode in top.Children)
		ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		// stack.Push(childNode);
		Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* L_14 = V_0;
		RuntimeObject* L_15 = V_4;
		NullCheck(L_14);
		Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329(L_14, L_15, Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329_RuntimeMethod_var);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0041:
	{
		// foreach (var childNode in top.Children)
		int32_t L_17 = V_3;
		ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_0047:
	{
		// while (stack.Count > 0)
		Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Stack_1_get_Count_m13AEC524FC79BEAC72CA7B68C14F9BEC3E5F8E52_inline(L_19, Stack_1_get_Count_m13AEC524FC79BEAC72CA7B68C14F9BEC3E5F8E52_RuntimeMethod_var);
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneGraph::Remove(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneGraph_Remove_m0E4031256DB0E49570B7E256AB10E1E59EA11DC9 (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* __this, RuntimeObject* ___0_nodeToRemove, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_m2F2D88C1C0537C0114A90F80004876E8369759AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m8AF0A323FDAC0395A9BC2658910A841BBE3FE8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m63D3C012260FD8322387AC34AE5E3425029B67A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m13AEC524FC79BEAC72CA7B68C14F9BEC3E5F8E52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var stack = new Stack<ISxSceneNode>();
		Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* L_0 = (Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51*)il2cpp_codegen_object_new(Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m63D3C012260FD8322387AC34AE5E3425029B67A1(L_0, Stack_1__ctor_m63D3C012260FD8322387AC34AE5E3425029B67A1_RuntimeMethod_var);
		V_0 = L_0;
		// stack.Push(RootNode);
		Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* L_1 = V_0;
		SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* L_2;
		L_2 = SxSceneGraph_get_RootNode_mEA95642585AAEA1A9EFD7BC5B941B7D4F012C9AB_inline(__this, NULL);
		NullCheck(L_1);
		Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329(L_1, L_2, Stack_1_Push_mC47F3804970F229533F98B540FEFE07670B3E329_RuntimeMethod_var);
		goto IL_0034;
	}

IL_0014:
	{
		// var top = stack.Pop();
		Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Stack_1_Pop_m8AF0A323FDAC0395A9BC2658910A841BBE3FE8D6(L_3, Stack_1_Pop_m8AF0A323FDAC0395A9BC2658910A841BBE3FE8D6_RuntimeMethod_var);
		V_1 = L_4;
		// if (top == null) continue;
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// if (top.Children.Contains(nodeToRemove))
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* L_7;
		L_7 = InterfaceFuncInvoker0< ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* >::Invoke(5 /* DungeonArchitect.SxEngine.ISxSceneNode[] DungeonArchitect.SxEngine.ISxSceneNode::get_Children() */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = ___0_nodeToRemove;
		bool L_9;
		L_9 = Enumerable_Contains_TisISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_m2F2D88C1C0537C0114A90F80004876E8369759AE((RuntimeObject*)L_7, L_8, Enumerable_Contains_TisISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_m2F2D88C1C0537C0114A90F80004876E8369759AE_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		// top.RemoveChild(nodeToRemove);
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = ___0_nodeToRemove;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void DungeonArchitect.SxEngine.ISxSceneNode::RemoveChild(DungeonArchitect.SxEngine.ISxSceneNode) */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_10, L_11);
		// break;
		return;
	}

IL_0034:
	{
		// while (stack.Count > 0)
		Stack_1_tAC10A5D109704D274481B06126B21FF43CF18D51* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Stack_1_get_Count_m13AEC524FC79BEAC72CA7B68C14F9BEC3E5F8E52_inline(L_12, Stack_1_get_Count_m13AEC524FC79BEAC72CA7B68C14F9BEC3E5F8E52_RuntimeMethod_var);
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneGraph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneGraph__ctor_m700568259AD509CB8CD8102C33FBAF1AFEF84BEC (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SxRootSceneNode RootNode { get; } = new SxRootSceneNode();
		SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* L_0 = (SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245*)il2cpp_codegen_object_new(SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SxRootSceneNode__ctor_mACD873CD808CC94D09FA27FDD2910421A9FE6D58(L_0, NULL);
		__this->___U3CRootNodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRootNodeU3Ek__BackingField_0), (void*)L_0);
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
// DungeonArchitect.SxEngine.Utils.SxTransform DungeonArchitect.SxEngine.SxSceneNodeBase::get_WorldTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 SxSceneNodeBase_get_WorldTransform_m3BBE707D960ED8525BD9FE2AD6A71C9B5326D321 (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, const RuntimeMethod* method) 
{
	{
		// public SxTransform WorldTransform { get; set; } = SxTransform.identity;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_0 = __this->___U3CWorldTransformU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneNodeBase::set_WorldTransform(DungeonArchitect.SxEngine.Utils.SxTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneNodeBase_set_WorldTransform_m5D2BAF09E659562FFC62A52143400F2CA08C5552 (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 ___0_value, const RuntimeMethod* method) 
{
	{
		// public SxTransform WorldTransform { get; set; } = SxTransform.identity;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_0 = ___0_value;
		__this->___U3CWorldTransformU3Ek__BackingField_0 = L_0;
		return;
	}
}
// DungeonArchitect.SxEngine.ISxSceneNode[] DungeonArchitect.SxEngine.SxSceneNodeBase::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* SxSceneNodeBase_get_Children_m647477F038929080D69A3F1F0E5B32202611EE97 (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB6CEF4EA8794E4966DA5708D65B68034C1B7160D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => children.ToArray();
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_0 = __this->___children_1;
		NullCheck(L_0);
		ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* L_1;
		L_1 = List_1_ToArray_mB6CEF4EA8794E4966DA5708D65B68034C1B7160D(L_0, List_1_ToArray_mB6CEF4EA8794E4966DA5708D65B68034C1B7160D_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneNodeBase::AddChild(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneNodeBase_AddChild_m2BB55E31631E9CF49C010E83B2446E6C135DD8B3 (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, RuntimeObject* ___0_child, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDEC17C5EEE555F014C690DBD95BE737712DEA69F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Add(child);
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_0 = __this->___children_1;
		RuntimeObject* L_1 = ___0_child;
		NullCheck(L_0);
		List_1_Add_mDEC17C5EEE555F014C690DBD95BE737712DEA69F_inline(L_0, L_1, List_1_Add_mDEC17C5EEE555F014C690DBD95BE737712DEA69F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneNodeBase::RemoveChild(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneNodeBase_RemoveChild_mAFAC8951356F2CE1867EA078EFCE77CDE751E17C (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, RuntimeObject* ___0_child, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// child.RemoveChild(child);
		RuntimeObject* L_0 = ___0_child;
		RuntimeObject* L_1 = ___0_child;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void DungeonArchitect.SxEngine.ISxSceneNode::RemoveChild(DungeonArchitect.SxEngine.ISxSceneNode) */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// DungeonArchitect.SxEngine.ISxSceneNode DungeonArchitect.SxEngine.SxSceneNodeBase::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SxSceneNodeBase_get_Parent_mDC6F26955EC3F02C583B07157927C6E92AE9B481 (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, const RuntimeMethod* method) 
{
	{
		// public ISxSceneNode Parent { get; set; }
		RuntimeObject* L_0 = __this->___U3CParentU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneNodeBase::set_Parent(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneNodeBase_set_Parent_m3C1E698C6D8421BCBCD49B02A7195452F7A89CBC (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ISxSceneNode Parent { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CParentU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneNodeBase::RemoveAllChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneNodeBase_RemoveAllChildren_m5BBB4E2CCA654F39FE5ECD483BBF05BEF3903964 (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m12465260E5D629AFF062FE05BA3E226AA851800F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Clear();
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_0 = __this->___children_1;
		NullCheck(L_0);
		List_1_Clear_m12465260E5D629AFF062FE05BA3E226AA851800F_inline(L_0, List_1_Clear_m12465260E5D629AFF062FE05BA3E226AA851800F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneNodeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneNodeBase__ctor_m51EAE7C916E6A25274CB5F0140FACD4172448F02 (SxSceneNodeBase_t732C13D8916F7EE9EB3A051608C66A7DD0C8E7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m887FE759D948FAA4E39A05B8B19C520A95D771DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SxTransform WorldTransform { get; set; } = SxTransform.identity;
		il2cpp_codegen_runtime_class_init_inline(SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_il2cpp_TypeInfo_var);
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_0 = ((SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_StaticFields*)il2cpp_codegen_static_fields_for(SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_il2cpp_TypeInfo_var))->___identity_5;
		__this->___U3CWorldTransformU3Ek__BackingField_0 = L_0;
		// private List<ISxSceneNode> children = new List<ISxSceneNode>();
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_1 = (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5*)il2cpp_codegen_object_new(List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m887FE759D948FAA4E39A05B8B19C520A95D771DF(L_1, List_1__ctor_m887FE759D948FAA4E39A05B8B19C520A95D771DF_RuntimeMethod_var);
		__this->___children_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_1), (void*)L_1);
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
// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.SxSceneGraphUtils::AccumulateTransforms(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SxSceneGraphUtils_AccumulateTransforms_m1DDE3A00D8EE72DE0CF81C8D01AAE5FF027477BA (RuntimeObject* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (node == null) return Matrix4x4.identity;
		RuntimeObject* L_0 = ___0_node;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (node == null) return Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		return L_1;
	}

IL_0009:
	{
		// return AccumulateTransforms(node.Parent) * node.WorldTransform.Matrix;
		RuntimeObject* L_2 = ___0_node;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* DungeonArchitect.SxEngine.ISxSceneNode DungeonArchitect.SxEngine.ISxSceneNode::get_Parent() */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = SxSceneGraphUtils_AccumulateTransforms_m1DDE3A00D8EE72DE0CF81C8D01AAE5FF027477BA(L_3, NULL);
		RuntimeObject* L_5 = ___0_node;
		NullCheck(L_5);
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_6;
		L_6 = InterfaceFuncInvoker0< SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 >::Invoke(0 /* DungeonArchitect.SxEngine.Utils.SxTransform DungeonArchitect.SxEngine.ISxSceneNode::get_WorldTransform() */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = SxTransform_get_Matrix_m920F3DD7452B19A9CBC07E7879BD5440863D1CB3((&V_0), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8;
		L_8 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_4, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.SxSceneGraphUtils::FindAbsoluteTransform(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SxSceneGraphUtils_FindAbsoluteTransform_mFFA46157074C9BB2D6EDD2379F0C9D8C6E0AE8BB (RuntimeObject* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (node == null) return Matrix4x4.identity;
		RuntimeObject* L_0 = ___0_node;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (node == null) return Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		return L_1;
	}

IL_0009:
	{
		// return FindAbsoluteTransform(node.Parent) * node.WorldTransform.Matrix;
		RuntimeObject* L_2 = ___0_node;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* DungeonArchitect.SxEngine.ISxSceneNode DungeonArchitect.SxEngine.ISxSceneNode::get_Parent() */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = SxSceneGraphUtils_FindAbsoluteTransform_mFFA46157074C9BB2D6EDD2379F0C9D8C6E0AE8BB(L_3, NULL);
		RuntimeObject* L_5 = ___0_node;
		NullCheck(L_5);
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_6;
		L_6 = InterfaceFuncInvoker0< SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 >::Invoke(0 /* DungeonArchitect.SxEngine.Utils.SxTransform DungeonArchitect.SxEngine.ISxSceneNode::get_WorldTransform() */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = SxTransform_get_Matrix_m920F3DD7452B19A9CBC07E7879BD5440863D1CB3((&V_0), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8;
		L_8 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_4, L_7, NULL);
		return L_8;
	}
}
// System.Void DungeonArchitect.SxEngine.SxSceneGraphUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxSceneGraphUtils__ctor_mD215DE9E72F60F76BA084C8C1CDB7CB92BB76A1C (SxSceneGraphUtils_tA9C4843841C5A3EBBB526E9997803FF517AA18B8* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.SxEngine.SxRootSceneNode::Draw(DungeonArchitect.SxEngine.SxRenderContext,UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxRenderCommandList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRootSceneNode_Draw_mF5DE6DBD58D7AB12B5B01A871AC1CFBFD2231A3C (SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_accumWorldTransform, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___2_renderCommandList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRootSceneNode::Tick(DungeonArchitect.SxEngine.SxRenderContext,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRootSceneNode_Tick_mDDF53DD492CB2F06BE29D29C757D704621C309CD (SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, float ___1_deltaTime, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRootSceneNode::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRootSceneNode_Destroy_mD7F3D808465D2E498A4EEE497F9F2C74B9F28770 (SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxRootSceneNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxRootSceneNode__ctor_mACD873CD808CC94D09FA27FDD2910421A9FE6D58 (SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* __this, const RuntimeMethod* method) 
{
	{
		SxSceneNodeBase__ctor_m51EAE7C916E6A25274CB5F0140FACD4172448F02(__this, NULL);
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
// DungeonArchitect.SxEngine.Utils.SxTransform DungeonArchitect.SxEngine.SxActor::get_WorldTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 SxActor_get_WorldTransform_m003E68FCF1AC09C6DD2D8706A3AD3E892A7601FA (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	{
		// get => worldTransform;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_0 = __this->___worldTransform_1;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::set_WorldTransform(DungeonArchitect.SxEngine.Utils.SxTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_set_WorldTransform_mA93FD774B72C2553761643F76064FADAAB288EFD (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => worldTransform = value;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_0 = ___0_value;
		__this->___worldTransform_1 = L_0;
		return;
	}
}
// DungeonArchitect.SxEngine.ISxSceneNode[] DungeonArchitect.SxEngine.SxActor::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* SxActor_get_Children_m02BED10ABD7B281E80EC389570C58DEC878521F2 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB6CEF4EA8794E4966DA5708D65B68034C1B7160D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => children.ToArray();
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_0 = __this->___children_3;
		NullCheck(L_0);
		ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* L_1;
		L_1 = List_1_ToArray_mB6CEF4EA8794E4966DA5708D65B68034C1B7160D(L_0, List_1_ToArray_mB6CEF4EA8794E4966DA5708D65B68034C1B7160D_RuntimeMethod_var);
		return L_1;
	}
}
// DungeonArchitect.SxEngine.SxActorComponent[] DungeonArchitect.SxEngine.SxActor::get_Components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* SxActor_get_Components_m39CD7A7B28625EA2BBB65368FFBA43336DB4551A (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB885925FF9349C5675464CE42A6DC4CBDF8D3EF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => components.ToArray();
		List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6* L_0 = __this->___components_0;
		NullCheck(L_0);
		SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* L_1;
		L_1 = List_1_ToArray_mB885925FF9349C5675464CE42A6DC4CBDF8D3EF9(L_0, List_1_ToArray_mB885925FF9349C5675464CE42A6DC4CBDF8D3EF9_RuntimeMethod_var);
		return L_1;
	}
}
// DungeonArchitect.SxEngine.ISxSceneNode DungeonArchitect.SxEngine.SxActor::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SxActor_get_Parent_m4CB926BBDC4F52BFA7353A0CDD733426A80A30EA (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	{
		// public ISxSceneNode Parent { get; set; }
		RuntimeObject* L_0 = __this->___U3CParentU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::set_Parent(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_set_Parent_m392D484B3A8E24273F884CE5B9B8CF52802F98EA (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ISxSceneNode Parent { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CParentU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::Draw(DungeonArchitect.SxEngine.SxRenderContext,UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxRenderCommandList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_Draw_mB3A95F6A3D40B13A08BFF8A07AE2F560468D5526 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_accumWorldTransform, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___2_renderCommandList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB70B5279ACA3A1CCD85476D9A086A7C2EC1A58AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3D044C0B84B08CD23D7667266E4EAE64DD66B518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m697E49FD0AF04C3EE1726FF16BCC073443D01C10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4B5F5636201F98593C00F09F3C0D2375545147D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var component in components)
		List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6* L_0 = __this->___components_0;
		NullCheck(L_0);
		Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC L_1;
		L_1 = List_1_GetEnumerator_m4B5F5636201F98593C00F09F3C0D2375545147D8(L_0, List_1_GetEnumerator_m4B5F5636201F98593C00F09F3C0D2375545147D8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB70B5279ACA3A1CCD85476D9A086A7C2EC1A58AB((&V_0), Enumerator_Dispose_mB70B5279ACA3A1CCD85476D9A086A7C2EC1A58AB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001d_1;
			}

IL_000e_1:
			{
				// foreach (var component in components)
				SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* L_2;
				L_2 = Enumerator_get_Current_m697E49FD0AF04C3EE1726FF16BCC073443D01C10_inline((&V_0), Enumerator_get_Current_m697E49FD0AF04C3EE1726FF16BCC073443D01C10_RuntimeMethod_var);
				// component.Draw(context, accumWorldTransform, renderCommandList);
				SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_3 = ___0_context;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___1_accumWorldTransform;
				SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_5 = ___2_renderCommandList;
				NullCheck(L_2);
				VirtualActionInvoker3< SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* >::Invoke(4 /* System.Void DungeonArchitect.SxEngine.SxActorComponent::Draw(DungeonArchitect.SxEngine.SxRenderContext,UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxRenderCommandList) */, L_2, L_3, L_4, L_5);
			}

IL_001d_1:
			{
				// foreach (var component in components)
				bool L_6;
				L_6 = Enumerator_MoveNext_m3D044C0B84B08CD23D7667266E4EAE64DD66B518((&V_0), Enumerator_MoveNext_m3D044C0B84B08CD23D7667266E4EAE64DD66B518_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0036;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::Tick(DungeonArchitect.SxEngine.SxRenderContext,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_Tick_m43E9883CA2F72FCC5A915FE6878E208E0731B20D (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, float ___1_deltaTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB70B5279ACA3A1CCD85476D9A086A7C2EC1A58AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3D044C0B84B08CD23D7667266E4EAE64DD66B518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m697E49FD0AF04C3EE1726FF16BCC073443D01C10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4B5F5636201F98593C00F09F3C0D2375545147D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var component in components)
		List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6* L_0 = __this->___components_0;
		NullCheck(L_0);
		Enumerator_tC28D19E087D19BDB246C677B3A36ABB55D7124EC L_1;
		L_1 = List_1_GetEnumerator_m4B5F5636201F98593C00F09F3C0D2375545147D8(L_0, List_1_GetEnumerator_m4B5F5636201F98593C00F09F3C0D2375545147D8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB70B5279ACA3A1CCD85476D9A086A7C2EC1A58AB((&V_0), Enumerator_Dispose_mB70B5279ACA3A1CCD85476D9A086A7C2EC1A58AB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_000e_1:
			{
				// foreach (var component in components)
				SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* L_2;
				L_2 = Enumerator_get_Current_m697E49FD0AF04C3EE1726FF16BCC073443D01C10_inline((&V_0), Enumerator_get_Current_m697E49FD0AF04C3EE1726FF16BCC073443D01C10_RuntimeMethod_var);
				// component.Tick(context, deltaTime);
				SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_3 = ___0_context;
				float L_4 = ___1_deltaTime;
				NullCheck(L_2);
				VirtualActionInvoker2< SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, float >::Invoke(5 /* System.Void DungeonArchitect.SxEngine.SxActorComponent::Tick(DungeonArchitect.SxEngine.SxRenderContext,System.Single) */, L_2, L_3, L_4);
			}

IL_001c_1:
			{
				// foreach (var component in components)
				bool L_5;
				L_5 = Enumerator_MoveNext_m3D044C0B84B08CD23D7667266E4EAE64DD66B518((&V_0), Enumerator_MoveNext_m3D044C0B84B08CD23D7667266E4EAE64DD66B518_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::AddChild(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_AddChild_mDB9A22C5D32D40D08865EE16D12299F428176C01 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, RuntimeObject* ___0_child, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDEC17C5EEE555F014C690DBD95BE737712DEA69F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m45618A2BEFC2C6F2308AF348133F1EDFA155CDE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!children.Contains(child))
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_0 = __this->___children_3;
		RuntimeObject* L_1 = ___0_child;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m45618A2BEFC2C6F2308AF348133F1EDFA155CDE0(L_0, L_1, List_1_Contains_m45618A2BEFC2C6F2308AF348133F1EDFA155CDE0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// children.Add(child);
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_3 = __this->___children_3;
		RuntimeObject* L_4 = ___0_child;
		NullCheck(L_3);
		List_1_Add_mDEC17C5EEE555F014C690DBD95BE737712DEA69F_inline(L_3, L_4, List_1_Add_mDEC17C5EEE555F014C690DBD95BE737712DEA69F_RuntimeMethod_var);
		// child.Parent = this;
		RuntimeObject* L_5 = ___0_child;
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void DungeonArchitect.SxEngine.ISxSceneNode::set_Parent(DungeonArchitect.SxEngine.ISxSceneNode) */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_5, __this);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::RemoveChild(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_RemoveChild_m80F080B6744D4024B820466D7FFEEFE54F90BD61 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, RuntimeObject* ___0_child, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mFE9946F021371C8497A17BBF266918EB013461B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Remove(child);
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_0 = __this->___children_3;
		RuntimeObject* L_1 = ___0_child;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mFE9946F021371C8497A17BBF266918EB013461B4(L_0, L_1, List_1_Remove_mFE9946F021371C8497A17BBF266918EB013461B4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::RemoveAllChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_RemoveAllChildren_mAC9ED5DFC081EBFC75346A2BFB680AD8DD6344BC (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m12465260E5D629AFF062FE05BA3E226AA851800F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Clear();
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_0 = __this->___children_3;
		NullCheck(L_0);
		List_1_Clear_m12465260E5D629AFF062FE05BA3E226AA851800F_inline(L_0, List_1_Clear_m12465260E5D629AFF062FE05BA3E226AA851800F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_Destroy_m5FBEF665E04A5BFF8131EC4BDAA0BE9FE5D8B374 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	{
		// World.DestroyActor(this);
		SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* L_0 = __this->___World_2;
		NullCheck(L_0);
		SxWorld_DestroyActor_m98FFA874DC3ADAC44B925EBC106C4CE08025C4AD(L_0, __this, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxActor::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxActor_get_Position_m86ABE0CDE4D00E6B5AEA766CF0772F7A71A3041A (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	{
		// get => worldTransform.Positon;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* L_0 = (&__this->___worldTransform_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SxTransform_get_Positon_m85ABD9B6E0F5AA8D1C5EDDA73EB709B409FD2865_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_set_Position_mF61E3D7F79C7B6292EFDDC08B574723E5221C4C6 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => worldTransform.Positon = value;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* L_0 = (&__this->___worldTransform_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		SxTransform_set_Positon_m35A84BFFBF53F8724116FB90B378DF765EEB1703(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.Quaternion DungeonArchitect.SxEngine.SxActor::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SxActor_get_Rotation_m372CA519448D2D310168A2E687FB39C524A90F52 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	{
		// get => worldTransform.Rotation;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* L_0 = (&__this->___worldTransform_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = SxTransform_get_Rotation_mF9A33AF7C04A299E9384D8D08DEF52F3C1AA591F_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_set_Rotation_mFE28A976CE1A256CE4F6556DC6ABBF6DE362617A (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => worldTransform.Rotation = value;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* L_0 = (&__this->___worldTransform_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_value;
		SxTransform_set_Rotation_m2747EA452C289093B980662A38A15C98856DA583(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.SxEngine.SxActor::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxActor_get_Scale_m94E9A4E0DB0C272BB5C138EE380212FFAFAD99A6 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	{
		// get => worldTransform.Scale;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* L_0 = (&__this->___worldTransform_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SxTransform_get_Scale_m92D32E885F207EBF0D9568380EF71F41197B9597_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor_set_Scale_m43D90B674DCED4F9913606890154DB6FB089E636 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => worldTransform.Scale = value;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* L_0 = (&__this->___worldTransform_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		SxTransform_set_Scale_m98A029AF4F1F0AFCB46DBBDC566ED34F55978416(L_0, L_1, NULL);
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActor__ctor_m6C363A81C813483EFC1A821CB21282F0967A22F1 (SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m887FE759D948FAA4E39A05B8B19C520A95D771DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCFCEFD0450B771537BE4C7E8DEB0EE2E8624A6E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<SxActorComponent> components = new List<SxActorComponent>();
		List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6* L_0 = (List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6*)il2cpp_codegen_object_new(List_1_t58AB096353CF73627A0301F1D3A1B4F37E4052C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCFCEFD0450B771537BE4C7E8DEB0EE2E8624A6E8(L_0, List_1__ctor_mCFCEFD0450B771537BE4C7E8DEB0EE2E8624A6E8_RuntimeMethod_var);
		__this->___components_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___components_0), (void*)L_0);
		// private SxTransform worldTransform = SxTransform.identity;
		il2cpp_codegen_runtime_class_init_inline(SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_il2cpp_TypeInfo_var);
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_1 = ((SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_StaticFields*)il2cpp_codegen_static_fields_for(SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_il2cpp_TypeInfo_var))->___identity_5;
		__this->___worldTransform_1 = L_1;
		// private List<ISxSceneNode> children = new List<ISxSceneNode>();
		List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5* L_2 = (List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5*)il2cpp_codegen_object_new(List_1_t03CABE5DDAD36E34BDD3D4287A1C63B87CACDDC5_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m887FE759D948FAA4E39A05B8B19C520A95D771DF(L_2, List_1__ctor_m887FE759D948FAA4E39A05B8B19C520A95D771DF_RuntimeMethod_var);
		__this->___children_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_3), (void*)L_2);
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
// System.Void DungeonArchitect.SxEngine.SxActorComponent::Draw(DungeonArchitect.SxEngine.SxRenderContext,UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxRenderCommandList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActorComponent_Draw_mA41C996A5286C64207E9B185C51A58AD50A598B0 (SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_accumWorldTransform, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___2_renderCommandList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActorComponent::Tick(DungeonArchitect.SxEngine.SxRenderContext,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActorComponent_Tick_m74D59FCAA1C80875A7D4337627691B861675B92F (SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, float ___1_deltaTime, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActorComponent::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActorComponent_Destroy_mC9B4422A445CD84A553DC6F938122D0B2CCED691 (SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxActorComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxActorComponent__ctor_m0C6FFD9EAC85FD36B005C58719A769F95F306F5C (SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* __this, const RuntimeMethod* method) 
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
// DungeonArchitect.SxEngine.SxRootSceneNode DungeonArchitect.SxEngine.SxWorld::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* SxWorld_get_RootNode_m84D8BDAD703084FC92E21FAA0AEB5CC5ADF24D62 (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, const RuntimeMethod* method) 
{
	{
		// get => sceneGraph.RootNode;
		SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* L_0 = __this->___sceneGraph_0;
		NullCheck(L_0);
		SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* L_1;
		L_1 = SxSceneGraph_get_RootNode_mEA95642585AAEA1A9EFD7BC5B941B7D4F012C9AB_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void DungeonArchitect.SxEngine.SxWorld::Draw(DungeonArchitect.SxEngine.SxRenderContext,DungeonArchitect.SxEngine.SxRenderCommandList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_Draw_mA7E2E96C2BD47832DF973D32A2CF111AC8476438 (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___1_renderCommandList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m455FE606C98C5386DF71A5AE34195438DF331E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* V_0 = NULL;
	{
		// var visited = new HashSet<ISxSceneNode>();
		HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* L_0 = (HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64*)il2cpp_codegen_object_new(HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m455FE606C98C5386DF71A5AE34195438DF331E6D(L_0, HashSet_1__ctor_m455FE606C98C5386DF71A5AE34195438DF331E6D_RuntimeMethod_var);
		V_0 = L_0;
		// DrawRecursive(context, sceneGraph.RootNode, Matrix4x4.identity, visited, renderCommandList);
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_1 = ___0_context;
		SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* L_2 = __this->___sceneGraph_0;
		NullCheck(L_2);
		SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* L_3;
		L_3 = SxSceneGraph_get_RootNode_mEA95642585AAEA1A9EFD7BC5B941B7D4F012C9AB_inline(L_2, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* L_5 = V_0;
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_6 = ___1_renderCommandList;
		SxWorld_DrawRecursive_m4323EE431E88C620E0EC5DF49BEBBCA6F0A9E525(__this, L_1, L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxWorld::DrawRecursive(DungeonArchitect.SxEngine.SxRenderContext,DungeonArchitect.SxEngine.ISxSceneNode,UnityEngine.Matrix4x4,System.Collections.Generic.HashSet`1<DungeonArchitect.SxEngine.ISxSceneNode>,DungeonArchitect.SxEngine.SxRenderCommandList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_DrawRecursive_m4323EE431E88C620E0EC5DF49BEBBCA6F0A9E525 (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, RuntimeObject* ___1_node, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_incomingWorldTransform, HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* ___3_visited, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* ___4_renderCommandList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mCCAA4D1F0BD177F6E0364BDB08D76F9DE49AEE27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m6740A7D1B558BD1F4D9F81F604835B53EA8344B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// if (visited.Contains(node))
		HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* L_0 = ___3_visited;
		RuntimeObject* L_1 = ___1_node;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m6740A7D1B558BD1F4D9F81F604835B53EA8344B4(L_0, L_1, HashSet_1_Contains_m6740A7D1B558BD1F4D9F81F604835B53EA8344B4_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// visited.Add(node);
		HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* L_3 = ___3_visited;
		RuntimeObject* L_4 = ___1_node;
		NullCheck(L_3);
		bool L_5;
		L_5 = HashSet_1_Add_mCCAA4D1F0BD177F6E0364BDB08D76F9DE49AEE27(L_3, L_4, HashSet_1_Add_mCCAA4D1F0BD177F6E0364BDB08D76F9DE49AEE27_RuntimeMethod_var);
		// var accumulatedWorldTransform = incomingWorldTransform * node.WorldTransform.Matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___2_incomingWorldTransform;
		RuntimeObject* L_7 = ___1_node;
		NullCheck(L_7);
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_8;
		L_8 = InterfaceFuncInvoker0< SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 >::Invoke(0 /* DungeonArchitect.SxEngine.Utils.SxTransform DungeonArchitect.SxEngine.ISxSceneNode::get_WorldTransform() */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = SxTransform_get_Matrix_m920F3DD7452B19A9CBC07E7879BD5440863D1CB3((&V_1), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_6, L_9, NULL);
		V_0 = L_10;
		// node.Draw(context, accumulatedWorldTransform, renderCommandList);
		RuntimeObject* L_11 = ___1_node;
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_12 = ___0_context;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = V_0;
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_14 = ___4_renderCommandList;
		NullCheck(L_11);
		InterfaceActionInvoker3< SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* >::Invoke(2 /* System.Void DungeonArchitect.SxEngine.ISxSceneNode::Draw(DungeonArchitect.SxEngine.SxRenderContext,UnityEngine.Matrix4x4,DungeonArchitect.SxEngine.SxRenderCommandList) */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14);
		// foreach (var childNode in node.Children)
		RuntimeObject* L_15 = ___1_node;
		NullCheck(L_15);
		ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* L_16;
		L_16 = InterfaceFuncInvoker0< ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* >::Invoke(5 /* DungeonArchitect.SxEngine.ISxSceneNode[] DungeonArchitect.SxEngine.ISxSceneNode::get_Children() */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_15);
		V_2 = L_16;
		V_3 = 0;
		goto IL_0055;
	}

IL_003e:
	{
		// foreach (var childNode in node.Children)
		ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		// DrawRecursive(context, childNode, accumulatedWorldTransform, visited, renderCommandList);
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_21 = ___0_context;
		RuntimeObject* L_22 = V_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23 = V_0;
		HashSet_1_t7CE1EACBAA9150363D530DF49C8BEC2B0F391E64* L_24 = ___3_visited;
		SxRenderCommandList_t3C54B1B512D3CC7F8DD6C3FF7ABB15EC61CACF3E* L_25 = ___4_renderCommandList;
		SxWorld_DrawRecursive_m4323EE431E88C620E0EC5DF49BEBBCA6F0A9E525(__this, L_21, L_22, L_23, L_24, L_25, NULL);
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0055:
	{
		// foreach (var childNode in node.Children)
		int32_t L_27 = V_3;
		ISxSceneNodeU5BU5D_t8C121DAAA821ACB7E30208EA91128D316D11B523* L_28 = V_2;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxWorld::Tick(DungeonArchitect.SxEngine.SxRenderContext,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_Tick_mBD530694FE29253BB8F0FE34B7998A5E9947A7AB (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, float ___1_deltaTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CTickU3Eb__0_m59480D74A6DA412B451D4840793D15CE65B63D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817* L_0 = (U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m0BA9FCA26F31AE263392FD83E67897E6CFA259DC(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817* L_1 = V_0;
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_2 = ___0_context;
		NullCheck(L_1);
		L_1->___context_0 = L_2;
		U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817* L_3 = V_0;
		float L_4 = ___1_deltaTime;
		NullCheck(L_3);
		L_3->___deltaTime_1 = L_4;
		// sceneGraph.IterateNodes((node) => node.Tick(context, deltaTime));
		SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* L_5 = __this->___sceneGraph_0;
		U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817* L_6 = V_0;
		Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D* L_7 = (Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D*)il2cpp_codegen_object_new(Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m27700D9A3CD21BD88337DC0A2EA4458A1E46075F(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CTickU3Eb__0_m59480D74A6DA412B451D4840793D15CE65B63D40_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		SxSceneGraph_IterateNodes_mD224E7FD4A99F96E3DBA7B7AA5083D5484440FFE(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxWorld::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_Clear_mC3E6E54D460D07C75D2ACFF48A93B6AB3276E3AC (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxWorld_U3CClearU3Eb__6_0_m6757E969E1D0CEB3D09960B65086EFA4F09F510A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sceneGraph.IterateNodes((node) =>
		// {
		//     if (node is SxActor)
		//     {
		//         DestroyActorImpl(node as SxActor);
		//     }
		// });
		SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* L_0 = __this->___sceneGraph_0;
		Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D* L_1 = (Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D*)il2cpp_codegen_object_new(Action_1_t0BD6224A5F6B0C4CC04A524E89F478C5D41E6C7D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m27700D9A3CD21BD88337DC0A2EA4458A1E46075F(L_1, __this, (intptr_t)((void*)SxWorld_U3CClearU3Eb__6_0_m6757E969E1D0CEB3D09960B65086EFA4F09F510A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		SxSceneGraph_IterateNodes_mD224E7FD4A99F96E3DBA7B7AA5083D5484440FFE(L_0, L_1, NULL);
		// sceneGraph.RootNode.RemoveAllChildren();
		SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* L_2 = __this->___sceneGraph_0;
		NullCheck(L_2);
		SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* L_3;
		L_3 = SxSceneGraph_get_RootNode_mEA95642585AAEA1A9EFD7BC5B941B7D4F012C9AB_inline(L_2, NULL);
		NullCheck(L_3);
		SxSceneNodeBase_RemoveAllChildren_m5BBB4E2CCA654F39FE5ECD483BBF05BEF3903964(L_3, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxWorld::DestroyActor(DungeonArchitect.SxEngine.SxActor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_DestroyActor_m98FFA874DC3ADAC44B925EBC106C4CE08025C4AD (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* ___0_actor, const RuntimeMethod* method) 
{
	{
		// DestroyActorImpl(actor);
		SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* L_0 = ___0_actor;
		SxWorld_DestroyActorImpl_m1101B16A3ABCEFE2D5E3946B92A4718166E73098(__this, L_0, NULL);
		// sceneGraph.Remove(actor);
		SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* L_1 = __this->___sceneGraph_0;
		SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* L_2 = ___0_actor;
		NullCheck(L_1);
		SxSceneGraph_Remove_m0E4031256DB0E49570B7E256AB10E1E59EA11DC9(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxWorld::DestroyActorImpl(DungeonArchitect.SxEngine.SxActor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_DestroyActorImpl_m1101B16A3ABCEFE2D5E3946B92A4718166E73098 (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* ___0_actor, const RuntimeMethod* method) 
{
	SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var component in actor.Components)
		SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB* L_0 = ___0_actor;
		NullCheck(L_0);
		SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* L_1;
		L_1 = SxActor_get_Components_m39CD7A7B28625EA2BBB65368FFBA43336DB4551A(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (var component in actor.Components)
		SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SxActorComponent_t363DF8FFA0020261D53D9FF5DD8E69FA3E03F348* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// component.Destroy();
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(6 /* System.Void DungeonArchitect.SxEngine.SxActorComponent::Destroy() */, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0017:
	{
		// foreach (var component in actor.Components)
		int32_t L_7 = V_1;
		SxActorComponentU5BU5D_tE3424E9D801BAB940154B6D4BD7A222D9A9CF6BE* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxWorld::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld__ctor_m69690DE32D857025D839EEE159284F9EF51A90E1 (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private SxSceneGraph sceneGraph = new SxSceneGraph();
		SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* L_0 = (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC*)il2cpp_codegen_object_new(SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SxSceneGraph__ctor_m700568259AD509CB8CD8102C33FBAF1AFEF84BEC(L_0, NULL);
		__this->___sceneGraph_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneGraph_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxWorld::<Clear>b__6_0(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxWorld_U3CClearU3Eb__6_0_m6757E969E1D0CEB3D09960B65086EFA4F09F510A (SxWorld_t9DBFD5AA4842BF69A8BB2867607B89D034C23DBD* __this, RuntimeObject* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (node is SxActor)
		RuntimeObject* L_0 = ___0_node;
		if (!((SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB*)IsInstClass((RuntimeObject*)L_0, SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		// DestroyActorImpl(node as SxActor);
		RuntimeObject* L_1 = ___0_node;
		SxWorld_DestroyActorImpl_m1101B16A3ABCEFE2D5E3946B92A4718166E73098(__this, ((SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB*)IsInstClass((RuntimeObject*)L_1, SxActor_t03CE7CA136799ECC4DC2CF9F0F27B41DDF63B8DB_il2cpp_TypeInfo_var)), NULL);
	}

IL_0014:
	{
		// });
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
// System.Void DungeonArchitect.SxEngine.SxWorld/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m0BA9FCA26F31AE263392FD83E67897E6CFA259DC (U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DungeonArchitect.SxEngine.SxWorld/<>c__DisplayClass5_0::<Tick>b__0(DungeonArchitect.SxEngine.ISxSceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CTickU3Eb__0_m59480D74A6DA412B451D4840793D15CE65B63D40 (U3CU3Ec__DisplayClass5_0_t0A61D558904B9123DC56E4D06A41CE053D729817* __this, RuntimeObject* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sceneGraph.IterateNodes((node) => node.Tick(context, deltaTime));
		RuntimeObject* L_0 = ___0_node;
		SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 L_1 = __this->___context_0;
		float L_2 = __this->___deltaTime_1;
		NullCheck(L_0);
		InterfaceActionInvoker2< SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, float >::Invoke(3 /* System.Void DungeonArchitect.SxEngine.ISxSceneNode::Tick(DungeonArchitect.SxEngine.SxRenderContext,System.Single) */, ISxSceneNode_t77E85FAF4E47CFB1391163949515991B987D4D95_il2cpp_TypeInfo_var, L_0, L_1, L_2);
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
// DungeonArchitect.SxEngine.SxMesh DungeonArchitect.SxEngine.Utils.SxMeshUtils::CreateGridMesh(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* SxMeshUtils_CreateGridMesh_m15F211BC0304994E2ECD16B03156BACFBFBA66F7 (int32_t ___0_numCells, float ___1_cellSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m1B05344A1098A1C37A6D4133999EBE3B11081B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* V_0 = NULL;
	List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var gridMesh = new SxMesh();
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_0 = (SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B*)il2cpp_codegen_object_new(SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SxMesh__ctor_mDF54410B7469AC026B0951FF74D78D230730411E(L_0, NULL);
		V_0 = L_0;
		// var vertices = new List<SxMeshVertex>();
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_1 = (List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1*)il2cpp_codegen_object_new(List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4(L_1, List_1__ctor_mD2DF795CB83CF1038C1C8C032CB12F9233ABEBC4_RuntimeMethod_var);
		V_1 = L_1;
		// float start = -(numCells / 2) * cellSize;
		int32_t L_2 = ___0_numCells;
		float L_3 = ___1_cellSize;
		V_2 = ((float)il2cpp_codegen_multiply(((float)((-((int32_t)(L_2/2))))), L_3));
		// float end = start + numCells * cellSize;
		float L_4 = V_2;
		int32_t L_5 = ___0_numCells;
		float L_6 = ___1_cellSize;
		V_3 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(((float)L_5), L_6))));
		// var gridColor = new Color(0, 0, 0, 0.05f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_4), (0.0f), (0.0f), (0.0f), (0.0500000007f), NULL);
		// for (int i = 0; i <= numCells; i++)
		V_5 = 0;
		goto IL_0177;
	}

IL_003e:
	{
		// var a = (i - numCells / 2) * cellSize;
		int32_t L_7 = V_5;
		int32_t L_8 = ___0_numCells;
		float L_9 = ___1_cellSize;
		V_6 = ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(L_8/2))))), L_9));
		// var colorX = gridColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_4;
		V_7 = L_10;
		// var colorZ = gridColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_4;
		V_8 = L_11;
		// vertices.Add(new SxMeshVertex(new Vector3(start, 0, a), colorX));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_12 = V_1;
		float L_13 = V_2;
		float L_14 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_13, (0.0f), L_14, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_7;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_17 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_17, L_15, L_16, NULL);
		NullCheck(L_12);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_12, L_17, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(new Vector3(end, 0, a), colorX));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_18 = V_1;
		float L_19 = V_3;
		float L_20 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_19, (0.0f), L_20, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = V_7;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_23 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_23, L_21, L_22, NULL);
		NullCheck(L_18);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_18, L_23, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(new Vector3(a, 0, start), colorZ));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_24 = V_1;
		float L_25 = V_6;
		float L_26 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), L_25, (0.0f), L_26, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_8;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_29 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_29, L_27, L_28, NULL);
		NullCheck(L_24);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_24, L_29, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(new Vector3(a, 0, end), colorZ));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_30 = V_1;
		float L_31 = V_6;
		float L_32 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), L_31, (0.0f), L_32, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = V_8;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_35 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_35, L_33, L_34, NULL);
		NullCheck(L_30);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_30, L_35, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// if (i == numCells / 2)
		int32_t L_36 = V_5;
		int32_t L_37 = ___0_numCells;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)(L_37/2))))))
		{
			goto IL_0171;
		}
	}
	{
		// colorX = new Color(1, 0.5f, 0.5f, 1);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_7), (1.0f), (0.5f), (0.5f), (1.0f), NULL);
		// colorZ = new Color(0.5f, 0.5f, 1, 1);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_8), (0.5f), (0.5f), (1.0f), (1.0f), NULL);
		// vertices.Add(new SxMeshVertex(new Vector3(0, 0, a), colorX));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_38 = V_1;
		float L_39 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), (0.0f), (0.0f), L_39, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = V_7;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_42 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_42, L_40, L_41, NULL);
		NullCheck(L_38);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_38, L_42, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(new Vector3(1, 0, a), colorX));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_43 = V_1;
		float L_44 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_45), (1.0f), (0.0f), L_44, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46 = V_7;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_47 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_47, L_45, L_46, NULL);
		NullCheck(L_43);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_43, L_47, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(new Vector3(a, 0, 0), colorZ));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_48 = V_1;
		float L_49 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), L_49, (0.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51 = V_8;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_52 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_52, L_50, L_51, NULL);
		NullCheck(L_48);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_48, L_52, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(new Vector3(a, 0, 1), colorZ));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_53 = V_1;
		float L_54 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_55), L_54, (0.0f), (1.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = V_8;
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_57 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_57, L_55, L_56, NULL);
		NullCheck(L_53);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_53, L_57, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
	}

IL_0171:
	{
		// for (int i = 0; i <= numCells; i++)
		int32_t L_58 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0177:
	{
		// for (int i = 0; i <= numCells; i++)
		int32_t L_59 = V_5;
		int32_t L_60 = ___0_numCells;
		if ((((int32_t)L_59) <= ((int32_t)L_60)))
		{
			goto IL_003e;
		}
	}
	{
		// vertices.Add(new SxMeshVertex(new Vector3(0, 0, 0), Color.green));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_61 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_62), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_64 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_64, L_62, L_63, NULL);
		NullCheck(L_61);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_61, L_64, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// vertices.Add(new SxMeshVertex(new Vector3(0, 1, 0), Color.green));
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_65 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_66), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67;
		L_67 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* L_68 = (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1*)il2cpp_codegen_object_new(SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		SxMeshVertex__ctor_m4BBDFDED2150F36A0C0807D57A62FCFEF7F506CD(L_68, L_66, L_67, NULL);
		NullCheck(L_65);
		List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_inline(L_65, L_68, List_1_Add_m94674FC50C0B00698210B4059D9789B213A8471F_RuntimeMethod_var);
		// gridMesh.CreateSection(0, GL.LINES, vertices.ToArray());
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_69 = V_0;
		List_1_t8B253A6B3F0CF4760EBF74CFBCF9115CA62BE3B1* L_70 = V_1;
		NullCheck(L_70);
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_71;
		L_71 = List_1_ToArray_m1B05344A1098A1C37A6D4133999EBE3B11081B54(L_70, List_1_ToArray_m1B05344A1098A1C37A6D4133999EBE3B11081B54_RuntimeMethod_var);
		NullCheck(L_69);
		SxMesh_CreateSection_m57EBE3C7ACA6F8B8A40386205A8F0133FB1595EB(L_69, 0, 1, L_71, NULL);
		// return gridMesh;
		SxMesh_t82E396FB1E8A541A13FDA34EDAD86A4A6280E77B* L_72 = V_0;
		return L_72;
	}
}
// System.Void DungeonArchitect.SxEngine.Utils.SxMeshUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxMeshUtils__ctor_mDFD856DBE39E18796AE816D9AE4D12B5EBCF7648 (SxMeshUtils_tF92E6AF0CB6B79344EA0A8248BABCBE5D08E0336* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: DungeonArchitect.SxEngine.Utils.SxTransform
IL2CPP_EXTERN_C void SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshal_pinvoke(const SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67& unmarshaled, SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshaled_pinvoke& marshaled)
{
	marshaled.____position_0 = unmarshaled.____position_0;
	marshaled.____rotation_1 = unmarshaled.____rotation_1;
	marshaled.____scale_2 = unmarshaled.____scale_2;
	marshaled.____matrix_3 = unmarshaled.____matrix_3;
	marshaled.___dirty_4 = static_cast<int32_t>(unmarshaled.___dirty_4);
}
IL2CPP_EXTERN_C void SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshal_pinvoke_back(const SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshaled_pinvoke& marshaled, SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaled_position_temp_0;
	memset((&unmarshaled_position_temp_0), 0, sizeof(unmarshaled_position_temp_0));
	unmarshaled_position_temp_0 = marshaled.____position_0;
	unmarshaled.____position_0 = unmarshaled_position_temp_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaled_rotation_temp_1;
	memset((&unmarshaled_rotation_temp_1), 0, sizeof(unmarshaled_rotation_temp_1));
	unmarshaled_rotation_temp_1 = marshaled.____rotation_1;
	unmarshaled.____rotation_1 = unmarshaled_rotation_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaled_scale_temp_2;
	memset((&unmarshaled_scale_temp_2), 0, sizeof(unmarshaled_scale_temp_2));
	unmarshaled_scale_temp_2 = marshaled.____scale_2;
	unmarshaled.____scale_2 = unmarshaled_scale_temp_2;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 unmarshaled_matrix_temp_3;
	memset((&unmarshaled_matrix_temp_3), 0, sizeof(unmarshaled_matrix_temp_3));
	unmarshaled_matrix_temp_3 = marshaled.____matrix_3;
	unmarshaled.____matrix_3 = unmarshaled_matrix_temp_3;
	bool unmarshaleddirty_temp_4 = false;
	unmarshaleddirty_temp_4 = static_cast<bool>(marshaled.___dirty_4);
	unmarshaled.___dirty_4 = unmarshaleddirty_temp_4;
}
// Conversion method for clean up from marshalling of: DungeonArchitect.SxEngine.Utils.SxTransform
IL2CPP_EXTERN_C void SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshal_pinvoke_cleanup(SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: DungeonArchitect.SxEngine.Utils.SxTransform
IL2CPP_EXTERN_C void SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshal_com(const SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67& unmarshaled, SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshaled_com& marshaled)
{
	marshaled.____position_0 = unmarshaled.____position_0;
	marshaled.____rotation_1 = unmarshaled.____rotation_1;
	marshaled.____scale_2 = unmarshaled.____scale_2;
	marshaled.____matrix_3 = unmarshaled.____matrix_3;
	marshaled.___dirty_4 = static_cast<int32_t>(unmarshaled.___dirty_4);
}
IL2CPP_EXTERN_C void SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshal_com_back(const SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshaled_com& marshaled, SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaled_position_temp_0;
	memset((&unmarshaled_position_temp_0), 0, sizeof(unmarshaled_position_temp_0));
	unmarshaled_position_temp_0 = marshaled.____position_0;
	unmarshaled.____position_0 = unmarshaled_position_temp_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaled_rotation_temp_1;
	memset((&unmarshaled_rotation_temp_1), 0, sizeof(unmarshaled_rotation_temp_1));
	unmarshaled_rotation_temp_1 = marshaled.____rotation_1;
	unmarshaled.____rotation_1 = unmarshaled_rotation_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaled_scale_temp_2;
	memset((&unmarshaled_scale_temp_2), 0, sizeof(unmarshaled_scale_temp_2));
	unmarshaled_scale_temp_2 = marshaled.____scale_2;
	unmarshaled.____scale_2 = unmarshaled_scale_temp_2;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 unmarshaled_matrix_temp_3;
	memset((&unmarshaled_matrix_temp_3), 0, sizeof(unmarshaled_matrix_temp_3));
	unmarshaled_matrix_temp_3 = marshaled.____matrix_3;
	unmarshaled.____matrix_3 = unmarshaled_matrix_temp_3;
	bool unmarshaleddirty_temp_4 = false;
	unmarshaleddirty_temp_4 = static_cast<bool>(marshaled.___dirty_4);
	unmarshaled.___dirty_4 = unmarshaleddirty_temp_4;
}
// Conversion method for clean up from marshalling of: DungeonArchitect.SxEngine.Utils.SxTransform
IL2CPP_EXTERN_C void SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshal_com_cleanup(SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_marshaled_com& marshaled)
{
}
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform__ctor_m0E71AAC1923E45C00235B236582B146312A14067 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) 
{
	{
		// _position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		__this->____position_0 = L_0;
		// _rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->____rotation_1 = L_1;
		// _scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->____scale_2 = L_2;
		// _matrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->____matrix_3 = L_3;
		// dirty = true;
		__this->___dirty_4 = (bool)1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SxTransform__ctor_m0E71AAC1923E45C00235B236582B146312A14067_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	SxTransform__ctor_m0E71AAC1923E45C00235B236582B146312A14067(_thisAdjusted, ___0_position, method);
}
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::.ctor(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform__ctor_mDB13432BEE2834B219E373333FD108BF4B8BB132 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) 
{
	{
		// _position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____position_0 = L_0;
		// _rotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_rotation;
		__this->____rotation_1 = L_1;
		// _scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->____scale_2 = L_2;
		// _matrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->____matrix_3 = L_3;
		// dirty = true;
		__this->___dirty_4 = (bool)1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SxTransform__ctor_mDB13432BEE2834B219E373333FD108BF4B8BB132_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	SxTransform__ctor_mDB13432BEE2834B219E373333FD108BF4B8BB132(_thisAdjusted, ___0_rotation, method);
}
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform__ctor_mCD726FB25E963EEA32042601C1FCBE9119C5E9E1 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		// _position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		__this->____position_0 = L_0;
		// _rotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rotation;
		__this->____rotation_1 = L_1;
		// _scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->____scale_2 = L_2;
		// _matrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->____matrix_3 = L_3;
		// dirty = true;
		__this->___dirty_4 = (bool)1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SxTransform__ctor_mCD726FB25E963EEA32042601C1FCBE9119C5E9E1_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	SxTransform__ctor_mCD726FB25E963EEA32042601C1FCBE9119C5E9E1(_thisAdjusted, ___0_position, ___1_rotation, method);
}
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform__ctor_m852DCDB8617193A749A994D1ABA6C6B11724BF3F (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) 
{
	{
		// _position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		__this->____position_0 = L_0;
		// _rotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rotation;
		__this->____rotation_1 = L_1;
		// _scale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_scale;
		__this->____scale_2 = L_2;
		// _matrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->____matrix_3 = L_3;
		// dirty = true;
		__this->___dirty_4 = (bool)1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SxTransform__ctor_m852DCDB8617193A749A994D1ABA6C6B11724BF3F_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	SxTransform__ctor_m852DCDB8617193A749A994D1ABA6C6B11724BF3F(_thisAdjusted, ___0_position, ___1_rotation, ___2_scale, method);
}
// UnityEngine.Vector3 DungeonArchitect.SxEngine.Utils.SxTransform::get_Positon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxTransform_get_Positon_m85ABD9B6E0F5AA8D1C5EDDA73EB709B409FD2865 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) 
{
	{
		// get => _position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____position_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxTransform_get_Positon_m85ABD9B6E0F5AA8D1C5EDDA73EB709B409FD2865_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = SxTransform_get_Positon_m85ABD9B6E0F5AA8D1C5EDDA73EB709B409FD2865_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::set_Positon(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform_set_Positon_m35A84BFFBF53F8724116FB90B378DF765EEB1703 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_position != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// _position = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		__this->____position_0 = L_3;
		// dirty = true;
		__this->___dirty_4 = (bool)1;
	}

IL_001c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SxTransform_set_Positon_m35A84BFFBF53F8724116FB90B378DF765EEB1703_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	SxTransform_set_Positon_m35A84BFFBF53F8724116FB90B378DF765EEB1703(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Quaternion DungeonArchitect.SxEngine.Utils.SxTransform::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SxTransform_get_Rotation_mF9A33AF7C04A299E9384D8D08DEF52F3C1AA591F (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) 
{
	{
		// get => _rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->____rotation_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SxTransform_get_Rotation_mF9A33AF7C04A299E9384D8D08DEF52F3C1AA591F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = SxTransform_get_Rotation_mF9A33AF7C04A299E9384D8D08DEF52F3C1AA591F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform_set_Rotation_m2747EA452C289093B980662A38A15C98856DA583 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_rotation != value)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->____rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_value;
		bool L_2;
		L_2 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// _rotation = value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___0_value;
		__this->____rotation_1 = L_3;
		// dirty = true;
		__this->___dirty_4 = (bool)1;
	}

IL_001c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SxTransform_set_Rotation_m2747EA452C289093B980662A38A15C98856DA583_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	SxTransform_set_Rotation_m2747EA452C289093B980662A38A15C98856DA583(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector3 DungeonArchitect.SxEngine.Utils.SxTransform::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxTransform_get_Scale_m92D32E885F207EBF0D9568380EF71F41197B9597 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) 
{
	{
		// get => _scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____scale_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxTransform_get_Scale_m92D32E885F207EBF0D9568380EF71F41197B9597_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = SxTransform_get_Scale_m92D32E885F207EBF0D9568380EF71F41197B9597_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform_set_Scale_m98A029AF4F1F0AFCB46DBBDC566ED34F55978416 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_scale != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____scale_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// _scale = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		__this->____scale_2 = L_3;
		// dirty = true;
		__this->___dirty_4 = (bool)1;
	}

IL_001c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SxTransform_set_Scale_m98A029AF4F1F0AFCB46DBBDC566ED34F55978416_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	SxTransform_set_Scale_m98A029AF4F1F0AFCB46DBBDC566ED34F55978416(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Matrix4x4 DungeonArchitect.SxEngine.Utils.SxTransform::get_Matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SxTransform_get_Matrix_m920F3DD7452B19A9CBC07E7879BD5440863D1CB3 (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) 
{
	{
		// if (dirty)
		bool L_0 = __this->___dirty_4;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// _matrix = Matrix4x4.TRS(_position, _rotation, _scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____position_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->____rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____scale_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_1, L_2, L_3, NULL);
		__this->____matrix_3 = L_4;
		// dirty = false;
		__this->___dirty_4 = (bool)0;
	}

IL_002c:
	{
		// return _matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = __this->____matrix_3;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SxTransform_get_Matrix_m920F3DD7452B19A9CBC07E7879BD5440863D1CB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67*>(__this + _offset);
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _returnValue;
	_returnValue = SxTransform_get_Matrix_m920F3DD7452B19A9CBC07E7879BD5440863D1CB3(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DungeonArchitect.SxEngine.Utils.SxTransform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SxTransform__cctor_mFA6F8C133289EFDB86CDC99A8AEE1AEECB47CCA2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly SxTransform identity = new SxTransform()
		// {
		//     _position = Vector3.zero,
		//     _rotation = Quaternion.identity,
		//     _scale = Vector3.one,
		//     _matrix = Matrix4x4.identity,
		//     dirty = false
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		(&V_0)->____position_0 = L_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		(&V_0)->____rotation_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		(&V_0)->____scale_2 = L_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		(&V_0)->____matrix_3 = L_3;
		(&V_0)->___dirty_4 = (bool)0;
		SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67 L_4 = V_0;
		((SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_StaticFields*)il2cpp_codegen_static_fields_for(SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67_il2cpp_TypeInfo_var))->___identity_5 = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshComponent_set_Material_m27AE81476A0215052D91902267D426E1E6DF9B94_inline (SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* __this, SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _material = value;
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_0 = ___0_value;
		__this->____material_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* SxMeshComponent_get_Material_mDFE4BE0E590AEE75021AC2524E48FD7596B73F43_inline (SxMeshComponent_t769534859D985B66C148D44D48BD43A76C9911B0* __this, const RuntimeMethod* method) 
{
	{
		// get => _material;
		SxMaterial_tD04642D8A3E8908103C41D01DA4588A286A75BE9* L_0 = __this->____material_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxMeshVertex_get_Position_mAE27FFE26F37AE902092C574695F4AEAE94A10F5_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshVertex_set_Position_m20DCA6423C159798D3A35DECCEEA82FA30B7452A_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshVertex_set_Color_m1A218CBC467001902157712F8FD8C33BE3764097_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color Color { get; set; } = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___U3CColorU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshVertex_set_UV0_mF39249B682641156BD43C02A7FD98561215DC628_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 UV0 { get; set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CUV0U3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshSection_set_DrawMode_mAAEEF4E22BF6A15E6DC46DCCBDDE16D31EA73E63_inline (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int DrawMode { get; set; } = GL.LINES;
		int32_t L_0 = ___0_value;
		__this->___U3CDrawModeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxMeshSection_set_Vertices_m77942424BEC7596C19385CD110A05B6B217A98DC_inline (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SxMeshVertex[] Vertices { get; set; } = new SxMeshVertex[0];
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_0 = ___0_value;
		__this->___U3CVerticesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVerticesU3Ek__BackingField_1), (void*)L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SxCamera_get_Rotation_mCA07DDCBF6887AB545E5530067534003925CE481_inline (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) 
{
	{
		// get => rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___rotation_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* SxRenderer_get_Camera_m06F15377120A653FCDD0FBA924E6EF1FC9D96E53_inline (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	{
		// public SxCamera Camera { get; } = new SxCamera();
		SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* L_0 = __this->___U3CCameraU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxCamera_get_Location_m310DA09594D938A393746256346A50CCBDB6FE3A_inline (SxCamera_t31262C5211ECBC1D9F92266A60C9A1EF5B92A825* __this, const RuntimeMethod* method) 
{
	{
		// get => location;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___location_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* SxRenderer_get_Texture_m96A56D2E73A0BA88B646B073B81B853D9E7804C2_inline (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	{
		// public RenderTexture Texture { get; private set; }
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3CTextureU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SxRenderer_get_FOV_m04B5ECB56E05213629AE62FB5684AA80CADFF072_inline (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, const RuntimeMethod* method) 
{
	{
		// public float FOV { get; } = 75;
		float L_0 = __this->___U3CFOVU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DrawDelegate_Invoke_m796EED77F3F7635E35A01C7FBBA723415BE33C29_inline (DrawDelegate_t0A2CB2ED575F87DB43CDD3BF56C51E032456BC71* __this, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63 ___0_context, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SxRenderContext_tB0D706921881686CEE6F051D039A6FCF1BE43A63, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SxRenderer_set_Texture_m83039C77317DDF2A217301C376845112F03BB562_inline (SxRenderer_tAD369292CCA13A1F93ACB4D936A3FCB034CAA323* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) 
{
	{
		// public RenderTexture Texture { get; private set; }
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_value;
		__this->___U3CTextureU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextureU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SxMeshSection_get_DrawMode_mAEE1C13FD53C6339E803D3738BAB4E7FA9EEB56C_inline (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, const RuntimeMethod* method) 
{
	{
		// public int DrawMode { get; set; } = GL.LINES;
		int32_t L_0 = __this->___U3CDrawModeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* SxMeshSection_get_Vertices_m98DC66D5FE65E65FB61242D2A3E81CBAB01C0417_inline (SxMeshSection_t15854867233767C9DE935FAE2D3F902F36ABB5C2* __this, const RuntimeMethod* method) 
{
	{
		// public SxMeshVertex[] Vertices { get; set; } = new SxMeshVertex[0];
		SxMeshVertexU5BU5D_t33DDC0C0B73752EA2A5A5DF7F878507292FAB15C* L_0 = __this->___U3CVerticesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SxMeshVertex_get_Color_mEDEF4776F7756BFACDE6EE7D4D67C953AA82B286_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { get; set; } = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CColorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SxMeshVertex_get_UV0_mDC91E4537FA5D156F6F95F51E5E25AAE6E616561_inline (SxMeshVertex_t49B4DE27E61FFD9D517BBB522D828DD7067190F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 UV0 { get; set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CUV0U3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		float L_2 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___0_a;
		float L_4 = L_3.___y_2;
		float L_5 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_a;
		float L_7 = L_6.___z_3;
		float L_8 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___0_a;
		float L_10 = L_9.___w_4;
		float L_11 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* SxSceneGraph_get_RootNode_mEA95642585AAEA1A9EFD7BC5B941B7D4F012C9AB_inline (SxSceneGraph_tFEE27979E7298DFE111C19574B35D1B5A09FF5CC* __this, const RuntimeMethod* method) 
{
	{
		// public SxRootSceneNode RootNode { get; } = new SxRootSceneNode();
		SxRootSceneNode_t341B291BFEC61C035ED18C9994211A90FE036245* L_0 = __this->___U3CRootNodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxTransform_get_Positon_m85ABD9B6E0F5AA8D1C5EDDA73EB709B409FD2865_inline (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) 
{
	{
		// get => _position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____position_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SxTransform_get_Rotation_mF9A33AF7C04A299E9384D8D08DEF52F3C1AA591F_inline (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) 
{
	{
		// get => _rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->____rotation_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SxTransform_get_Scale_m92D32E885F207EBF0D9568380EF71F41197B9597_inline (SxTransform_tE48FA028D72DD62E3C6DA61A2E7A8C742C170E67* __this, const RuntimeMethod* method) 
{
	{
		// get => _scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____scale_2;
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
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
