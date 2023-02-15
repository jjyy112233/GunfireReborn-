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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>
struct Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70;
// System.EventHandler`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs>
struct EventHandler_1_t0CE94806B21A1946A213697385068AA4885DFFE9;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs>
struct GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<System.Object>
struct GraphEvent_1_tD8F813A808AFE8129FA2E7B3C2B942F356B8F896;
// System.Collections.Generic.IEnumerable`1<DungeonArchitect.Graphs.GraphPin>
struct IEnumerable_1_t2B2708DB3A1138A87E193549CC1D7737BEA4102F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>
struct KeyCollection_t609E3F8FE0CC2B4E76F03B9854F54BBA4A483753;
// System.Collections.Generic.List`1<System.EventHandler`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs>>
struct List_1_tF406926190D8CBB1201E3208329055E746D2AA1F;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>
struct List_1_t5B2B2081BF8097131F5848A462357FBB09D50112;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>
struct List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphPin>
struct List_1_tC958F6791FB4E4315279F35506727A207EBFFF03;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>
struct ValueCollection_t1D6B10722AACE5BD6CB6B251745A06D2BF78F7C7;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>[]
struct EntryU5BU5D_tC177F0AF123B838BDF56BADC9B7AEF1A9B4D37BB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
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
// DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink
struct CursorDragLink_t8EAEFB72433258F1AA37D025CE427359070DDB2B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// DungeonArchitect.UI.GUIState
struct GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// DungeonArchitect.Graphs.Graph
struct Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520;
// DungeonArchitect.Graphs.GraphCamera
struct GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphContextMenu
struct GraphContextMenu_t147D84E26A23C427E91FE57C1E058FB7DC42DB0A;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor
struct GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants
struct GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents
struct GraphEditorEvents_tAD293BE3A20F152AA76BC8AD33C2035650E29CC3;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorStyle
struct GraphEditorStyle_t4A3A6B0FC68FE092360EBE4112563B64E6AAA37F;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorUtils
struct GraphEditorUtils_tCD85F9BD1169161D4F2279B6663B6A025D0B049D;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphEventArgs
struct GraphEventArgs_tA2547DE472CA5D5616AC1237A01A9F04BAB6F85F;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler
struct GraphInputHandler_t524CD9DFCAC8E6F1B8C2EB5521624BE669BD963D;
// DungeonArchitect.Graphs.GraphLink
struct GraphLink_t167090219997E1F874E24A93015AD8333374E463;
// DungeonArchitect.Graphs.GraphNode
struct GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs
struct GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer
struct GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory
struct GraphNodeRendererFactory_t884091433C07C2FF4D98963DDA4A38C1FF609F63;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations
struct GraphOperations_t372733E784F1A0BD34088ED4698B4523B857A1EF;
// DungeonArchitect.Graphs.GraphPin
struct GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphPinRenderer
struct GraphPinRenderer_t84F1D9F9940DA5C10A013D41E131D800313F9CFB;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext
struct GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphSelectionBox
struct GraphSelectionBox_tDC787C5C51646102BE56E1BE931D7617AD18FF03;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltip
struct GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F;
// DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltipRenderer
struct GraphTooltipRenderer_t55783F5C43269851C736DFFEBA70AE9EE1B82E1C;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// DungeonArchitect.UI.Widgets.GraphEditors.IGraphLinkRenderer
struct IGraphLinkRenderer_tED5E06FA42D3E4BEBEB2D1513D91041F41FD6B0D;
// DungeonArchitect.UI.Widgets.IWidget
struct IWidget_t97C9AE977260D3F55295EFE0A8AC7214649866B8;
// DungeonArchitect.Graphs.IndexCounter
struct IndexCounter_tFAF43B6A09D1826D8FB68534CE96784FE80A7586;
// DungeonArchitect.UI.Widgets.GraphEditors.KeyboardState
struct KeyboardState_tF84E267708CA2B9EF85B88FDDFEB4B096576B358;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// DungeonArchitect.UI.Widgets.GraphEditors.NodeReversedZIndexComparer
struct NodeReversedZIndexComparer_t942328ED91806EEDA4699D12D223E2175AEF76B9;
// DungeonArchitect.UI.Widgets.GraphEditors.NodeZIndexComparer
struct NodeZIndexComparer_tD2980A618A77943AD07F5D630F77502D5B4E1B9E;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// DungeonArchitect.UI.OnDragEvent
struct OnDragEvent_t2D8051EE5DC3BD3103330361DA2E2E9798C08EB0;
// DungeonArchitect.UI.OnWidgetFocus
struct OnWidgetFocus_t5158D39C4984FFDCA7F9FF81F7834F7EA108CFEC;
// DungeonArchitect.UI.OnWidgetLostFocus
struct OnWidgetLostFocus_t4325BE4DC7929DBD57C7E76948AEFD4A45E9CA63;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// DungeonArchitect.UI.Widgets.GraphEditors.SplineGraphLinkRenderer
struct SplineGraphLinkRenderer_t5AD43167EECAECB7816E91A615564FB704812541;
// DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer
struct StraightLineGraphLinkRenderer_t62BA277D157DC991DDCF70B67ABD052B9C1799FE;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// DungeonArchitect.UI.UIPlatform
struct UIPlatform_t80D23CBEFAF993C6C1C5F4586F51489587505424;
// DungeonArchitect.UI.UIRenderer
struct UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4;
// DungeonArchitect.UI.UIResourceLookup
struct UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92;
// DungeonArchitect.UI.UIStyleManager
struct UIStyleManager_t78405D171B48A713492B64795B96CD6CF365F88C;
// DungeonArchitect.UI.UISystem
struct UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0;
// DungeonArchitect.UI.UIUndoSystem
struct UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink/OnDraggedLinkReleased
struct OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// DungeonArchitect.Graphs.GraphPin/OnPinLinksDestroyed
struct OnPinLinksDestroyed_t31CC02BAEA4461EB57CA08F0524EF2263FFD0E75;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIPlatform_t80D23CBEFAF993C6C1C5F4586F51489587505424_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIStyleManager_t78405D171B48A713492B64795B96CD6CF365F88C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral111026EB4845FFBD694059FB22E75DB2E3D82145;
IL2CPP_EXTERN_C String_t* _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD;
IL2CPP_EXTERN_C String_t* _stringLiteral439C035FFF19BD96387B758DE6BD4D64BCE4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteral544ECDDEF2E2C0E9CD5FF4993A896D99DA761523;
IL2CPP_EXTERN_C String_t* _stringLiteral7AE24056AD6123E48ABD98FA6212951E3BE63F25;
IL2CPP_EXTERN_C String_t* _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m79B3F00FE57C74CAA3480B04ED493931C9FED9BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m161A98950816B2A3B4666E3D551D9050EFBE4D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m16E3664F17F02119A5EDAEC5610A93932C961296_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3F28DD7F1E7874D7D3798FC60594E47DD8540F6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB5277785E02A4DC0E6E70FFC4537BEA6FEA7CA51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mF4DB098A1663C5DF8EF2F3756C157694436963C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEEFE62C7C50E0048B0655706256C7D8C6C8366D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6AA9B5E44668635577011634AA58A35308C2EE48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAC28286E9B8D6F0CB1C4CC01CE90FB9F38BFF622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIRenderer_GetResource_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m8B834BD0CCA9686D5261AF1179C792A2C8AE2AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m71201FF2909AA4C89A2116291CC410E64846ECDB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D;
struct GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70;
struct GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>
struct Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC177F0AF123B838BDF56BADC9B7AEF1A9B4D37BB* ____entries_1;
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
	KeyCollection_t609E3F8FE0CC2B4E76F03B9854F54BBA4A483753* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1D6B10722AACE5BD6CB6B251745A06D2BF78F7C7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs>
struct GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206  : public RuntimeObject
{
	// System.EventHandler`1<T> DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1::_Event
	EventHandler_1_t0CE94806B21A1946A213697385068AA4885DFFE9* ____Event_0;
	// System.Collections.Generic.List`1<System.EventHandler`1<T>> DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1::delegates
	List_1_tF406926190D8CBB1201E3208329055E746D2AA1F* ___delegates_1;
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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>
struct ValueCollection_t1D6B10722AACE5BD6CB6B251745A06D2BF78F7C7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* ____dictionary_0;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents
struct GraphEditorEvents_tAD293BE3A20F152AA76BC8AD33C2035650E29CC3  : public RuntimeObject
{
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs> DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents::OnNodeDragStart
	GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* ___OnNodeDragStart_0;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs> DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents::OnNodeDragEnd
	GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* ___OnNodeDragEnd_1;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs> DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents::OnNodeDragged
	GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* ___OnNodeDragged_2;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs> DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents::OnNodeCreated
	GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* ___OnNodeCreated_3;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs> DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents::OnNodeSelectionChanged
	GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* ___OnNodeSelectionChanged_4;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs> DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents::OnNodeDoubleClicked
	GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* ___OnNodeDoubleClicked_5;
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorUtils
struct GraphEditorUtils_tCD85F9BD1169161D4F2279B6663B6A025D0B049D  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler
struct GraphInputHandler_t524CD9DFCAC8E6F1B8C2EB5521624BE669BD963D  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer
struct GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory
struct GraphNodeRendererFactory_t884091433C07C2FF4D98963DDA4A38C1FF609F63  : public RuntimeObject
{
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory::defaultRenderer
	GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* ___defaultRenderer_0;
	// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer> DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory::renderers
	Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* ___renderers_1;
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations
struct GraphOperations_t372733E784F1A0BD34088ED4698B4523B857A1EF  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphPinRenderer
struct GraphPinRenderer_t84F1D9F9940DA5C10A013D41E131D800313F9CFB  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext
struct GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918  : public RuntimeObject
{
	// DungeonArchitect.UI.UIResourceLookup DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext::Resources
	UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92* ___Resources_0;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext::GraphEditor
	GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* ___GraphEditor_1;
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltip
struct GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltipRenderer
struct GraphTooltipRenderer_t55783F5C43269851C736DFFEBA70AE9EE1B82E1C  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.NodeReversedZIndexComparer
struct NodeReversedZIndexComparer_t942328ED91806EEDA4699D12D223E2175AEF76B9  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.NodeZIndexComparer
struct NodeZIndexComparer_tD2980A618A77943AD07F5D630F77502D5B4E1B9E  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.SplineGraphLinkRenderer
struct SplineGraphLinkRenderer_t5AD43167EECAECB7816E91A615564FB704812541  : public RuntimeObject
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer
struct StraightLineGraphLinkRenderer_t62BA277D157DC991DDCF70B67ABD052B9C1799FE  : public RuntimeObject
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

// DungeonArchitect.UI.UIResourceLookup
struct UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92  : public RuntimeObject
{
};

// DungeonArchitect.UI.UISystem
struct UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0  : public RuntimeObject
{
	// DungeonArchitect.UI.Widgets.IWidget DungeonArchitect.UI.UISystem::<FocusedWidget>k__BackingField
	RuntimeObject* ___U3CFocusedWidgetU3Ek__BackingField_0;
	// System.Boolean DungeonArchitect.UI.UISystem::<IsDragDrop>k__BackingField
	bool ___U3CIsDragDropU3Ek__BackingField_1;
	// DungeonArchitect.UI.Widgets.IWidget DungeonArchitect.UI.UISystem::<Layout>k__BackingField
	RuntimeObject* ___U3CLayoutU3Ek__BackingField_2;
	// DungeonArchitect.UI.UIPlatform DungeonArchitect.UI.UISystem::<Platform>k__BackingField
	RuntimeObject* ___U3CPlatformU3Ek__BackingField_3;
	// DungeonArchitect.UI.UIStyleManager DungeonArchitect.UI.UISystem::<StyleManager>k__BackingField
	RuntimeObject* ___U3CStyleManagerU3Ek__BackingField_4;
	// DungeonArchitect.UI.UIUndoSystem DungeonArchitect.UI.UISystem::<Undo>k__BackingField
	RuntimeObject* ___U3CUndoU3Ek__BackingField_5;
	// DungeonArchitect.UI.OnWidgetFocus DungeonArchitect.UI.UISystem::WidgetFocused
	OnWidgetFocus_t5158D39C4984FFDCA7F9FF81F7834F7EA108CFEC* ___WidgetFocused_6;
	// DungeonArchitect.UI.OnWidgetLostFocus DungeonArchitect.UI.UISystem::WidgetLostFocus
	OnWidgetLostFocus_t4325BE4DC7929DBD57C7E76948AEFD4A45E9CA63* ___WidgetLostFocus_7;
	// DungeonArchitect.UI.OnDragEvent DungeonArchitect.UI.UISystem::DragStart
	OnDragEvent_t2D8051EE5DC3BD3103330361DA2E2E9798C08EB0* ___DragStart_8;
	// DungeonArchitect.UI.OnDragEvent DungeonArchitect.UI.UISystem::DragEnd
	OnDragEvent_t2D8051EE5DC3BD3103330361DA2E2E9798C08EB0* ___DragEnd_9;
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

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>
struct Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* ____currentValue_3;
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

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEventArgs
struct GraphEventArgs_tA2547DE472CA5D5616AC1237A01A9F04BAB6F85F  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// DungeonArchitect.Graphs.Graph DungeonArchitect.UI.Widgets.GraphEditors.GraphEventArgs::graph
	Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___graph_1;
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs
struct GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// DungeonArchitect.UI.UISystem DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::<uiSystem>k__BackingField
	UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___U3CuiSystemU3Ek__BackingField_1;
	// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::<Nodes>k__BackingField
	GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* ___U3CNodesU3Ek__BackingField_2;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// DungeonArchitect.UI.GUIState
struct GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD  : public RuntimeObject
{
	// UnityEngine.Color DungeonArchitect.UI.GUIState::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// UnityEngine.Color DungeonArchitect.UI.GUIState::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_1;
	// DungeonArchitect.UI.UIRenderer DungeonArchitect.UI.GUIState::renderer
	RuntimeObject* ___renderer_2;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
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

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants
struct GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1  : public RuntimeObject
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
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

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor
struct GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// DungeonArchitect.Graphs.Graph DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::graph
	Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___graph_4;
	// DungeonArchitect.Graphs.GraphCamera DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::camera
	GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___camera_5;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorStyle DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::editorStyle
	GraphEditorStyle_t4A3A6B0FC68FE092360EBE4112563B64E6AAA37F* ___editorStyle_6;
	// UnityEngine.Object DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::assetObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___assetObject_7;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::events
	GraphEditorEvents_tAD293BE3A20F152AA76BC8AD33C2035650E29CC3* ___events_8;
	// System.Single DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::renderCullingBias
	float ___renderCullingBias_9;
	// System.Boolean DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::showFocusHighlight
	bool ___showFocusHighlight_10;
	// UnityEngine.Rect DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::widgetBounds
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___widgetBounds_11;
	// UnityEngine.Vector2 DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::scrollPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollPosition_12;
	// DungeonArchitect.UI.Widgets.GraphEditors.IGraphLinkRenderer DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::<GraphLinkRenderer>k__BackingField
	RuntimeObject* ___U3CGraphLinkRendererU3Ek__BackingField_13;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphSelectionBox DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::selectionBox
	GraphSelectionBox_tDC787C5C51646102BE56E1BE931D7617AD18FF03* ___selectionBox_14;
	// DungeonArchitect.UI.Widgets.GraphEditors.KeyboardState DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::keyboardState
	KeyboardState_tF84E267708CA2B9EF85B88FDDFEB4B096576B358* ___keyboardState_15;
	// DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::cursorDragLink
	CursorDragLink_t8EAEFB72433258F1AA37D025CE427359070DDB2B* ___cursorDragLink_16;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphContextMenu DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::contextMenu
	GraphContextMenu_t147D84E26A23C427E91FE57C1E058FB7DC42DB0A* ___contextMenu_17;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::nodeRenderers
	GraphNodeRendererFactory_t884091433C07C2FF4D98963DDA4A38C1FF609F63* ___nodeRenderers_18;
	// DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::rendererContext
	GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___rendererContext_19;
	// UnityEngine.Vector2 DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::lastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastMousePosition_20;
	// UnityEngine.Rect DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::lastDrawBounds
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastDrawBounds_21;
	// System.Boolean DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::graphReadOnly
	bool ___graphReadOnly_22;
	// System.Boolean DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::draggingNodes
	bool ___draggingNodes_23;
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

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink/OnDraggedLinkReleased
struct OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>

// System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs>

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs>

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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};

// UnityEngine.GUIContent

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorUtils

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorUtils

// DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler

// DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler

// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer

// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer

// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory

// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory

// DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations

// DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations

// DungeonArchitect.UI.Widgets.GraphEditors.GraphPinRenderer

// DungeonArchitect.UI.Widgets.GraphEditors.GraphPinRenderer

// DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext

// DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext

// DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltip
struct GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_StaticFields
{
	// System.String DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltip::message
	String_t* ___message_0;
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltip

// DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltipRenderer

// DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltipRenderer

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// DungeonArchitect.UI.Widgets.GraphEditors.NodeReversedZIndexComparer

// DungeonArchitect.UI.Widgets.GraphEditors.NodeReversedZIndexComparer

// DungeonArchitect.UI.Widgets.GraphEditors.NodeZIndexComparer

// DungeonArchitect.UI.Widgets.GraphEditors.NodeZIndexComparer

// DungeonArchitect.UI.Widgets.GraphEditors.SplineGraphLinkRenderer

// DungeonArchitect.UI.Widgets.GraphEditors.SplineGraphLinkRenderer

// DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer

// DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// DungeonArchitect.UI.UIResourceLookup
struct UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_StaticFields
{
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_GO_NODE_SELECTION
	String_t* ___TEXTURE_GO_NODE_SELECTION_0;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_GO_NODE_FRAME
	String_t* ___TEXTURE_GO_NODE_FRAME_1;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_GO_NODE_BG
	String_t* ___TEXTURE_GO_NODE_BG_2;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_PIN_GLOW
	String_t* ___TEXTURE_PIN_GLOW_3;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_MULTI_GO_NODE_FRAME
	String_t* ___TEXTURE_MULTI_GO_NODE_FRAME_4;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_MARKER_NODE_SELECTION
	String_t* ___TEXTURE_MARKER_NODE_SELECTION_5;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_MARKER_NODE_FRAME
	String_t* ___TEXTURE_MARKER_NODE_FRAME_6;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_MARKER_EMITTER_NODE_FRAME
	String_t* ___TEXTURE_MARKER_EMITTER_NODE_FRAME_7;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_MARKER_NODE_BG
	String_t* ___TEXTURE_MARKER_NODE_BG_8;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_CURSOR_RING
	String_t* ___TEXTURE_CURSOR_RING_9;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_CURSOR_RING_SOLID
	String_t* ___TEXTURE_CURSOR_RING_SOLID_10;
	// System.String DungeonArchitect.UI.UIResourceLookup::TEXTURE_REFRESH_16
	String_t* ___TEXTURE_REFRESH_16_11;
	// System.String DungeonArchitect.UI.UIResourceLookup::GUI_STYLE_BANNER
	String_t* ___GUI_STYLE_BANNER_12;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_CLOSE_16x
	String_t* ___ICON_CLOSE_16x_13;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_PLUS_16x
	String_t* ___ICON_PLUS_16x_14;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_MOVEUP_16x
	String_t* ___ICON_MOVEUP_16x_15;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_MOVEDOWN_16x
	String_t* ___ICON_MOVEDOWN_16x_16;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_ZOOMFIT_16x
	String_t* ___ICON_ZOOMFIT_16x_17;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_ERROR_16x
	String_t* ___ICON_ERROR_16x_18;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_WARNING_16x
	String_t* ___ICON_WARNING_16x_19;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_INFO_16x
	String_t* ___ICON_INFO_16x_20;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_SUCCESS_16x
	String_t* ___ICON_SUCCESS_16x_21;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_WHITE_16x
	String_t* ___ICON_WHITE_16x_22;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_PLAY_16x
	String_t* ___ICON_PLAY_16x_23;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_PLAY_16xb
	String_t* ___ICON_PLAY_16xb_24;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_SETTINGS_16x
	String_t* ___ICON_SETTINGS_16x_25;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_DISCORD_16x
	String_t* ___ICON_DISCORD_16x_26;
	// System.String DungeonArchitect.UI.UIResourceLookup::ICON_DOCS_16x
	String_t* ___ICON_DOCS_16x_27;
	// System.String DungeonArchitect.UI.UIResourceLookup::SKIN_TOOLBAR_BUTTONS
	String_t* ___SKIN_TOOLBAR_BUTTONS_28;
};

// DungeonArchitect.UI.UIResourceLookup

// DungeonArchitect.UI.UISystem

// DungeonArchitect.UI.UISystem

// System.ValueType

// System.ValueType

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphPin>

// System.Collections.Generic.List`1/Enumerator<DungeonArchitect.Graphs.GraphPin>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>

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

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEventArgs

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEventArgs

// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs

// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs

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

// UnityEngine.Bounds

// UnityEngine.Bounds

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

// DungeonArchitect.UI.GUIState

// DungeonArchitect.UI.GUIState

// UnityEngine.GUIStyleState

// UnityEngine.GUIStyleState

// DungeonArchitect.Graphs.GraphCamera

// DungeonArchitect.Graphs.GraphCamera

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants
struct GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields
{
	// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants::PIN_COLOR
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___PIN_COLOR_0;
	// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants::PIN_COLOR_HOVER
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___PIN_COLOR_HOVER_1;
	// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants::PIN_COLOR_CLICK
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___PIN_COLOR_CLICK_2;
	// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants::NODE_COLOR
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NODE_COLOR_3;
	// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants::NODE_COLOR_SELECTED
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NODE_COLOR_SELECTED_4;
	// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants::TEXT_COLOR
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___TEXT_COLOR_5;
	// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants::TEXT_COLOR_SELECTED
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___TEXT_COLOR_SELECTED_6;
};

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RectOffset

// UnityEngine.RectOffset

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.Font

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

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

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.GUISkin

// DungeonArchitect.Graphs.Graph

// DungeonArchitect.Graphs.Graph

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor

// DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor

// DungeonArchitect.Graphs.GraphLink

// DungeonArchitect.Graphs.GraphLink

// DungeonArchitect.Graphs.GraphNode

// DungeonArchitect.Graphs.GraphNode

// DungeonArchitect.Graphs.GraphPin

// DungeonArchitect.Graphs.GraphPin

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink/OnDraggedLinkReleased

// DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink/OnDraggedLinkReleased
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphEvent_1__ctor_m8198FE82CD9F861611729DB82E3D192EB26A6268_gshared (GraphEvent_1_tD8F813A808AFE8129FA2E7B3C2B942F356B8F896* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 DungeonArchitect.Graphs.GraphNode::get_ZIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::set_uiSystem(DungeonArchitect.UI.UISystem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphNodeEventArgs_set_uiSystem_m2CC159E33D0D7598C466CBBA866B2B66E68824C5_inline (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___0_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::set_Nodes(DungeonArchitect.Graphs.GraphNode[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphNodeEventArgs_set_Nodes_m99FAAE21989F004972172171411D0038640ED1CC_inline (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* ___0_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::.ctor(DungeonArchitect.UI.UISystem,DungeonArchitect.Graphs.GraphNode[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeEventArgs__ctor_m4CFAB5169B8F7B3307519C46B277649FA3A67E6D (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___0_uiSystem, GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* ___1_nodes, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEvent`1<DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs>::.ctor()
inline void GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B (GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* __this, const RuntimeMethod* method)
{
	((  void (*) (GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206*, const RuntimeMethod*))GraphEvent_1__ctor_m8198FE82CD9F861611729DB82E3D192EB26A6268_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::InitializeCreatedNode(DungeonArchitect.Graphs.Graph,DungeonArchitect.Graphs.GraphNode,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_InitializeCreatedNode_m6AEBFD5671500AB591126D36952ECC0EA5149126 (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_graph, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___1_node, RuntimeObject* ___2_undo, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode> DungeonArchitect.Graphs.Graph::get_Nodes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::Add(T)
inline void List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean DungeonArchitect.Graphs.GraphNode::get_CanBeDeleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GraphNode_get_CanBeDeleted_m2153EF4B29B38797FCA5F274E35D0AA5A30EA0B8_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.Graph DungeonArchitect.Graphs.GraphNode::get_Graph()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::BreakInputLinks(DungeonArchitect.Graphs.GraphNode,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_BreakInputLinks_mE0679CCAF86E990974AFDCFA7BCB332F6FC8C86D (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, RuntimeObject* ___1_undo, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::BreakOutputLinks(DungeonArchitect.Graphs.GraphNode,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_BreakOutputLinks_m80948DFEFF7F1B2DD6EB75C8EAE8E9D3920ECC6E (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, RuntimeObject* ___1_undo, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphNode>::Remove(T)
inline bool List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A*, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// DungeonArchitect.Graphs.Graph DungeonArchitect.Graphs.GraphLink::get_Graph()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* GraphLink_get_Graph_m7D055380A86AFE933842BC24CEFC526D122B637F_inline (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink> DungeonArchitect.Graphs.Graph::get_Links()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<DungeonArchitect.Graphs.GraphLink>::Remove(T)
inline bool List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* __this, GraphLink_t167090219997E1F874E24A93015AD8333374E463* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5B2B2081BF8097131F5848A462357FBB09D50112*, GraphLink_t167090219997E1F874E24A93015AD8333374E463*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::BreakLinks(DungeonArchitect.Graphs.GraphPin[],DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_BreakLinks_m6E60C5F4FC3ACEA71323D9A9CC90B81A88F7A0AE (GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* ___0_pins, RuntimeObject* ___1_undo, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::BreakLinks(DungeonArchitect.Graphs.GraphPin,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_BreakLinks_m35665CC152C794F39BC6B8033721CD3657C0C21B (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, RuntimeObject* ___1_undo, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphLink[] DungeonArchitect.Graphs.GraphPin::GetConntectedLinks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* GraphPin_GetConntectedLinks_mB5D45F5630E9AE8BA745F54363C846C24FCC1418 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::DestroyLink(DungeonArchitect.Graphs.GraphLink,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_DestroyLink_mB3BF5FABCC756FE960ADFD14B5CF805B2CA146FB (GraphLink_t167090219997E1F874E24A93015AD8333374E463* ___0_link, RuntimeObject* ___1_undo, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Graphs.GraphNode::get_Dragging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GraphNode_get_Dragging_m078B8A3D3D6D4C8776EB5482E1206694F1E78897_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler::HandlePinInput(DungeonArchitect.Graphs.GraphPin,UnityEngine.Event,DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor,DungeonArchitect.UI.UISystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphInputHandler_HandlePinInput_m76B0E1EED784FCEDE412BD7B7531B1848B2A4CDA (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___1_e, GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* ___2_graphEditor, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___3_uiSystem, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphCamera DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* GraphEditor_get_Camera_m9EC313AB617544FA067DC63CFDCB4FB88D405449_inline (GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphCamera::ScreenToWorld(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphCamera_ScreenToWorld_m4F847D7AE0B699D356167F483AD52EAE0B79452E (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenCoord, const RuntimeMethod* method) ;
// UnityEngine.Rect DungeonArchitect.Graphs.GraphNode::get_Bounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Event::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphNode::set_Dragging(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphNode_set_Dragging_mC95390CD9A00B4F0BB31893630D72CAEF23B6FC3_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Graphs.GraphNode::get_Selected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GraphNode_get_Selected_m9C828A505E1BA3E0263CC51DB59D3E64179D467F_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphPin::set_ClickState(DungeonArchitect.Graphs.GraphPinMouseState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphPin_set_ClickState_m394EE7F3CAC7411BD28C08271BA7DDDDA22AD22E_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphPin::set_RequestLinkDeletionInitiated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphPin_set_RequestLinkDeletionInitiated_mD46D0FE6F33E5E288CF5D0AC4A1B7E0D175ACE44_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean DungeonArchitect.Graphs.GraphPin::get_RequestLinkDeletionInitiated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GraphPin_get_RequestLinkDeletionInitiated_m2A62A9311E8491DE48A4B4DEEAAE8A411423CCF9_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// DungeonArchitect.UI.UIUndoSystem DungeonArchitect.UI.UISystem::get_Undo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UISystem_get_Undo_m94083067C2D42473B0FAB6812CE04FC201D94F39_inline (UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler::DestroyPinLinks(DungeonArchitect.Graphs.GraphPin,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphInputHandler_DestroyPinLinks_m8736C4ECF5B34BC847FA3DC44E398593079ABBA2 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, RuntimeObject* ___1_undo, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphNode DungeonArchitect.Graphs.GraphPin::get_Node()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphPinMouseState DungeonArchitect.Graphs.GraphPin::get_ClickState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GraphPin_get_ClickState_m8EC450B5DE760F06E1583DC6B906C339EC4A4FB6_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Graphs.GraphPin::NotifyPinLinksDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPin_NotifyPinLinksDestroyed_mFFD740D9B7D393BD231965FE9B12FCCA2FED93CE (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphLink::get_Input()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphLink::get_Output()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphPin::get_WorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphCamera::WorldToScreen(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2 (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_worldCoord, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.Graphs.GraphLink::GetTangentStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GraphLink_GetTangentStrength_m496C7920D17384DDFF9C064A63D05DC4DCE63267 (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) ;
// System.Single DungeonArchitect.Graphs.GraphCamera::get_ZoomLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphPin::get_Tangent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphPin_get_Tangent_mCB2E9C1CCDC0ED5BD288E51024C691404990D6AB_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_size, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_IntersectRay_mF5EE01759AA2D09C683FBE015007A85CFECB8393 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float* ___1_distance, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer::GetPointOnNodeBounds(UnityEngine.Vector2,DungeonArchitect.Graphs.GraphPin,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 StraightLineGraphLinkRenderer_GetPointOnNodeBounds_mFF8921314DD10A17668BD76BE08CC57F478D0327 (StraightLineGraphLinkRenderer_t62BA277D157DC991DDCF70B67ABD052B9C1799FE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___1_pin, float ___2_distanceBias, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer::DrawLine(DungeonArchitect.UI.UIRenderer,UnityEngine.Vector2,UnityEngine.Vector2,DungeonArchitect.Graphs.GraphCamera,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StraightLineGraphLinkRenderer_DrawLine_m398DD1E52B1D817F90C55C1276EFA4CF0285B5F6 (RuntimeObject* ___0_renderer, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_startPos, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_endPos, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_lineColor, float ___5_lineThickness, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphPinRenderer::Draw(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,DungeonArchitect.Graphs.GraphPin,DungeonArchitect.Graphs.GraphCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPinRenderer_Draw_m2D46A957AD0C4C90464D67F029679523F7DD83F0 (RuntimeObject* ___0_renderer, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___1_rendererContext, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___2_pin, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, const RuntimeMethod* method) ;
// DungeonArchitect.Graphs.GraphPin DungeonArchitect.Graphs.GraphNode::get_OutputPin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* GraphNode_get_OutputPin_m750698867CC9A96A75B59739E743B46F93DF9F47 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_GetStyle_mF024BC5177A2AD477ACF44D87BE6A629C91562CA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, String_t* ___0_styleName, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DungeonArchitect.Graphs.GraphNode::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphNode_get_Position_m92FB18D50D76223CB53A63C884AB11C0A4329AB7 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIStyle::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_get_fontSize_mBD6EEA6C9C09825DACE0395B1EC8D773FE94F8CF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m16E3664F17F02119A5EDAEC5610A93932C961296 (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::Add(TKey,TValue)
inline void Dictionary_2_Add_m79B3F00FE57C74CAA3480B04ED493931C9FED9BA (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* __this, Type_t* ___0_key, GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70*, Type_t*, GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::get_Item(TKey)
inline GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* Dictionary_2_get_Item_mB5277785E02A4DC0E6E70FFC4537BEA6FEA7CA51 (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* (*) (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::get_Values()
inline ValueCollection_t1D6B10722AACE5BD6CB6B251745A06D2BF78F7C7* Dictionary_2_get_Values_mF4DB098A1663C5DF8EF2F3756C157694436963C7 (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t1D6B10722AACE5BD6CB6B251745A06D2BF78F7C7* (*) (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::GetEnumerator()
inline Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27 ValueCollection_GetEnumerator_m71201FF2909AA4C89A2116291CC410E64846ECDB (ValueCollection_t1D6B10722AACE5BD6CB6B251745A06D2BF78F7C7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27 (*) (ValueCollection_t1D6B10722AACE5BD6CB6B251745A06D2BF78F7C7*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::Dispose()
inline void Enumerator_Dispose_mEEFE62C7C50E0048B0655706256C7D8C6C8366D0 (Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::get_Current()
inline GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* Enumerator_get_Current_mAC28286E9B8D6F0CB1C4CC01CE90FB9F38BFF622_inline (Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27* __this, const RuntimeMethod* method)
{
	return ((  GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* (*) (Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::MoveNext()
inline bool Enumerator_MoveNext_m6AA9B5E44668635577011634AA58A35308C2EE48 (Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::Clear()
inline void Dictionary_2_Clear_m161A98950816B2A3B4666E3D551D9050EFBE4D44 (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRenderer__ctor_m21331EF0957DF4F9FB7F58B0657A99E965EEC3EF (GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer>::.ctor()
inline void Dictionary_2__ctor_m3F28DD7F1E7874D7D3798FC60594E47DD8540F6C (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UnityEngine.Rect DungeonArchitect.Graphs.GraphPin::GetBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GraphPin_GetBounds_m6DD3E1052A99B53E7E91856A9FCE0D6D0ADB94E5 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_position_m9CD8AA25A83A7A893429C0ED56C36641202C3F05 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_size_m346E4F7077E5A1C0F4E21966232CD726CB9E6BAA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.GUIState::.ctor(DungeonArchitect.UI.UIRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIState__ctor_m65BCEC9D3D6071C332DCAB9EB4733611173E359C (GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD* __this, RuntimeObject* ___0_renderer, const RuntimeMethod* method) ;
// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphPinRenderer::GetPinColor(DungeonArchitect.Graphs.GraphPin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GraphPinRenderer_GetPinColor_m9CDCF64C69781DF68581EFBBAC140A17A68094B7 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.UI.GUIState::Restore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIState_Restore_mA030298AAC38698BDE205F0D87815E53517E5EDD (GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014_Multicast(OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_mousePositionScreen, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___1_uiSystem, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* currentDelegate = reinterpret_cast<OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_mousePositionScreen, ___1_uiSystem, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014_OpenInst(OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_mousePositionScreen, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___1_uiSystem, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_mousePositionScreen, ___1_uiSystem, method);
}
void OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014_OpenStatic(OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_mousePositionScreen, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___1_uiSystem, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_mousePositionScreen, ___1_uiSystem, method);
}
void OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014_OpenStaticInvoker(OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_mousePositionScreen, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___1_uiSystem, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_mousePositionScreen, ___1_uiSystem);
}
void OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014_ClosedStaticInvoker(OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_mousePositionScreen, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___1_uiSystem, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_mousePositionScreen, ___1_uiSystem);
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink/OnDraggedLinkReleased::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDraggedLinkReleased__ctor_mE142293DF42F956187E907AE8B94DC8BB9D2202F (OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014_Multicast;
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink/OnDraggedLinkReleased::Invoke(UnityEngine.Vector2,DungeonArchitect.UI.UISystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDraggedLinkReleased_Invoke_m577BC86FD46AA5F4DA563E63AA9849F582DC1014 (OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_mousePositionScreen, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___1_uiSystem, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_mousePositionScreen, ___1_uiSystem, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink/OnDraggedLinkReleased::BeginInvoke(UnityEngine.Vector2,DungeonArchitect.UI.UISystem,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDraggedLinkReleased_BeginInvoke_mFAE0A8439D272DD5EAB90D02ECE6A59B5B5E9308 (OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_mousePositionScreen, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___1_uiSystem, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___0_mousePositionScreen);
	__d_args[1] = ___1_uiSystem;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.CursorDragLink/OnDraggedLinkReleased::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDraggedLinkReleased_EndInvoke_m7F5F809A89FDE94CDE3FAEED98DEFDA28DC24441 (OnDraggedLinkReleased_t2941F46F51087C405E4FBC8E40B07709B533F533* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Int32 DungeonArchitect.UI.Widgets.GraphEditors.NodeZIndexComparer::Compare(DungeonArchitect.Graphs.GraphNode,DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeZIndexComparer_Compare_m9519E03FAECB4D00D3EBF97E89DAE26AB1507D54 (NodeZIndexComparer_tD2980A618A77943AD07F5D630F77502D5B4E1B9E* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_x, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (x == null || y == null) return 0;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// if (x == null || y == null) return 0;
		return 0;
	}

IL_0014:
	{
		// if (x.ZIndex == y.ZIndex) return 0;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline(L_4, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0024;
		}
	}
	{
		// if (x.ZIndex == y.ZIndex) return 0;
		return 0;
	}

IL_0024:
	{
		// return x.ZIndex < y.ZIndex ? -1 : 1;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_8 = ___0_x;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline(L_8, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_10 = ___1_y;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		return (-1);
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.NodeZIndexComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeZIndexComparer__ctor_m3BCF153F7958FB40C93360376E6D9FCF23F40B7B (NodeZIndexComparer_tD2980A618A77943AD07F5D630F77502D5B4E1B9E* __this, const RuntimeMethod* method) 
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
// System.Int32 DungeonArchitect.UI.Widgets.GraphEditors.NodeReversedZIndexComparer::Compare(DungeonArchitect.Graphs.GraphNode,DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeReversedZIndexComparer_Compare_mB310D739DBFA1174974714D7173F72B1C67F79C4 (NodeReversedZIndexComparer_t942328ED91806EEDA4699D12D223E2175AEF76B9* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_x, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (x == null || y == null) return 0;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// if (x == null || y == null) return 0;
		return 0;
	}

IL_0014:
	{
		// if (x.ZIndex == y.ZIndex) return 0;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline(L_4, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0024;
		}
	}
	{
		// if (x.ZIndex == y.ZIndex) return 0;
		return 0;
	}

IL_0024:
	{
		// return x.ZIndex > y.ZIndex ? -1 : 1;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_8 = ___0_x;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline(L_8, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_10 = ___1_y;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline(L_10, NULL);
		if ((((int32_t)L_9) > ((int32_t)L_11)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		return (-1);
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.NodeReversedZIndexComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeReversedZIndexComparer__ctor_mA4B256981B3477A244E6B5C82FD64908D4EC8AC3 (NodeReversedZIndexComparer_t942328ED91806EEDA4699D12D223E2175AEF76B9* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::.ctor(DungeonArchitect.UI.UISystem,DungeonArchitect.Graphs.GraphNode[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeEventArgs__ctor_m4CFAB5169B8F7B3307519C46B277649FA3A67E6D (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___0_uiSystem, GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* ___1_nodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GraphNodeEventArgs(UISystem uiSystem, GraphNode[] nodes)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.uiSystem = uiSystem;
		UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* L_0 = ___0_uiSystem;
		GraphNodeEventArgs_set_uiSystem_m2CC159E33D0D7598C466CBBA866B2B66E68824C5_inline(__this, L_0, NULL);
		// this.Nodes = nodes;
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_1 = ___1_nodes;
		GraphNodeEventArgs_set_Nodes_m99FAAE21989F004972172171411D0038640ED1CC_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::.ctor(DungeonArchitect.UI.UISystem,DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeEventArgs__ctor_m839A0508BAFBFFA724ABD177F0FD95A4CF9E0F85 (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___0_uiSystem, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___1_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(uiSystem, new GraphNode[] { node })
		UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* L_0 = ___0_uiSystem;
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_1 = (GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70*)(GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70*)SZArrayNew(GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70_il2cpp_TypeInfo_var, (uint32_t)1);
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_2 = L_1;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_3 = ___1_node;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*)L_3);
		GraphNodeEventArgs__ctor_m4CFAB5169B8F7B3307519C46B277649FA3A67E6D(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// DungeonArchitect.UI.UISystem DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::get_uiSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* GraphNodeEventArgs_get_uiSystem_m0478242B142A746B5BA25C9C4CA49665D02E2F6F (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, const RuntimeMethod* method) 
{
	{
		// public UISystem uiSystem { get; private set; }
		UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* L_0 = __this->___U3CuiSystemU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::set_uiSystem(DungeonArchitect.UI.UISystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeEventArgs_set_uiSystem_m2CC159E33D0D7598C466CBBA866B2B66E68824C5 (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___0_value, const RuntimeMethod* method) 
{
	{
		// public UISystem uiSystem { get; private set; }
		UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* L_0 = ___0_value;
		__this->___U3CuiSystemU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuiSystemU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// DungeonArchitect.Graphs.GraphNode[] DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::get_Nodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* GraphNodeEventArgs_get_Nodes_m4B591BA141CB2F53D9E0616997B02D1DA8979EB8 (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, const RuntimeMethod* method) 
{
	{
		// public GraphNode[] Nodes { get; private set; }
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_0 = __this->___U3CNodesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeEventArgs::set_Nodes(DungeonArchitect.Graphs.GraphNode[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeEventArgs_set_Nodes_m99FAAE21989F004972172171411D0038640ED1CC (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GraphNode[] Nodes { get; private set; }
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_0 = ___0_value;
		__this->___U3CNodesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNodesU3Ek__BackingField_2), (void*)L_0);
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEventArgs::.ctor(DungeonArchitect.Graphs.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphEventArgs__ctor_mCB69A95D230B8688502EA8158C8E13D457B70CCF (GraphEventArgs_tA2547DE472CA5D5616AC1237A01A9F04BAB6F85F* __this, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_graph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GraphEventArgs(Graph graph)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.graph = graph;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = ___0_graph;
		__this->___graph_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___graph_1), (void*)L_0);
		// }
		return;
	}
}
// DungeonArchitect.Graphs.Graph DungeonArchitect.UI.Widgets.GraphEditors.GraphEventArgs::get_Graph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* GraphEventArgs_get_Graph_m70DE4D65FD13E1B2EF93502C71AA50FDA7F99ED1 (GraphEventArgs_tA2547DE472CA5D5616AC1237A01A9F04BAB6F85F* __this, const RuntimeMethod* method) 
{
	{
		// get { return graph; }
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = __this->___graph_1;
		return L_0;
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphEditorEvents__ctor_m4C6C9E17E2AF30125BDC503B15EF8145638BAEE3 (GraphEditorEvents_tAD293BE3A20F152AA76BC8AD33C2035650E29CC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GraphEvent<GraphNodeEventArgs> OnNodeDragStart = new GraphEvent<GraphNodeEventArgs>();
		GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* L_0 = (GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206*)il2cpp_codegen_object_new(GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B(L_0, GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B_RuntimeMethod_var);
		__this->___OnNodeDragStart_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnNodeDragStart_0), (void*)L_0);
		// public GraphEvent<GraphNodeEventArgs> OnNodeDragEnd = new GraphEvent<GraphNodeEventArgs>();
		GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* L_1 = (GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206*)il2cpp_codegen_object_new(GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B(L_1, GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B_RuntimeMethod_var);
		__this->___OnNodeDragEnd_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnNodeDragEnd_1), (void*)L_1);
		// public GraphEvent<GraphNodeEventArgs> OnNodeDragged = new GraphEvent<GraphNodeEventArgs>();
		GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* L_2 = (GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206*)il2cpp_codegen_object_new(GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B(L_2, GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B_RuntimeMethod_var);
		__this->___OnNodeDragged_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnNodeDragged_2), (void*)L_2);
		// public GraphEvent<GraphNodeEventArgs> OnNodeCreated = new GraphEvent<GraphNodeEventArgs>();
		GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* L_3 = (GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206*)il2cpp_codegen_object_new(GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B(L_3, GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B_RuntimeMethod_var);
		__this->___OnNodeCreated_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnNodeCreated_3), (void*)L_3);
		// public GraphEvent<GraphNodeEventArgs> OnNodeSelectionChanged = new GraphEvent<GraphNodeEventArgs>();
		GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* L_4 = (GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206*)il2cpp_codegen_object_new(GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B(L_4, GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B_RuntimeMethod_var);
		__this->___OnNodeSelectionChanged_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnNodeSelectionChanged_4), (void*)L_4);
		// public GraphEvent<GraphNodeEventArgs> OnNodeDoubleClicked = new GraphEvent<GraphNodeEventArgs>();
		GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206* L_5 = (GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206*)il2cpp_codegen_object_new(GraphEvent_1_t1B35B374A74CEAF9E7EE7212B54091CD71DD3206_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B(L_5, GraphEvent_1__ctor_m821EBB36886B2F8DA5FA6281CFB2E4A4D8EEAE7B_RuntimeMethod_var);
		__this->___OnNodeDoubleClicked_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnNodeDoubleClicked_5), (void*)L_5);
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorUtils::AddToAsset(DungeonArchitect.UI.UIPlatform,UnityEngine.Object,DungeonArchitect.Graphs.GraphLink)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphEditorUtils_AddToAsset_m0CF87D26DA23F6C02746D014A7A7A76514312FD0 (RuntimeObject* ___0_platform, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_assetObject, GraphLink_t167090219997E1F874E24A93015AD8333374E463* ___2_link, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPlatform_t80D23CBEFAF993C6C1C5F4586F51489587505424_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platform.AddObjectToAsset(link, assetObject);
		RuntimeObject* L_0 = ___0_platform;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_1 = ___2_link;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_assetObject;
		NullCheck(L_0);
		InterfaceActionInvoker2< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(4 /* System.Void DungeonArchitect.UI.UIPlatform::AddObjectToAsset(UnityEngine.Object,UnityEngine.Object) */, UIPlatform_t80D23CBEFAF993C6C1C5F4586F51489587505424_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorUtils::AddToAsset(DungeonArchitect.UI.UIPlatform,UnityEngine.Object,DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphEditorUtils_AddToAsset_m67FC7EBFF1DE346B1D6A3523FAF6FB9618AC996A (RuntimeObject* ___0_platform, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_assetObject, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___2_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPlatform_t80D23CBEFAF993C6C1C5F4586F51489587505424_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* V_1 = NULL;
	{
		// if (assetObject != null && node != null)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___1_assetObject;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0071;
		}
	}
	{
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2 = ___2_node;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		// platform.AddObjectToAsset(node, assetObject);
		RuntimeObject* L_4 = ___0_platform;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_5 = ___2_node;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = ___1_assetObject;
		NullCheck(L_4);
		InterfaceActionInvoker2< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(4 /* System.Void DungeonArchitect.UI.UIPlatform::AddObjectToAsset(UnityEngine.Object,UnityEngine.Object) */, UIPlatform_t80D23CBEFAF993C6C1C5F4586F51489587505424_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		// var pins = new List<GraphPin>();
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_7 = (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*)il2cpp_codegen_object_new(List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D(L_7, List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var);
		// pins.AddRange(node.InputPins);
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_8 = L_7;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_9 = ___2_node;
		NullCheck(L_9);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_10;
		L_10 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(L_9, NULL);
		NullCheck(L_8);
		List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67(L_8, (RuntimeObject*)L_10, List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		// pins.AddRange(node.OutputPins);
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_11 = L_8;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_12 = ___2_node;
		NullCheck(L_12);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_13;
		L_13 = GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8(L_12, NULL);
		NullCheck(L_11);
		List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67(L_11, (RuntimeObject*)L_13, List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		// foreach (var pin in pins)
		NullCheck(L_11);
		Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF L_14;
		L_14 = List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB(L_11, List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var);
		V_0 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10((&V_0), Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0058_1;
			}

IL_003f_1:
			{
				// foreach (var pin in pins)
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_15;
				L_15 = Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_inline((&V_0), Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var);
				V_1 = L_15;
				// if (pin != null)
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_16 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_17)
				{
					goto IL_0058_1;
				}
			}
			{
				// platform.AddObjectToAsset(pin, assetObject);
				RuntimeObject* L_18 = ___0_platform;
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_19 = V_1;
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_20 = ___1_assetObject;
				NullCheck(L_18);
				InterfaceActionInvoker2< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(4 /* System.Void DungeonArchitect.UI.UIPlatform::AddObjectToAsset(UnityEngine.Object,UnityEngine.Object) */, UIPlatform_t80D23CBEFAF993C6C1C5F4586F51489587505424_il2cpp_TypeInfo_var, L_18, L_19, L_20);
			}

IL_0058_1:
			{
				// foreach (var pin in pins)
				bool L_21;
				L_21 = Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A((&V_0), Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_003f_1;
				}
			}
			{
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphEditorUtils__ctor_mF4E7B2752F5B2A92C580D394079F98576022DD27 (GraphEditorUtils_tCD85F9BD1169161D4F2279B6663B6A025D0B049D* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphEditorConstants__ctor_mA4859566C912BA95E1221F8307B3FBE9CE8C68B6 (GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEditorConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphEditorConstants__cctor_m5531A022946E04C10075550E0B36207ED9A27A68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Color PIN_COLOR = new Color(0.4f, 0.4f, 0.4f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_0), (0.400000006f), (0.400000006f), (0.400000006f), /*hidden argument*/NULL);
		((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___PIN_COLOR_0 = L_0;
		// public static readonly Color PIN_COLOR_HOVER = new Color(1, 0.6f, 0.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (1.0f), (0.600000024f), (0.0f), /*hidden argument*/NULL);
		((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___PIN_COLOR_HOVER_1 = L_1;
		// public static readonly Color PIN_COLOR_CLICK = new Color(1, 0.9f, 0.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_2), (1.0f), (0.899999976f), (0.0f), /*hidden argument*/NULL);
		((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___PIN_COLOR_CLICK_2 = L_2;
		// public static readonly Color NODE_COLOR = new Color(0.2824f, 0.2824f, 0.2824f); //new Color(0.1f, 0.1f, 0.1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), (0.282400012f), (0.282400012f), (0.282400012f), /*hidden argument*/NULL);
		((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___NODE_COLOR_3 = L_3;
		// public static readonly Color NODE_COLOR_SELECTED = new Color(.9f, 0.5f, 0.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_4), (0.899999976f), (0.5f), (0.0f), /*hidden argument*/NULL);
		((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___NODE_COLOR_SELECTED_4 = L_4;
		// public static readonly Color TEXT_COLOR = new Color(0.9f, 0.9f, 0.9f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_5), (0.899999976f), (0.899999976f), (0.899999976f), /*hidden argument*/NULL);
		((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___TEXT_COLOR_5 = L_5;
		// public static readonly Color TEXT_COLOR_SELECTED = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___TEXT_COLOR_SELECTED_6 = L_6;
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
// DungeonArchitect.Graphs.GraphNode DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::CreateNode(DungeonArchitect.Graphs.Graph,System.Type,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* GraphOperations_CreateNode_mCF0CD28025E33FBC333A53E81C8B1D7C15FB631A (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_graph, Type_t* ___1_t, RuntimeObject* ___2_undo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* V_0 = NULL;
	{
		// GraphNode node = ScriptableObject.CreateInstance(t) as GraphNode;
		Type_t* L_0 = ___1_t;
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_1;
		L_1 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_0, NULL);
		V_0 = ((GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*)IsInstClass((RuntimeObject*)L_1, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA_il2cpp_TypeInfo_var));
		// InitializeCreatedNode(graph, node, undo);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_2 = ___0_graph;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_3 = V_0;
		RuntimeObject* L_4 = ___2_undo;
		GraphOperations_InitializeCreatedNode_m6AEBFD5671500AB591126D36952ECC0EA5149126(L_2, L_3, L_4, NULL);
		// return node;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_5 = V_0;
		return L_5;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::InitializeCreatedNode(DungeonArchitect.Graphs.Graph,DungeonArchitect.Graphs.GraphNode,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_InitializeCreatedNode_m6AEBFD5671500AB591126D36952ECC0EA5149126 (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* ___0_graph, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___1_node, RuntimeObject* ___2_undo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111026EB4845FFBD694059FB22E75DB2E3D82145);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* V_3 = NULL;
	{
		// var id = System.Guid.NewGuid().ToString(); // graph.IndexCounter.GetNext();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// if (undo != null)
		RuntimeObject* L_2 = ___2_undo;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// undo.RecordObject(graph, "Create Node");
		RuntimeObject* L_3 = ___2_undo;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_4 = ___0_graph;
		NullCheck(L_3);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(0 /* System.Void DungeonArchitect.UI.UIUndoSystem::RecordObject(System.Object,System.String) */, UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var, L_3, L_4, _stringLiteral111026EB4845FFBD694059FB22E75DB2E3D82145);
	}

IL_0023:
	{
		// node.Initialize(id, graph);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_5 = ___1_node;
		String_t* L_6 = V_0;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_7 = ___0_graph;
		NullCheck(L_5);
		VirtualActionInvoker2< String_t*, Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* >::Invoke(5 /* System.Void DungeonArchitect.Graphs.GraphNode::Initialize(System.String,DungeonArchitect.Graphs.Graph) */, L_5, L_6, L_7);
		// if (undo != null)
		RuntimeObject* L_8 = ___2_undo;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		// undo.RegisterCreatedObjectUndo(node, "Create Node");
		RuntimeObject* L_9 = ___2_undo;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_10 = ___1_node;
		NullCheck(L_9);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(1 /* System.Void DungeonArchitect.UI.UIUndoSystem::RegisterCreatedObjectUndo(System.Object,System.String) */, UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var, L_9, L_10, _stringLiteral111026EB4845FFBD694059FB22E75DB2E3D82145);
	}

IL_003a:
	{
		// var pins = new List<GraphPin>();
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_11 = (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*)il2cpp_codegen_object_new(List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D(L_11, List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var);
		// pins.AddRange(node.InputPins);
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_12 = L_11;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_13 = ___1_node;
		NullCheck(L_13);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_14;
		L_14 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(L_13, NULL);
		NullCheck(L_12);
		List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67(L_12, (RuntimeObject*)L_14, List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		// pins.AddRange(node.OutputPins);
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_15 = L_12;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_16 = ___1_node;
		NullCheck(L_16);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_17;
		L_17 = GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8(L_16, NULL);
		NullCheck(L_15);
		List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67(L_15, (RuntimeObject*)L_17, List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		// foreach (var pin in pins)
		NullCheck(L_15);
		Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF L_18;
		L_18 = List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB(L_15, List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var);
		V_2 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10((&V_2), Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0076_1;
			}

IL_005f_1:
			{
				// foreach (var pin in pins)
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_19;
				L_19 = Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_inline((&V_2), Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var);
				V_3 = L_19;
				// if (undo != null)
				RuntimeObject* L_20 = ___2_undo;
				if (!L_20)
				{
					goto IL_0076_1;
				}
			}
			{
				// undo.RegisterCompleteObjectUndo(pin, "Create Node");
				RuntimeObject* L_21 = ___2_undo;
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_22 = V_3;
				NullCheck(L_21);
				InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(3 /* System.Void DungeonArchitect.UI.UIUndoSystem::RegisterCompleteObjectUndo(System.Object,System.String) */, UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var, L_21, L_22, _stringLiteral111026EB4845FFBD694059FB22E75DB2E3D82145);
			}

IL_0076_1:
			{
				// foreach (var pin in pins)
				bool L_23;
				L_23 = Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A((&V_2), Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_005f_1;
				}
			}
			{
				goto IL_008f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		// graph.Nodes.Add(node);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_24 = ___0_graph;
		NullCheck(L_24);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_25;
		L_25 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(L_24, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_26 = ___1_node;
		NullCheck(L_25);
		List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_inline(L_25, L_26, List_1_Add_m3C52A70247AFD6346470E75C45E354374089137E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::DestroyNode(DungeonArchitect.Graphs.GraphNode,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_DestroyNode_mBCB10A4613B385A30A765E154E78688E8673DF75 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, RuntimeObject* ___1_undo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral439C035FFF19BD96387B758DE6BD4D64BCE4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544ECDDEF2E2C0E9CD5FF4993A896D99DA761523);
		s_Il2CppMethodInitialized = true;
	}
	Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* V_0 = NULL;
	Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* V_2 = NULL;
	{
		// if (!node.CanBeDeleted)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		NullCheck(L_0);
		bool L_1;
		L_1 = GraphNode_get_CanBeDeleted_m2153EF4B29B38797FCA5F274E35D0AA5A30EA0B8_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var graph = node.Graph;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2 = ___0_node;
		NullCheck(L_2);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_3;
		L_3 = GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline(L_2, NULL);
		V_0 = L_3;
		// if (undo != null)
		RuntimeObject* L_4 = ___1_undo;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// undo.RegisterCompleteObjectUndo(graph, "Delete Node");
		RuntimeObject* L_5 = ___1_undo;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_6 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(3 /* System.Void DungeonArchitect.UI.UIUndoSystem::RegisterCompleteObjectUndo(System.Object,System.String) */, UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var, L_5, L_6, _stringLiteral439C035FFF19BD96387B758DE6BD4D64BCE4EB7A);
		// undo.RegisterCompleteObjectUndo(node, "Delete node");
		RuntimeObject* L_7 = ___1_undo;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_8 = ___0_node;
		NullCheck(L_7);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(3 /* System.Void DungeonArchitect.UI.UIUndoSystem::RegisterCompleteObjectUndo(System.Object,System.String) */, UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var, L_7, L_8, _stringLiteral544ECDDEF2E2C0E9CD5FF4993A896D99DA761523);
	}

IL_002b:
	{
		// BreakInputLinks(node, undo);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_9 = ___0_node;
		RuntimeObject* L_10 = ___1_undo;
		GraphOperations_BreakInputLinks_mE0679CCAF86E990974AFDCFA7BCB332F6FC8C86D(L_9, L_10, NULL);
		// BreakOutputLinks(node, undo);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_11 = ___0_node;
		RuntimeObject* L_12 = ___1_undo;
		GraphOperations_BreakOutputLinks_m80948DFEFF7F1B2DD6EB75C8EAE8E9D3920ECC6E(L_11, L_12, NULL);
		// graph.Nodes.Remove(node);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_13 = V_0;
		NullCheck(L_13);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_14;
		L_14 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(L_13, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_15 = ___0_node;
		NullCheck(L_14);
		bool L_16;
		L_16 = List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA(L_14, L_15, List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA_RuntimeMethod_var);
		// var pins = new List<GraphPin>();
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_17 = (List_1_tC958F6791FB4E4315279F35506727A207EBFFF03*)il2cpp_codegen_object_new(List_1_tC958F6791FB4E4315279F35506727A207EBFFF03_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D(L_17, List_1__ctor_m022EE34D352A037C81ADAA12C7B76D88319B5B2D_RuntimeMethod_var);
		// pins.AddRange(node.InputPins);
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_18 = L_17;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_19 = ___0_node;
		NullCheck(L_19);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_20;
		L_20 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(L_19, NULL);
		NullCheck(L_18);
		List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67(L_18, (RuntimeObject*)L_20, List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		// pins.AddRange(node.OutputPins);
		List_1_tC958F6791FB4E4315279F35506727A207EBFFF03* L_21 = L_18;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_22 = ___0_node;
		NullCheck(L_22);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_23;
		L_23 = GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8(L_22, NULL);
		NullCheck(L_21);
		List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67(L_21, (RuntimeObject*)L_23, List_1_AddRange_mF56ADC307CC71FD17CE519C2E8E3E9FEBBBFEE67_RuntimeMethod_var);
		// foreach (var pin in pins)
		NullCheck(L_21);
		Enumerator_tCBE382B0B851EE53151ED1BFBB83F87D2C67B2CF L_24;
		L_24 = List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB(L_21, List_1_GetEnumerator_mCCE40BAB478918ED4AFE18B2F3F42982C46B49DB_RuntimeMethod_var);
		V_1 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0088:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10((&V_1), Enumerator_Dispose_m0F291411029C6429C08D3D75EF1080DBC1928D10_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007d_1;
			}

IL_006b_1:
			{
				// foreach (var pin in pins)
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_25;
				L_25 = Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_inline((&V_1), Enumerator_get_Current_m2FC59B57C11B54D99D086077E4AAC9275C1014FD_RuntimeMethod_var);
				V_2 = L_25;
				// if (undo != null)
				RuntimeObject* L_26 = ___1_undo;
				if (!L_26)
				{
					goto IL_007d_1;
				}
			}
			{
				// undo.DestroyObjectImmediate(pin);
				RuntimeObject* L_27 = ___1_undo;
				GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_28 = V_2;
				NullCheck(L_27);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void DungeonArchitect.UI.UIUndoSystem::DestroyObjectImmediate(System.Object) */, UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var, L_27, L_28);
			}

IL_007d_1:
			{
				// foreach (var pin in pins)
				bool L_29;
				L_29 = Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A((&V_1), Enumerator_MoveNext_m95BFC7B89AC08FDACBF01C8ECF6B43001AA46D5A_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// graph.Nodes.Remove(node);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_30 = V_0;
		NullCheck(L_30);
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_31;
		L_31 = Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline(L_30, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_32 = ___0_node;
		NullCheck(L_31);
		bool L_33;
		L_33 = List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA(L_31, L_32, List_1_Remove_mDCEED743987282CE65AF09A8B88121AE6CCB92CA_RuntimeMethod_var);
		// if (undo != null)
		RuntimeObject* L_34 = ___1_undo;
		if (!L_34)
		{
			goto IL_00ad;
		}
	}
	{
		// undo.DestroyObjectImmediate(node);
		RuntimeObject* L_35 = ___1_undo;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_36 = ___0_node;
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void DungeonArchitect.UI.UIUndoSystem::DestroyObjectImmediate(System.Object) */, UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var, L_35, L_36);
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::DestroyLink(DungeonArchitect.Graphs.GraphLink,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_DestroyLink_mB3BF5FABCC756FE960ADFD14B5CF805B2CA146FB (GraphLink_t167090219997E1F874E24A93015AD8333374E463* ___0_link, RuntimeObject* ___1_undo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AE24056AD6123E48ABD98FA6212951E3BE63F25);
		s_Il2CppMethodInitialized = true;
	}
	Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* V_0 = NULL;
	{
		// var graph = link.Graph;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_0 = ___0_link;
		NullCheck(L_0);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_1;
		L_1 = GraphLink_get_Graph_m7D055380A86AFE933842BC24CEFC526D122B637F_inline(L_0, NULL);
		V_0 = L_1;
		// if (undo != null)
		RuntimeObject* L_2 = ___1_undo;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// undo.RecordObject(graph, "Destroy Link");
		RuntimeObject* L_3 = ___1_undo;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(0 /* System.Void DungeonArchitect.UI.UIUndoSystem::RecordObject(System.Object,System.String) */, UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var, L_3, L_4, _stringLiteral7AE24056AD6123E48ABD98FA6212951E3BE63F25);
	}

IL_0016:
	{
		// graph.Links.Remove(link);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_5 = V_0;
		NullCheck(L_5);
		List_1_t5B2B2081BF8097131F5848A462357FBB09D50112* L_6;
		L_6 = Graph_get_Links_m2DC023B7C4956887C381227BB26C31178B8F2CDF_inline(L_5, NULL);
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_7 = ___0_link;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E(L_6, L_7, List_1_Remove_m1930ECB0CBA8BA46BA38E3E3FD6B8724EA5C0F6E_RuntimeMethod_var);
		// if (undo != null)
		RuntimeObject* L_9 = ___1_undo;
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		// undo.DestroyObjectImmediate(link);
		RuntimeObject* L_10 = ___1_undo;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_11 = ___0_link;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void DungeonArchitect.UI.UIUndoSystem::DestroyObjectImmediate(System.Object) */, UIUndoSystem_t009452C1B9C14ED702C58A3F2A0AD6F3469F81F3_il2cpp_TypeInfo_var, L_10, L_11);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::BreakInputLinks(DungeonArchitect.Graphs.GraphNode,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_BreakInputLinks_mE0679CCAF86E990974AFDCFA7BCB332F6FC8C86D (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, RuntimeObject* ___1_undo, const RuntimeMethod* method) 
{
	{
		// BreakLinks(node.InputPins, undo);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		NullCheck(L_0);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_1;
		L_1 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(L_0, NULL);
		RuntimeObject* L_2 = ___1_undo;
		GraphOperations_BreakLinks_m6E60C5F4FC3ACEA71323D9A9CC90B81A88F7A0AE(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::BreakOutputLinks(DungeonArchitect.Graphs.GraphNode,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_BreakOutputLinks_m80948DFEFF7F1B2DD6EB75C8EAE8E9D3920ECC6E (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, RuntimeObject* ___1_undo, const RuntimeMethod* method) 
{
	{
		// BreakLinks(node.OutputPins, undo);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		NullCheck(L_0);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_1;
		L_1 = GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8(L_0, NULL);
		RuntimeObject* L_2 = ___1_undo;
		GraphOperations_BreakLinks_m6E60C5F4FC3ACEA71323D9A9CC90B81A88F7A0AE(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::BreakLinks(DungeonArchitect.Graphs.GraphPin[],DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_BreakLinks_m6E60C5F4FC3ACEA71323D9A9CC90B81A88F7A0AE (GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* ___0_pins, RuntimeObject* ___1_undo, const RuntimeMethod* method) 
{
	GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var pin in pins)
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_0 = ___0_pins;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0013;
	}

IL_0006:
	{
		// foreach (var pin in pins)
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// BreakLinks(pin, undo);
		RuntimeObject* L_5 = ___1_undo;
		GraphOperations_BreakLinks_m35665CC152C794F39BC6B8033721CD3657C0C21B(L_4, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0013:
	{
		// foreach (var pin in pins)
		int32_t L_7 = V_1;
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::BreakLinks(DungeonArchitect.Graphs.GraphPin,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations_BreakLinks_m35665CC152C794F39BC6B8033721CD3657C0C21B (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, RuntimeObject* ___1_undo, const RuntimeMethod* method) 
{
	GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GraphLink[] links = pin.GetConntectedLinks();
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___0_pin;
		NullCheck(L_0);
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_1;
		L_1 = GraphPin_GetConntectedLinks_mB5D45F5630E9AE8BA745F54363C846C24FCC1418(L_0, NULL);
		// foreach (var link in links)
		V_0 = L_1;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var link in links)
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// DestroyLink(link, undo);
		RuntimeObject* L_6 = ___1_undo;
		GraphOperations_DestroyLink_mB3BF5FABCC756FE960ADFD14B5CF805B2CA146FB(L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (var link in links)
		int32_t L_8 = V_1;
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphOperations::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphOperations__ctor_mDD8C0F392300200DF60079E49131A84E79A9F366 (GraphOperations_t372733E784F1A0BD34088ED4698B4523B857A1EF* __this, const RuntimeMethod* method) 
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
// System.Boolean DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler::HandleNodeInput(DungeonArchitect.Graphs.GraphNode,UnityEngine.Event,DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor,DungeonArchitect.UI.UISystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphInputHandler_HandleNodeInput_m684DEC311157D807B6E24F4E8E8FDE540A8D51C4 (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___1_e, GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* ___2_graphEditor, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___3_uiSystem, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* V_4 = NULL;
	int32_t V_5 = 0;
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* V_6 = NULL;
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* V_7 = NULL;
	bool V_8 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// bool inputProcessed = false;
		V_0 = (bool)0;
		// if (!node.Dragging)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		NullCheck(L_0);
		bool L_1;
		L_1 = GraphNode_get_Dragging_m078B8A3D3D6D4C8776EB5482E1206694F1E78897_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		// foreach (var pin in node.InputPins)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2 = ___0_node;
		NullCheck(L_2);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_3;
		L_3 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(L_2, NULL);
		V_4 = L_3;
		V_5 = 0;
		goto IL_0034;
	}

IL_0017:
	{
		// foreach (var pin in node.InputPins)
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_6 = L_7;
		// if (inputProcessed) break;
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		// inputProcessed |= HandlePinInput(pin, e, graphEditor, uiSystem);
		bool L_9 = V_0;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_10 = V_6;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_11 = ___1_e;
		GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* L_12 = ___2_graphEditor;
		UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* L_13 = ___3_uiSystem;
		bool L_14;
		L_14 = GraphInputHandler_HandlePinInput_m76B0E1EED784FCEDE412BD7B7531B1848B2A4CDA(L_10, L_11, L_12, L_13, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_9|(int32_t)L_14));
		int32_t L_15 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0034:
	{
		// foreach (var pin in node.InputPins)
		int32_t L_16 = V_5;
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0017;
		}
	}

IL_003c:
	{
		// foreach (var pin in node.OutputPins)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_18 = ___0_node;
		NullCheck(L_18);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_19;
		L_19 = GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8(L_18, NULL);
		V_4 = L_19;
		V_5 = 0;
		goto IL_0066;
	}

IL_0049:
	{
		// foreach (var pin in node.OutputPins)
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_20 = V_4;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		// if (inputProcessed) break;
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_006e;
		}
	}
	{
		// inputProcessed |= HandlePinInput(pin, e, graphEditor, uiSystem);
		bool L_25 = V_0;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_26 = V_7;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_27 = ___1_e;
		GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* L_28 = ___2_graphEditor;
		UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* L_29 = ___3_uiSystem;
		bool L_30;
		L_30 = GraphInputHandler_HandlePinInput_m76B0E1EED784FCEDE412BD7B7531B1848B2A4CDA(L_26, L_27, L_28, L_29, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_25|(int32_t)L_30));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0066:
	{
		// foreach (var pin in node.OutputPins)
		int32_t L_32 = V_5;
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_33 = V_4;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0049;
		}
	}

IL_006e:
	{
		// var mousePosition = e.mousePosition;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_34 = ___1_e;
		NullCheck(L_34);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_34, NULL);
		V_1 = L_35;
		// var mousePositionWorld = graphEditor.Camera.ScreenToWorld(mousePosition);
		GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* L_36 = ___2_graphEditor;
		NullCheck(L_36);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_37;
		L_37 = GraphEditor_get_Camera_m9EC313AB617544FA067DC63CFDCB4FB88D405449_inline(L_36, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_1;
		NullCheck(L_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = GraphCamera_ScreenToWorld_m4F847D7AE0B699D356167F483AD52EAE0B79452E(L_37, L_38, NULL);
		V_2 = L_39;
		// int dragButton = 0;
		V_3 = 0;
		// if (!inputProcessed)
		bool L_40 = V_0;
		if (L_40)
		{
			goto IL_00d9;
		}
	}
	{
		// bool insideRect = node.Bounds.Contains(mousePositionWorld);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_41 = ___0_node;
		NullCheck(L_41);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_42;
		L_42 = GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline(L_41, NULL);
		V_9 = L_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_2;
		bool L_44;
		L_44 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_9), L_43, NULL);
		V_8 = L_44;
		// if (e.type == EventType.MouseDown && insideRect && e.button == dragButton)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_45 = ___1_e;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_45, NULL);
		bool L_47 = V_8;
		if (!((int32_t)(((((int32_t)L_46) == ((int32_t)0))? 1 : 0)&(int32_t)L_47)))
		{
			goto IL_00bb;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_48 = ___1_e;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08(L_48, NULL);
		int32_t L_50 = V_3;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_00bb;
		}
	}
	{
		// node.Dragging = true;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_51 = ___0_node;
		NullCheck(L_51);
		GraphNode_set_Dragging_mC95390CD9A00B4F0BB31893630D72CAEF23B6FC3_inline(L_51, (bool)1, NULL);
		// inputProcessed = true;
		V_0 = (bool)1;
		goto IL_00d9;
	}

IL_00bb:
	{
		// else if (e.type == EventType.MouseUp && insideRect && e.button == dragButton)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_52 = ___1_e;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_52, NULL);
		bool L_54 = V_8;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)1))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_00d9;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_55 = ___1_e;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08(L_55, NULL);
		int32_t L_57 = V_3;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_00d9;
		}
	}
	{
		// node.Dragging = false;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_58 = ___0_node;
		NullCheck(L_58);
		GraphNode_set_Dragging_mC95390CD9A00B4F0BB31893630D72CAEF23B6FC3_inline(L_58, (bool)0, NULL);
	}

IL_00d9:
	{
		// if (node.Dragging && !node.Selected)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_59 = ___0_node;
		NullCheck(L_59);
		bool L_60;
		L_60 = GraphNode_get_Dragging_m078B8A3D3D6D4C8776EB5482E1206694F1E78897_inline(L_59, NULL);
		if (!L_60)
		{
			goto IL_00f0;
		}
	}
	{
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_61 = ___0_node;
		NullCheck(L_61);
		bool L_62;
		L_62 = GraphNode_get_Selected_m9C828A505E1BA3E0263CC51DB59D3E64179D467F_inline(L_61, NULL);
		if (L_62)
		{
			goto IL_00f0;
		}
	}
	{
		// node.Dragging = false;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_63 = ___0_node;
		NullCheck(L_63);
		GraphNode_set_Dragging_mC95390CD9A00B4F0BB31893630D72CAEF23B6FC3_inline(L_63, (bool)0, NULL);
	}

IL_00f0:
	{
		// if (node.Dragging && e.type == EventType.MouseDrag)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_64 = ___0_node;
		NullCheck(L_64);
		bool L_65;
		L_65 = GraphNode_get_Dragging_m078B8A3D3D6D4C8776EB5482E1206694F1E78897_inline(L_64, NULL);
		if (!L_65)
		{
			goto IL_0103;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_66 = ___1_e;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_66, NULL);
		if ((!(((uint32_t)L_67) == ((uint32_t)3))))
		{
			goto IL_0103;
		}
	}
	{
		// inputProcessed = true;
		V_0 = (bool)1;
	}

IL_0103:
	{
		// return inputProcessed;
		bool L_68 = V_0;
		return L_68;
	}
}
// System.Boolean DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler::HandlePinInput(DungeonArchitect.Graphs.GraphPin,UnityEngine.Event,DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor,DungeonArchitect.UI.UISystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphInputHandler_HandlePinInput_m76B0E1EED784FCEDE412BD7B7531B1848B2A4CDA (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___1_e, GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* ___2_graphEditor, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___3_uiSystem, const RuntimeMethod* method) 
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
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var camera = graphEditor.Camera;
		GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* L_0 = ___2_graphEditor;
		NullCheck(L_0);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_1;
		L_1 = GraphEditor_get_Camera_m9EC313AB617544FA067DC63CFDCB4FB88D405449_inline(L_0, NULL);
		// var mousePosition = e.mousePosition;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2 = ___1_e;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_2, NULL);
		V_0 = L_3;
		// var mousePositionWorld = camera.ScreenToWorld(mousePosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = GraphCamera_ScreenToWorld_m4F847D7AE0B699D356167F483AD52EAE0B79452E(L_1, L_4, NULL);
		V_1 = L_5;
		// int buttonIdDrag = 0;
		V_2 = 0;
		// int buttonIdDestroyLinks = 1;
		V_3 = 1;
		// if (pin.ContainsPoint(mousePositionWorld))
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_6 = ___0_pin;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(4 /* System.Boolean DungeonArchitect.Graphs.GraphPin::ContainsPoint(UnityEngine.Vector2) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_00c3;
		}
	}
	{
		// if (e.type == EventType.MouseDown && e.button == buttonIdDrag)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_9 = ___1_e;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_9, NULL);
		if (L_10)
		{
			goto IL_003e;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_11 = ___1_e;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08(L_11, NULL);
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_003e;
		}
	}
	{
		// pin.ClickState = GraphPinMouseState.Clicked;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_14 = ___0_pin;
		NullCheck(L_14);
		GraphPin_set_ClickState_m394EE7F3CAC7411BD28C08271BA7DDDDA22AD22E_inline(L_14, 1, NULL);
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// if (e.button == buttonIdDestroyLinks)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_15 = ___1_e;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08(L_15, NULL);
		int32_t L_17 = V_3;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_00b1;
		}
	}
	{
		// if (e.type == EventType.MouseDown)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_18 = ___1_e;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_18, NULL);
		if (L_19)
		{
			goto IL_0058;
		}
	}
	{
		// pin.RequestLinkDeletionInitiated = true;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_20 = ___0_pin;
		NullCheck(L_20);
		GraphPin_set_RequestLinkDeletionInitiated_mD46D0FE6F33E5E288CF5D0AC4A1B7E0D175ACE44_inline(L_20, (bool)1, NULL);
		goto IL_00af;
	}

IL_0058:
	{
		// else if (e.type == EventType.MouseDrag)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_21 = ___1_e;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_21, NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_006a;
		}
	}
	{
		// pin.RequestLinkDeletionInitiated = false;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_23 = ___0_pin;
		NullCheck(L_23);
		GraphPin_set_RequestLinkDeletionInitiated_mD46D0FE6F33E5E288CF5D0AC4A1B7E0D175ACE44_inline(L_23, (bool)0, NULL);
		goto IL_00af;
	}

IL_006a:
	{
		// else if (e.type == EventType.MouseUp)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_24 = ___1_e;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00af;
		}
	}
	{
		// if (pin.RequestLinkDeletionInitiated)
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_26 = ___0_pin;
		NullCheck(L_26);
		bool L_27;
		L_27 = GraphPin_get_RequestLinkDeletionInitiated_m2A62A9311E8491DE48A4B4DEEAAE8A411423CCF9_inline(L_26, NULL);
		if (!L_27)
		{
			goto IL_00af;
		}
	}
	{
		// DestroyPinLinks(pin, uiSystem.Undo);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_28 = ___0_pin;
		UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* L_29 = ___3_uiSystem;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = UISystem_get_Undo_m94083067C2D42473B0FAB6812CE04FC201D94F39_inline(L_29, NULL);
		GraphInputHandler_DestroyPinLinks_m8736C4ECF5B34BC847FA3DC44E398593079ABBA2(L_28, L_30, NULL);
		// if (pin.Node != null && pin.Node.Graph != null)
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_31 = ___0_pin;
		NullCheck(L_31);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_32;
		L_32 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_00af;
		}
	}
	{
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_34 = ___0_pin;
		NullCheck(L_34);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_35;
		L_35 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_34, NULL);
		NullCheck(L_35);
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_36;
		L_36 = GraphNode_get_Graph_m3747319C884D29CEE76D91160230E341B1D94831_inline(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_00af;
		}
	}
	{
		// graphEditor.HandleGraphStateChanged(uiSystem);
		GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* L_38 = ___2_graphEditor;
		UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* L_39 = ___3_uiSystem;
		NullCheck(L_38);
		VirtualActionInvoker1< UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* >::Invoke(42 /* System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphEditor::HandleGraphStateChanged(DungeonArchitect.UI.UISystem) */, L_38, L_39);
	}

IL_00af:
	{
		// return true;
		return (bool)1;
	}

IL_00b1:
	{
		// if (pin.ClickState != GraphPinMouseState.Clicked)
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_40 = ___0_pin;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = GraphPin_get_ClickState_m8EC450B5DE760F06E1583DC6B906C339EC4A4FB6_inline(L_40, NULL);
		if ((((int32_t)L_41) == ((int32_t)1)))
		{
			goto IL_00ca;
		}
	}
	{
		// pin.ClickState = GraphPinMouseState.Hover;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_42 = ___0_pin;
		NullCheck(L_42);
		GraphPin_set_ClickState_m394EE7F3CAC7411BD28C08271BA7DDDDA22AD22E_inline(L_42, 0, NULL);
		goto IL_00ca;
	}

IL_00c3:
	{
		// pin.ClickState = GraphPinMouseState.None;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_43 = ___0_pin;
		NullCheck(L_43);
		GraphPin_set_ClickState_m394EE7F3CAC7411BD28C08271BA7DDDDA22AD22E_inline(L_43, 2, NULL);
	}

IL_00ca:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler::DestroyPinLinks(DungeonArchitect.Graphs.GraphPin,DungeonArchitect.UI.UIUndoSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphInputHandler_DestroyPinLinks_m8736C4ECF5B34BC847FA3DC44E398593079ABBA2 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, RuntimeObject* ___1_undo, const RuntimeMethod* method) 
{
	GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var pinLinks = pin.GetConntectedLinks();
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___0_pin;
		NullCheck(L_0);
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_1;
		L_1 = GraphPin_GetConntectedLinks_mB5D45F5630E9AE8BA745F54363C846C24FCC1418(L_0, NULL);
		// foreach (var link in pinLinks)
		V_0 = L_1;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var link in pinLinks)
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// GraphOperations.DestroyLink(link, undo);
		RuntimeObject* L_6 = ___1_undo;
		GraphOperations_DestroyLink_mB3BF5FABCC756FE960ADFD14B5CF805B2CA146FB(L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (var link in pinLinks)
		int32_t L_8 = V_1;
		GraphLinkU5BU5D_t3AEF2ACCF012C68F2DC3CED9D339FA5B16A8D14D* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// pin.NotifyPinLinksDestroyed();
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_10 = ___0_pin;
		NullCheck(L_10);
		GraphPin_NotifyPinLinksDestroyed_mFFD740D9B7D393BD231965FE9B12FCCA2FED93CE(L_10, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphInputHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphInputHandler__ctor_mBC10992B82561DB0D9DC8C3815FD988BE72D410E (GraphInputHandler_t524CD9DFCAC8E6F1B8C2EB5521624BE669BD963D* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.SplineGraphLinkRenderer::DrawGraphLink(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,DungeonArchitect.Graphs.GraphLink,DungeonArchitect.Graphs.GraphCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineGraphLinkRenderer_DrawGraphLink_m7E0D436236C1BB19A3627BEC594191B1632CC342 (SplineGraphLinkRenderer_t5AD43167EECAECB7816E91A615564FB704812541* __this, RuntimeObject* ___0_renderer, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___1_rendererContext, GraphLink_t167090219997E1F874E24A93015AD8333374E463* ___2_link, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_10 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// if (link.Input == null || link.Output == null)
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_0 = ___2_link;
		NullCheck(L_0);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_1;
		L_1 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_3 = ___2_link;
		NullCheck(L_3);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_4;
		L_4 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// float lineThickness = 3;
		V_0 = (3.0f);
		// Vector2 startPos = camera.WorldToScreen(link.Output.WorldPosition);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_6 = ___3_camera;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_7 = ___2_link;
		NullCheck(L_7);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_8;
		L_8 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_7, NULL);
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_8, NULL);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2(L_6, L_9, NULL);
		V_1 = L_10;
		// Vector2 endPos = camera.WorldToScreen(link.Input.WorldPosition);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_11 = ___3_camera;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_12 = ___2_link;
		NullCheck(L_12);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_13;
		L_13 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_12, NULL);
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_13, NULL);
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2(L_11, L_14, NULL);
		V_2 = L_15;
		// var tangentStrength = link.GetTangentStrength() / camera.ZoomLevel;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_16 = ___2_link;
		NullCheck(L_16);
		float L_17;
		L_17 = GraphLink_GetTangentStrength_m496C7920D17384DDFF9C064A63D05DC4DCE63267(L_16, NULL);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_18 = ___3_camera;
		NullCheck(L_18);
		float L_19;
		L_19 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_18, NULL);
		V_3 = ((float)(L_17/L_19));
		// Vector3 startTan = startPos + link.Output.Tangent * tangentStrength;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_21 = ___2_link;
		NullCheck(L_21);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_22;
		L_22 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_21, NULL);
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = GraphPin_get_Tangent_mCB2E9C1CCDC0ED5BD288E51024C691404990D6AB_inline(L_22, NULL);
		float L_24 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_23, L_24, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_20, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_26, NULL);
		V_4 = L_27;
		// Vector3 endTan = endPos + link.Input.Tangent * tangentStrength;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_2;
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_29 = ___2_link;
		NullCheck(L_29);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_30;
		L_30 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_29, NULL);
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = GraphPin_get_Tangent_mCB2E9C1CCDC0ED5BD288E51024C691404990D6AB_inline(L_30, NULL);
		float L_32 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_31, L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_28, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_34, NULL);
		V_5 = L_35;
		// var lineColor = new Color(1, 1, 1, 0.75f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_6), (1.0f), (1.0f), (1.0f), (0.75f), NULL);
		// renderer.DrawBezier(startPos, endPos, startTan, endTan, lineColor, null, lineThickness);
		RuntimeObject* L_36 = ___0_renderer;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_37, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = V_6;
		float L_44 = V_0;
		NullCheck(L_36);
		InterfaceActionInvoker7< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, float >::Invoke(24 /* System.Void DungeonArchitect.UI.UIRenderer::DrawBezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Texture2D,System.Single) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_36, L_38, L_40, L_41, L_42, L_43, (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL, L_44);
		// var rotation = Quaternion.FromToRotation(new Vector3(1, 0, 0), link.Input.Tangent.normalized);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_45), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_46 = ___2_link;
		NullCheck(L_46);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_47;
		L_47 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_46, NULL);
		NullCheck(L_47);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = GraphPin_get_Tangent_mCB2E9C1CCDC0ED5BD288E51024C691404990D6AB_inline(L_47, NULL);
		V_11 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		L_49 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_11), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_49, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_45, L_50, NULL);
		V_7 = L_51;
		// float arrowSize = 10.0f / camera.ZoomLevel;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_52 = ___3_camera;
		NullCheck(L_52);
		float L_53;
		L_53 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_52, NULL);
		V_8 = ((float)((10.0f)/L_53));
		// float arrowWidth = 0.5f / camera.ZoomLevel;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_54 = ___3_camera;
		NullCheck(L_54);
		float L_55;
		L_55 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_54, NULL);
		V_9 = ((float)((0.5f)/L_55));
		// var arrowTails = new Vector2[] {
		//     rotation * new Vector3(1, arrowWidth) * arrowSize,
		//     rotation * new Vector3(1, -arrowWidth) * arrowSize,
		// };
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_56 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_57 = L_56;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = V_7;
		float L_59 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_60), (1.0f), L_59, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_58, L_60, NULL);
		float L_62 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_61, L_62, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		L_64 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_63, NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_64);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_65 = L_57;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66 = V_7;
		float L_67 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_68), (1.0f), ((-L_67)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_66, L_68, NULL);
		float L_70 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_69, L_70, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_71, NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_72);
		V_10 = L_65;
		// renderer.DrawLine(lineColor, endPos, endPos + arrowTails[0]);
		RuntimeObject* L_73 = ___0_renderer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_75, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_78 = V_10;
		NullCheck(L_78);
		int32_t L_79 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		L_81 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_77, L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_81, NULL);
		NullCheck(L_73);
		InterfaceActionInvoker3< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(17 /* System.Void DungeonArchitect.UI.UIRenderer::DrawLine(UnityEngine.Color,UnityEngine.Vector3,UnityEngine.Vector3) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_73, L_74, L_76, L_82);
		// renderer.DrawLine(lineColor, endPos, endPos + arrowTails[1]);
		RuntimeObject* L_83 = ___0_renderer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_85, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_88 = V_10;
		NullCheck(L_88);
		int32_t L_89 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91;
		L_91 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_87, L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_91, NULL);
		NullCheck(L_83);
		InterfaceActionInvoker3< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(17 /* System.Void DungeonArchitect.UI.UIRenderer::DrawLine(UnityEngine.Color,UnityEngine.Vector3,UnityEngine.Vector3) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_83, L_84, L_86, L_92);
		// renderer.DrawLine(lineColor, endPos + arrowTails[0], endPos + arrowTails[1]);
		RuntimeObject* L_93 = ___0_renderer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_94 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_96 = V_10;
		NullCheck(L_96);
		int32_t L_97 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99;
		L_99 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_95, L_98, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_99, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_102 = V_10;
		NullCheck(L_102);
		int32_t L_103 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		L_105 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_101, L_104, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_105, NULL);
		NullCheck(L_93);
		InterfaceActionInvoker3< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(17 /* System.Void DungeonArchitect.UI.UIRenderer::DrawLine(UnityEngine.Color,UnityEngine.Vector3,UnityEngine.Vector3) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_93, L_94, L_100, L_106);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.SplineGraphLinkRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineGraphLinkRenderer__ctor_m0A6CB7BFC669E50365ECA44B53620DCB3C82A2FE (SplineGraphLinkRenderer_t5AD43167EECAECB7816E91A615564FB704812541* __this, const RuntimeMethod* method) 
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
// UnityEngine.Vector2 DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer::GetPointOnNodeBounds(UnityEngine.Vector2,DungeonArchitect.Graphs.GraphPin,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 StraightLineGraphLinkRenderer_GetPointOnNodeBounds_mFF8921314DD10A17668BD76BE08CC57F478D0327 (StraightLineGraphLinkRenderer_t62BA277D157DC991DDCF70B67ABD052B9C1799FE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___1_pin, float ___2_distanceBias, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var nodeRect = (pin.Node != null) ? pin.Node.Bounds : new Rect(pin.WorldPosition, Vector2.one);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___1_pin;
		NullCheck(L_0);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_1;
		L_1 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_3 = ___1_pin;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675((&L_6), L_4, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
		goto IL_002b;
	}

IL_0020:
	{
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_7 = ___1_pin;
		NullCheck(L_7);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_8;
		L_8 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_7, NULL);
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline(L_8, NULL);
		G_B3_0 = L_9;
	}

IL_002b:
	{
		V_0 = G_B3_0;
		// var center = nodeRect.position + nodeRect.size * 0.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_11, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_10, L_12, NULL);
		V_1 = L_13;
		// var b = new Bounds(center, nodeRect.size);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_16, NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_2), L_15, L_17, NULL);
		// var direction = (center - position).normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___0_position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_18, L_19, NULL);
		V_6 = L_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_6), NULL);
		V_3 = L_21;
		// var r = new Ray(position, direction);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_24, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_4), L_23, L_25, NULL);
		// if (b.IntersectRay(r, out intersectDistance))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_26 = V_4;
		bool L_27;
		L_27 = Bounds_IntersectRay_mF5EE01759AA2D09C683FBE015007A85CFECB8393((&V_2), L_26, (&V_5), NULL);
		if (!L_27)
		{
			goto IL_00a5;
		}
	}
	{
		// return position + direction * (intersectDistance + distanceBias);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___0_position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_3;
		float L_30 = V_5;
		float L_31 = ___2_distanceBias;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_29, ((float)il2cpp_codegen_add(L_30, L_31)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_28, L_32, NULL);
		return L_33;
	}

IL_00a5:
	{
		// return pin.WorldPosition;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_34 = ___1_pin;
		NullCheck(L_34);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_34, NULL);
		return L_35;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer::DrawGraphLink(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,DungeonArchitect.Graphs.GraphLink,DungeonArchitect.Graphs.GraphCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StraightLineGraphLinkRenderer_DrawGraphLink_mBC2A49114E71ECBEE939D6054DB33411008A45D4 (StraightLineGraphLinkRenderer_t62BA277D157DC991DDCF70B67ABD052B9C1799FE* __this, RuntimeObject* ___0_renderer, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___1_rendererContext, GraphLink_t167090219997E1F874E24A93015AD8333374E463* ___2_link, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, const RuntimeMethod* method) 
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
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// if (link.Input == null || link.Output == null)
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_0 = ___2_link;
		NullCheck(L_0);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_1;
		L_1 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_3 = ___2_link;
		NullCheck(L_3);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_4;
		L_4 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// float bias = -5;
		V_4 = (-5.0f);
		// startPos = GetPointOnNodeBounds(link.Input.WorldPosition, link.Output, bias);
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_6 = ___2_link;
		NullCheck(L_6);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_7;
		L_7 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_6, NULL);
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_7, NULL);
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_9 = ___2_link;
		NullCheck(L_9);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_10;
		L_10 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_9, NULL);
		float L_11 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = StraightLineGraphLinkRenderer_GetPointOnNodeBounds_mFF8921314DD10A17668BD76BE08CC57F478D0327(__this, L_8, L_10, L_11, NULL);
		V_0 = L_12;
		// endPos = GetPointOnNodeBounds(link.Output.WorldPosition, link.Input, bias);
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_13 = ___2_link;
		NullCheck(L_13);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_14;
		L_14 = GraphLink_get_Output_mF4D45705C1AEA21E0280E23DCCEE80C8D0069EB9_inline(L_13, NULL);
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GraphPin_get_WorldPosition_m249387C55D7B8A5B6F3AB2918A1FF90A7B60A525(L_14, NULL);
		GraphLink_t167090219997E1F874E24A93015AD8333374E463* L_16 = ___2_link;
		NullCheck(L_16);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_17;
		L_17 = GraphLink_get_Input_m21946AED087C7CD12E1254823ACACC63CF4A1C91_inline(L_16, NULL);
		float L_18 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = StraightLineGraphLinkRenderer_GetPointOnNodeBounds_mFF8921314DD10A17668BD76BE08CC57F478D0327(__this, L_15, L_17, L_18, NULL);
		V_1 = L_19;
		// startPos = camera.WorldToScreen(startPos);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_20 = ___3_camera;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2(L_20, L_21, NULL);
		V_0 = L_22;
		// endPos = camera.WorldToScreen(endPos);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_23 = ___3_camera;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2(L_23, L_24, NULL);
		V_1 = L_25;
		// var lineColor = new Color(1, 1, 1, 1);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_2), (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		// float lineThickness = 3;
		V_3 = (3.0f);
		// DrawLine(renderer, startPos, endPos, camera, lineColor, lineThickness);
		RuntimeObject* L_26 = ___0_renderer;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_29 = ___3_camera;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = V_2;
		float L_31 = V_3;
		StraightLineGraphLinkRenderer_DrawLine_m398DD1E52B1D817F90C55C1276EFA4CF0285B5F6(L_26, L_27, L_28, L_29, L_30, L_31, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer::DrawLine(DungeonArchitect.UI.UIRenderer,UnityEngine.Vector2,UnityEngine.Vector2,DungeonArchitect.Graphs.GraphCamera,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StraightLineGraphLinkRenderer_DrawLine_m398DD1E52B1D817F90C55C1276EFA4CF0285B5F6 (RuntimeObject* ___0_renderer, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_startPos, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_endPos, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_lineColor, float ___5_lineThickness, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// renderer.DrawAAPolyLine(lineThickness, lineColor, startPos, endPos);
		RuntimeObject* L_0 = ___0_renderer;
		float L_1 = ___5_lineThickness;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___4_lineColor;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_startPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___2_endPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		NullCheck(L_0);
		InterfaceActionInvoker3< float, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* >::Invoke(21 /* System.Void DungeonArchitect.UI.UIRenderer::DrawAAPolyLine(System.Single,UnityEngine.Color,UnityEngine.Vector3[]) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_7);
		// var rotation = Quaternion.FromToRotation(new Vector3(1, 0, 0), (startPos - endPos).normalized);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_startPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___2_endPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_11, L_12, NULL);
		V_7 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_10, L_15, NULL);
		V_0 = L_16;
		// float arrowSize = 10.0f / camera.ZoomLevel;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_17 = ___3_camera;
		NullCheck(L_17);
		float L_18;
		L_18 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_17, NULL);
		V_1 = ((float)((10.0f)/L_18));
		// float arrowWidth = 0.5f / camera.ZoomLevel;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_19 = ___3_camera;
		NullCheck(L_19);
		float L_20;
		L_20 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_19, NULL);
		V_2 = ((float)((0.5f)/L_20));
		// var arrowTails = new Vector2[] {
		//     rotation * new Vector3(1, arrowWidth) * arrowSize,
		//     rotation * new Vector3(1, -arrowWidth) * arrowSize,
		// };
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_22 = L_21;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_0;
		float L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_25), (1.0f), L_24, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_23, L_25, NULL);
		float L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_28, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_29);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_30 = L_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_0;
		float L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_33), (1.0f), ((-L_32)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_31, L_33, NULL);
		float L_35 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_35, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_36, NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_37);
		V_3 = L_30;
		// var p0 = endPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = ___2_endPos;
		V_4 = L_38;
		// var p1 = endPos + arrowTails[0];
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___2_endPos;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_40 = V_3;
		NullCheck(L_40);
		int32_t L_41 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_39, L_42, NULL);
		V_5 = L_43;
		// var p2 = endPos + arrowTails[1];
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = ___2_endPos;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_44, L_47, NULL);
		V_6 = L_48;
		// renderer.DrawAAConvexPolygon(lineColor, p0, p1, p2, p0);
		RuntimeObject* L_49 = ___0_renderer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50 = ___4_lineColor;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52 = L_51;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_53, NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_54);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_55 = L_52;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_56, NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_57);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_58 = L_55;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_59, NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_60);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_61 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_62, NULL);
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_63);
		NullCheck(L_49);
		InterfaceActionInvoker2< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* >::Invoke(26 /* System.Void DungeonArchitect.UI.UIRenderer::DrawAAConvexPolygon(UnityEngine.Color,UnityEngine.Vector3[]) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_49, L_50, L_61);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.StraightLineGraphLinkRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StraightLineGraphLinkRenderer__ctor_mB1A231DEE8E3C3CE23E680D35830078759457CAB (StraightLineGraphLinkRenderer_t62BA277D157DC991DDCF70B67ABD052B9C1799FE* __this, const RuntimeMethod* method) 
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
// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::getBackgroundColor(DungeonArchitect.Graphs.GraphNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GraphNodeRenderer_getBackgroundColor_m02DDC9C03A9CA3C7755E58C4676A789D74E820FD (GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* __this, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return node.Selected ? GraphEditorConstants.NODE_COLOR_SELECTED : GraphEditorConstants.NODE_COLOR;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___0_node;
		NullCheck(L_0);
		bool L_1;
		L_1 = GraphNode_get_Selected_m9C828A505E1BA3E0263CC51DB59D3E64179D467F_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___NODE_COLOR_3;
		return L_2;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___NODE_COLOR_SELECTED_4;
		return L_3;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::Draw(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,DungeonArchitect.Graphs.GraphNode,DungeonArchitect.Graphs.GraphCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRenderer_Draw_mFC2EC08985A1A471E34A32D066057FB7CF6B1CD9 (GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* __this, RuntimeObject* ___0_renderer, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___1_rendererContext, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___2_node, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* V_0 = NULL;
	int32_t V_1 = 0;
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* V_2 = NULL;
	GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* V_3 = NULL;
	{
		// if (node.InputPins != null)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_0 = ___2_node;
		NullCheck(L_0);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_1;
		L_1 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(L_0, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// foreach (var pin in node.InputPins)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2 = ___2_node;
		NullCheck(L_2);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_3;
		L_3 = GraphNode_get_InputPins_m9CA0D8ABDA0A6C3EC2AC349317EC3CD61911D0E4(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		// foreach (var pin in node.InputPins)
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// GraphPinRenderer.Draw(renderer, rendererContext, pin, camera);
		RuntimeObject* L_8 = ___0_renderer;
		GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* L_9 = ___1_rendererContext;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_10 = V_2;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_11 = ___3_camera;
		GraphPinRenderer_Draw_m2D46A957AD0C4C90464D67F029679523F7DD83F0(L_8, L_9, L_10, L_11, NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0025:
	{
		// foreach (var pin in node.InputPins)
		int32_t L_13 = V_1;
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_002b:
	{
		// if (node.OutputPin != null)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_15 = ___2_node;
		NullCheck(L_15);
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_16;
		L_16 = GraphNode_get_OutputPin_m750698867CC9A96A75B59739E743B46F93DF9F47(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		// foreach (var pin in node.OutputPins)
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_18 = ___2_node;
		NullCheck(L_18);
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_19;
		L_19 = GraphNode_get_OutputPins_m9BEE5FCABF2B5B19A59BF83396BDD50D26DA77D8(L_18, NULL);
		V_0 = L_19;
		V_1 = 0;
		goto IL_0056;
	}

IL_0044:
	{
		// foreach (var pin in node.OutputPins)
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = L_23;
		// GraphPinRenderer.Draw(renderer, rendererContext, pin, camera);
		RuntimeObject* L_24 = ___0_renderer;
		GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* L_25 = ___1_rendererContext;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_26 = V_3;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_27 = ___3_camera;
		GraphPinRenderer_Draw_m2D46A957AD0C4C90464D67F029679523F7DD83F0(L_24, L_25, L_26, L_27, NULL);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0056:
	{
		// foreach (var pin in node.OutputPins)
		int32_t L_29 = V_1;
		GraphPinU5BU5D_t6AFC5B1D68C31C837269E97612B2DA90DDF11036* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRenderer_Release_mBEC46A6B1F76D51899C388D44D1EB8A80385E728 (GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void Release() { }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::DrawTextCentered(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,DungeonArchitect.Graphs.GraphNode,DungeonArchitect.Graphs.GraphCamera,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRenderer_DrawTextCentered_m8D34B126CFAFAFCBC58752F33711163B4D44064B (GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* __this, RuntimeObject* ___0_renderer, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___1_rendererContext, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___2_node, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, String_t* ___4_text, const RuntimeMethod* method) 
{
	{
		// DrawTextCentered (renderer, rendererContext, node, camera, text, Vector2.zero);
		RuntimeObject* L_0 = ___0_renderer;
		GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* L_1 = ___1_rendererContext;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_2 = ___2_node;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_3 = ___3_camera;
		String_t* L_4 = ___4_text;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		VirtualActionInvoker6< RuntimeObject*, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918*, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA*, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727*, String_t*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::DrawTextCentered(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,DungeonArchitect.Graphs.GraphNode,DungeonArchitect.Graphs.GraphCamera,System.String,UnityEngine.Vector2) */, __this, L_0, L_1, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::DrawTextCentered(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,DungeonArchitect.Graphs.GraphNode,DungeonArchitect.Graphs.GraphCamera,System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRenderer_DrawTextCentered_m751954F32339CEE297379AF6430E421AC12B6A34 (GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* __this, RuntimeObject* ___0_renderer, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___1_rendererContext, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___2_node, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, String_t* ___4_text, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___5_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIStyleManager_t78405D171B48A713492B64795B96CD6CF365F88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B2_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B3_1 = NULL;
	{
		// var style = new GUIStyle(GUI.skin.GetStyle("Label"));
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0;
		L_0 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		NullCheck(L_0);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUISkin_GetStyle_mF024BC5177A2AD477ACF44D87BE6A629C91562CA(L_0, _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_2, L_1, NULL);
		V_0 = L_2;
		// style.alignment = TextAnchor.MiddleCenter;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = V_0;
		NullCheck(L_3);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_3, 4, NULL);
		// var positionScreen = camera.WorldToScreen(node.Position + offset);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_4 = ___3_camera;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_5 = ___2_node;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = GraphNode_get_Position_m92FB18D50D76223CB53A63C884AB11C0A4329AB7(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___5_offset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_6, L_7, NULL);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2(L_4, L_8, NULL);
		V_1 = L_9;
		// var labelSize = new Vector2 (node.Bounds.width, node.Bounds.height) / camera.ZoomLevel;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_10 = ___2_node;
		NullCheck(L_10);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline(L_10, NULL);
		V_7 = L_11;
		float L_12;
		L_12 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_7), NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_13 = ___2_node;
		NullCheck(L_13);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		L_14 = GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline(L_13, NULL);
		V_7 = L_14;
		float L_15;
		L_15 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_7), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), L_12, L_15, /*hidden argument*/NULL);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_17 = ___3_camera;
		NullCheck(L_17);
		float L_18;
		L_18 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_16, L_18, NULL);
		V_2 = L_19;
		// var labelBounds = new Rect(positionScreen.x, positionScreen.y, labelSize.x, labelSize.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
		float L_23 = L_22.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_2;
		float L_25 = L_24.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_2;
		float L_27 = L_26.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), L_21, L_23, L_25, L_27, NULL);
		// style.normal.textColor = node.Selected ? GraphEditorConstants.TEXT_COLOR_SELECTED : GraphEditorConstants.TEXT_COLOR;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_28 = V_0;
		NullCheck(L_28);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_29;
		L_29 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_28, NULL);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_30 = ___2_node;
		NullCheck(L_30);
		bool L_31;
		L_31 = GraphNode_get_Selected_m9C828A505E1BA3E0263CC51DB59D3E64179D467F_inline(L_30, NULL);
		G_B1_0 = L_29;
		if (L_31)
		{
			G_B2_0 = L_29;
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = ((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___TEXT_COLOR_5;
		G_B3_0 = L_32;
		G_B3_1 = G_B1_0;
		goto IL_009a;
	}

IL_0095:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = ((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___TEXT_COLOR_SELECTED_6;
		G_B3_0 = L_33;
		G_B3_1 = G_B2_0;
	}

IL_009a:
	{
		NullCheck(G_B3_1);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(G_B3_1, G_B3_0, NULL);
		// var originalFont = style.font;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_34 = V_0;
		NullCheck(L_34);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_35;
		L_35 = GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117(L_34, NULL);
		V_4 = L_35;
		// var originalFontSize = style.fontSize;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = GUIStyle_get_fontSize_mBD6EEA6C9C09825DACE0395B1EC8D773FE94F8CF(L_36, NULL);
		V_5 = L_37;
		// var miniFontBaseSize = 20;
		V_6 = ((int32_t)20);
		// if (camera.ZoomLevel >= 2) {
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_38 = ___3_camera;
		NullCheck(L_38);
		float L_39;
		L_39 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_38, NULL);
		if ((!(((float)L_39) >= ((float)(2.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		// float scaledFontSize = originalFontSize;
		int32_t L_40 = V_5;
		V_8 = ((float)L_40);
		// if (scaledFontSize == 0) {
		float L_41 = V_8;
		if ((!(((float)L_41) == ((float)(0.0f)))))
		{
			goto IL_00d4;
		}
	}
	{
		// scaledFontSize = miniFontBaseSize;
		int32_t L_42 = V_6;
		V_8 = ((float)L_42);
	}

IL_00d4:
	{
		// scaledFontSize = Mathf.Max(1.0f, scaledFontSize / camera.ZoomLevel);
		float L_43 = V_8;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_44 = ___3_camera;
		NullCheck(L_44);
		float L_45;
		L_45 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_44, NULL);
		float L_46;
		L_46 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((1.0f), ((float)(L_43/L_45)), NULL);
		V_8 = L_46;
		// style.fontSize = Mathf.RoundToInt(scaledFontSize);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_47 = V_0;
		float L_48 = V_8;
		int32_t L_49;
		L_49 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_48, NULL);
		NullCheck(L_47);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_47, L_49, NULL);
		// style.font = renderer.StyleManager.GetFontMini();
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_50 = V_0;
		RuntimeObject* L_51 = ___0_renderer;
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(34 /* DungeonArchitect.UI.UIStyleManager DungeonArchitect.UI.UIRenderer::get_StyleManager() */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_51);
		NullCheck(L_52);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_53;
		L_53 = InterfaceFuncInvoker0< Font_tC95270EA3198038970422D78B74A7F2E218A96B6* >::Invoke(7 /* UnityEngine.Font DungeonArchitect.UI.UIStyleManager::GetFontMini() */, UIStyleManager_t78405D171B48A713492B64795B96CD6CF365F88C_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_50);
		GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33(L_50, L_53, NULL);
	}

IL_0108:
	{
		// renderer.Label(labelBounds, text, style);
		RuntimeObject* L_54 = ___0_renderer;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_55 = V_3;
		String_t* L_56 = ___4_text;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_57 = V_0;
		NullCheck(L_54);
		InterfaceActionInvoker3< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, String_t*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* >::Invoke(8 /* System.Void DungeonArchitect.UI.UIRenderer::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_54, L_55, L_56, L_57);
		// style.font = originalFont;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_58 = V_0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_59 = V_4;
		NullCheck(L_58);
		GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33(L_58, L_59, NULL);
		// style.fontSize = originalFontSize;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_60, L_61, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::DrawNodeTexture(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,DungeonArchitect.Graphs.GraphNode,DungeonArchitect.Graphs.GraphCamera,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRenderer_DrawNodeTexture_m63C074BA8F1AB6EA7F5D24F29B5951CCF8E121D0 (GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* __this, RuntimeObject* ___0_renderer, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___1_rendererContext, GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* ___2_node, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, String_t* ___4_textureName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderer_GetResource_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m8B834BD0CCA9686D5261AF1179C792A2C8AE2AB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var nodeTexture = renderer.GetResource<Texture2D>(textureName) as Texture2D;
		RuntimeObject* L_0 = ___0_renderer;
		String_t* L_1 = ___4_textureName;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(UIRenderer_GetResource_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m8B834BD0CCA9686D5261AF1179C792A2C8AE2AB6_RuntimeMethod_var, L_0, L_1);
		V_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_2, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		// var textureSize = new Vector2 (nodeTexture.width, nodeTexture.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)L_4), ((float)L_6), NULL);
		// if (nodeTexture != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0089;
		}
	}
	{
		// var center = camera.WorldToScreen(node.Bounds.center);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_9 = ___3_camera;
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_10 = ___2_node;
		NullCheck(L_10);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = GraphNode_get_Bounds_mB104B1E50EEEF5534C504B99F64A6D9BA54421BE_inline(L_10, NULL);
		V_5 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&V_5), NULL);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2(L_9, L_12, NULL);
		// var size = textureSize / camera.ZoomLevel;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_15 = ___3_camera;
		NullCheck(L_15);
		float L_16;
		L_16 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_14, L_16, NULL);
		V_2 = L_17;
		// var position = center - size / 2.0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_18, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_19, NULL);
		V_3 = L_20;
		// var rect = new Rect(position.x, position.y, size.x, size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_3;
		float L_22 = L_21.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_3;
		float L_24 = L_23.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_2;
		float L_26 = L_25.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_2;
		float L_28 = L_27.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_4), L_22, L_24, L_26, L_28, NULL);
		// renderer.DrawTexture(rect, nodeTexture);
		RuntimeObject* L_29 = ___0_renderer;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_30 = V_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = V_0;
		NullCheck(L_29);
		InterfaceActionInvoker2< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(11 /* System.Void DungeonArchitect.UI.UIRenderer::DrawTexture(UnityEngine.Rect,UnityEngine.Texture) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_29, L_30, L_31);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRenderer__ctor_m21331EF0957DF4F9FB7F58B0657A99E965EEC3EF (GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory::RegisterNodeRenderer(System.Type,DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRendererFactory_RegisterNodeRenderer_m6FD73754A54E8A2A553154CFCC3130A9D7EF4C76 (GraphNodeRendererFactory_t884091433C07C2FF4D98963DDA4A38C1FF609F63* __this, Type_t* ___0_nodeType, GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* ___1_renderer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m79B3F00FE57C74CAA3480B04ED493931C9FED9BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m16E3664F17F02119A5EDAEC5610A93932C961296_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!renderers.ContainsKey(nodeType))
		Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* L_0 = __this->___renderers_1;
		Type_t* L_1 = ___0_nodeType;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m16E3664F17F02119A5EDAEC5610A93932C961296(L_0, L_1, Dictionary_2_ContainsKey_m16E3664F17F02119A5EDAEC5610A93932C961296_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// renderers.Add(nodeType, renderer);
		Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* L_3 = __this->___renderers_1;
		Type_t* L_4 = ___0_nodeType;
		GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* L_5 = ___1_renderer;
		NullCheck(L_3);
		Dictionary_2_Add_m79B3F00FE57C74CAA3480B04ED493931C9FED9BA(L_3, L_4, L_5, Dictionary_2_Add_m79B3F00FE57C74CAA3480B04ED493931C9FED9BA_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory::GetRenderer(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* GraphNodeRendererFactory_GetRenderer_m20D599F95C6A5A7944A73FF10A273FE522F015C3 (GraphNodeRendererFactory_t884091433C07C2FF4D98963DDA4A38C1FF609F63* __this, Type_t* ___0_nodeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m16E3664F17F02119A5EDAEC5610A93932C961296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB5277785E02A4DC0E6E70FFC4537BEA6FEA7CA51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (renderers.ContainsKey(nodeType))
		Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* L_0 = __this->___renderers_1;
		Type_t* L_1 = ___0_nodeType;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m16E3664F17F02119A5EDAEC5610A93932C961296(L_0, L_1, Dictionary_2_ContainsKey_m16E3664F17F02119A5EDAEC5610A93932C961296_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return renderers[nodeType];
		Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* L_3 = __this->___renderers_1;
		Type_t* L_4 = ___0_nodeType;
		NullCheck(L_3);
		GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* L_5;
		L_5 = Dictionary_2_get_Item_mB5277785E02A4DC0E6E70FFC4537BEA6FEA7CA51(L_3, L_4, Dictionary_2_get_Item_mB5277785E02A4DC0E6E70FFC4537BEA6FEA7CA51_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return defaultRenderer;
		GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* L_6 = __this->___defaultRenderer_0;
		return L_6;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRendererFactory_Release_m2E0A96E56BC9250AD64A22EDDE630C14C914F0F2 (GraphNodeRendererFactory_t884091433C07C2FF4D98963DDA4A38C1FF609F63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m161A98950816B2A3B4666E3D551D9050EFBE4D44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mF4DB098A1663C5DF8EF2F3756C157694436963C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEEFE62C7C50E0048B0655706256C7D8C6C8366D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6AA9B5E44668635577011634AA58A35308C2EE48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAC28286E9B8D6F0CB1C4CC01CE90FB9F38BFF622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m71201FF2909AA4C89A2116291CC410E64846ECDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var renderer in renderers.Values)
		Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* L_0 = __this->___renderers_1;
		NullCheck(L_0);
		ValueCollection_t1D6B10722AACE5BD6CB6B251745A06D2BF78F7C7* L_1;
		L_1 = Dictionary_2_get_Values_mF4DB098A1663C5DF8EF2F3756C157694436963C7(L_0, Dictionary_2_get_Values_mF4DB098A1663C5DF8EF2F3756C157694436963C7_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t59202557FC30057208B776B255FD7AC272ADBA27 L_2;
		L_2 = ValueCollection_GetEnumerator_m71201FF2909AA4C89A2116291CC410E64846ECDB(L_1, ValueCollection_GetEnumerator_m71201FF2909AA4C89A2116291CC410E64846ECDB_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEEFE62C7C50E0048B0655706256C7D8C6C8366D0((&V_0), Enumerator_Dispose_mEEFE62C7C50E0048B0655706256C7D8C6C8366D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_0013_1:
			{
				// foreach (var renderer in renderers.Values)
				GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* L_3;
				L_3 = Enumerator_get_Current_mAC28286E9B8D6F0CB1C4CC01CE90FB9F38BFF622_inline((&V_0), Enumerator_get_Current_mAC28286E9B8D6F0CB1C4CC01CE90FB9F38BFF622_RuntimeMethod_var);
				// renderer.Release();
				NullCheck(L_3);
				VirtualActionInvoker0::Invoke(6 /* System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRenderer::Release() */, L_3);
			}

IL_001f_1:
			{
				// foreach (var renderer in renderers.Values)
				bool L_4;
				L_4 = Enumerator_MoveNext_m6AA9B5E44668635577011634AA58A35308C2EE48((&V_0), Enumerator_MoveNext_m6AA9B5E44668635577011634AA58A35308C2EE48_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// renderers.Clear();
		Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* L_5 = __this->___renderers_1;
		NullCheck(L_5);
		Dictionary_2_Clear_m161A98950816B2A3B4666E3D551D9050EFBE4D44(L_5, Dictionary_2_Clear_m161A98950816B2A3B4666E3D551D9050EFBE4D44_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphNodeRendererFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNodeRendererFactory__ctor_m73312CA05EAE2D5D283B31270538132E697F4012 (GraphNodeRendererFactory_t884091433C07C2FF4D98963DDA4A38C1FF609F63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3F28DD7F1E7874D7D3798FC60594E47DD8540F6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GraphNodeRenderer defaultRenderer = new GraphNodeRenderer();
		GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B* L_0 = (GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B*)il2cpp_codegen_object_new(GraphNodeRenderer_t995F63ADB1224E88761F75E44444875D4126A35B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GraphNodeRenderer__ctor_m21331EF0957DF4F9FB7F58B0657A99E965EEC3EF(L_0, NULL);
		__this->___defaultRenderer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultRenderer_0), (void*)L_0);
		// Dictionary<Type, GraphNodeRenderer> renderers = new Dictionary<Type, GraphNodeRenderer>();
		Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70* L_1 = (Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70*)il2cpp_codegen_object_new(Dictionary_2_t17E2498AA9CF06592C6158C2E004AB9B1C4B3B70_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m3F28DD7F1E7874D7D3798FC60594E47DD8540F6C(L_1, Dictionary_2__ctor_m3F28DD7F1E7874D7D3798FC60594E47DD8540F6C_RuntimeMethod_var);
		__this->___renderers_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderers_1), (void*)L_1);
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphPinRenderer::Draw(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,DungeonArchitect.Graphs.GraphPin,DungeonArchitect.Graphs.GraphCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPinRenderer_Draw_m2D46A957AD0C4C90464D67F029679523F7DD83F0 (RuntimeObject* ___0_renderer, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___1_rendererContext, GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___2_pin, GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* ___3_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderer_GetResource_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m8B834BD0CCA9686D5261AF1179C792A2C8AE2AB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	{
		// var pinBounds = new Rect(pin.GetBounds());
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___2_pin;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = GraphPin_GetBounds_m6DD3E1052A99B53E7E91856A9FCE0D6D0ADB94E5(L_0, NULL);
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&V_0), L_1, NULL);
		// var positionWorld = pin.Node.Position + pinBounds.position;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_2 = ___2_pin;
		NullCheck(L_2);
		GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* L_3;
		L_3 = GraphPin_get_Node_m220F8B0AD49C4795CD804DB7F23C6E0F7752C1F7_inline(L_2, NULL);
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = GraphNode_get_Position_m92FB18D50D76223CB53A63C884AB11C0A4329AB7(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_5, NULL);
		V_1 = L_6;
		// var positionScreen = camera.WorldToScreen(positionWorld);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_7 = ___3_camera;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_1;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = GraphCamera_WorldToScreen_mE462005445CCB1CB520C38FEF589C1B4B2D4D3C2(L_7, L_8, NULL);
		V_2 = L_9;
		// pinBounds.position = positionScreen;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_2;
		Rect_set_position_m9CD8AA25A83A7A893429C0ED56C36641202C3F05((&V_0), L_10, NULL);
		// pinBounds.size /= camera.ZoomLevel;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = (&V_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267(L_11, NULL);
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_13 = ___3_camera;
		NullCheck(L_13);
		float L_14;
		L_14 = GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_12, L_14, NULL);
		Rect_set_size_m346E4F7077E5A1C0F4E21966232CD726CB9E6BAA(L_11, L_15, NULL);
		// var guiState = new GUIState(renderer);
		RuntimeObject* L_16 = ___0_renderer;
		GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD* L_17 = (GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD*)il2cpp_codegen_object_new(GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		GUIState__ctor_m65BCEC9D3D6071C332DCAB9EB4733611173E359C(L_17, L_16, NULL);
		// renderer.DrawRect(pinBounds, GetPinColor(pin));
		RuntimeObject* L_18 = ___0_renderer;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19 = V_0;
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_20 = ___2_pin;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = GraphPinRenderer_GetPinColor_m9CDCF64C69781DF68581EFBBAC140A17A68094B7(L_20, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker2< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(27 /* System.Void DungeonArchitect.UI.UIRenderer::DrawRect(UnityEngine.Rect,UnityEngine.Color) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_18, L_19, L_21);
		// guiState.Restore();
		NullCheck(L_17);
		GUIState_Restore_mA030298AAC38698BDE205F0D87815E53517E5EDD(L_17, NULL);
		// var pinTexture = renderer.GetResource<Texture2D>(UIResourceLookup.TEXTURE_PIN_GLOW) as Texture2D;
		RuntimeObject* L_22 = ___0_renderer;
		il2cpp_codegen_runtime_class_init_inline(UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_il2cpp_TypeInfo_var);
		String_t* L_23 = ((UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_StaticFields*)il2cpp_codegen_static_fields_for(UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_il2cpp_TypeInfo_var))->___TEXTURE_PIN_GLOW_3;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(UIRenderer_GetResource_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m8B834BD0CCA9686D5261AF1179C792A2C8AE2AB6_RuntimeMethod_var, L_22, L_23);
		V_3 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_24, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		// if (pinTexture != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0087;
		}
	}
	{
		// renderer.DrawTexture(pinBounds, pinTexture);
		RuntimeObject* L_27 = ___0_renderer;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_3;
		NullCheck(L_27);
		InterfaceActionInvoker2< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(11 /* System.Void DungeonArchitect.UI.UIRenderer::DrawTexture(UnityEngine.Rect,UnityEngine.Texture) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_27, L_28, L_29);
	}

IL_0087:
	{
		// }
		return;
	}
}
// UnityEngine.Color DungeonArchitect.UI.Widgets.GraphEditors.GraphPinRenderer::GetPinColor(DungeonArchitect.Graphs.GraphPin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GraphPinRenderer_GetPinColor_m9CDCF64C69781DF68581EFBBAC140A17A68094B7 (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* ___0_pin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (pin.ClickState == GraphPinMouseState.Clicked)
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_0 = ___0_pin;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GraphPin_get_ClickState_m8EC450B5DE760F06E1583DC6B906C339EC4A4FB6_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0011;
		}
	}
	{
		// color = GraphEditorConstants.PIN_COLOR_CLICK;
		il2cpp_codegen_runtime_class_init_inline(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___PIN_COLOR_CLICK_2;
		V_0 = L_2;
		goto IL_0027;
	}

IL_0011:
	{
		// else if (pin.ClickState == GraphPinMouseState.Hover)
		GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* L_3 = ___0_pin;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = GraphPin_get_ClickState_m8EC450B5DE760F06E1583DC6B906C339EC4A4FB6_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// color = GraphEditorConstants.PIN_COLOR_HOVER;
		il2cpp_codegen_runtime_class_init_inline(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___PIN_COLOR_HOVER_1;
		V_0 = L_5;
		goto IL_0027;
	}

IL_0021:
	{
		// color = GraphEditorConstants.PIN_COLOR;
		il2cpp_codegen_runtime_class_init_inline(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ((GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_StaticFields*)il2cpp_codegen_static_fields_for(GraphEditorConstants_t342123D1D6361FA475B97DE16FD54E206D5A2EC1_il2cpp_TypeInfo_var))->___PIN_COLOR_0;
		V_0 = L_6;
	}

IL_0027:
	{
		// return color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		return L_7;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphPinRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphPinRenderer__ctor_mF5544ABABA6293884D6DD718630571ABF77DE109 (GraphPinRenderer_t84F1D9F9940DA5C10A013D41E131D800313F9CFB* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltip::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphTooltip_Clear_m5B076975AC235ADA328EEDA0561FD435439C0170 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// message = "";
		il2cpp_codegen_runtime_class_init_inline(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var);
		((GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_StaticFields*)il2cpp_codegen_static_fields_for(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var))->___message_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_StaticFields*)il2cpp_codegen_static_fields_for(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var))->___message_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphTooltip__ctor_mCB9F2B4C3FE5A0CCFF881A27A2B9C15826DE75C7 (GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltip::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphTooltip__cctor_mFCA8A5718B3BB9BD43F236B9A2D8B22B3C28DCF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string message = "";
		((GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_StaticFields*)il2cpp_codegen_static_fields_for(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var))->___message_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_StaticFields*)il2cpp_codegen_static_fields_for(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var))->___message_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltipRenderer::Draw(DungeonArchitect.UI.UIRenderer,DungeonArchitect.UI.Widgets.GraphEditors.GraphRendererContext,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphTooltipRenderer_Draw_mF5B374AE27F2B0D263561DFA54EEB6CEE49F2469 (RuntimeObject* ___0_renderer, GraphRendererContext_tF7179F7C8994016BD344A78ADE7AF9C3D46A5918* ___1_rendererContext, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_mousePosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderer_GetResource_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m8B834BD0CCA9686D5261AF1179C792A2C8AE2AB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_6 = NULL;
	{
		// if (GraphTooltip.message == null || GraphTooltip.message.Trim().Length == 0) return;
		il2cpp_codegen_runtime_class_init_inline(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_StaticFields*)il2cpp_codegen_static_fields_for(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var))->___message_0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var);
		String_t* L_1 = ((GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_StaticFields*)il2cpp_codegen_static_fields_for(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var))->___message_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		// if (GraphTooltip.message == null || GraphTooltip.message.Trim().Length == 0) return;
		return;
	}

IL_0019:
	{
		// var tooltipPadding = new Vector2(4, 4);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (4.0f), (4.0f), NULL);
		// var drawPosition = mousePosition + new Vector2(15, 5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___2_mousePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (15.0f), (5.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_5, NULL);
		V_1 = L_6;
		// var tooltipString = GraphTooltip.message;
		il2cpp_codegen_runtime_class_init_inline(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var);
		String_t* L_7 = ((GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_StaticFields*)il2cpp_codegen_static_fields_for(GraphTooltip_t807F0413994FEF19FE3E8EEB56FC41A99D61F77F_il2cpp_TypeInfo_var))->___message_0;
		V_2 = L_7;
		// var style = new GUIStyle(GUI.skin.GetStyle("label"));
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_8;
		L_8 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		NullCheck(L_8);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9;
		L_9 = GUISkin_GetStyle_mF024BC5177A2AD477ACF44D87BE6A629C91562CA(L_8, _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_10, L_9, NULL);
		V_3 = L_10;
		// var contentSize = style.CalcSize(new GUIContent(tooltipString));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11 = V_3;
		String_t* L_12 = V_2;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_13 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_13, L_12, NULL);
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_11, L_13, NULL);
		V_4 = L_14;
		// drawPosition -= tooltipPadding;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_15, L_16, NULL);
		V_1 = L_17;
		// contentSize += tooltipPadding * 2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_19, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_18, L_20, NULL);
		V_4 = L_21;
		// var bounds = new Rect(drawPosition.x, drawPosition.y, contentSize.x, contentSize.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
		float L_23 = L_22.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		float L_25 = L_24.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_4;
		float L_27 = L_26.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_4;
		float L_29 = L_28.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_5), L_23, L_25, L_27, L_29, NULL);
		// var guiState = new GUIState(renderer);
		RuntimeObject* L_30 = ___0_renderer;
		GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD* L_31 = (GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD*)il2cpp_codegen_object_new(GUIState_t066763E8E5A70195B827D6EB986E9C6A7D8CD1CD_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		GUIState__ctor_m65BCEC9D3D6071C332DCAB9EB4733611173E359C(L_31, L_30, NULL);
		// renderer.backgroundColor = new Color(.15f, .15f, .15f);
		RuntimeObject* L_32 = ___0_renderer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_33), (0.150000006f), (0.150000006f), (0.150000006f), /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(33 /* System.Void DungeonArchitect.UI.UIRenderer::set_backgroundColor(UnityEngine.Color) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_32, L_33);
		// renderer.DrawRect(bounds, new Color(.15f, .15f, .15f));
		RuntimeObject* L_34 = ___0_renderer;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_36), (0.150000006f), (0.150000006f), (0.150000006f), /*hidden argument*/NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(27 /* System.Void DungeonArchitect.UI.UIRenderer::DrawRect(UnityEngine.Rect,UnityEngine.Color) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_34, L_35, L_36);
		// var innerGlow = renderer.GetResource<Texture2D>(UIResourceLookup.TEXTURE_PIN_GLOW) as Texture2D;
		RuntimeObject* L_37 = ___0_renderer;
		il2cpp_codegen_runtime_class_init_inline(UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_il2cpp_TypeInfo_var);
		String_t* L_38 = ((UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_StaticFields*)il2cpp_codegen_static_fields_for(UIResourceLookup_tF511D05C2503927FD6023B7D330BE8F35F476C92_il2cpp_TypeInfo_var))->___TEXTURE_PIN_GLOW_3;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(UIRenderer_GetResource_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m8B834BD0CCA9686D5261AF1179C792A2C8AE2AB6_RuntimeMethod_var, L_37, L_38);
		V_6 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_39, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		// renderer.DrawTexture(bounds, innerGlow);
		RuntimeObject* L_40 = ___0_renderer;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_41 = V_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = V_6;
		NullCheck(L_40);
		InterfaceActionInvoker2< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(11 /* System.Void DungeonArchitect.UI.UIRenderer::DrawTexture(UnityEngine.Rect,UnityEngine.Texture) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_40, L_41, L_42);
		// style.alignment = TextAnchor.MiddleCenter;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_43 = V_3;
		NullCheck(L_43);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_43, 4, NULL);
		// style.normal.textColor = Color.white;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_44 = V_3;
		NullCheck(L_44);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_45;
		L_45 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_44, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		L_46 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_45);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_45, L_46, NULL);
		// renderer.Label(bounds, tooltipString, style);
		RuntimeObject* L_47 = ___0_renderer;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_48 = V_5;
		String_t* L_49 = V_2;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_50 = V_3;
		NullCheck(L_47);
		InterfaceActionInvoker3< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, String_t*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* >::Invoke(8 /* System.Void DungeonArchitect.UI.UIRenderer::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle) */, UIRenderer_t3993295B27CAFD63709626A019B6453158DBF7C4_il2cpp_TypeInfo_var, L_47, L_48, L_49, L_50);
		// guiState.Restore();
		NullCheck(L_31);
		GUIState_Restore_mA030298AAC38698BDE205F0D87815E53517E5EDD(L_31, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.UI.Widgets.GraphEditors.GraphTooltipRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphTooltipRenderer__ctor_mB82AF4AD3DB78094A9C9B38EB25641015988FCBF (GraphTooltipRenderer_t55783F5C43269851C736DFFEBA70AE9EE1B82E1C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GraphNode_get_ZIndex_m6400207320C7EDC8B747C79C7CDA2022F0A277B6_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return zIndex;
		int32_t L_0 = __this->___zIndex_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphNodeEventArgs_set_uiSystem_m2CC159E33D0D7598C466CBBA866B2B66E68824C5_inline (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* ___0_value, const RuntimeMethod* method) 
{
	{
		// public UISystem uiSystem { get; private set; }
		UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* L_0 = ___0_value;
		__this->___U3CuiSystemU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuiSystemU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphNodeEventArgs_set_Nodes_m99FAAE21989F004972172171411D0038640ED1CC_inline (GraphNodeEventArgs_tA5EE2C1424941450F83CF72FCBABC02CAFFF5444* __this, GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GraphNode[] Nodes { get; private set; }
		GraphNodeU5BU5D_t53E83F651F5A1B2AC1D1C6CFA3BDD7F6390DAA70* L_0 = ___0_value;
		__this->___U3CNodesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNodesU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* Graph_get_Nodes_m5FB898EF1BA40AB87BAEB27C8CFD7D589BF203B8_inline (Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* __this, const RuntimeMethod* method) 
{
	{
		// return nodes;
		List_1_tB2AB4D5F3C1DDE9F5A4EC9857A963F9D7C473E2A* L_0 = __this->___nodes_6;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* GraphLink_get_Graph_m7D055380A86AFE933842BC24CEFC526D122B637F_inline (GraphLink_t167090219997E1F874E24A93015AD8333374E463* __this, const RuntimeMethod* method) 
{
	{
		// return graph;
		Graph_tF66F23A8F94F57355588EADE4AF08419FE9D9520* L_0 = __this->___graph_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GraphNode_get_Dragging_m078B8A3D3D6D4C8776EB5482E1206694F1E78897_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return dragging; }
		bool L_0 = __this->___dragging_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* GraphEditor_get_Camera_m9EC313AB617544FA067DC63CFDCB4FB88D405449_inline (GraphEditor_t2270AC7F91E8AF685C5EACB018185952E8DAED1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return camera; }
		GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* L_0 = __this->___camera_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphNode_set_Dragging_mC95390CD9A00B4F0BB31893630D72CAEF23B6FC3_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { dragging = value; }
		bool L_0 = ___0_value;
		__this->___dragging_15 = L_0;
		// set { dragging = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GraphNode_get_Selected_m9C828A505E1BA3E0263CC51DB59D3E64179D467F_inline (GraphNode_tE0060C99ED7CF4D7420573F4A85C20DF5683BDDA* __this, const RuntimeMethod* method) 
{
	{
		// return selected;
		bool L_0 = __this->___selected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphPin_set_ClickState_m394EE7F3CAC7411BD28C08271BA7DDDDA22AD22E_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// clickState = value;
		int32_t L_0 = ___0_value;
		__this->___clickState_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GraphPin_set_RequestLinkDeletionInitiated_mD46D0FE6F33E5E288CF5D0AC4A1B7E0D175ACE44_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { requestLinkDeletionInitiated = value; }
		bool L_0 = ___0_value;
		__this->___requestLinkDeletionInitiated_12 = L_0;
		// set { requestLinkDeletionInitiated = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GraphPin_get_RequestLinkDeletionInitiated_m2A62A9311E8491DE48A4B4DEEAAE8A411423CCF9_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// get { return requestLinkDeletionInitiated; }
		bool L_0 = __this->___requestLinkDeletionInitiated_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UISystem_get_Undo_m94083067C2D42473B0FAB6812CE04FC201D94F39_inline (UISystem_t4A976A44D7DAD4648652CF8366052BB0B1E7D4D0* __this, const RuntimeMethod* method) 
{
	{
		// public UIUndoSystem Undo { get; private set; }
		RuntimeObject* L_0 = __this->___U3CUndoU3Ek__BackingField_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GraphPin_get_ClickState_m8EC450B5DE760F06E1583DC6B906C339EC4A4FB6_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return clickState;
		int32_t L_0 = __this->___clickState_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GraphCamera_get_ZoomLevel_mE89517124FB17A7AC02F8CAE8092BE6088850266_inline (GraphCamera_t34CFCD6B62A38E16688CBB3B30CE8EF0F51BB727* __this, const RuntimeMethod* method) 
{
	{
		// return zoomLevel;
		float L_0 = __this->___zoomLevel_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GraphPin_get_Tangent_mCB2E9C1CCDC0ED5BD288E51024C691404990D6AB_inline (GraphPin_t0018DBEBFC6243EF276E9F4374E271930ED4BC00* __this, const RuntimeMethod* method) 
{
	{
		// return tangent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___tangent_10;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
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
