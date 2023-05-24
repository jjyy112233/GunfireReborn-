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

// System.Collections.Generic.IEnumerable`1<SharpNav.Geometry.Triangle3>
struct IEnumerable_1_tA8A937F9C165E75401EA151B1E931B7CF40C4B93;
// System.Collections.Generic.List`1<DungeonArchitect.Graphs.Graph>
struct List_1_t3CA4075AAE5B1E25B0348B3D467FB34DFA67B33A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>
struct List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2;
// System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>
struct List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// SharpNav.Collections.Generic.PriorityQueue`1<SharpNav.Node>
struct PriorityQueue_1_tDAFF5A46B51D194C5600ACC2992AEE432ED1862D;
// SharpNav.Collections.Generic.ProximityGrid`1<SharpNav.Crowds.Agent>
struct ProximityGrid_1_tA79768177EB190DAFCF485F7F6AE51CA0F3B800B;
// SharpNav.Crowds.Agent[]
struct AgentU5BU5D_tDFADF74B95766C6A6189C2784C828B9B77D10125;
// SharpNav.Crowds.AgentAnimation[]
struct AgentAnimationU5BU5D_t1F05E97385C06B5BC9AE7BD2FE1DA7D34D07A918;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
// SharpNav.Crowds.CrowdNeighbor[]
struct CrowdNeighborU5BU5D_tA1CF6E852FB8459B956D6D7F73AD5E4C1FB01938;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// DungeonArchitect.DungeonSceneProviderData[]
struct DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// SharpNav.Pathfinding.Link[]
struct LinkU5BU5D_t86FA41A34F8BBDD37C0794C43AFD00EAFE6B2DD4;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
// SharpNav.Pathfinding.MeshTile[]
struct MeshTileU5BU5D_t5DE0695A85DF13F4ED8219B80C09763EE060F2BE;
// DungeonArchitect.Navigation.NavigationTriangleProvider[]
struct NavigationTriangleProviderU5BU5D_t3EC4AF908D22892C7DC0D878892E8FC5A992E0E4;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// SharpNav.Pathfinding.OffMeshConnection[]
struct OffMeshConnectionU5BU5D_tE5F7ACBB03135C16E1B87868C8759BE252CF0923;
// SharpNav.Pathfinding.Poly[]
struct PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812;
// SharpNav.PolyVertex[]
struct PolyVertexU5BU5D_t8BFACC5B97130D85ED7AE5C9C8D5255EE1D64397;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// SharpNav.Geometry.Triangle3[]
struct Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C;
// SharpNav.Geometry.Vector3[]
struct Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// SharpNav.Crowds.ObstacleAvoidanceQuery/ObstacleAvoidanceParams[]
struct ObstacleAvoidanceParamsU5BU5D_t8E4A0C7889FE10A9D1D621BE5CDCF18A3A0BCA2F;
// SharpNav.PolyMesh/Polygon[]
struct PolygonU5BU5D_t1C721536FE866F7CB4CE13C0013FF8C8765F784D;
// SharpNav.PolyMeshDetail/MeshData[]
struct MeshDataU5BU5D_t776C120BF04E70F854446FBC527D3541EF573EA1;
// SharpNav.PolyMeshDetail/TriangleData[]
struct TriangleDataU5BU5D_t508054EF230CF0E97F315E0C364722776E658484;
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
// SharpNav.Crowds.Agent
struct Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// SharpNav.Collections.BVTree
struct BVTree_t626E20B2799F0707AB781431B7ED171053FC9966;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// DungeonArchitect.Navigation.Collision2DTriangleProvider
struct Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A;
// DungeonArchitect.Navigation.CollisionTriangleProvider
struct CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// SharpNav.Crowds.Crowd
struct Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DungeonArchitect.Dungeon
struct Dungeon_tAA854F521189538FD299BECE6025726B6C359227;
// DungeonArchitect.DungeonBuilder
struct DungeonBuilder_tD1E33B0EE44EFF472152D3D8233F3804191E65EA;
// DungeonArchitect.DungeonConfig
struct DungeonConfig_tAB374D87D0852393B67D890DA66CD4B0EC2D7FBD;
// DungeonArchitect.DungeonEventListener
struct DungeonEventListener_tDD3B54FF16033C77DFC0C51CAF87B8C85D4C00CF;
// DungeonArchitect.DungeonModel
struct DungeonModel_t53A77B7094F80C6A6C626E2E6B647289FBF29D19;
// DungeonArchitect.Navigation.DungeonNavAgent
struct DungeonNavAgent_tDA71D081471ED0A7C4BB850D91F604AF86E293F9;
// DungeonArchitect.Navigation.DungeonNavAgent2D
struct DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9;
// DungeonArchitect.Navigation.DungeonNavAgent3D
struct DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D;
// DungeonArchitect.Navigation.DungeonNavMesh
struct DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880;
// DungeonArchitect.DungeonSceneObjectSpawner
struct DungeonSceneObjectSpawner_t52E94CC1F6A2B096532E2EF07A5FCA64956BDF2A;
// DungeonArchitect.DungeonSceneProviderData
struct DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// DungeonArchitect.LevelMarkerList
struct LevelMarkerList_t7F6AC91D47A569068C1D028934596FF16F3721A4;
// SharpNav.Crowds.LocalBoundary
struct LocalBoundary_t23A0D233AC1CFC0C58ACF70344E9E3725AF2E429;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// SharpNav.Pathfinding.MeshTile
struct MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// SharpNav.NavMesh
struct NavMesh_t248304A6679E0AE438540BDD4D7EB7AB53C61E06;
// SharpNav.NavMeshBuilder
struct NavMeshBuilder_tC0F51532D82965DCFE69D258AE27A1DBA584C358;
// SharpNav.NavMeshGenerationSettings
struct NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC;
// SharpNav.NavMeshQuery
struct NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9;
// DungeonArchitect.Navigation.NavigationBuildInvoker
struct NavigationBuildInvoker_t15B5AE590B413027DA6959759822C258E1694E5A;
// DungeonArchitect.Navigation.NavigationEvent
struct NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2;
// DungeonArchitect.Navigation.NavigationTriangleProvider
struct NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F;
// SharpNav.Node
struct Node_t76EA16C5443D796CC693D1FE0C68B9FE42759CE9;
// SharpNav.NodePool
struct NodePool_t171D656A620ED6862C2181316D1B9B750E8B8A6D;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// SharpNav.Crowds.ObstacleAvoidanceQuery
struct ObstacleAvoidanceQuery_t3D10CE78E376ED2A1E353C51DCA92C77DB07FECD;
// DungeonArchitect.Navigation.OnNavmeshBuiltDelegate
struct OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA;
// SharpNav.Crowds.PathCorridor
struct PathCorridor_tB97405D7D55BE7C1A1B3CA927C1656E995011760;
// SharpNav.Crowds.PathQueue
struct PathQueue_t087C410E1D853701A9E70247A9CBA1F615DD060D;
// SharpNav.Pathfinding.Poly
struct Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E;
// SharpNav.PolyMesh
struct PolyMesh_t62FDDF5B45037AC3B59ABD0B825EFEFE8D9C4E98;
// SharpNav.PolyMeshDetail
struct PolyMeshDetail_t96CF135F89BE4EA3ED03957279704A1EAD566764;
// DungeonArchitect.PooledDungeonSceneProvider
struct PooledDungeonSceneProvider_t5011D12BA88931054282BDB70EB8075DFA46B17C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// DungeonArchitect.Navigation.StaticMeshTriangleProvider
struct StaticMeshTriangleProvider_t91A74BBAD481A972AB062B4971F03948B35F3D5C;
// System.String
struct String_t;
// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24;
// DungeonArchitect.Navigation.TerrainTriangleProvider
struct TerrainTriangleProvider_tC6AAA38C7EE500BFBE79C3D0C93E80F39D0C3286;
// SharpNav.TiledNavMesh
struct TiledNavMesh_tA94ABC64A0549A8993031644B5CBE3D2D3AC45CF;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SharpNav.Pathfinding.PathfindingCommon/NavMeshInfo
struct NavMeshInfo_t40807AC86387C1235C62D032E442FAC209D87AA4;

IL2CPP_EXTERN_C RuntimeClass* BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4EB0C049FDDDAE3C9190824158B740D4E99E8468____A3763FA4915A8C2462635850EE2293BB4ACC1F04C70EDCE416AAE4B139B0B115_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2F720E250955D4AB300C4601B5A903BBC04DDD0E;
IL2CPP_EXTERN_C String_t* _stringLiteral8A782F4AEB8B2FCBAD85561BE2290CE78B20545C;
IL2CPP_EXTERN_C String_t* _stringLiteralBF7DBB3CBDDF4032802976C1BE3AB567C69D8CDA;
IL2CPP_EXTERN_C String_t* _stringLiteralD9A81571F689ECEF1E439BA07A89AF84C926005F;
IL2CPP_EXTERN_C String_t* _stringLiteralDF9E82BB9C8BE30EAFEEE5D64CEB45BAC3E19DE2;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F782D638B7D8B06D8558B074B7CA9203B3197C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisNavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F_mC6FC0AB5B8F3A62EC1545B18A836DF558CE53644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mCE8DC5951E769723B44EDB44E27A9FD57872E1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m272C6A5A3620E81931888D90AA9E9524D5C55214_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m27EEF3D07EEFA922D8C70C9E696D1140E3742E58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m48FF247C944BAA88B4183D95ABB650FE5E7B8A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3AFC51320B2220B8365431B3C71D901B426B4457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880_m24D81C5B736C20D61A3AFEE0DEF906541D85712C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
struct NavigationTriangleProviderU5BU5D_t3EC4AF908D22892C7DC0D878892E8FC5A992E0E4;
struct PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812;
struct Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C;
struct Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
struct Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7E7A767B14F586CB89336EBE311094400FECF45C 
{
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

// System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>
struct List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>
struct List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// SharpNav.Pathfinding.MeshTile
struct MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705  : public RuntimeObject
{
	// System.Int32 SharpNav.Pathfinding.MeshTile::<Salt>k__BackingField
	int32_t ___U3CSaltU3Ek__BackingField_0;
	// System.Int32 SharpNav.Pathfinding.MeshTile::<LinksFreeList>k__BackingField
	int32_t ___U3CLinksFreeListU3Ek__BackingField_1;
	// SharpNav.Pathfinding.PathfindingCommon/NavMeshInfo SharpNav.Pathfinding.MeshTile::<Header>k__BackingField
	NavMeshInfo_t40807AC86387C1235C62D032E442FAC209D87AA4* ___U3CHeaderU3Ek__BackingField_2;
	// SharpNav.Pathfinding.Poly[] SharpNav.Pathfinding.MeshTile::<Polys>k__BackingField
	PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812* ___U3CPolysU3Ek__BackingField_3;
	// SharpNav.Geometry.Vector3[] SharpNav.Pathfinding.MeshTile::<Verts>k__BackingField
	Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* ___U3CVertsU3Ek__BackingField_4;
	// SharpNav.Pathfinding.Link[] SharpNav.Pathfinding.MeshTile::<Links>k__BackingField
	LinkU5BU5D_t86FA41A34F8BBDD37C0794C43AFD00EAFE6B2DD4* ___U3CLinksU3Ek__BackingField_5;
	// SharpNav.PolyMeshDetail/MeshData[] SharpNav.Pathfinding.MeshTile::<DetailMeshes>k__BackingField
	MeshDataU5BU5D_t776C120BF04E70F854446FBC527D3541EF573EA1* ___U3CDetailMeshesU3Ek__BackingField_6;
	// SharpNav.Geometry.Vector3[] SharpNav.Pathfinding.MeshTile::<DetailVerts>k__BackingField
	Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* ___U3CDetailVertsU3Ek__BackingField_7;
	// SharpNav.PolyMeshDetail/TriangleData[] SharpNav.Pathfinding.MeshTile::<DetailTris>k__BackingField
	TriangleDataU5BU5D_t508054EF230CF0E97F315E0C364722776E658484* ___U3CDetailTrisU3Ek__BackingField_8;
	// SharpNav.Pathfinding.OffMeshConnection[] SharpNav.Pathfinding.MeshTile::<OffMeshConnections>k__BackingField
	OffMeshConnectionU5BU5D_tE5F7ACBB03135C16E1B87868C8759BE252CF0923* ___U3COffMeshConnectionsU3Ek__BackingField_9;
	// SharpNav.Collections.BVTree SharpNav.Pathfinding.MeshTile::<BVTree>k__BackingField
	BVTree_t626E20B2799F0707AB781431B7ED171053FC9966* ___U3CBVTreeU3Ek__BackingField_10;
	// SharpNav.NavMeshBuilder SharpNav.Pathfinding.MeshTile::<Data>k__BackingField
	NavMeshBuilder_tC0F51532D82965DCFE69D258AE27A1DBA584C358* ___U3CDataU3Ek__BackingField_11;
	// SharpNav.Pathfinding.MeshTile SharpNav.Pathfinding.MeshTile::<Next>k__BackingField
	MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* ___U3CNextU3Ek__BackingField_12;
};

// SharpNav.NavMeshGenerationSettings
struct NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC  : public RuntimeObject
{
	// System.Single SharpNav.NavMeshGenerationSettings::<CellSize>k__BackingField
	float ___U3CCellSizeU3Ek__BackingField_0;
	// System.Single SharpNav.NavMeshGenerationSettings::<CellHeight>k__BackingField
	float ___U3CCellHeightU3Ek__BackingField_1;
	// System.Single SharpNav.NavMeshGenerationSettings::<MaxClimb>k__BackingField
	float ___U3CMaxClimbU3Ek__BackingField_2;
	// System.Single SharpNav.NavMeshGenerationSettings::<AgentHeight>k__BackingField
	float ___U3CAgentHeightU3Ek__BackingField_3;
	// System.Single SharpNav.NavMeshGenerationSettings::<AgentRadius>k__BackingField
	float ___U3CAgentRadiusU3Ek__BackingField_4;
	// System.Int32 SharpNav.NavMeshGenerationSettings::<MinRegionSize>k__BackingField
	int32_t ___U3CMinRegionSizeU3Ek__BackingField_5;
	// System.Int32 SharpNav.NavMeshGenerationSettings::<MergedRegionSize>k__BackingField
	int32_t ___U3CMergedRegionSizeU3Ek__BackingField_6;
	// System.Int32 SharpNav.NavMeshGenerationSettings::<MaxEdgeLength>k__BackingField
	int32_t ___U3CMaxEdgeLengthU3Ek__BackingField_7;
	// System.Single SharpNav.NavMeshGenerationSettings::<MaxEdgeError>k__BackingField
	float ___U3CMaxEdgeErrorU3Ek__BackingField_8;
	// SharpNav.ContourBuildFlags SharpNav.NavMeshGenerationSettings::<ContourFlags>k__BackingField
	int32_t ___U3CContourFlagsU3Ek__BackingField_9;
	// System.Int32 SharpNav.NavMeshGenerationSettings::<VertsPerPoly>k__BackingField
	int32_t ___U3CVertsPerPolyU3Ek__BackingField_10;
	// System.Int32 SharpNav.NavMeshGenerationSettings::<SampleDistance>k__BackingField
	int32_t ___U3CSampleDistanceU3Ek__BackingField_11;
	// System.Int32 SharpNav.NavMeshGenerationSettings::<MaxSampleError>k__BackingField
	int32_t ___U3CMaxSampleErrorU3Ek__BackingField_12;
	// System.Boolean SharpNav.NavMeshGenerationSettings::<BuildBoundingVolumeTree>k__BackingField
	bool ___U3CBuildBoundingVolumeTreeU3Ek__BackingField_13;
};

// DungeonArchitect.Navigation.NavigationEvent
struct NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2  : public RuntimeObject
{
	// DungeonArchitect.Navigation.DungeonNavMesh DungeonArchitect.Navigation.NavigationEvent::navMesh
	DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* ___navMesh_0;
};

// SharpNav.PolyMeshDetail
struct PolyMeshDetail_t96CF135F89BE4EA3ED03957279704A1EAD566764  : public RuntimeObject
{
	// SharpNav.PolyMeshDetail/MeshData[] SharpNav.PolyMeshDetail::meshes
	MeshDataU5BU5D_t776C120BF04E70F854446FBC527D3541EF573EA1* ___meshes_1;
	// SharpNav.Geometry.Vector3[] SharpNav.PolyMeshDetail::verts
	Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* ___verts_2;
	// SharpNav.PolyMeshDetail/TriangleData[] SharpNav.PolyMeshDetail::tris
	TriangleDataU5BU5D_t508054EF230CF0E97F315E0C364722776E658484* ___tris_3;
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

// SharpNav.Crowds.AgentParams
struct AgentParams_tAE0948B0349389CC357BAED3E3D3531203E97BF3 
{
	// System.Single SharpNav.Crowds.AgentParams::Radius
	float ___Radius_0;
	// System.Single SharpNav.Crowds.AgentParams::Height
	float ___Height_1;
	// System.Single SharpNav.Crowds.AgentParams::MaxAcceleration
	float ___MaxAcceleration_2;
	// System.Single SharpNav.Crowds.AgentParams::MaxSpeed
	float ___MaxSpeed_3;
	// System.Single SharpNav.Crowds.AgentParams::CollisionQueryRange
	float ___CollisionQueryRange_4;
	// System.Single SharpNav.Crowds.AgentParams::PathOptimizationRange
	float ___PathOptimizationRange_5;
	// System.Single SharpNav.Crowds.AgentParams::SeparationWeight
	float ___SeparationWeight_6;
	// SharpNav.Crowds.UpdateFlags SharpNav.Crowds.AgentParams::UpdateFlags
	int32_t ___UpdateFlags_7;
	// System.Byte SharpNav.Crowds.AgentParams::ObstacleAvoidanceType
	uint8_t ___ObstacleAvoidanceType_8;
	// System.Byte SharpNav.Crowds.AgentParams::QueryFilterType
	uint8_t ___QueryFilterType_9;
};

// SharpNav.Area
#pragma pack(push, tp, 1)
struct Area_t9E8E008D1CF28697728310B3039944F3C2777E47 
{
	// System.Byte SharpNav.Area::Id
	uint8_t ___Id_2;
};
#pragma pack(pop, tp)

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

// SharpNav.Geometry.Vector3
struct Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 
{
	// System.Single SharpNav.Geometry.Vector3::X
	float ___X_0;
	// System.Single SharpNav.Geometry.Vector3::Y
	float ___Y_1;
	// System.Single SharpNav.Geometry.Vector3::Z
	float ___Z_2;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144
struct __StaticArrayInitTypeSizeU3D144_tD904EF692EAABCB9D61EC435C5BE617A0190B0C6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_tD904EF692EAABCB9D61EC435C5BE617A0190B0C6__padding[144];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t4EB0C049FDDDAE3C9190824158B740D4E99E8468  : public RuntimeObject
{
};

// SharpNav.Crowds.Agent
struct Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9  : public RuntimeObject
{
	// System.Boolean SharpNav.Crowds.Agent::active
	bool ___active_2;
	// SharpNav.Crowds.AgentState SharpNav.Crowds.Agent::state
	int32_t ___state_3;
	// System.Boolean SharpNav.Crowds.Agent::partial
	bool ___partial_4;
	// SharpNav.Crowds.PathCorridor SharpNav.Crowds.Agent::corridor
	PathCorridor_tB97405D7D55BE7C1A1B3CA927C1656E995011760* ___corridor_5;
	// SharpNav.Crowds.LocalBoundary SharpNav.Crowds.Agent::boundary
	LocalBoundary_t23A0D233AC1CFC0C58ACF70344E9E3725AF2E429* ___boundary_6;
	// System.Single SharpNav.Crowds.Agent::topologyOptTime
	float ___topologyOptTime_7;
	// SharpNav.Crowds.CrowdNeighbor[] SharpNav.Crowds.Agent::neighbors
	CrowdNeighborU5BU5D_tA1CF6E852FB8459B956D6D7F73AD5E4C1FB01938* ___neighbors_8;
	// System.Int32 SharpNav.Crowds.Agent::numNeis
	int32_t ___numNeis_9;
	// System.Single SharpNav.Crowds.Agent::DesiredSpeed
	float ___DesiredSpeed_10;
	// SharpNav.Geometry.Vector3 SharpNav.Crowds.Agent::currentPos
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___currentPos_11;
	// SharpNav.Geometry.Vector3 SharpNav.Crowds.Agent::Disp
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___Disp_12;
	// SharpNav.Geometry.Vector3 SharpNav.Crowds.Agent::DesiredVel
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___DesiredVel_13;
	// SharpNav.Geometry.Vector3 SharpNav.Crowds.Agent::NVel
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___NVel_14;
	// SharpNav.Geometry.Vector3 SharpNav.Crowds.Agent::Vel
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___Vel_15;
	// SharpNav.Crowds.AgentParams SharpNav.Crowds.Agent::Parameters
	AgentParams_tAE0948B0349389CC357BAED3E3D3531203E97BF3 ___Parameters_16;
	// SharpNav.Geometry.Vector3[] SharpNav.Crowds.Agent::CornerVerts
	Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* ___CornerVerts_17;
	// System.Int32[] SharpNav.Crowds.Agent::CornerFlags
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CornerFlags_18;
	// System.Int32[] SharpNav.Crowds.Agent::CornerPolys
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CornerPolys_19;
	// System.Int32 SharpNav.Crowds.Agent::numCorners
	int32_t ___numCorners_20;
	// SharpNav.Crowds.TargetState SharpNav.Crowds.Agent::targetState
	int32_t ___targetState_21;
	// System.Int32 SharpNav.Crowds.Agent::TargetRef
	int32_t ___TargetRef_22;
	// SharpNav.Geometry.Vector3 SharpNav.Crowds.Agent::targetPos
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___targetPos_23;
	// System.Int32 SharpNav.Crowds.Agent::TargetPathqRef
	int32_t ___TargetPathqRef_24;
	// System.Boolean SharpNav.Crowds.Agent::TargetReplan
	bool ___TargetReplan_25;
	// System.Single SharpNav.Crowds.Agent::TargetReplanTime
	float ___TargetReplanTime_26;
	// System.Int32 SharpNav.Crowds.Agent::agentIndex
	int32_t ___agentIndex_27;
};

// SharpNav.Geometry.BBox3
struct BBox3_t3137376E8C740EA32922AA4348ACC1FE1CE0C49C 
{
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.BBox3::Min
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___Min_0;
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.BBox3::Max
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___Max_1;
};

// SharpNav.Crowds.Crowd
struct Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E  : public RuntimeObject
{
	// System.Int32 SharpNav.Crowds.Crowd::maxAgents
	int32_t ___maxAgents_4;
	// SharpNav.Crowds.Agent[] SharpNav.Crowds.Crowd::agents
	AgentU5BU5D_tDFADF74B95766C6A6189C2784C828B9B77D10125* ___agents_5;
	// SharpNav.Crowds.AgentAnimation[] SharpNav.Crowds.Crowd::agentAnims
	AgentAnimationU5BU5D_t1F05E97385C06B5BC9AE7BD2FE1DA7D34D07A918* ___agentAnims_6;
	// SharpNav.Crowds.PathQueue SharpNav.Crowds.Crowd::pathq
	PathQueue_t087C410E1D853701A9E70247A9CBA1F615DD060D* ___pathq_7;
	// SharpNav.Crowds.ObstacleAvoidanceQuery/ObstacleAvoidanceParams[] SharpNav.Crowds.Crowd::obstacleQueryParams
	ObstacleAvoidanceParamsU5BU5D_t8E4A0C7889FE10A9D1D621BE5CDCF18A3A0BCA2F* ___obstacleQueryParams_8;
	// SharpNav.Crowds.ObstacleAvoidanceQuery SharpNav.Crowds.Crowd::obstacleQuery
	ObstacleAvoidanceQuery_t3D10CE78E376ED2A1E353C51DCA92C77DB07FECD* ___obstacleQuery_9;
	// SharpNav.Collections.Generic.ProximityGrid`1<SharpNav.Crowds.Agent> SharpNav.Crowds.Crowd::grid
	ProximityGrid_1_tA79768177EB190DAFCF485F7F6AE51CA0F3B800B* ___grid_10;
	// System.Int32[] SharpNav.Crowds.Crowd::pathResult
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___pathResult_11;
	// System.Int32 SharpNav.Crowds.Crowd::maxPathResult
	int32_t ___maxPathResult_12;
	// SharpNav.Geometry.Vector3 SharpNav.Crowds.Crowd::ext
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___ext_13;
	// System.Int32 SharpNav.Crowds.Crowd::velocitySampleCount
	int32_t ___velocitySampleCount_14;
	// SharpNav.NavMeshQuery SharpNav.Crowds.Crowd::navQuery
	NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* ___navQuery_15;
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

// SharpNav.Pathfinding.NavPoint
struct NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 
{
	// System.Int32 SharpNav.Pathfinding.NavPoint::Polygon
	int32_t ___Polygon_1;
	// SharpNav.Geometry.Vector3 SharpNav.Pathfinding.NavPoint::Position
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___Position_2;
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

// SharpNav.Pathfinding.Poly
struct Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E  : public RuntimeObject
{
	// SharpNav.Pathfinding.PolygonType SharpNav.Pathfinding.Poly::polyType
	uint8_t ___polyType_0;
	// System.Int32 SharpNav.Pathfinding.Poly::<FirstLink>k__BackingField
	int32_t ___U3CFirstLinkU3Ek__BackingField_1;
	// System.Int32[] SharpNav.Pathfinding.Poly::<Verts>k__BackingField
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CVertsU3Ek__BackingField_2;
	// System.Int32[] SharpNav.Pathfinding.Poly::<Neis>k__BackingField
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CNeisU3Ek__BackingField_3;
	// System.Int32 SharpNav.Pathfinding.Poly::<Flags>k__BackingField
	int32_t ___U3CFlagsU3Ek__BackingField_4;
	// System.Int32 SharpNav.Pathfinding.Poly::<VertCount>k__BackingField
	int32_t ___U3CVertCountU3Ek__BackingField_5;
	// SharpNav.Area SharpNav.Pathfinding.Poly::<Area>k__BackingField
	Area_t9E8E008D1CF28697728310B3039944F3C2777E47 ___U3CAreaU3Ek__BackingField_6;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// SharpNav.Geometry.Triangle3
#pragma pack(push, tp, 1)
struct Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB 
{
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.Triangle3::A
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___A_0;
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.Triangle3::B
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___B_1;
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.Triangle3::C
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___C_2;
};
#pragma pack(pop, tp)

// SharpNav.NavMeshQuery/QueryData
struct QueryData_tFF98F117B2D264A40EC2B87B6EF9FB0456CC05D6 
{
	// System.Boolean SharpNav.NavMeshQuery/QueryData::Status
	bool ___Status_0;
	// SharpNav.Node SharpNav.NavMeshQuery/QueryData::LastBestNode
	Node_t76EA16C5443D796CC693D1FE0C68B9FE42759CE9* ___LastBestNode_1;
	// System.Single SharpNav.NavMeshQuery/QueryData::LastBestNodeCost
	float ___LastBestNodeCost_2;
	// System.Int32 SharpNav.NavMeshQuery/QueryData::StartRef
	int32_t ___StartRef_3;
	// System.Int32 SharpNav.NavMeshQuery/QueryData::EndRef
	int32_t ___EndRef_4;
	// SharpNav.Geometry.Vector3 SharpNav.NavMeshQuery/QueryData::StartPos
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___StartPos_5;
	// SharpNav.Geometry.Vector3 SharpNav.NavMeshQuery/QueryData::EndPos
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___EndPos_6;
};
// Native definition for P/Invoke marshalling of SharpNav.NavMeshQuery/QueryData
struct QueryData_tFF98F117B2D264A40EC2B87B6EF9FB0456CC05D6_marshaled_pinvoke
{
	int32_t ___Status_0;
	Node_t76EA16C5443D796CC693D1FE0C68B9FE42759CE9* ___LastBestNode_1;
	float ___LastBestNodeCost_2;
	int32_t ___StartRef_3;
	int32_t ___EndRef_4;
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___StartPos_5;
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___EndPos_6;
};
// Native definition for COM marshalling of SharpNav.NavMeshQuery/QueryData
struct QueryData_tFF98F117B2D264A40EC2B87B6EF9FB0456CC05D6_marshaled_com
{
	int32_t ___Status_0;
	Node_t76EA16C5443D796CC693D1FE0C68B9FE42759CE9* ___LastBestNode_1;
	float ___LastBestNodeCost_2;
	int32_t ___StartRef_3;
	int32_t ___EndRef_4;
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___StartPos_5;
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___EndPos_6;
};

// SharpNav.TiledNavMesh/TiledNavMeshParams
struct TiledNavMeshParams_t3C4627AB0D05336B8A34768BFD2F6F23A7902053 
{
	// SharpNav.Geometry.Vector3 SharpNav.TiledNavMesh/TiledNavMeshParams::Origin
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___Origin_0;
	// System.Single SharpNav.TiledNavMesh/TiledNavMeshParams::TileWidth
	float ___TileWidth_1;
	// System.Single SharpNav.TiledNavMesh/TiledNavMeshParams::TileHeight
	float ___TileHeight_2;
	// System.Int32 SharpNav.TiledNavMesh/TiledNavMeshParams::MaxTiles
	int32_t ___MaxTiles_3;
	// System.Int32 SharpNav.TiledNavMesh/TiledNavMeshParams::MaxPolys
	int32_t ___MaxPolys_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// SharpNav.NavMeshQuery
struct NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9  : public RuntimeObject
{
	// SharpNav.TiledNavMesh SharpNav.NavMeshQuery::nav
	TiledNavMesh_tA94ABC64A0549A8993031644B5CBE3D2D3AC45CF* ___nav_1;
	// System.Single[] SharpNav.NavMeshQuery::areaCost
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___areaCost_2;
	// SharpNav.NodePool SharpNav.NavMeshQuery::tinyNodePool
	NodePool_t171D656A620ED6862C2181316D1B9B750E8B8A6D* ___tinyNodePool_3;
	// SharpNav.NodePool SharpNav.NavMeshQuery::nodePool
	NodePool_t171D656A620ED6862C2181316D1B9B750E8B8A6D* ___nodePool_4;
	// SharpNav.Collections.Generic.PriorityQueue`1<SharpNav.Node> SharpNav.NavMeshQuery::openList
	PriorityQueue_1_tDAFF5A46B51D194C5600ACC2992AEE432ED1862D* ___openList_5;
	// SharpNav.NavMeshQuery/QueryData SharpNav.NavMeshQuery::query
	QueryData_tFF98F117B2D264A40EC2B87B6EF9FB0456CC05D6 ___query_6;
	// System.Random SharpNav.NavMeshQuery::rand
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand_7;
};

// SharpNav.PolyMesh
struct PolyMesh_t62FDDF5B45037AC3B59ABD0B825EFEFE8D9C4E98  : public RuntimeObject
{
	// SharpNav.PolyVertex[] SharpNav.PolyMesh::vertices
	PolyVertexU5BU5D_t8BFACC5B97130D85ED7AE5C9C8D5255EE1D64397* ___vertices_3;
	// SharpNav.PolyMesh/Polygon[] SharpNav.PolyMesh::polygons
	PolygonU5BU5D_t1C721536FE866F7CB4CE13C0013FF8C8765F784D* ___polygons_4;
	// System.Int32 SharpNav.PolyMesh::numVertsPerPoly
	int32_t ___numVertsPerPoly_5;
	// SharpNav.Geometry.BBox3 SharpNav.PolyMesh::bounds
	BBox3_t3137376E8C740EA32922AA4348ACC1FE1CE0C49C ___bounds_6;
	// System.Single SharpNav.PolyMesh::cellSize
	float ___cellSize_7;
	// System.Single SharpNav.PolyMesh::cellHeight
	float ___cellHeight_8;
	// System.Int32 SharpNav.PolyMesh::borderSize
	int32_t ___borderSize_9;
};

// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// SharpNav.TiledNavMesh
struct TiledNavMesh_tA94ABC64A0549A8993031644B5CBE3D2D3AC45CF  : public RuntimeObject
{
	// SharpNav.TiledNavMesh/TiledNavMeshParams SharpNav.TiledNavMesh::parameters
	TiledNavMeshParams_t3C4627AB0D05336B8A34768BFD2F6F23A7902053 ___parameters_0;
	// SharpNav.Geometry.Vector3 SharpNav.TiledNavMesh::origin
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___origin_1;
	// System.Single SharpNav.TiledNavMesh::tileWidth
	float ___tileWidth_2;
	// System.Single SharpNav.TiledNavMesh::tileHeight
	float ___tileHeight_3;
	// System.Int32 SharpNav.TiledNavMesh::maxTiles
	int32_t ___maxTiles_4;
	// System.Int32 SharpNav.TiledNavMesh::tileLookupTableSize
	int32_t ___tileLookupTableSize_5;
	// System.Int32 SharpNav.TiledNavMesh::tileLookupTableMask
	int32_t ___tileLookupTableMask_6;
	// SharpNav.Pathfinding.MeshTile[] SharpNav.TiledNavMesh::posLookup
	MeshTileU5BU5D_t5DE0695A85DF13F4ED8219B80C09763EE060F2BE* ___posLookup_7;
	// SharpNav.Pathfinding.MeshTile SharpNav.TiledNavMesh::nextFree
	MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* ___nextFree_8;
	// SharpNav.Pathfinding.MeshTile[] SharpNav.TiledNavMesh::tiles
	MeshTileU5BU5D_t5DE0695A85DF13F4ED8219B80C09763EE060F2BE* ___tiles_9;
	// System.Int32 SharpNav.TiledNavMesh::saltBits
	int32_t ___saltBits_10;
	// System.Int32 SharpNav.TiledNavMesh::tileBits
	int32_t ___tileBits_11;
	// System.Int32 SharpNav.TiledNavMesh::polyBits
	int32_t ___polyBits_12;
	// System.Object SharpNav.TiledNavMesh::<Tag>k__BackingField
	RuntimeObject* ___U3CTagU3Ek__BackingField_13;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SharpNav.NavMesh
struct NavMesh_t248304A6679E0AE438540BDD4D7EB7AB53C61E06  : public TiledNavMesh_tA94ABC64A0549A8993031644B5CBE3D2D3AC45CF
{
};

// DungeonArchitect.Navigation.OnNavmeshBuiltDelegate
struct OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA  : public MulticastDelegate_t
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// DungeonArchitect.Dungeon
struct Dungeon_tAA854F521189538FD299BECE6025726B6C359227  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<DungeonArchitect.Graphs.Graph> DungeonArchitect.Dungeon::dungeonThemes
	List_1_t3CA4075AAE5B1E25B0348B3D467FB34DFA67B33A* ___dungeonThemes_4;
	// System.Boolean DungeonArchitect.Dungeon::debugDraw
	bool ___debugDraw_5;
	// DungeonArchitect.DungeonConfig DungeonArchitect.Dungeon::config
	DungeonConfig_tAB374D87D0852393B67D890DA66CD4B0EC2D7FBD* ___config_6;
	// DungeonArchitect.PooledDungeonSceneProvider DungeonArchitect.Dungeon::sceneProvider
	PooledDungeonSceneProvider_t5011D12BA88931054282BDB70EB8075DFA46B17C* ___sceneProvider_7;
	// DungeonArchitect.DungeonBuilder DungeonArchitect.Dungeon::dungeonBuilder
	DungeonBuilder_tD1E33B0EE44EFF472152D3D8233F3804191E65EA* ___dungeonBuilder_8;
	// DungeonArchitect.DungeonModel DungeonArchitect.Dungeon::dungeonModel
	DungeonModel_t53A77B7094F80C6A6C626E2E6B647289FBF29D19* ___dungeonModel_9;
	// DungeonArchitect.DungeonSceneObjectSpawner DungeonArchitect.Dungeon::objectSpawner
	DungeonSceneObjectSpawner_t52E94CC1F6A2B096532E2EF07A5FCA64956BDF2A* ___objectSpawner_10;
	// DungeonArchitect.LevelMarkerList DungeonArchitect.Dungeon::markers
	LevelMarkerList_t7F6AC91D47A569068C1D028934596FF16F3721A4* ___markers_11;
	// System.Boolean DungeonArchitect.Dungeon::requestedRebuild
	bool ___requestedRebuild_12;
};

// DungeonArchitect.DungeonEventListener
struct DungeonEventListener_tDD3B54FF16033C77DFC0C51CAF87B8C85D4C00CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DungeonArchitect.DungeonModel
struct DungeonModel_t53A77B7094F80C6A6C626E2E6B647289FBF29D19  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DungeonArchitect.Navigation.DungeonNavAgent
struct DungeonNavAgent_tDA71D081471ED0A7C4BB850D91F604AF86E293F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DungeonArchitect.Navigation.DungeonNavMesh
struct DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DungeonArchitect.Navigation.DungeonNavMesh::agentHeight
	float ___agentHeight_4;
	// System.Single DungeonArchitect.Navigation.DungeonNavMesh::agentRadius
	float ___agentRadius_5;
	// System.Single DungeonArchitect.Navigation.DungeonNavMesh::agentClimbHeight
	float ___agentClimbHeight_6;
	// System.Single DungeonArchitect.Navigation.DungeonNavMesh::cellSize
	float ___cellSize_7;
	// System.Int32 DungeonArchitect.Navigation.DungeonNavMesh::maxCrowdAgents
	int32_t ___maxCrowdAgents_8;
	// UnityEngine.Mesh DungeonArchitect.Navigation.DungeonNavMesh::visualization
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visualization_9;
	// UnityEngine.Color DungeonArchitect.Navigation.DungeonNavMesh::visualizationColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___visualizationColor_10;
	// System.Boolean DungeonArchitect.Navigation.DungeonNavMesh::visualize2D
	bool ___visualize2D_11;
	// DungeonArchitect.Navigation.OnNavmeshBuiltDelegate DungeonArchitect.Navigation.DungeonNavMesh::OnNavmeshBuilt
	OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* ___OnNavmeshBuilt_12;
	// SharpNav.NavMesh DungeonArchitect.Navigation.DungeonNavMesh::navMesh
	NavMesh_t248304A6679E0AE438540BDD4D7EB7AB53C61E06* ___navMesh_13;
	// SharpNav.NavMeshQuery DungeonArchitect.Navigation.DungeonNavMesh::navMeshQuery
	NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* ___navMeshQuery_14;
	// SharpNav.Crowds.Crowd DungeonArchitect.Navigation.DungeonNavMesh::crowd
	Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* ___crowd_15;
	// SharpNav.PolyMesh DungeonArchitect.Navigation.DungeonNavMesh::polyMesh
	PolyMesh_t62FDDF5B45037AC3B59ABD0B825EFEFE8D9C4E98* ___polyMesh_16;
	// SharpNav.PolyMeshDetail DungeonArchitect.Navigation.DungeonNavMesh::polyMeshDetail
	PolyMeshDetail_t96CF135F89BE4EA3ED03957279704A1EAD566764* ___polyMeshDetail_17;
};

// DungeonArchitect.DungeonSceneProviderData
struct DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String DungeonArchitect.DungeonSceneProviderData::NodeId
	String_t* ___NodeId_4;
	// DungeonArchitect.Dungeon DungeonArchitect.DungeonSceneProviderData::dungeon
	Dungeon_tAA854F521189538FD299BECE6025726B6C359227* ___dungeon_5;
	// System.Boolean DungeonArchitect.DungeonSceneProviderData::affectsNavigation
	bool ___affectsNavigation_6;
	// System.Int32 DungeonArchitect.DungeonSceneProviderData::userData
	int32_t ___userData_7;
	// System.Boolean DungeonArchitect.DungeonSceneProviderData::externallyManaged
	bool ___externallyManaged_8;
};

// DungeonArchitect.Navigation.NavigationTriangleProvider
struct NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DungeonArchitect.Navigation.Collision2DTriangleProvider
struct Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A  : public NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F
{
};

// DungeonArchitect.Navigation.CollisionTriangleProvider
struct CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389  : public NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F
{
};

// DungeonArchitect.Navigation.DungeonNavAgent2D
struct DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9  : public DungeonNavAgent_tDA71D081471ED0A7C4BB850D91F604AF86E293F9
{
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::radius
	float ___radius_4;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::height
	float ___height_5;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::maxAcceleration
	float ___maxAcceleration_6;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::maxSpeed
	float ___maxSpeed_7;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::collisionQueryRange
	float ___collisionQueryRange_8;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::pathOptimizationRange
	float ___pathOptimizationRange_9;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::separationWeight
	float ___separationWeight_10;
	// UnityEngine.Vector2 DungeonArchitect.Navigation.DungeonNavAgent2D::navAgentCollisionOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___navAgentCollisionOffset_11;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::updateFrequency
	float ___updateFrequency_12;
	// System.Int32 DungeonArchitect.Navigation.DungeonNavAgent2D::agentId
	int32_t ___agentId_13;
	// DungeonArchitect.Navigation.DungeonNavMesh DungeonArchitect.Navigation.DungeonNavAgent2D::navMesh
	DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* ___navMesh_14;
	// UnityEngine.Rigidbody2D DungeonArchitect.Navigation.DungeonNavAgent2D::rigidBody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidBody2D_15;
	// System.Boolean DungeonArchitect.Navigation.DungeonNavAgent2D::running
	bool ___running_16;
	// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::previousDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousDirection_17;
	// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::destination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination_18;
	// SharpNav.Crowds.Agent DungeonArchitect.Navigation.DungeonNavAgent2D::agent
	Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* ___agent_19;
	// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::_debugNavDest
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____debugNavDest_20;
};

// DungeonArchitect.Navigation.DungeonNavAgent3D
struct DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D  : public DungeonNavAgent_tDA71D081471ED0A7C4BB850D91F604AF86E293F9
{
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::radius
	float ___radius_4;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::height
	float ___height_5;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::maxAcceleration
	float ___maxAcceleration_6;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::maxSpeed
	float ___maxSpeed_7;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::collisionQueryRange
	float ___collisionQueryRange_8;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::pathOptimizationRange
	float ___pathOptimizationRange_9;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::separationWeight
	float ___separationWeight_10;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::gravity
	float ___gravity_11;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::updateFrequency
	float ___updateFrequency_12;
	// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::timeSinceLastNavUpdate
	float ___timeSinceLastNavUpdate_13;
	// UnityEngine.CharacterController DungeonArchitect.Navigation.DungeonNavAgent3D::character
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___character_14;
	// System.Int32 DungeonArchitect.Navigation.DungeonNavAgent3D::agentId
	int32_t ___agentId_15;
	// DungeonArchitect.Navigation.DungeonNavMesh DungeonArchitect.Navigation.DungeonNavAgent3D::navMesh
	DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* ___navMesh_16;
	// System.Boolean DungeonArchitect.Navigation.DungeonNavAgent3D::running
	bool ___running_17;
	// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent3D::destination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination_18;
	// SharpNav.Crowds.Agent DungeonArchitect.Navigation.DungeonNavAgent3D::agent
	Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* ___agent_19;
};

// DungeonArchitect.Navigation.NavigationBuildInvoker
struct NavigationBuildInvoker_t15B5AE590B413027DA6959759822C258E1694E5A  : public DungeonEventListener_tDD3B54FF16033C77DFC0C51CAF87B8C85D4C00CF
{
	// DungeonArchitect.Navigation.DungeonNavMesh DungeonArchitect.Navigation.NavigationBuildInvoker::navMesh
	DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* ___navMesh_4;
};

// DungeonArchitect.Navigation.StaticMeshTriangleProvider
struct StaticMeshTriangleProvider_t91A74BBAD481A972AB062B4971F03948B35F3D5C  : public NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F
{
};

// DungeonArchitect.Navigation.TerrainTriangleProvider
struct TerrainTriangleProvider_tC6AAA38C7EE500BFBE79C3D0C93E80F39D0C3286  : public NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F
{
	// System.Single DungeonArchitect.Navigation.TerrainTriangleProvider::terrainCellSize
	float ___terrainCellSize_4;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>
struct List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>

// System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>
struct List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// SharpNav.Pathfinding.MeshTile

// SharpNav.Pathfinding.MeshTile

// SharpNav.NavMeshGenerationSettings

// SharpNav.NavMeshGenerationSettings

// DungeonArchitect.Navigation.NavigationEvent

// DungeonArchitect.Navigation.NavigationEvent

// SharpNav.PolyMeshDetail
struct PolyMeshDetail_t96CF135F89BE4EA3ED03957279704A1EAD566764_StaticFields
{
	// System.Int32[] SharpNav.PolyMeshDetail::VertexOffset
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___VertexOffset_0;
};

// SharpNav.PolyMeshDetail

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// SharpNav.Crowds.AgentParams

// SharpNav.Crowds.AgentParams

// SharpNav.Area
struct Area_t9E8E008D1CF28697728310B3039944F3C2777E47_StaticFields
{
	// SharpNav.Area SharpNav.Area::Null
	Area_t9E8E008D1CF28697728310B3039944F3C2777E47 ___Null_0;
	// SharpNav.Area SharpNav.Area::Default
	Area_t9E8E008D1CF28697728310B3039944F3C2777E47 ___Default_1;
};

// SharpNav.Area

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

// SharpNav.Geometry.Vector3
struct Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4_StaticFields
{
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.Vector3::UnitX
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___UnitX_3;
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.Vector3::UnitY
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___UnitY_4;
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.Vector3::UnitZ
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___UnitZ_5;
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.Vector3::Zero
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___Zero_6;
	// SharpNav.Geometry.Vector3 SharpNav.Geometry.Vector3::One
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___One_7;
	// System.String SharpNav.Geometry.Vector3::listSeparator
	String_t* ___listSeparator_8;
};

// SharpNav.Geometry.Vector3

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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t4EB0C049FDDDAE3C9190824158B740D4E99E8468_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144 <PrivateImplementationDetails>::A3763FA4915A8C2462635850EE2293BB4ACC1F04C70EDCE416AAE4B139B0B115
	__StaticArrayInitTypeSizeU3D144_tD904EF692EAABCB9D61EC435C5BE617A0190B0C6 ___A3763FA4915A8C2462635850EE2293BB4ACC1F04C70EDCE416AAE4B139B0B115_0;
};

// <PrivateImplementationDetails>

// SharpNav.Crowds.Agent

// SharpNav.Crowds.Agent

// SharpNav.Geometry.BBox3

// SharpNav.Geometry.BBox3

// SharpNav.Crowds.Crowd

// SharpNav.Crowds.Crowd

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// SharpNav.Pathfinding.NavPoint
struct NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364_StaticFields
{
	// SharpNav.Pathfinding.NavPoint SharpNav.Pathfinding.NavPoint::Null
	NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 ___Null_0;
};

// SharpNav.Pathfinding.NavPoint

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// SharpNav.Pathfinding.Poly

// SharpNav.Pathfinding.Poly

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// SharpNav.Geometry.Triangle3

// SharpNav.Geometry.Triangle3

// SharpNav.NavMeshQuery/QueryData

// SharpNav.NavMeshQuery/QueryData

// SharpNav.TiledNavMesh/TiledNavMeshParams

// SharpNav.TiledNavMesh/TiledNavMeshParams

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// SharpNav.NavMeshQuery

// SharpNav.NavMeshQuery

// SharpNav.PolyMesh

// SharpNav.PolyMesh

// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields
{
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_4;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_5;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_7;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailsPerRes
	int32_t ___k_MaximumDetailsPerRes_8;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_9;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_12;
};

// UnityEngine.TerrainData

// SharpNav.TiledNavMesh

// SharpNav.TiledNavMesh

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// SharpNav.NavMesh

// SharpNav.NavMesh

// DungeonArchitect.Navigation.OnNavmeshBuiltDelegate

// DungeonArchitect.Navigation.OnNavmeshBuiltDelegate

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.CapsuleCollider

// UnityEngine.CapsuleCollider

// UnityEngine.CharacterController

// UnityEngine.CharacterController

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MeshCollider

// UnityEngine.MeshCollider

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SphereCollider

// UnityEngine.SphereCollider

// UnityEngine.Terrain

// UnityEngine.Terrain

// UnityEngine.BoxCollider2D

// UnityEngine.BoxCollider2D

// UnityEngine.CircleCollider2D

// UnityEngine.CircleCollider2D

// DungeonArchitect.Dungeon

// DungeonArchitect.Dungeon

// DungeonArchitect.DungeonEventListener

// DungeonArchitect.DungeonEventListener

// DungeonArchitect.DungeonModel

// DungeonArchitect.DungeonModel

// DungeonArchitect.Navigation.DungeonNavAgent

// DungeonArchitect.Navigation.DungeonNavAgent

// DungeonArchitect.Navigation.DungeonNavMesh

// DungeonArchitect.Navigation.DungeonNavMesh

// DungeonArchitect.DungeonSceneProviderData

// DungeonArchitect.DungeonSceneProviderData

// DungeonArchitect.Navigation.NavigationTriangleProvider

// DungeonArchitect.Navigation.NavigationTriangleProvider

// DungeonArchitect.Navigation.Collision2DTriangleProvider
struct Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_StaticFields
{
	// UnityEngine.Vector3[] DungeonArchitect.Navigation.Collision2DTriangleProvider::cubeVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___cubeVertices_4;
	// System.Int32[] DungeonArchitect.Navigation.Collision2DTriangleProvider::cubeIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cubeIndices_5;
};

// DungeonArchitect.Navigation.Collision2DTriangleProvider

// DungeonArchitect.Navigation.CollisionTriangleProvider
struct CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_StaticFields
{
	// UnityEngine.Vector3[] DungeonArchitect.Navigation.CollisionTriangleProvider::cubeVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___cubeVertices_4;
	// System.Int32[] DungeonArchitect.Navigation.CollisionTriangleProvider::cubeIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cubeIndices_5;
};

// DungeonArchitect.Navigation.CollisionTriangleProvider

// DungeonArchitect.Navigation.DungeonNavAgent2D

// DungeonArchitect.Navigation.DungeonNavAgent2D

// DungeonArchitect.Navigation.DungeonNavAgent3D

// DungeonArchitect.Navigation.DungeonNavAgent3D

// DungeonArchitect.Navigation.NavigationBuildInvoker

// DungeonArchitect.Navigation.NavigationBuildInvoker

// DungeonArchitect.Navigation.StaticMeshTriangleProvider

// DungeonArchitect.Navigation.StaticMeshTriangleProvider

// DungeonArchitect.Navigation.TerrainTriangleProvider

// DungeonArchitect.Navigation.TerrainTriangleProvider
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
// DungeonArchitect.Navigation.NavigationTriangleProvider[]
struct NavigationTriangleProviderU5BU5D_t3EC4AF908D22892C7DC0D878892E8FC5A992E0E4  : public RuntimeArray
{
	ALIGN_FIELD (8) NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F* m_Items[1];

	inline NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SharpNav.Pathfinding.Poly[]
struct PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812  : public RuntimeArray
{
	ALIGN_FIELD (8) Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* m_Items[1];

	inline Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* value)
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
// SharpNav.Geometry.Vector3[]
struct Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 m_Items[1];

	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 value)
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
// DungeonArchitect.DungeonSceneProviderData[]
struct DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D  : public RuntimeArray
{
	ALIGN_FIELD (8) DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* m_Items[1];

	inline DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* m_Items[1];

	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* m_Items[1];

	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4  : public RuntimeArray
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
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// SharpNav.Geometry.Vector3[,]
struct Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 m_Items[1];

	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 value)
	{
		m_Items[index] = value;
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// SharpNav.Geometry.Triangle3[]
struct Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C  : public RuntimeArray
{
	ALIGN_FIELD (8) Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB m_Items[1];

	inline Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m48FF247C944BAA88B4183D95ABB650FE5E7B8A68_gshared (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3AFC51320B2220B8365431B3C71D901B426B4457_gshared_inline (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m27EEF3D07EEFA922D8C70C9E696D1140E3742E58_gshared (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m272C6A5A3620E81931888D90AA9E9524D5C55214_gshared_inline (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* __this, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E_gshared (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_gshared_inline (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* __this, Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB ___0_item, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean SharpNav.Crowds.Agent::op_Equality(SharpNav.Crowds.Agent,SharpNav.Crowds.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Agent_op_Equality_mFA90467E04255792F9FE0E79DB9195409EAB3904 (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* ___0_left, Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* ___1_right, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::ToV3(SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31 (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_v, const RuntimeMethod* method) ;
// SharpNav.Geometry.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::ToSV3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::FlipYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_FlipYZ_m9F19A8BBA68293D1864D4B2E13AD16CD94BF0577 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Boolean SharpNav.Crowds.Agent::op_Inequality(SharpNav.Crowds.Agent,SharpNav.Crowds.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Agent_op_Inequality_mE495A95A594BBC56A0FCE696D61BF6D531DC9513 (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* ___0_left, Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* ___1_right, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// SharpNav.Geometry.Vector3 SharpNav.Crowds.Agent::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<DungeonArchitect.Navigation.DungeonNavMesh>()
inline DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* Object_FindObjectOfType_TisDungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880_m24D81C5B736C20D61A3AFEE0DEF906541D85712C (const RuntimeMethod* method)
{
	return ((  DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// SharpNav.NavMeshQuery DungeonArchitect.Navigation.DungeonNavMesh::get_NavMeshQuery()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::PositionOnNearestNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_PositionOnNearestNavMesh_m03535961A568309890089B67DD5036426C8798C9 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::get_ActorPosition3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_get_ActorPosition3D_mF0012D5E966413B18E5B34D6141E57A17849F447 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// SharpNav.Crowds.Crowd DungeonArchitect.Navigation.DungeonNavMesh::get_Crowd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* DungeonNavMesh_get_Crowd_m038118397F4A8B5F988F43E7F058305F4BBB2F3F_inline (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 SharpNav.Crowds.Crowd::AddAgent(SharpNav.Geometry.Vector3,SharpNav.Crowds.AgentParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Crowd_AddAgent_m5F9E22305F5DE6318EEC1B8EF343BFA57D86D3D3 (Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* __this, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_pos, AgentParams_tAE0948B0349389CC357BAED3E3D3531203E97BF3 ___1_parameters, const RuntimeMethod* method) ;
// SharpNav.Crowds.Agent SharpNav.Crowds.Crowd::GetAgent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* Crowd_GetAgent_mB1B38B409CD61BA9029DCD93B108E7D87662A4A7 (Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// SharpNav.Pathfinding.NavPoint SharpNav.NavMeshQuery::FindNearestPoly(SharpNav.Geometry.Vector3,SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 NavMeshQuery_FindNearestPoly_m55301E695B88DE5A539554F9C1B9C05A665B373B (NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* __this, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_center, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___1_extents, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::set_ActorPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_set_ActorPosition3D_m784B32924D1F7FF1AABE18EEF5195588F7CE3427 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void SharpNav.Geometry.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m168D4D359A145D225B2579608B75AABFF6ABD4C5 (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void SharpNav.Crowds.Agent::Reset(System.Int32,SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_Reset_m06C84F921EB0EF3D947E6B6C1276C56EC3D9226E (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* __this, int32_t ___0_reference, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___1_nearest, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// SharpNav.Geometry.Vector3 SharpNav.Crowds.Agent::get_TargetPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 Agent_get_TargetPosition_m8658806B510BEC0788ECB2F2C51F885AF7DF525A_inline (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void SharpNav.Crowds.Agent::set_Position(SharpNav.Geometry.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Agent_set_Position_mD34FC14E5BC00C636B9AE801C210ED33C0F018A7_inline (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* __this, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_value, const RuntimeMethod* method) ;
// System.Boolean SharpNav.Crowds.Agent::RequestMoveTarget(System.Int32,SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Agent_RequestMoveTarget_mFC81F70BE2C09B1D447CDC2DCAD8B216B07DCD11 (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* __this, int32_t ___0_reference, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___1_pos, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.DungeonNavAgent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent__ctor_m72115B9F8B17091CEF1EB07CF5C3BF03B754FEF0 (DungeonNavAgent_tDA71D081471ED0A7C4BB850D91F604AF86E293F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent3D::ToV3(SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent3D_ToV3_m638DF36E4BA515685D05BF365BA8773B02C757F6 (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_v, const RuntimeMethod* method) ;
// SharpNav.Geometry.Vector3 DungeonArchitect.Navigation.DungeonNavAgent3D::ToSV3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::PositionOnNearestNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_PositionOnNearestNavMesh_mBCABEB9A13C3D082F4178B1B60F8F385FB160A95 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::ProcessMove(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_ProcessMove_mAF0F37899DAAF401F2CBF1884E4FC7AA11FD82C4 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, bool ___0_recalculatePath, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_motion, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::SimpleMove(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_SimpleMove_mE32A48D439878B3241E8456F8EBFAAE264BD705C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_speed, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::SetNavMeshVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_SetNavMeshVisible_m02811F03D792A485462BB92DE738CBCAA9FE7EC9 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, bool ___0_show, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void SharpNav.Crowds.Crowd::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crowd_Update_m1C2907A7ED29E81E5382719AA7709C6AEFE000BC (Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* __this, float ___0_dt, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>::.ctor()
inline void List_1__ctor_m48FF247C944BAA88B4183D95ABB650FE5E7B8A68 (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2*, const RuntimeMethod*))List_1__ctor_m48FF247C944BAA88B4183D95ABB650FE5E7B8A68_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponents<DungeonArchitect.Navigation.NavigationTriangleProvider>()
inline NavigationTriangleProviderU5BU5D_t3EC4AF908D22892C7DC0D878892E8FC5A992E0E4* Component_GetComponents_TisNavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F_mC6FC0AB5B8F3A62EC1545B18A836DF558CE53644 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavigationTriangleProviderU5BU5D_t3EC4AF908D22892C7DC0D878892E8FC5A992E0E4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>::get_Count()
inline int32_t List_1_get_Count_m3AFC51320B2220B8365431B3C71D901B426B4457_inline (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2*, const RuntimeMethod*))List_1_get_Count_m3AFC51320B2220B8365431B3C71D901B426B4457_gshared_inline)(__this, method);
}
// SharpNav.NavMeshGenerationSettings SharpNav.NavMeshGenerationSettings::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* NavMeshGenerationSettings_get_Default_m86C5D44ABA640EBED4A5D23795D8220A31119E19 (const RuntimeMethod* method) ;
// System.Void SharpNav.NavMeshGenerationSettings::set_AgentHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshGenerationSettings_set_AgentHeight_m16F23C7EC51A6CA5C95A983A14E9063B8A5C7922_inline (NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void SharpNav.NavMeshGenerationSettings::set_AgentRadius(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshGenerationSettings_set_AgentRadius_mFA7FF029325EAF91EFDA3BA9F18C3751A6DF4823_inline (NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void SharpNav.NavMeshGenerationSettings::set_MaxClimb(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshGenerationSettings_set_MaxClimb_m193CADF08DB8F410F092EF5A4F74B3E2BF035DAC_inline (NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void SharpNav.NavMeshGenerationSettings::set_CellSize(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshGenerationSettings_set_CellSize_mA90DCE0E7FFEC25E52256027513569DCC2059E02_inline (NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* __this, float ___0_value, const RuntimeMethod* method) ;
// SharpNav.NavMesh SharpNav.NavMesh::Generate(System.Collections.Generic.IEnumerable`1<SharpNav.Geometry.Triangle3>,SharpNav.NavMeshGenerationSettings,SharpNav.PolyMesh&,SharpNav.PolyMeshDetail&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMesh_t248304A6679E0AE438540BDD4D7EB7AB53C61E06* NavMesh_Generate_m01313567EDB1E02874AE2E942AA34B0C3D5CB959 (RuntimeObject* ___0_triangles, NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* ___1_settings, PolyMesh_t62FDDF5B45037AC3B59ABD0B825EFEFE8D9C4E98** ___2_polyMesh, PolyMeshDetail_t96CF135F89BE4EA3ED03957279704A1EAD566764** ___3_polyMeshDetail, const RuntimeMethod* method) ;
// System.Void SharpNav.NavMeshQuery::.ctor(SharpNav.TiledNavMesh,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshQuery__ctor_mCE87C0A876327447EC5221DF987266E60783C153 (NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* __this, TiledNavMesh_tA94ABC64A0549A8993031644B5CBE3D2D3AC45CF* ___0_nav, int32_t ___1_maxNodes, const RuntimeMethod* method) ;
// System.Void SharpNav.Crowds.Crowd::.ctor(System.Int32,System.Single,SharpNav.TiledNavMesh&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crowd__ctor_m0FE835E0E7D032530259B9317A42BB98FE575EA9 (Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* __this, int32_t ___0_maxAgents, float ___1_maxAgentRadius, TiledNavMesh_tA94ABC64A0549A8993031644B5CBE3D2D3AC45CF** ___2_navMesh, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::BuildVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_BuildVisualization_m6A90F05C8538D9F6554456BF50B83593978F4E39 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.NavigationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationEvent__ctor_mEF34CCF9EA31B1EB75934051F90A8D67929D22DE (NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.OnNavmeshBuiltDelegate::Invoke(DungeonArchitect.Navigation.NavigationEvent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_inline (OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// SharpNav.Pathfinding.MeshTile SharpNav.TiledNavMesh::GetTileAt(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* TiledNavMesh_GetTileAt_mB24138CB6D80A70E0C2B7129C51D069F0DFA965D (TiledNavMesh_tA94ABC64A0549A8993031644B5CBE3D2D3AC45CF* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_layer, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// SharpNav.Pathfinding.Poly[] SharpNav.Pathfinding.MeshTile::get_Polys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812* MeshTile_get_Polys_m02CD915E917BF27F36D8C94B2688AB33061D2DA5_inline (MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* __this, const RuntimeMethod* method) ;
// System.Int32[] SharpNav.Pathfinding.Poly::get_Verts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Poly_get_Verts_m0C3D65847A75BD3D5D99760CABBB31F02C3D8000_inline (Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* __this, const RuntimeMethod* method) ;
// SharpNav.Geometry.Vector3[] SharpNav.Pathfinding.MeshTile::get_Verts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* MeshTile_get_Verts_m58EE3B69BCC1DCF475808A022BAF08BDA2B24DEC_inline (MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavMesh::ToV3(SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavMesh_ToV3_m47A87565F2878C0802DE0D80E5B1AFBAB14EE1B3 (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_v, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 SharpNav.Pathfinding.Poly::get_VertCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Poly_get_VertCount_m4A450D850DD3A5DB062B44A7646A28C89438A159_inline (Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
inline void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared)(__this, ___0_index, ___1_value, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_indices, int32_t ___1_topology, int32_t ___2_submesh, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_Build_mA52B58419F5526B5E3A6D5B61142EAD2781DB9B6 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.DungeonEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonEventListener__ctor_m922ECF10BBFD6A5CE70AFCE0E110EEFE569DCB01 (DungeonEventListener_tDD3B54FF16033C77DFC0C51CAF87B8C85D4C00CF* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<DungeonArchitect.DungeonSceneProviderData>()
inline DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3 (const RuntimeMethod* method)
{
	return ((  DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.Collision2DTriangleProvider::AddTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision2DTriangleProvider_AddTriangles_mEE5433F0315DD220613857D5B473B84318E9D753 (Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_gameObject, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider2D>()
inline Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mCE8DC5951E769723B44EDB44E27A9FD57872E1EC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 DungeonArchitect.Utils.Matrix::FromGameTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix_FromGameTransform_mC51B7E15F87A62CEB132EF53921EC3E904A78089 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Utils.Matrix::DecomposeMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_DecomposeMatrix_mF670E9C9FBCCA971BCE5E3D8C4A0B7DAB0AE5243 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_localPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_localRotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_localScale, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DungeonArchitect.Utils.MathUtils::FlipYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtils_FlipYZ_m8347EAD3A9298AE62232FA514EEC5BE09ECCC8F0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_bounds, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.StaticMeshTriangleProvider::AddMeshTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.Vector3[],System.Int32[],UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMeshTriangleProvider_AddMeshTriangles_m1C415B5B1602C1B213E7E074D352F2AE248B6338 (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_vertices, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_indices, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_transform, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.NavigationTriangleProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationTriangleProvider__ctor_mB26639ADAFB5E6B5168DF2CD728D36AA0A7DC9C2 (NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.CollisionTriangleProvider::AddTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriangleProvider_AddTriangles_m93FF917EB2594AD994907CD27574D27A5C8C0E24 (CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_gameObject, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshCollider::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.StaticMeshTriangleProvider::AddMeshTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.Mesh,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMeshTriangleProvider_AddMeshTriangles_m2FFB29DD183854BB0842470AECE78FAC34F7E563 (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___1_mesh, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_transform, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.StaticMeshTriangleProvider::AddTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMeshTriangleProvider_AddTriangles_mBE1813CF70BC7BD3CDA3A3CC9D9879A8B8D10BF9 (StaticMeshTriangleProvider_t91A74BBAD481A972AB062B4971F03948B35F3D5C* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_gameObject, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshFilter>()
inline MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>::.ctor()
inline void List_1__ctor_m27EEF3D07EEFA922D8C70C9E696D1140E3742E58 (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D*, const RuntimeMethod*))List_1__ctor_m27EEF3D07EEFA922D8C70C9E696D1140E3742E58_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>::Add(T)
inline void List_1_Add_m272C6A5A3620E81931888D90AA9E9524D5C55214_inline (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* __this, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D*, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4, const RuntimeMethod*))List_1_Add_m272C6A5A3620E81931888D90AA9E9524D5C55214_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<SharpNav.Geometry.Vector3>::get_Item(System.Int32)
inline Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 (*) (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D*, int32_t, const RuntimeMethod*))List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E_gshared)(__this, ___0_index, method);
}
// System.Void SharpNav.Geometry.Triangle3::.ctor(SharpNav.Geometry.Vector3,SharpNav.Geometry.Vector3,SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle3__ctor_mE3A051C362CD6284A554EDA55439AB1D9B447ADE (Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB* __this, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_a, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___1_b, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___2_c, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>::Add(T)
inline void List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_inline (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* __this, Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2*, Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB, const RuntimeMethod*))List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Terrain_get_activeTerrain_mAE5A7FE933C2C1A57FC9542E9BFA315A413F224E (const RuntimeMethod* method) ;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Void DungeonArchitect.Navigation.TerrainTriangleProvider::AddTerrainTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTriangleProvider_AddTerrainTriangles_m2F8314EE16C975765CBA484C4CA3BBFD5BB07F5C (TerrainTriangleProvider_tC6AAA38C7EE500BFBE79C3D0C93E80F39D0C3286* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___1_terrain, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_heightmapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_heightmapScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_heightmapScale_m4B6AB6495384109BA54955CA52B883A118015188 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Single[,] UnityEngine.TerrainData::GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* TerrainData_GetHeights_m3E5C109E98E72A23E39B92F7DF48D87888B2D488 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___0_xBase, int32_t ___1_yBase, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
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
// System.Void DungeonArchitect.Navigation.DungeonNavAgent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent__ctor_m72115B9F8B17091CEF1EB07CF5C3BF03B754FEF0 (DungeonNavAgent_tDA71D081471ED0A7C4BB850D91F604AF86E293F9* __this, const RuntimeMethod* method) 
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
// DungeonArchitect.Navigation.DungeonNavMesh DungeonArchitect.Navigation.DungeonNavAgent2D::get_NavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* DungeonNavAgent2D_get_NavMesh_m14669021F412EF4310644044EFC6D9EF7B0136AE (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// return navMesh;
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_0 = __this->___navMesh_14;
		return L_0;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::get_Destination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_get_Destination_m1FAF061F30C27B3F6AE2337D61E06845AA38770F (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// return destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___destination_18;
		return L_0;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::set_Destination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_set_Destination_mC769F2EDE6BE8A905D36129583C2D86318EC4A14 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { destination = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___destination_18 = L_0;
		// set { destination = value; }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_get_Velocity_m777D093C0BFD247E8D738FEDE60A39F37B6C7546 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// if (agent == null) return Vector3.zero;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		bool L_1;
		L_1 = Agent_op_Equality_mFA90467E04255792F9FE0E79DB9195409EAB3904(L_0, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (agent == null) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_2;
	}

IL_0014:
	{
		// return ToV3(agent.Vel);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_3 = __this->___agent_19;
		NullCheck(L_3);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_4 = L_3->___Vel_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31(L_4, NULL);
		return L_5;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::set_Velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_set_Velocity_mD84DCE2EB6232BB199A8938A9AA793FBC7F7B26A (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// agent.Vel = ToSV3(value);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_2;
		L_2 = DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE(L_1, NULL);
		NullCheck(L_0);
		L_0->___Vel_15 = L_2;
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_get_Direction_mBF536AC0BC16E48716C8D2F3446847A291045B9A (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// return previousDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___previousDirection_17;
		return L_0;
	}
}
// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::get_DesiredSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DungeonNavAgent2D_get_DesiredSpeed_mD5EB230BAB77AFD900C0332293CFE98F2E41C19B (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// if (agent == null) return 0;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		bool L_1;
		L_1 = Agent_op_Equality_mFA90467E04255792F9FE0E79DB9195409EAB3904(L_0, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (agent == null) return 0;
		return (0.0f);
	}

IL_0014:
	{
		// return agent.DesiredSpeed;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_2 = __this->___agent_19;
		NullCheck(L_2);
		float L_3 = L_2->___DesiredSpeed_10;
		return L_3;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_OnDrawGizmosSelected_m4F42BC0939DF296674C63D11440EDC8EE0544FD7 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawWireSphere(destination, 0.1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___destination_18;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_1, (0.100000001f), NULL);
		// Gizmos.color = Color.cyan;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_2, NULL);
		// Gizmos.DrawWireSphere(FlipYZ(_debugNavDest), 0.1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____debugNavDest_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = DungeonNavAgent2D_FlipYZ_m9F19A8BBA68293D1864D4B2E13AD16CD94BF0577(__this, L_3, NULL);
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_4, (0.100000001f), NULL);
		// if (agent != null) {
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_5 = __this->___agent_19;
		bool L_6;
		L_6 = Agent_op_Inequality_mE495A95A594BBC56A0FCE696D61BF6D531DC9513(L_5, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_7, NULL);
		// Gizmos.DrawWireSphere(FlipYZ(ToV3(agent.Position)), radius);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_8 = __this->___agent_19;
		NullCheck(L_8);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_9;
		L_9 = Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = DungeonNavAgent2D_FlipYZ_m9F19A8BBA68293D1864D4B2E13AD16CD94BF0577(__this, L_10, NULL);
		float L_12 = __this->___radius_4;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_11, L_12, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::FlipYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_FlipYZ_m9F19A8BBA68293D1864D4B2E13AD16CD94BF0577 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_Awake_m46A23D92287ED68AA2206BCF6975A8648959D299 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9A81571F689ECEF1E439BA07A89AF84C926005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidBody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigidBody2D_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidBody2D_15), (void*)L_0);
		// if (rigidBody2D == null) {
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rigidBody2D_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.LogWarning("Rigid Body 2D not assigned to nav agent game object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD9A81571F689ECEF1E439BA07A89AF84C926005F, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_Start_m99EE71A3CDCEA76E8E6E3015D3428A815376CEC0 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880_m24D81C5B736C20D61A3AFEE0DEF906541D85712C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A782F4AEB8B2FCBAD85561BE2290CE78B20545C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF7DBB3CBDDF4032802976C1BE3AB567C69D8CDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF9E82BB9C8BE30EAFEEE5D64CEB45BAC3E19DE2);
		s_Il2CppMethodInitialized = true;
	}
	AgentParams_tAE0948B0349389CC357BAED3E3D3531203E97BF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// navMesh = GameObject.FindObjectOfType<DungeonNavMesh>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_0;
		L_0 = Object_FindObjectOfType_TisDungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880_m24D81C5B736C20D61A3AFEE0DEF906541D85712C(Object_FindObjectOfType_TisDungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880_m24D81C5B736C20D61A3AFEE0DEF906541D85712C_RuntimeMethod_var);
		__this->___navMesh_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navMesh_14), (void*)L_0);
		// if (navMesh == null || navMesh.NavMeshQuery == null)
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_1 = __this->___navMesh_14;
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_3 = __this->___navMesh_14;
		NullCheck(L_3);
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_4;
		L_4 = DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}

IL_0026:
	{
		// Debug.LogWarning("Cannot build initialize dungeon navigation agent. No dungeon navigation object found in the scene. Drop in the DungeonNavigation prefab into the scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral8A782F4AEB8B2FCBAD85561BE2290CE78B20545C, NULL);
		return;
	}

IL_0031:
	{
		// PositionOnNearestNavMesh();
		DungeonNavAgent2D_PositionOnNearestNavMesh_m03535961A568309890089B67DD5036426C8798C9(__this, NULL);
		// var agentParams = new SharpNav.Crowds.AgentParams();
		il2cpp_codegen_initobj((&V_0), sizeof(AgentParams_tAE0948B0349389CC357BAED3E3D3531203E97BF3));
		// agentParams.Radius = radius;
		float L_5 = __this->___radius_4;
		(&V_0)->___Radius_0 = L_5;
		// agentParams.Height = height;
		float L_6 = __this->___height_5;
		(&V_0)->___Height_1 = L_6;
		// agentParams.MaxAcceleration = maxAcceleration;
		float L_7 = __this->___maxAcceleration_6;
		(&V_0)->___MaxAcceleration_2 = L_7;
		// agentParams.MaxSpeed = maxSpeed;
		float L_8 = __this->___maxSpeed_7;
		(&V_0)->___MaxSpeed_3 = L_8;
		// agentParams.CollisionQueryRange = collisionQueryRange;
		float L_9 = __this->___collisionQueryRange_8;
		(&V_0)->___CollisionQueryRange_4 = L_9;
		// agentParams.PathOptimizationRange = pathOptimizationRange;
		float L_10 = __this->___pathOptimizationRange_9;
		(&V_0)->___PathOptimizationRange_5 = L_10;
		// agentParams.SeparationWeight = separationWeight;
		float L_11 = __this->___separationWeight_10;
		(&V_0)->___SeparationWeight_6 = L_11;
		// agentParams.UpdateFlags = UpdateFlags.Separation | UpdateFlags.OptimizeTopo;
		(&V_0)->___UpdateFlags_7 = ((int32_t)20);
		// var position = ActorPosition3D + new Vector3(navAgentCollisionOffset.x, 0, navAgentCollisionOffset.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = DungeonNavAgent2D_get_ActorPosition3D_mF0012D5E966413B18E5B34D6141E57A17849F447(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___navAgentCollisionOffset_11);
		float L_14 = L_13->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___navAgentCollisionOffset_11);
		float L_16 = L_15->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_14, (0.0f), L_16, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_17, NULL);
		// var sposition = ToSV3(position);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_19;
		L_19 = DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE(L_18, NULL);
		V_1 = L_19;
		// if (navMesh.Crowd == null) {
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_20 = __this->___navMesh_14;
		NullCheck(L_20);
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_21;
		L_21 = DungeonNavMesh_get_Crowd_m038118397F4A8B5F988F43E7F058305F4BBB2F3F_inline(L_20, NULL);
		if (L_21)
		{
			goto IL_00ec;
		}
	}
	{
		// Debug.Log ("Navmesh not initialized properly.  Crowd is null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDF9E82BB9C8BE30EAFEEE5D64CEB45BAC3E19DE2, NULL);
		// return;
		return;
	}

IL_00ec:
	{
		// agentId = navMesh.Crowd.AddAgent(sposition, agentParams);
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_22 = __this->___navMesh_14;
		NullCheck(L_22);
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_23;
		L_23 = DungeonNavMesh_get_Crowd_m038118397F4A8B5F988F43E7F058305F4BBB2F3F_inline(L_22, NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_24 = V_1;
		AgentParams_tAE0948B0349389CC357BAED3E3D3531203E97BF3 L_25 = V_0;
		NullCheck(L_23);
		int32_t L_26;
		L_26 = Crowd_AddAgent_m5F9E22305F5DE6318EEC1B8EF343BFA57D86D3D3(L_23, L_24, L_25, NULL);
		__this->___agentId_13 = L_26;
		// if (agentId >= 0) {
		int32_t L_27 = __this->___agentId_13;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_012a;
		}
	}
	{
		// agent = navMesh.Crowd.GetAgent(agentId);
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_28 = __this->___navMesh_14;
		NullCheck(L_28);
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_29;
		L_29 = DungeonNavMesh_get_Crowd_m038118397F4A8B5F988F43E7F058305F4BBB2F3F_inline(L_28, NULL);
		int32_t L_30 = __this->___agentId_13;
		NullCheck(L_29);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_31;
		L_31 = Crowd_GetAgent_mB1B38B409CD61BA9029DCD93B108E7D87662A4A7(L_29, L_30, NULL);
		__this->___agent_19 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_19), (void*)L_31);
		return;
	}

IL_012a:
	{
		// Debug.Log ("Cannot create crowd nav agent");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBF7DBB3CBDDF4032802976C1BE3AB567C69D8CDA, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::get_ActorPosition3DX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_get_ActorPosition3DX_m345F66FF0A772AC794131F8FA2315A26A1F3FE0F (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// get { return (transform.position); }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		return L_1;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::set_ActorPosition3DX(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_set_ActorPosition3DX_m5671BB2CFCAE04374CE8AC2364B8A72087F2C65B (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.position = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::get_ActorPosition3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_get_ActorPosition3D_mF0012D5E966413B18E5B34D6141E57A17849F447 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// get { return FlipYZ(transform.position); }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = DungeonNavAgent2D_FlipYZ_m9F19A8BBA68293D1864D4B2E13AD16CD94BF0577(__this, L_1, NULL);
		return L_2;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::set_ActorPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_set_ActorPosition3D_m784B32924D1F7FF1AABE18EEF5195588F7CE3427 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var flipped = FlipYZ (value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = DungeonNavAgent2D_FlipYZ_m9F19A8BBA68293D1864D4B2E13AD16CD94BF0577(__this, L_0, NULL);
		V_0 = L_1;
		// flipped.z = 0;
		(&V_0)->___z_4 = (0.0f);
		// transform.position = flipped;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::PositionOnNearestNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_PositionOnNearestNavMesh_m03535961A568309890089B67DD5036426C8798C9 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var navPoint = navMesh.NavMeshQuery.FindNearestPoly(ToSV3(ActorPosition3D), ToSV3(Vector3.one * 6));
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_0 = __this->___navMesh_14;
		NullCheck(L_0);
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_1;
		L_1 = DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = DungeonNavAgent2D_get_ActorPosition3D_mF0012D5E966413B18E5B34D6141E57A17849F447(__this, NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_3;
		L_3 = DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, (6.0f), NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_6;
		L_6 = DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE(L_5, NULL);
		NullCheck(L_1);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_7;
		L_7 = NavMeshQuery_FindNearestPoly_m55301E695B88DE5A539554F9C1B9C05A665B373B(L_1, L_3, L_6, NULL);
		V_0 = L_7;
		// ActorPosition3D = ToV3 (navPoint.Position);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_8 = V_0;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_9 = L_8.___Position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31(L_9, NULL);
		DungeonNavAgent2D_set_ActorPosition3D_m784B32924D1F7FF1AABE18EEF5195588F7CE3427(__this, L_10, NULL);
		// }
		return;
	}
}
// SharpNav.Geometry.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::ToSV3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new SharpNav.Geometry.Vector3(v.x, v.y, v.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z_4;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m168D4D359A145D225B2579608B75AABFF6ABD4C5((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent2D::ToV3(SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31 (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3(v.X, v.Y, v.Z);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_0 = ___0_v;
		float L_1 = L_0.___X_0;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_2 = ___0_v;
		float L_3 = L_2.___Y_1;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_4 = ___0_v;
		float L_5 = L_4.___Z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_Stop_mA4F19ADED00C69BE0D0F0B9F53222FAB8929D15F (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (agent != null) {
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		bool L_1;
		L_1 = Agent_op_Inequality_mE495A95A594BBC56A0FCE696D61BF6D531DC9513(L_0, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		// var navPoint = navMesh.NavMeshQuery.FindNearestPoly(agent.Position, ToSV3(Vector3.one * 4));
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_2 = __this->___navMesh_14;
		NullCheck(L_2);
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_3;
		L_3 = DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline(L_2, NULL);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_4 = __this->___agent_19;
		NullCheck(L_4);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_5;
		L_5 = Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, (4.0f), NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_8;
		L_8 = DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE(L_7, NULL);
		NullCheck(L_3);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_9;
		L_9 = NavMeshQuery_FindNearestPoly_m55301E695B88DE5A539554F9C1B9C05A665B373B(L_3, L_5, L_8, NULL);
		V_0 = L_9;
		// agent.Reset (navPoint.Polygon, navPoint.Position);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_10 = __this->___agent_19;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_11 = V_0;
		int32_t L_12 = L_11.___Polygon_1;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_13 = V_0;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_14 = L_13.___Position_2;
		NullCheck(L_10);
		Agent_Reset_m06C84F921EB0EF3D947E6B6C1276C56EC3D9226E(L_10, L_12, L_14, NULL);
	}

IL_0055:
	{
		// rigidBody2D.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15 = __this->___rigidBody2D_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_15);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_15, L_16, NULL);
		// running = false;
		__this->___running_16 = (bool)0;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_Resume_m3E73849B64FC70DEA407BBDF647B5596FBE4FE1A (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// running = true;
		__this->___running_16 = (bool)1;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_Update_m2E89F3A26FE25FA22189A1335F8A3811F9A4D2AC (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Single DungeonArchitect.Navigation.DungeonNavAgent2D::GetRemainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DungeonNavAgent2D_GetRemainingDistance_mAE7E2E0DE3F9665AA2A264DDBE6D0891E6CF3B03 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (agent == null) return 0;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		bool L_1;
		L_1 = Agent_op_Equality_mFA90467E04255792F9FE0E79DB9195409EAB3904(L_0, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (agent == null) return 0;
		return (0.0f);
	}

IL_0014:
	{
		// var direction = (ToV3(agent.TargetPosition) - ActorPosition3D);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_2 = __this->___agent_19;
		NullCheck(L_2);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_3;
		L_3 = Agent_get_TargetPosition_m8658806B510BEC0788ECB2F2C51F885AF7DF525A_inline(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = DungeonNavAgent2D_get_ActorPosition3D_mF0012D5E966413B18E5B34D6141E57A17849F447(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// direction.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// return direction.magnitude;
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		return L_7;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D_FixedUpdate_mED704BD0DD06AE38596AF636590F62429216414C (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 V_3;
	memset((&V_3), 0, sizeof(V_3));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (running && agent != null) {
		bool L_0 = __this->___running_16;
		if (!L_0)
		{
			goto IL_0144;
		}
	}
	{
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_1 = __this->___agent_19;
		bool L_2;
		L_2 = Agent_op_Inequality_mE495A95A594BBC56A0FCE696D61BF6D531DC9513(L_1, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0144;
		}
	}
	{
		// var resetDistanceThreshold = 4;
		V_0 = 4;
		// var distanceToNavAgent = (ActorPosition3D - ToV3(agent.Position)).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = DungeonNavAgent2D_get_ActorPosition3D_mF0012D5E966413B18E5B34D6141E57A17849F447(__this, NULL);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_4 = __this->___agent_19;
		NullCheck(L_4);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_5;
		L_5 = Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_6, NULL);
		V_1 = L_7;
		float L_8;
		L_8 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		// if (distanceToNavAgent > resetDistanceThreshold) {
		int32_t L_9 = V_0;
		if ((!(((float)L_8) > ((float)((float)L_9)))))
		{
			goto IL_005b;
		}
	}
	{
		// ActorPosition3D = ToV3(agent.Position);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_10 = __this->___agent_19;
		NullCheck(L_10);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_11;
		L_11 = Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31(L_11, NULL);
		DungeonNavAgent2D_set_ActorPosition3D_m784B32924D1F7FF1AABE18EEF5195588F7CE3427(__this, L_12, NULL);
	}

IL_005b:
	{
		// var svelocity = agent.Vel;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_13 = __this->___agent_19;
		NullCheck(L_13);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_14 = L_13->___Vel_15;
		// var velocity = ToV3 (svelocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31(L_14, NULL);
		V_2 = L_15;
		// rigidBody2D.velocity = FlipYZ(velocity);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_16 = __this->___rigidBody2D_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = DungeonNavAgent2D_FlipYZ_m9F19A8BBA68293D1864D4B2E13AD16CD94BF0577(__this, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		NullCheck(L_16);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_16, L_19, NULL);
		// if (velocity.sqrMagnitude > 0.01f) {
		float L_20;
		L_20 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		if ((!(((float)L_20) > ((float)(0.00999999978f)))))
		{
			goto IL_009e;
		}
	}
	{
		// previousDirection = velocity.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		__this->___previousDirection_17 = L_21;
	}

IL_009e:
	{
	}
	try
	{// begin try (depth: 1)
		// var navPoint = navMesh.NavMeshQuery.FindNearestPoly(ToSV3(ActorPosition3D), ToSV3(Vector3.one * 2));
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_22 = __this->___navMesh_14;
		NullCheck(L_22);
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_23;
		L_23 = DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = DungeonNavAgent2D_get_ActorPosition3D_mF0012D5E966413B18E5B34D6141E57A17849F447(__this, NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_25;
		L_25 = DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, (2.0f), NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_28;
		L_28 = DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE(L_27, NULL);
		NullCheck(L_23);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_29;
		L_29 = NavMeshQuery_FindNearestPoly_m55301E695B88DE5A539554F9C1B9C05A665B373B(L_23, L_25, L_28, NULL);
		V_3 = L_29;
		// agent.Position = navPoint.Position;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_30 = __this->___agent_19;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_31 = V_3;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_32 = L_31.___Position_2;
		NullCheck(L_30);
		Agent_set_Position_mD34FC14E5BC00C636B9AE801C210ED33C0F018A7_inline(L_30, L_32, NULL);
		// navPoint = navMesh.NavMeshQuery.FindNearestPoly(ToSV3(FlipYZ(destination)), ToSV3(Vector3.one * 2));
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_33 = __this->___navMesh_14;
		NullCheck(L_33);
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_34;
		L_34 = DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___destination_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = DungeonNavAgent2D_FlipYZ_m9F19A8BBA68293D1864D4B2E13AD16CD94BF0577(__this, L_35, NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_37;
		L_37 = DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, (2.0f), NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_40;
		L_40 = DungeonNavAgent2D_ToSV3_m811CF875BD131B16538ECA32FE7EE0B1EE95FDCE(L_39, NULL);
		NullCheck(L_34);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_41;
		L_41 = NavMeshQuery_FindNearestPoly_m55301E695B88DE5A539554F9C1B9C05A665B373B(L_34, L_37, L_40, NULL);
		V_3 = L_41;
		// agent.RequestMoveTarget(navPoint.Polygon, navPoint.Position);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_42 = __this->___agent_19;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_43 = V_3;
		int32_t L_44 = L_43.___Polygon_1;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_45 = V_3;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_46 = L_45.___Position_2;
		NullCheck(L_42);
		bool L_47;
		L_47 = Agent_RequestMoveTarget_mFC81F70BE2C09B1D447CDC2DCAD8B216B07DCD11(L_42, L_44, L_46, NULL);
		// _debugNavDest = ToV3 (navPoint.Position);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_48 = V_3;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_49 = L_48.___Position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = DungeonNavAgent2D_ToV3_m7F5D99F23FB7AA453A8FE88F3014FD29C1E51C31(L_49, NULL);
		__this->____debugNavDest_20 = L_50;
		// } catch(System.Exception) {
		goto IL_0144;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0141;
		}
		throw e;
	}

CATCH_0141:
	{// begin catch(System.Exception)
		// } catch(System.Exception) {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0144;
	}// end catch (depth: 1)

IL_0144:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent2D__ctor_mBDF4C15A6C241EFCB222CC596D8B145879E205C8 (DungeonNavAgent2D_tFC902123C0AA6C132A57EDFFA0F40778C229DFD9* __this, const RuntimeMethod* method) 
{
	{
		// public float radius = 0.5f;
		__this->___radius_4 = (0.5f);
		// public float height = 1f;
		__this->___height_5 = (1.0f);
		// public float maxAcceleration = 8;
		__this->___maxAcceleration_6 = (8.0f);
		// public float maxSpeed = 3f;
		__this->___maxSpeed_7 = (3.0f);
		// public float collisionQueryRange = 4;
		__this->___collisionQueryRange_8 = (4.0f);
		// public float pathOptimizationRange = 15;
		__this->___pathOptimizationRange_9 = (15.0f);
		// public float separationWeight = 3;
		__this->___separationWeight_10 = (3.0f);
		// public float updateFrequency = 2;
		__this->___updateFrequency_12 = (2.0f);
		// bool running = true;
		__this->___running_16 = (bool)1;
		// Vector3 previousDirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___previousDirection_17 = L_0;
		// Vector3 _debugNavDest = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____debugNavDest_20 = L_1;
		DungeonNavAgent__ctor_m72115B9F8B17091CEF1EB07CF5C3BF03B754FEF0(__this, NULL);
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
// DungeonArchitect.Navigation.DungeonNavMesh DungeonArchitect.Navigation.DungeonNavAgent3D::get_NavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* DungeonNavAgent3D_get_NavMesh_mC929D67D57D23F1033D214D58CE9A123846259D4 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	{
		// return navMesh;
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_0 = __this->___navMesh_16;
		return L_0;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent3D::get_Destination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent3D_get_Destination_mE64954DEC0AF233ABC237EA05BD75B8600BC30C6 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	{
		// return destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___destination_18;
		return L_0;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::set_Destination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_set_Destination_m27578331C96ED17F38FA779D3E36977768C189AD (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { destination = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___destination_18 = L_0;
		// set { destination = value; }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent3D::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent3D_get_Velocity_m261EAFC0099F778B6D0A68F61E33F73C89356008 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	{
		// if (agent == null) return Vector3.zero;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		bool L_1;
		L_1 = Agent_op_Equality_mFA90467E04255792F9FE0E79DB9195409EAB3904(L_0, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (agent == null) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_2;
	}

IL_0014:
	{
		// return ToV3(agent.Vel);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_3 = __this->___agent_19;
		NullCheck(L_3);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_4 = L_3->___Vel_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = DungeonNavAgent3D_ToV3_m638DF36E4BA515685D05BF365BA8773B02C757F6(L_4, NULL);
		return L_5;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::set_Velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_set_Velocity_m87FE356C2EF5551E7CABFF0930E573B649C6BD96 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// agent.Vel = ToSV3(value);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_2;
		L_2 = DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF(L_1, NULL);
		NullCheck(L_0);
		L_0->___Vel_15 = L_2;
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent3D::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent3D_get_Direction_mEE8455A827DD8E8BF347FA59C9880AAC2046B948 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Velocity.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(9 /* UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent::get_Velocity() */, __this);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_1;
	}
}
// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::get_DesiredSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DungeonNavAgent3D_get_DesiredSpeed_m61104DDADF6EB923C0D9B5CA0B8C424E3EF37681 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	{
		// if (agent == null) return 0;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		bool L_1;
		L_1 = Agent_op_Equality_mFA90467E04255792F9FE0E79DB9195409EAB3904(L_0, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (agent == null) return 0;
		return (0.0f);
	}

IL_0014:
	{
		// return agent.DesiredSpeed;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_2 = __this->___agent_19;
		NullCheck(L_2);
		float L_3 = L_2->___DesiredSpeed_10;
		return L_3;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_OnDrawGizmosSelected_m83093CD3B510E7DA17CBAD96C2A74BD0C5549991 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	{
		// if (agent != null) {
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		bool L_1;
		L_1 = Agent_op_Inequality_mE495A95A594BBC56A0FCE696D61BF6D531DC9513(L_0, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// Gizmos.DrawSphere(ToV3(agent.Position), 1);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_2 = __this->___agent_19;
		NullCheck(L_2);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_3;
		L_3 = Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = DungeonNavAgent3D_ToV3_m638DF36E4BA515685D05BF365BA8773B02C757F6(L_3, NULL);
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_4, (1.0f), NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_Start_m554E4B38A1BCE6EAB5AA2B73E33BD6894A5FFE55 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880_m24D81C5B736C20D61A3AFEE0DEF906541D85712C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A782F4AEB8B2FCBAD85561BE2290CE78B20545C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF7DBB3CBDDF4032802976C1BE3AB567C69D8CDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF9E82BB9C8BE30EAFEEE5D64CEB45BAC3E19DE2);
		s_Il2CppMethodInitialized = true;
	}
	AgentParams_tAE0948B0349389CC357BAED3E3D3531203E97BF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// character = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___character_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___character_14), (void*)L_0);
		// navMesh = GameObject.FindObjectOfType<DungeonNavMesh>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_1;
		L_1 = Object_FindObjectOfType_TisDungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880_m24D81C5B736C20D61A3AFEE0DEF906541D85712C(Object_FindObjectOfType_TisDungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880_m24D81C5B736C20D61A3AFEE0DEF906541D85712C_RuntimeMethod_var);
		__this->___navMesh_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navMesh_16), (void*)L_1);
		// if (navMesh == null)
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_2 = __this->___navMesh_16;
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogWarning("Cannot build initialize dungeon navigation agent. No dungeon navigation object found in the scene. Drop in the DungeonNavigation prefab into the scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral8A782F4AEB8B2FCBAD85561BE2290CE78B20545C, NULL);
		return;
	}

IL_0030:
	{
		// PositionOnNearestNavMesh();
		DungeonNavAgent3D_PositionOnNearestNavMesh_mBCABEB9A13C3D082F4178B1B60F8F385FB160A95(__this, NULL);
		// var agentParams = new SharpNav.Crowds.AgentParams();
		il2cpp_codegen_initobj((&V_0), sizeof(AgentParams_tAE0948B0349389CC357BAED3E3D3531203E97BF3));
		// agentParams.Radius = radius;
		float L_4 = __this->___radius_4;
		(&V_0)->___Radius_0 = L_4;
		// agentParams.Height = height;
		float L_5 = __this->___height_5;
		(&V_0)->___Height_1 = L_5;
		// agentParams.MaxAcceleration = maxAcceleration;
		float L_6 = __this->___maxAcceleration_6;
		(&V_0)->___MaxAcceleration_2 = L_6;
		// agentParams.MaxSpeed = maxSpeed;
		float L_7 = __this->___maxSpeed_7;
		(&V_0)->___MaxSpeed_3 = L_7;
		// agentParams.CollisionQueryRange = collisionQueryRange;
		float L_8 = __this->___collisionQueryRange_8;
		(&V_0)->___CollisionQueryRange_4 = L_8;
		// agentParams.PathOptimizationRange = pathOptimizationRange;
		float L_9 = __this->___pathOptimizationRange_9;
		(&V_0)->___PathOptimizationRange_5 = L_9;
		// agentParams.SeparationWeight = separationWeight;
		float L_10 = __this->___separationWeight_10;
		(&V_0)->___SeparationWeight_6 = L_10;
		// agentParams.UpdateFlags = UpdateFlags.Separation | UpdateFlags.OptimizeTopo;
		(&V_0)->___UpdateFlags_7 = ((int32_t)20);
		// var position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		// var sposition = ToSV3(position);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_13;
		L_13 = DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF(L_12, NULL);
		V_1 = L_13;
		// if (navMesh.Crowd == null) {
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_14 = __this->___navMesh_16;
		NullCheck(L_14);
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_15;
		L_15 = DungeonNavMesh_get_Crowd_m038118397F4A8B5F988F43E7F058305F4BBB2F3F_inline(L_14, NULL);
		if (L_15)
		{
			goto IL_00cb;
		}
	}
	{
		// Debug.Log ("Navmesh not initialized properly.  Crowd is null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDF9E82BB9C8BE30EAFEEE5D64CEB45BAC3E19DE2, NULL);
		// return;
		return;
	}

IL_00cb:
	{
		// agentId = navMesh.Crowd.AddAgent(sposition, agentParams);
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_16 = __this->___navMesh_16;
		NullCheck(L_16);
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_17;
		L_17 = DungeonNavMesh_get_Crowd_m038118397F4A8B5F988F43E7F058305F4BBB2F3F_inline(L_16, NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_18 = V_1;
		AgentParams_tAE0948B0349389CC357BAED3E3D3531203E97BF3 L_19 = V_0;
		NullCheck(L_17);
		int32_t L_20;
		L_20 = Crowd_AddAgent_m5F9E22305F5DE6318EEC1B8EF343BFA57D86D3D3(L_17, L_18, L_19, NULL);
		__this->___agentId_15 = L_20;
		// if (agentId >= 0) {
		int32_t L_21 = __this->___agentId_15;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		// agent = navMesh.Crowd.GetAgent(agentId);
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_22 = __this->___navMesh_16;
		NullCheck(L_22);
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_23;
		L_23 = DungeonNavMesh_get_Crowd_m038118397F4A8B5F988F43E7F058305F4BBB2F3F_inline(L_22, NULL);
		int32_t L_24 = __this->___agentId_15;
		NullCheck(L_23);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_25;
		L_25 = Crowd_GetAgent_mB1B38B409CD61BA9029DCD93B108E7D87662A4A7(L_23, L_24, NULL);
		__this->___agent_19 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_19), (void*)L_25);
		return;
	}

IL_0109:
	{
		// Debug.Log ("Cannot create crowd nav agent");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBF7DBB3CBDDF4032802976C1BE3AB567C69D8CDA, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::PositionOnNearestNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_PositionOnNearestNavMesh_mBCABEB9A13C3D082F4178B1B60F8F385FB160A95 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var navPoint = navMesh.NavMeshQuery.FindNearestPoly(ToSV3(transform.position), ToSV3(Vector3.one * 6));
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_0 = __this->___navMesh_16;
		NullCheck(L_0);
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_1;
		L_1 = DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_4;
		L_4 = DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, (6.0f), NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_7;
		L_7 = DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF(L_6, NULL);
		NullCheck(L_1);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_8;
		L_8 = NavMeshQuery_FindNearestPoly_m55301E695B88DE5A539554F9C1B9C05A665B373B(L_1, L_4, L_7, NULL);
		V_0 = L_8;
		// transform.position = ToV3 (navPoint.Position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_10 = V_0;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_11 = L_10.___Position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = DungeonNavAgent3D_ToV3_m638DF36E4BA515685D05BF365BA8773B02C757F6(L_11, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_12, NULL);
		// }
		return;
	}
}
// SharpNav.Geometry.Vector3 DungeonArchitect.Navigation.DungeonNavAgent3D::ToSV3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new SharpNav.Geometry.Vector3(v.x, v.y, v.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z_4;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m168D4D359A145D225B2579608B75AABFF6ABD4C5((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavAgent3D::ToV3(SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavAgent3D_ToV3_m638DF36E4BA515685D05BF365BA8773B02C757F6 (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3(v.X, v.Y, v.Z);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_0 = ___0_v;
		float L_1 = L_0.___X_0;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_2 = ___0_v;
		float L_3 = L_2.___Y_1;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_4 = ___0_v;
		float L_5 = L_4.___Z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_Stop_mC7EB6D68A491AF19133F077E83D3555E05CA87B7 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (agent != null) {
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		bool L_1;
		L_1 = Agent_op_Inequality_mE495A95A594BBC56A0FCE696D61BF6D531DC9513(L_0, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		// var navPoint = navMesh.NavMeshQuery.FindNearestPoly(agent.Position, ToSV3(Vector3.one * 4));
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_2 = __this->___navMesh_16;
		NullCheck(L_2);
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_3;
		L_3 = DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline(L_2, NULL);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_4 = __this->___agent_19;
		NullCheck(L_4);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_5;
		L_5 = Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, (4.0f), NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_8;
		L_8 = DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF(L_7, NULL);
		NullCheck(L_3);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_9;
		L_9 = NavMeshQuery_FindNearestPoly_m55301E695B88DE5A539554F9C1B9C05A665B373B(L_3, L_5, L_8, NULL);
		V_0 = L_9;
		// agent.Reset (navPoint.Polygon, navPoint.Position);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_10 = __this->___agent_19;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_11 = V_0;
		int32_t L_12 = L_11.___Polygon_1;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_13 = V_0;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_14 = L_13.___Position_2;
		NullCheck(L_10);
		Agent_Reset_m06C84F921EB0EF3D947E6B6C1276C56EC3D9226E(L_10, L_12, L_14, NULL);
	}

IL_0055:
	{
		// running = false;
		__this->___running_17 = (bool)0;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_Resume_mB6A6645BD5CF026CFD9EF8AECB80A689FBA103BE (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	{
		// running = true;
		__this->___running_17 = (bool)1;
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_Update_m2A8A1A19AC80DD7ED0E0F71578F78817D874B681 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Single DungeonArchitect.Navigation.DungeonNavAgent3D::GetRemainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DungeonNavAgent3D_GetRemainingDistance_mF83F8BCB09F5B5D00BDC2F3E5E8A63152D741787 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (agent == null) return 0;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_0 = __this->___agent_19;
		bool L_1;
		L_1 = Agent_op_Equality_mFA90467E04255792F9FE0E79DB9195409EAB3904(L_0, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (agent == null) return 0;
		return (0.0f);
	}

IL_0014:
	{
		// var direction = (ToV3(agent.TargetPosition) - transform.position);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_2 = __this->___agent_19;
		NullCheck(L_2);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_3;
		L_3 = Agent_get_TargetPosition_m8658806B510BEC0788ECB2F2C51F885AF7DF525A_inline(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = DungeonNavAgent3D_ToV3_m638DF36E4BA515685D05BF365BA8773B02C757F6(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_6, NULL);
		V_0 = L_7;
		// direction.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// return direction.magnitude;
		float L_8;
		L_8 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		return L_8;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_FixedUpdate_mBB542059D9C36F5725DDBA8124B7979BAE29306A (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// timeSinceLastNavUpdate += Time.fixedDeltaTime;
		float L_0 = __this->___timeSinceLastNavUpdate_13;
		float L_1;
		L_1 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		__this->___timeSinceLastNavUpdate_13 = ((float)il2cpp_codegen_add(L_0, L_1));
		// bool recalculatePath = false;
		V_0 = (bool)0;
		// if (updateFrequency == 0)
		float L_2 = __this->___updateFrequency_12;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// recalculatePath = true;
		V_0 = (bool)1;
		goto IL_0052;
	}

IL_0025:
	{
		// float frameTime = 1.0f / Mathf.Max(1, updateFrequency);
		float L_3 = __this->___updateFrequency_12;
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((1.0f), L_3, NULL);
		V_1 = ((float)((1.0f)/L_4));
		// if (timeSinceLastNavUpdate >= frameTime)
		float L_5 = __this->___timeSinceLastNavUpdate_13;
		float L_6 = V_1;
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_0052;
		}
	}
	{
		// recalculatePath = true;
		V_0 = (bool)1;
		// timeSinceLastNavUpdate = 0;
		__this->___timeSinceLastNavUpdate_13 = (0.0f);
	}

IL_0052:
	{
		// ProcessMove(recalculatePath);
		bool L_7 = V_0;
		DungeonNavAgent3D_ProcessMove_mAF0F37899DAAF401F2CBF1884E4FC7AA11FD82C4(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::ProcessMove(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D_ProcessMove_mAF0F37899DAAF401F2CBF1884E4FC7AA11FD82C4 (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, bool ___0_recalculatePath, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 V_5;
	memset((&V_5), 0, sizeof(V_5));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (running && agent != null && character.enabled) {
		bool L_0 = __this->___running_17;
		if (!L_0)
		{
			goto IL_01b0;
		}
	}
	{
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_1 = __this->___agent_19;
		bool L_2;
		L_2 = Agent_op_Inequality_mE495A95A594BBC56A0FCE696D61BF6D531DC9513(L_1, (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9*)NULL, NULL);
		if (!L_2)
		{
			goto IL_01b0;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_3 = __this->___character_14;
		NullCheck(L_3);
		bool L_4;
		L_4 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_3, NULL);
		if (!L_4)
		{
			goto IL_01b0;
		}
	}
	{
		// var resetDistanceThreshold = 4;
		V_0 = 4;
		// var distanceToNavAgent = (transform.position - ToV3(agent.Position)).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_7 = __this->___agent_19;
		NullCheck(L_7);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_8;
		L_8 = Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = DungeonNavAgent3D_ToV3_m638DF36E4BA515685D05BF365BA8773B02C757F6(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		// if (distanceToNavAgent > resetDistanceThreshold) {
		int32_t L_12 = V_0;
		if ((!(((float)L_11) > ((float)((float)L_12)))))
		{
			goto IL_0075;
		}
	}
	{
		// transform.position = ToV3(agent.Position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_14 = __this->___agent_19;
		NullCheck(L_14);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_15;
		L_15 = Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = DungeonNavAgent3D_ToV3_m638DF36E4BA515685D05BF365BA8773B02C757F6(L_15, NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_16, NULL);
	}

IL_0075:
	{
		// var svelocity = agent.Vel;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_17 = __this->___agent_19;
		NullCheck(L_17);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_18 = L_17->___Vel_15;
		// var velocity = ToV3 (svelocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = DungeonNavAgent3D_ToV3_m638DF36E4BA515685D05BF365BA8773B02C757F6(L_18, NULL);
		V_2 = L_19;
		// if (!character.isGrounded) {
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_20 = __this->___character_14;
		NullCheck(L_20);
		bool L_21;
		L_21 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_20, NULL);
		if (L_21)
		{
			goto IL_00af;
		}
	}
	{
		// velocity += new Vector3(0, gravity, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		float L_23 = __this->___gravity_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (0.0f), L_23, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_24, NULL);
		V_2 = L_25;
	}

IL_00af:
	{
		// bool moved = false; //character.SimpleMove(velocity);
		// if (!moved) {
		if (0)
		{
			goto IL_00df;
		}
	}
	{
		// if (recalculatePath)
		bool L_26 = ___0_recalculatePath;
		if (!L_26)
		{
			goto IL_00d2;
		}
	}
	{
		// var delta = velocity * Time.fixedDeltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		float L_28;
		L_28 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		V_4 = L_29;
		// character.Move(delta);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_30 = __this->___character_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32;
		L_32 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_30, L_31, NULL);
		goto IL_00df;
	}

IL_00d2:
	{
		// character.SimpleMove(velocity);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_33 = __this->___character_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		bool L_35;
		L_35 = CharacterController_SimpleMove_mE32A48D439878B3241E8456F8EBFAAE264BD705C(L_33, L_34, NULL);
	}

IL_00df:
	{
		// var direction = velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_2;
		V_3 = L_36;
		// direction.y = 0;
		(&V_3)->___y_3 = (0.0f);
		// var speedSq = direction.sqrMagnitude;
		float L_37;
		L_37 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_3), NULL);
		// if (speedSq > 0.01f) {
		if ((!(((float)L_37) > ((float)(0.00999999978f)))))
		{
			goto IL_0112;
		}
	}
	{
		// transform.rotation = Quaternion.LookRotation(direction.normalized);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_39, NULL);
		NullCheck(L_38);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_38, L_40, NULL);
	}

IL_0112:
	{
		// if (recalculatePath)
		bool L_41 = ___0_recalculatePath;
		if (!L_41)
		{
			goto IL_01b0;
		}
	}
	try
	{// begin try (depth: 1)
		// var navPoint = navMesh.NavMeshQuery.FindNearestPoly(ToSV3(transform.position), ToSV3(Vector3.one * 2));
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_42 = __this->___navMesh_16;
		NullCheck(L_42);
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_43;
		L_43 = DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline(L_42, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_46;
		L_46 = DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_47, (2.0f), NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_49;
		L_49 = DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF(L_48, NULL);
		NullCheck(L_43);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_50;
		L_50 = NavMeshQuery_FindNearestPoly_m55301E695B88DE5A539554F9C1B9C05A665B373B(L_43, L_46, L_49, NULL);
		V_5 = L_50;
		// agent.Position = navPoint.Position;
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_51 = __this->___agent_19;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_52 = V_5;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_53 = L_52.___Position_2;
		NullCheck(L_51);
		Agent_set_Position_mD34FC14E5BC00C636B9AE801C210ED33C0F018A7_inline(L_51, L_53, NULL);
		// navPoint = navMesh.NavMeshQuery.FindNearestPoly(ToSV3(destination), ToSV3(Vector3.one * 2));
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_54 = __this->___navMesh_16;
		NullCheck(L_54);
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_55;
		L_55 = DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = __this->___destination_18;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_57;
		L_57 = DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF(L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_58, (2.0f), NULL);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_60;
		L_60 = DungeonNavAgent3D_ToSV3_m2EDFA574BD96912E58FE7A7B3D8C305A2ED124DF(L_59, NULL);
		NullCheck(L_55);
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_61;
		L_61 = NavMeshQuery_FindNearestPoly_m55301E695B88DE5A539554F9C1B9C05A665B373B(L_55, L_57, L_60, NULL);
		V_5 = L_61;
		// agent.RequestMoveTarget(navPoint.Polygon, navPoint.Position);
		Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* L_62 = __this->___agent_19;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_63 = V_5;
		int32_t L_64 = L_63.___Polygon_1;
		NavPoint_t0709D1F84BB0C556CC9348CE6ABE33878E885364 L_65 = V_5;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_66 = L_65.___Position_2;
		NullCheck(L_62);
		bool L_67;
		L_67 = Agent_RequestMoveTarget_mFC81F70BE2C09B1D447CDC2DCAD8B216B07DCD11(L_62, L_64, L_66, NULL);
		// }
		goto IL_01b0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ad;
		}
		throw e;
	}

CATCH_01ad:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b0;
	}// end catch (depth: 1)

IL_01b0:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavAgent3D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavAgent3D__ctor_m3ACD6DFD1B6706929126E46284324B4EB0DF686B (DungeonNavAgent3D_t6144F8B6C158DB42E1EF7CDEB71D516E02505E5D* __this, const RuntimeMethod* method) 
{
	{
		// public float radius = 0.5f;
		__this->___radius_4 = (0.5f);
		// public float height = 1f;
		__this->___height_5 = (1.0f);
		// public float maxAcceleration = 8;
		__this->___maxAcceleration_6 = (8.0f);
		// public float maxSpeed = 3f;
		__this->___maxSpeed_7 = (3.0f);
		// public float collisionQueryRange = 4;
		__this->___collisionQueryRange_8 = (4.0f);
		// public float pathOptimizationRange = 15;
		__this->___pathOptimizationRange_9 = (15.0f);
		// public float separationWeight = 3;
		__this->___separationWeight_10 = (3.0f);
		// public float gravity = -10;
		__this->___gravity_11 = (-10.0f);
		// public float updateFrequency = 2;
		__this->___updateFrequency_12 = (2.0f);
		// bool running = true;
		__this->___running_17 = (bool)1;
		DungeonNavAgent__ctor_m72115B9F8B17091CEF1EB07CF5C3BF03B754FEF0(__this, NULL);
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
// System.Void DungeonArchitect.Navigation.NavigationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationEvent__ctor_mEF34CCF9EA31B1EB75934051F90A8D67929D22DE (NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* __this, const RuntimeMethod* method) 
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
void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_Multicast(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* currentDelegate = reinterpret_cast<OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenInst(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method)
{
	NullCheck(___0_e);
	typedef void (*FunctionPointerType) (NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_e, method);
}
void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenStatic(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_e, method);
}
void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenStaticInvoker(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method)
{
	InvokerActionInvoker1< NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_e);
}
void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_ClosedStaticInvoker(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_e);
}
void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenVirtual(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method)
{
	NullCheck(___0_e);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_e);
}
void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenInterface(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method)
{
	NullCheck(___0_e);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_e);
}
void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenGenericVirtual(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method)
{
	NullCheck(___0_e);
	GenericVirtualActionInvoker0::Invoke(method, ___0_e);
}
void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenGenericInterface(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method)
{
	NullCheck(___0_e);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_e);
}
// System.Void DungeonArchitect.Navigation.OnNavmeshBuiltDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavmeshBuiltDelegate__ctor_m76DED918F0B329245FEFEBC8E99B9E1F93B4BBB3 (OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenStatic;
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
						__this->___invoke_impl_1 = (intptr_t)&OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_Multicast;
}
// System.Void DungeonArchitect.Navigation.OnNavmeshBuiltDelegate::Invoke(DungeonArchitect.Navigation.NavigationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9 (OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DungeonArchitect.Navigation.OnNavmeshBuiltDelegate::BeginInvoke(DungeonArchitect.Navigation.NavigationEvent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnNavmeshBuiltDelegate_BeginInvoke_mEADEAEF97B19049A34836660CFEB455C629B41CE (OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_e;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void DungeonArchitect.Navigation.OnNavmeshBuiltDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavmeshBuiltDelegate_EndInvoke_m45DA53AF6523C32008772A698C421847836A7A99 (OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::add_OnNavmeshBuilt(DungeonArchitect.Navigation.OnNavmeshBuiltDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_add_OnNavmeshBuilt_m63E1BFFC3B8EFB9733DF887EB5433422F8E4048D (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* V_0 = NULL;
	OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* V_1 = NULL;
	OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* V_2 = NULL;
	{
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_0 = __this->___OnNavmeshBuilt_12;
		V_0 = L_0;
	}

IL_0007:
	{
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_1 = V_0;
		V_1 = L_1;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_2 = V_1;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA*)CastclassSealed((RuntimeObject*)L_4, OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA_il2cpp_TypeInfo_var));
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA** L_5 = (&__this->___OnNavmeshBuilt_12);
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_6 = V_2;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_7 = V_1;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_9 = V_0;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA*)L_9) == ((RuntimeObject*)(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::remove_OnNavmeshBuilt(DungeonArchitect.Navigation.OnNavmeshBuiltDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_remove_OnNavmeshBuilt_mECC2D416759CC8199E4A5D5925B0E2787F203B03 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* V_0 = NULL;
	OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* V_1 = NULL;
	OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* V_2 = NULL;
	{
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_0 = __this->___OnNavmeshBuilt_12;
		V_0 = L_0;
	}

IL_0007:
	{
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_1 = V_0;
		V_1 = L_1;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_2 = V_1;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA*)CastclassSealed((RuntimeObject*)L_4, OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA_il2cpp_TypeInfo_var));
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA** L_5 = (&__this->___OnNavmeshBuilt_12);
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_6 = V_2;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_7 = V_1;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_9 = V_0;
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA*)L_9) == ((RuntimeObject*)(OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// SharpNav.NavMesh DungeonArchitect.Navigation.DungeonNavMesh::get_NavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMesh_t248304A6679E0AE438540BDD4D7EB7AB53C61E06* DungeonNavMesh_get_NavMesh_m854F9A3280AD04601C3361E56BC12B532C1C7CA6 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// return navMesh;
		NavMesh_t248304A6679E0AE438540BDD4D7EB7AB53C61E06* L_0 = __this->___navMesh_13;
		return L_0;
	}
}
// SharpNav.NavMeshQuery DungeonArchitect.Navigation.DungeonNavMesh::get_NavMeshQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// return navMeshQuery;
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_0 = __this->___navMeshQuery_14;
		return L_0;
	}
}
// SharpNav.Crowds.Crowd DungeonArchitect.Navigation.DungeonNavMesh::get_Crowd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* DungeonNavMesh_get_Crowd_m038118397F4A8B5F988F43E7F058305F4BBB2F3F (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// return crowd;
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_0 = __this->___crowd_15;
		return L_0;
	}
}
// SharpNav.PolyMesh DungeonArchitect.Navigation.DungeonNavMesh::get_PolyMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolyMesh_t62FDDF5B45037AC3B59ABD0B825EFEFE8D9C4E98* DungeonNavMesh_get_PolyMesh_m3773F4670A8D44254D64E4983FE8143991D75906 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// return polyMesh;
		PolyMesh_t62FDDF5B45037AC3B59ABD0B825EFEFE8D9C4E98* L_0 = __this->___polyMesh_16;
		return L_0;
	}
}
// SharpNav.PolyMeshDetail DungeonArchitect.Navigation.DungeonNavMesh::get_PolyMeshDetail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolyMeshDetail_t96CF135F89BE4EA3ED03957279704A1EAD566764* DungeonNavMesh_get_PolyMeshDetail_mC2E18F208D04A499B7CF55A03B16E3964BE0F32A (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// return polyMeshDetail;
		PolyMeshDetail_t96CF135F89BE4EA3ED03957279704A1EAD566764* L_0 = __this->___polyMeshDetail_17;
		return L_0;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_Awake_m2B55B9A4779E8C29AAF981C2A0190F890371D148 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// SetNavMeshVisible(false);
		DungeonNavMesh_SetNavMeshVisible_m02811F03D792A485462BB92DE738CBCAA9FE7EC9(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_Update_mC476BD26A434EC28310A5EA37BC6E9D443E97E06 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// if (crowd != null) {
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_0 = __this->___crowd_15;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// crowd.Update(Time.deltaTime);
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_1 = __this->___crowd_15;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_1);
		Crowd_Update_m1C2907A7ED29E81E5382719AA7709C6AEFE000BC(L_1, L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::SetNavMeshVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_SetNavMeshVisible_m02811F03D792A485462BB92DE738CBCAA9FE7EC9 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, bool ___0_show, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_0 = NULL;
	{
		// var meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		V_0 = L_0;
		// if (meshRenderer != null) {
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// meshRenderer.enabled = show;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = V_0;
		bool L_4 = ___0_show;
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, L_4, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_Build_mA52B58419F5526B5E3A6D5B61142EAD2781DB9B6 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisNavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F_mC6FC0AB5B8F3A62EC1545B18A836DF558CE53644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m48FF247C944BAA88B4183D95ABB650FE5E7B8A68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3AFC51320B2220B8365431B3C71D901B426B4457_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F782D638B7D8B06D8558B074B7CA9203B3197C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* V_0 = NULL;
	NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* V_1 = NULL;
	TiledNavMesh_tA94ABC64A0549A8993031644B5CBE3D2D3AC45CF* V_2 = NULL;
	NavigationTriangleProviderU5BU5D_t3EC4AF908D22892C7DC0D878892E8FC5A992E0E4* V_3 = NULL;
	int32_t V_4 = 0;
	NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* V_5 = NULL;
	{
		// List<Triangle3> triangles = new List<Triangle3>();
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_0 = (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2*)il2cpp_codegen_object_new(List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m48FF247C944BAA88B4183D95ABB650FE5E7B8A68(L_0, List_1__ctor_m48FF247C944BAA88B4183D95ABB650FE5E7B8A68_RuntimeMethod_var);
		V_0 = L_0;
		// var triangleProviders = GetComponents<NavigationTriangleProvider>();
		NavigationTriangleProviderU5BU5D_t3EC4AF908D22892C7DC0D878892E8FC5A992E0E4* L_1;
		L_1 = Component_GetComponents_TisNavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F_mC6FC0AB5B8F3A62EC1545B18A836DF558CE53644(__this, Component_GetComponents_TisNavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F_mC6FC0AB5B8F3A62EC1545B18A836DF558CE53644_RuntimeMethod_var);
		// foreach (var triangleProvider in triangleProviders) {
		V_3 = L_1;
		V_4 = 0;
		goto IL_0022;
	}

IL_0012:
	{
		// foreach (var triangleProvider in triangleProviders) {
		NavigationTriangleProviderU5BU5D_t3EC4AF908D22892C7DC0D878892E8FC5A992E0E4* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// triangleProvider.AddNavTriangles(triangles);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* >::Invoke(4 /* System.Void DungeonArchitect.Navigation.NavigationTriangleProvider::AddNavTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>) */, L_5, L_6);
		int32_t L_7 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// foreach (var triangleProvider in triangleProviders) {
		int32_t L_8 = V_4;
		NavigationTriangleProviderU5BU5D_t3EC4AF908D22892C7DC0D878892E8FC5A992E0E4* L_9 = V_3;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// if (triangles.Count == 0) {
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m3AFC51320B2220B8365431B3C71D901B426B4457_inline(L_10, List_1_get_Count_m3AFC51320B2220B8365431B3C71D901B426B4457_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.Log ("No geometry has been added to the nav mesh");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE0F782D638B7D8B06D8558B074B7CA9203B3197C, NULL);
		// return;
		return;
	}

IL_003c:
	{
		// var settings = SharpNav.NavMeshGenerationSettings.Default;
		NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* L_12;
		L_12 = NavMeshGenerationSettings_get_Default_m86C5D44ABA640EBED4A5D23795D8220A31119E19(NULL);
		V_1 = L_12;
		// settings.AgentHeight = agentHeight;
		NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* L_13 = V_1;
		float L_14 = __this->___agentHeight_4;
		NullCheck(L_13);
		NavMeshGenerationSettings_set_AgentHeight_m16F23C7EC51A6CA5C95A983A14E9063B8A5C7922_inline(L_13, L_14, NULL);
		// settings.AgentRadius = agentRadius;
		NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* L_15 = V_1;
		float L_16 = __this->___agentRadius_5;
		NullCheck(L_15);
		NavMeshGenerationSettings_set_AgentRadius_mFA7FF029325EAF91EFDA3BA9F18C3751A6DF4823_inline(L_15, L_16, NULL);
		// settings.MaxClimb = agentClimbHeight;
		NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* L_17 = V_1;
		float L_18 = __this->___agentClimbHeight_6;
		NullCheck(L_17);
		NavMeshGenerationSettings_set_MaxClimb_m193CADF08DB8F410F092EF5A4F74B3E2BF035DAC_inline(L_17, L_18, NULL);
		// settings.CellSize = cellSize;
		NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* L_19 = V_1;
		float L_20 = __this->___cellSize_7;
		NullCheck(L_19);
		NavMeshGenerationSettings_set_CellSize_mA90DCE0E7FFEC25E52256027513569DCC2059E02_inline(L_19, L_20, NULL);
		// navMesh = SharpNav.NavMesh.Generate(triangles, settings, out polyMesh, out polyMeshDetail);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_21 = V_0;
		NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* L_22 = V_1;
		PolyMesh_t62FDDF5B45037AC3B59ABD0B825EFEFE8D9C4E98** L_23 = (&__this->___polyMesh_16);
		PolyMeshDetail_t96CF135F89BE4EA3ED03957279704A1EAD566764** L_24 = (&__this->___polyMeshDetail_17);
		NavMesh_t248304A6679E0AE438540BDD4D7EB7AB53C61E06* L_25;
		L_25 = NavMesh_Generate_m01313567EDB1E02874AE2E942AA34B0C3D5CB959(L_21, L_22, L_23, L_24, NULL);
		__this->___navMesh_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navMesh_13), (void*)L_25);
		// SharpNav.TiledNavMesh tiledMesh = navMesh;
		NavMesh_t248304A6679E0AE438540BDD4D7EB7AB53C61E06* L_26 = __this->___navMesh_13;
		V_2 = L_26;
		// navMeshQuery = new SharpNav.NavMeshQuery(tiledMesh, 2048);
		TiledNavMesh_tA94ABC64A0549A8993031644B5CBE3D2D3AC45CF* L_27 = V_2;
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_28 = (NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9*)il2cpp_codegen_object_new(NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		NavMeshQuery__ctor_mCE87C0A876327447EC5221DF987266E60783C153(L_28, L_27, ((int32_t)2048), NULL);
		__this->___navMeshQuery_14 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navMeshQuery_14), (void*)L_28);
		// crowd = new Crowd(maxCrowdAgents, agentRadius, ref tiledMesh);
		int32_t L_29 = __this->___maxCrowdAgents_8;
		float L_30 = __this->___agentRadius_5;
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_31 = (Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E*)il2cpp_codegen_object_new(Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Crowd__ctor_m0FE835E0E7D032530259B9317A42BB98FE575EA9(L_31, L_29, L_30, (&V_2), NULL);
		__this->___crowd_15 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crowd_15), (void*)L_31);
		// BuildVisualization();
		DungeonNavMesh_BuildVisualization_m6A90F05C8538D9F6554456BF50B83593978F4E39(__this, NULL);
		// if (OnNavmeshBuilt != null)
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_32 = __this->___OnNavmeshBuilt_12;
		if (!L_32)
		{
			goto IL_00e6;
		}
	}
	{
		// var e = new NavigationEvent();
		NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* L_33 = (NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2*)il2cpp_codegen_object_new(NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		NavigationEvent__ctor_mEF34CCF9EA31B1EB75934051F90A8D67929D22DE(L_33, NULL);
		V_5 = L_33;
		// e.navMesh = this;
		NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* L_34 = V_5;
		NullCheck(L_34);
		L_34->___navMesh_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___navMesh_0), (void*)__this);
		// OnNavmeshBuilt(e);
		OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* L_35 = __this->___OnNavmeshBuilt_12;
		NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* L_36 = V_5;
		NullCheck(L_35);
		OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_inline(L_35, L_36, NULL);
	}

IL_00e6:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 DungeonArchitect.Navigation.DungeonNavMesh::ToV3(SharpNav.Geometry.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DungeonNavMesh_ToV3_m47A87565F2878C0802DE0D80E5B1AFBAB14EE1B3 (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_v, const RuntimeMethod* method) 
{
	{
		// return new Vector3(v.X, v.Y, v.Z);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_0 = ___0_v;
		float L_1 = L_0.___X_0;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_2 = ___0_v;
		float L_3 = L_2.___Y_1;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_4 = ___0_v;
		float L_5 = L_4.___Z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::BuildVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh_BuildVisualization_m6A90F05C8538D9F6554456BF50B83593978F4E39 (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* V_0 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_1 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	int32_t V_13 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		// var filter = GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		// visualization = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_1, NULL);
		__this->___visualization_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___visualization_9), (void*)L_1);
		// filter.mesh = visualization;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___visualization_9;
		NullCheck(L_0);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_0, L_2, NULL);
		// if (polyMesh == null) return;
		PolyMesh_t62FDDF5B45037AC3B59ABD0B825EFEFE8D9C4E98* L_3 = __this->___polyMesh_16;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// if (polyMesh == null) return;
		return;
	}

IL_0025:
	{
		// visualization.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = __this->___visualization_9;
		NullCheck(L_4);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_4, NULL);
		// var tile = navMesh.GetTileAt(0, 0, 0);
		NavMesh_t248304A6679E0AE438540BDD4D7EB7AB53C61E06* L_5 = __this->___navMesh_13;
		NullCheck(L_5);
		MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* L_6;
		L_6 = TiledNavMesh_GetTileAt_mB24138CB6D80A70E0C2B7129C51D069F0DFA965D(L_5, 0, 0, 0, NULL);
		V_0 = L_6;
		// var vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_7, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_1 = L_7;
		// var triangles = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_8, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_2 = L_8;
		// for (int i = 0; i < tile.Polys.Length; i++)
		V_3 = 0;
		goto IL_0129;
	}

IL_0052:
	{
		// for (int j = 1; j + 1 < tile.Polys[i].VertCount; j++)
		V_4 = 1;
		goto IL_010f;
	}

IL_005a:
	{
		// int vertIndex0 = tile.Polys[i].Verts[0];
		MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* L_9 = V_0;
		NullCheck(L_9);
		PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812* L_10;
		L_10 = MeshTile_get_Polys_m02CD915E917BF27F36D8C94B2688AB33061D2DA5_inline(L_9, NULL);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14;
		L_14 = Poly_get_Verts_m0C3D65847A75BD3D5D99760CABBB31F02C3D8000_inline(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15 = 0;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
		// int vertIndex1 = tile.Polys[i].Verts[j];
		MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* L_17 = V_0;
		NullCheck(L_17);
		PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812* L_18;
		L_18 = MeshTile_get_Polys_m02CD915E917BF27F36D8C94B2688AB33061D2DA5_inline(L_17, NULL);
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22;
		L_22 = Poly_get_Verts_m0C3D65847A75BD3D5D99760CABBB31F02C3D8000_inline(L_21, NULL);
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_6 = L_25;
		// int vertIndex2 = tile.Polys[i].Verts[j + 1];
		MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* L_26 = V_0;
		NullCheck(L_26);
		PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812* L_27;
		L_27 = MeshTile_get_Polys_m02CD915E917BF27F36D8C94B2688AB33061D2DA5_inline(L_26, NULL);
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31;
		L_31 = Poly_get_Verts_m0C3D65847A75BD3D5D99760CABBB31F02C3D8000_inline(L_30, NULL);
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_7 = L_34;
		// var v = tile.Verts[vertIndex0];
		MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* L_35 = V_0;
		NullCheck(L_35);
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_36;
		L_36 = MeshTile_get_Verts_m58EE3B69BCC1DCF475808A022BAF08BDA2B24DEC_inline(L_35, NULL);
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		// var v0 = ToV3(v);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = DungeonNavMesh_ToV3_m47A87565F2878C0802DE0D80E5B1AFBAB14EE1B3(L_39, NULL);
		V_8 = L_40;
		// v = tile.Verts[vertIndex1];
		MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* L_41 = V_0;
		NullCheck(L_41);
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_42;
		L_42 = MeshTile_get_Verts_m58EE3B69BCC1DCF475808A022BAF08BDA2B24DEC_inline(L_41, NULL);
		int32_t L_43 = V_6;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		// var v1 = ToV3(v);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = DungeonNavMesh_ToV3_m47A87565F2878C0802DE0D80E5B1AFBAB14EE1B3(L_45, NULL);
		V_9 = L_46;
		// v = tile.Verts[vertIndex2];
		MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* L_47 = V_0;
		NullCheck(L_47);
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_48;
		L_48 = MeshTile_get_Verts_m58EE3B69BCC1DCF475808A022BAF08BDA2B24DEC_inline(L_47, NULL);
		int32_t L_49 = V_7;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		// var v2 = ToV3(v);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = DungeonNavMesh_ToV3_m47A87565F2878C0802DE0D80E5B1AFBAB14EE1B3(L_51, NULL);
		V_10 = L_52;
		// var offset = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_53 = V_1;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_53, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_11 = L_54;
		// vertices.Add(v0);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_55 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_8;
		NullCheck(L_55);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_55, L_56, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(v1);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_57 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_9;
		NullCheck(L_57);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_57, L_58, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(v2);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_59 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_10;
		NullCheck(L_59);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_59, L_60, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// triangles.Add (offset);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_61 = V_2;
		int32_t L_62 = V_11;
		NullCheck(L_61);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_61, L_62, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add (offset + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_63 = V_2;
		int32_t L_64 = V_11;
		NullCheck(L_63);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_63, ((int32_t)il2cpp_codegen_add(L_64, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add (offset + 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_65 = V_2;
		int32_t L_66 = V_11;
		NullCheck(L_65);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_65, ((int32_t)il2cpp_codegen_add(L_66, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int j = 1; j + 1 < tile.Polys[i].VertCount; j++)
		int32_t L_67 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_010f:
	{
		// for (int j = 1; j + 1 < tile.Polys[i].VertCount; j++)
		int32_t L_68 = V_4;
		MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* L_69 = V_0;
		NullCheck(L_69);
		PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812* L_70;
		L_70 = MeshTile_get_Polys_m02CD915E917BF27F36D8C94B2688AB33061D2DA5_inline(L_69, NULL);
		int32_t L_71 = V_3;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		int32_t L_74;
		L_74 = Poly_get_VertCount_m4A450D850DD3A5DB062B44A7646A28C89438A159_inline(L_73, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_68, 1))) < ((int32_t)L_74)))
		{
			goto IL_005a;
		}
	}
	{
		// for (int i = 0; i < tile.Polys.Length; i++)
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0129:
	{
		// for (int i = 0; i < tile.Polys.Length; i++)
		int32_t L_76 = V_3;
		MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* L_77 = V_0;
		NullCheck(L_77);
		PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812* L_78;
		L_78 = MeshTile_get_Polys_m02CD915E917BF27F36D8C94B2688AB33061D2DA5_inline(L_77, NULL);
		NullCheck(L_78);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length)))))
		{
			goto IL_0052;
		}
	}
	{
		// if (visualize2D) {
		bool L_79 = __this->___visualize2D_11;
		if (!L_79)
		{
			goto IL_0188;
		}
	}
	{
		// for (int i = 0; i < vertices.Count; i++) {
		V_13 = 0;
		goto IL_017e;
	}

IL_0144:
	{
		// var v = vertices[i];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_80 = V_1;
		int32_t L_81 = V_13;
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_80, L_81, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_14 = L_82;
		// t = v.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_14;
		float L_84 = L_83.___y_3;
		V_12 = L_84;
		// v.y = v.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_14;
		float L_86 = L_85.___z_4;
		(&V_14)->___y_3 = L_86;
		// v.z = t;
		float L_87 = V_12;
		(&V_14)->___z_4 = L_87;
		// vertices[i] = v;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_88 = V_1;
		int32_t L_89 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_14;
		NullCheck(L_88);
		List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(L_88, L_89, L_90, List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		// for (int i = 0; i < vertices.Count; i++) {
		int32_t L_91 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_017e:
	{
		// for (int i = 0; i < vertices.Count; i++) {
		int32_t L_92 = V_13;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_93 = V_1;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_93, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_0144;
		}
	}

IL_0188:
	{
		// visualization.vertices = vertices.ToArray();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_95 = __this->___visualization_9;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_96 = V_1;
		NullCheck(L_96);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_97;
		L_97 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_96, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		NullCheck(L_95);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_95, L_97, NULL);
		// visualization.SetIndices(triangles.ToArray(), MeshTopology.Triangles, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_98 = __this->___visualization_9;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_99 = V_2;
		NullCheck(L_99);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100;
		L_100 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_99, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_98);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_98, L_100, 0, 0, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.DungeonNavMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DungeonNavMesh__ctor_m7D48B79EB2EC00B9410F414644D38876E546A74A (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// public float agentHeight = 2;
		__this->___agentHeight_4 = (2.0f);
		// public float agentRadius = 0.5f;
		__this->___agentRadius_5 = (0.5f);
		// public float agentClimbHeight = 0.5f;
		__this->___agentClimbHeight_6 = (0.5f);
		// public float cellSize = 0.2f;
		__this->___cellSize_7 = (0.200000003f);
		// public int maxCrowdAgents = 50;
		__this->___maxCrowdAgents_8 = ((int32_t)50);
		// public Color visualizationColor = new Color(0, 0.5f, 1, 0.25f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.5f), (1.0f), (0.25f), /*hidden argument*/NULL);
		__this->___visualizationColor_10 = L_0;
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
// System.Void DungeonArchitect.Navigation.NavigationBuildInvoker::OnPostDungeonBuild(DungeonArchitect.Dungeon,DungeonArchitect.DungeonModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationBuildInvoker_OnPostDungeonBuild_m74F8F4EAE6FBB3B212A2E81E639FC58289FEAE0A (NavigationBuildInvoker_t15B5AE590B413027DA6959759822C258E1694E5A* __this, Dungeon_tAA854F521189538FD299BECE6025726B6C359227* ___0_dungeon, DungeonModel_t53A77B7094F80C6A6C626E2E6B647289FBF29D19* ___1_model, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F720E250955D4AB300C4601B5A903BBC04DDD0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (navMesh != null) {
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_0 = __this->___navMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// navMesh.Build();
		DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* L_2 = __this->___navMesh_4;
		NullCheck(L_2);
		DungeonNavMesh_Build_mA52B58419F5526B5E3A6D5B61142EAD2781DB9B6(L_2, NULL);
		return;
	}

IL_001a:
	{
		// Debug.LogWarning("Cannot automatically rebuild nav mesh as it is not assigned to the dungeon event listener");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral2F720E250955D4AB300C4601B5A903BBC04DDD0E, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.NavigationBuildInvoker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationBuildInvoker__ctor_m68215D8A1F6ED566DADF6A9F9BA7A1295D1EF1C1 (NavigationBuildInvoker_t15B5AE590B413027DA6959759822C258E1694E5A* __this, const RuntimeMethod* method) 
{
	{
		DungeonEventListener__ctor_m922ECF10BBFD6A5CE70AFCE0E110EEFE569DCB01(__this, NULL);
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
// System.Void DungeonArchitect.Navigation.NavigationTriangleProvider::AddNavTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationTriangleProvider_AddNavTriangles_mD166F7936091592F4F436DE466D258C09347DE76 (NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.NavigationTriangleProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationTriangleProvider__ctor_mB26639ADAFB5E6B5168DF2CD728D36AA0A7DC9C2 (NavigationTriangleProvider_t5333ABCADA47BFDDCBBE8BC1CB661ED83F8F991F* __this, const RuntimeMethod* method) 
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
// System.Void DungeonArchitect.Navigation.Collision2DTriangleProvider::AddNavTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision2DTriangleProvider_AddNavTriangles_m480724B2320D7F63430EB9F5CFAA3B83B381C980 (Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* V_0 = NULL;
	int32_t V_1 = 0;
	DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* V_2 = NULL;
	{
		// var dataList = GameObject.FindObjectsOfType<DungeonSceneProviderData>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* L_0;
		L_0 = Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3(Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3_RuntimeMethod_var);
		// foreach (var data in dataList)
		V_0 = L_0;
		V_1 = 0;
		goto IL_0030;
	}

IL_000a:
	{
		// foreach (var data in dataList)
		DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (data == null) continue;
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// if (data.affectsNavigation)
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_7 = V_2;
		NullCheck(L_7);
		bool L_8 = L_7->___affectsNavigation_6;
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		// AddTriangles(triangles, data.gameObject);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_9 = ___0_triangles;
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_10 = V_2;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		Collision2DTriangleProvider_AddTriangles_mEE5433F0315DD220613857D5B473B84318E9D753(__this, L_9, L_11, NULL);
	}

IL_002c:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		// foreach (var data in dataList)
		int32_t L_13 = V_1;
		DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.Collision2DTriangleProvider::AddTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision2DTriangleProvider_AddTriangles_mEE5433F0315DD220613857D5B473B84318E9D753 (Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mCE8DC5951E769723B44EDB44E27A9FD57872E1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_0 = NULL;
	int32_t V_1 = 0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		// var colliders = gameObject.GetComponentsInChildren<Collider2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___1_gameObject;
		NullCheck(L_0);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mCE8DC5951E769723B44EDB44E27A9FD57872E1EC(L_0, GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mCE8DC5951E769723B44EDB44E27A9FD57872E1EC_RuntimeMethod_var);
		// foreach (var collider in colliders) {
		V_0 = L_1;
		V_1 = 0;
		goto IL_00ee;
	}

IL_000e:
	{
		// foreach (var collider in colliders) {
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// var transform = Matrix.FromGameTransform(collider.gameObject.transform);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = V_2;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix_FromGameTransform_mC51B7E15F87A62CEB132EF53921EC3E904A78089(L_8, NULL);
		V_3 = L_9;
		// if (collider is BoxCollider2D) {
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_10 = V_2;
		if (!((BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA*)IsInstSealed((RuntimeObject*)L_10, BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		// var boxCollider = collider as BoxCollider2D;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = V_2;
		V_4 = ((BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA*)IsInstSealed((RuntimeObject*)L_11, BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_il2cpp_TypeInfo_var));
		// Matrix.DecomposeMatrix(ref transform, out goPosition, out goRotation, out goScale);
		Matrix_DecomposeMatrix_mF670E9C9FBCCA971BCE5E3D8C4A0B7DAB0AE5243((&V_3), (&V_5), (&V_6), (&V_7), NULL);
		// var collisionheight = 5;
		V_8 = 5;
		// var size = new Vector3(boxCollider.size.x, collisionheight, boxCollider.size.y);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_12 = V_4;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_12, NULL);
		float L_14 = L_13.___x_0;
		int32_t L_15 = V_8;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_16 = V_4;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_16, NULL);
		float L_18 = L_17.___y_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), L_14, ((float)L_15), L_18, NULL);
		// Vector3 scale = Vector3.Scale(goScale, size);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_19, L_20, NULL);
		V_10 = L_21;
		// var boxCenterXZ = boxCollider.offset;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_22 = V_4;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914(L_22, NULL);
		V_11 = L_23;
		// var boxCenter = new Vector3(boxCenterXZ.x, 0, boxCenterXZ.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_11;
		float L_25 = L_24.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_11;
		float L_27 = L_26.___y_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_12), L_25, (0.0f), L_27, NULL);
		// Vector3 position = goPosition + goRotation * Vector3.Scale(boxCenter, goScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_29, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_33, NULL);
		V_13 = L_34;
		// position = MathUtils.FlipYZ(position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_13;
		il2cpp_codegen_runtime_class_init_inline(MathUtils_t05FC770BEB74714DF52EC7EB2718509420AEA703_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = MathUtils_FlipYZ_m8347EAD3A9298AE62232FA514EEC5BE09ECCC8F0(L_35, NULL);
		V_13 = L_36;
		// position.y = 0;
		(&V_13)->___y_3 = (0.0f);
		// transform = Matrix4x4.TRS (position, goRotation, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_40;
		L_40 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_37, L_38, L_39, NULL);
		V_3 = L_40;
		// StaticMeshTriangleProvider.AddMeshTriangles(triangles, cubeVertices, cubeIndices, transform);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_41 = ___0_triangles;
		il2cpp_codegen_runtime_class_init_inline(Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = ((Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_StaticFields*)il2cpp_codegen_static_fields_for(Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var))->___cubeVertices_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = ((Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_StaticFields*)il2cpp_codegen_static_fields_for(Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var))->___cubeIndices_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_44 = V_3;
		StaticMeshTriangleProvider_AddMeshTriangles_m1C415B5B1602C1B213E7E074D352F2AE248B6338(L_41, L_42, L_43, L_44, NULL);
		goto IL_00ea;
	}

IL_00e3:
	{
		// else if (collider is CircleCollider2D) {
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_45 = V_2;
	}

IL_00ea:
	{
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00ee:
	{
		// foreach (var collider in colliders) {
		int32_t L_47 = V_1;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_48 = V_0;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.Collision2DTriangleProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision2DTriangleProvider__ctor_mFBB838111361987957D21E0EC47BC03851DAEE7A (Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A* __this, const RuntimeMethod* method) 
{
	{
		NavigationTriangleProvider__ctor_mB26639ADAFB5E6B5168DF2CD728D36AA0A7DC9C2(__this, NULL);
		return;
	}
}
// System.Void DungeonArchitect.Navigation.Collision2DTriangleProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision2DTriangleProvider__cctor_m5C334D2B6CA58E3A21619DA6E4343F241CA542E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EB0C049FDDDAE3C9190824158B740D4E99E8468____A3763FA4915A8C2462635850EE2293BB4ACC1F04C70EDCE416AAE4B139B0B115_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Vector3[] cubeVertices = new Vector3[] {
		//     new Vector3(-0.5f, -0.5f, 0.5f),
		//     new Vector3(0.5f, -0.5f, 0.5f),
		//     new Vector3(0.5f, 0.5f, 0.5f),
		//     new Vector3(-0.5f, 0.5f, 0.5f),
		//     new Vector3(-0.5f, -0.5f, -0.5f),
		//     new Vector3(0.5f, -0.5f, -0.5f),
		//     new Vector3(0.5f, 0.5f, -0.5f),
		//     new Vector3(-0.5f, 0.5f, -0.5f)
		// };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		((Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_StaticFields*)il2cpp_codegen_static_fields_for(Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var))->___cubeVertices_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_StaticFields*)il2cpp_codegen_static_fields_for(Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var))->___cubeVertices_4), (void*)L_15);
		// static readonly int[] cubeIndices = new int[] {
		//     // front
		//     0, 1, 2,
		//     2, 3, 0,
		//     // top
		//     3, 2, 6,
		//     6, 7, 3,
		//     // back
		//     7, 6, 5,
		//     5, 4, 7,
		//     // bottom
		//     4, 5, 1,
		//     1, 0, 4,
		//     // left
		//     4, 0, 3,
		//     3, 7, 4,
		//     // right
		//     1, 5, 6,
		//     6, 2, 1,
		// };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)36));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EB0C049FDDDAE3C9190824158B740D4E99E8468____A3763FA4915A8C2462635850EE2293BB4ACC1F04C70EDCE416AAE4B139B0B115_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		((Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_StaticFields*)il2cpp_codegen_static_fields_for(Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var))->___cubeIndices_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_StaticFields*)il2cpp_codegen_static_fields_for(Collision2DTriangleProvider_t6D0E561D2BCA2AA6FFF815E74F2A8301AD269C1A_il2cpp_TypeInfo_var))->___cubeIndices_5), (void*)L_18);
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
// System.Void DungeonArchitect.Navigation.CollisionTriangleProvider::AddNavTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriangleProvider_AddNavTriangles_m5B0ADE0B451112F22D0DDE7C8EB76A6593B1B6D5 (CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* V_0 = NULL;
	int32_t V_1 = 0;
	DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* V_2 = NULL;
	{
		// var dataList = GameObject.FindObjectsOfType<DungeonSceneProviderData>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* L_0;
		L_0 = Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3(Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3_RuntimeMethod_var);
		// foreach (var data in dataList)
		V_0 = L_0;
		V_1 = 0;
		goto IL_0030;
	}

IL_000a:
	{
		// foreach (var data in dataList)
		DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (data == null) continue;
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// if (data.affectsNavigation)
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_7 = V_2;
		NullCheck(L_7);
		bool L_8 = L_7->___affectsNavigation_6;
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		// AddTriangles(triangles, data.gameObject);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_9 = ___0_triangles;
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_10 = V_2;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		CollisionTriangleProvider_AddTriangles_m93FF917EB2594AD994907CD27574D27A5C8C0E24(__this, L_9, L_11, NULL);
	}

IL_002c:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		// foreach (var data in dataList)
		int32_t L_13 = V_1;
		DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.CollisionTriangleProvider::AddTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriangleProvider_AddTriangles_m93FF917EB2594AD994907CD27574D27A5C8C0E24 (CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	int32_t V_1 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_10 = NULL;
	{
		// var colliders = gameObject.GetComponentsInChildren<Collider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___1_gameObject;
		NullCheck(L_0);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D(L_0, GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D_RuntimeMethod_var);
		// foreach (var collider in colliders) {
		V_0 = L_1;
		V_1 = 0;
		goto IL_00c0;
	}

IL_000e:
	{
		// foreach (var collider in colliders) {
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// var transform = Matrix.FromGameTransform(collider.gameObject.transform);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = V_2;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix_FromGameTransform_mC51B7E15F87A62CEB132EF53921EC3E904A78089(L_8, NULL);
		V_3 = L_9;
		// if (collider is BoxCollider) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = V_2;
		if (!((BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)IsInstClass((RuntimeObject*)L_10, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var)))
		{
			goto IL_008d;
		}
	}
	{
		// var boxCollider = collider as BoxCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = V_2;
		V_4 = ((BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)IsInstClass((RuntimeObject*)L_11, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var));
		// Matrix.DecomposeMatrix(ref transform, out goPosition, out goRotation, out goScale);
		Matrix_DecomposeMatrix_mF670E9C9FBCCA971BCE5E3D8C4A0B7DAB0AE5243((&V_3), (&V_5), (&V_6), (&V_7), NULL);
		// Vector3 scale = Vector3.Scale(goScale, boxCollider.size);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_7;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_13 = V_4;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_12, L_14, NULL);
		V_8 = L_15;
		// Vector3 boxCenter = boxCollider.center;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_16 = V_4;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7(L_16, NULL);
		V_9 = L_17;
		// Vector3 position = goPosition + goRotation * Vector3.Scale(boxCenter, goScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_19, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_23, NULL);
		// transform = Matrix4x4.TRS (position, goRotation, scale);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_27;
		L_27 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_24, L_25, L_26, NULL);
		V_3 = L_27;
		// StaticMeshTriangleProvider.AddMeshTriangles(triangles, cubeVertices, cubeIndices, transform);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_28 = ___0_triangles;
		il2cpp_codegen_runtime_class_init_inline(CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = ((CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_StaticFields*)il2cpp_codegen_static_fields_for(CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var))->___cubeVertices_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = ((CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_StaticFields*)il2cpp_codegen_static_fields_for(CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var))->___cubeIndices_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31 = V_3;
		StaticMeshTriangleProvider_AddMeshTriangles_m1C415B5B1602C1B213E7E074D352F2AE248B6338(L_28, L_29, L_30, L_31, NULL);
		goto IL_00bc;
	}

IL_008d:
	{
		// else if (collider is MeshCollider) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_32 = V_2;
		if (!((MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*)IsInstClass((RuntimeObject*)L_32, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var)))
		{
			goto IL_00ad;
		}
	}
	{
		// var meshCollider = collider as MeshCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_33 = V_2;
		V_10 = ((MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*)IsInstClass((RuntimeObject*)L_33, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var));
		// StaticMeshTriangleProvider.AddMeshTriangles(triangles, meshCollider.sharedMesh, transform);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_34 = ___0_triangles;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_35 = V_10;
		NullCheck(L_35);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_36;
		L_36 = MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E(L_35, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_37 = V_3;
		StaticMeshTriangleProvider_AddMeshTriangles_m2FFB29DD183854BB0842470AECE78FAC34F7E563(L_34, L_36, L_37, NULL);
		goto IL_00bc;
	}

IL_00ad:
	{
		// else if (collider is SphereCollider) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_38 = V_2;
		if (((SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275*)IsInstClass((RuntimeObject*)L_38, SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var)))
		{
			goto IL_00bc;
		}
	}
	{
		// else if (collider is CapsuleCollider) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_39 = V_2;
	}

IL_00bc:
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00c0:
	{
		// foreach (var collider in colliders) {
		int32_t L_41 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.CollisionTriangleProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriangleProvider__ctor_m5E1D227DA1AEAC55CB37587C47E4797C37F11557 (CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389* __this, const RuntimeMethod* method) 
{
	{
		NavigationTriangleProvider__ctor_mB26639ADAFB5E6B5168DF2CD728D36AA0A7DC9C2(__this, NULL);
		return;
	}
}
// System.Void DungeonArchitect.Navigation.CollisionTriangleProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriangleProvider__cctor_m85A7AB980652EF9C82B4AAC2F30F8FE922A0EF73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EB0C049FDDDAE3C9190824158B740D4E99E8468____A3763FA4915A8C2462635850EE2293BB4ACC1F04C70EDCE416AAE4B139B0B115_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Vector3[] cubeVertices = new Vector3[] {
		//     new Vector3(-0.5f, -0.5f, 0.5f),
		//     new Vector3(0.5f, -0.5f, 0.5f),
		//     new Vector3(0.5f, 0.5f, 0.5f),
		//     new Vector3(-0.5f, 0.5f, 0.5f),
		//     new Vector3(-0.5f, -0.5f, -0.5f),
		//     new Vector3(0.5f, -0.5f, -0.5f),
		//     new Vector3(0.5f, 0.5f, -0.5f),
		//     new Vector3(-0.5f, 0.5f, -0.5f)
		// };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		((CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_StaticFields*)il2cpp_codegen_static_fields_for(CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var))->___cubeVertices_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_StaticFields*)il2cpp_codegen_static_fields_for(CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var))->___cubeVertices_4), (void*)L_15);
		// static readonly int[] cubeIndices = new int[] {
		//     // front
		//     0, 1, 2,
		//     2, 3, 0,
		//     // top
		//     3, 2, 6,
		//     6, 7, 3,
		//     // back
		//     7, 6, 5,
		//     5, 4, 7,
		//     // bottom
		//     4, 5, 1,
		//     1, 0, 4,
		//     // left
		//     4, 0, 3,
		//     3, 7, 4,
		//     // right
		//     1, 5, 6,
		//     6, 2, 1,
		//     /*
		//     0, 1, 2, 2, 3, 0,
		//     3, 2, 6, 6, 7, 3,
		//     7, 6, 5, 5, 4, 7,
		//     4, 0, 3, 3, 7, 4,
		//     0, 1, 5, 5, 4, 0,
		//     1, 5, 6, 6, 2, 1
		//     *
		// };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)36));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EB0C049FDDDAE3C9190824158B740D4E99E8468____A3763FA4915A8C2462635850EE2293BB4ACC1F04C70EDCE416AAE4B139B0B115_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		((CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_StaticFields*)il2cpp_codegen_static_fields_for(CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var))->___cubeIndices_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_StaticFields*)il2cpp_codegen_static_fields_for(CollisionTriangleProvider_tABE7349A83A43AE0C8D34079DB040DAA52179389_il2cpp_TypeInfo_var))->___cubeIndices_5), (void*)L_18);
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
// System.Void DungeonArchitect.Navigation.StaticMeshTriangleProvider::AddNavTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMeshTriangleProvider_AddNavTriangles_m98331745312A49299AED2EEA42301174D9228A89 (StaticMeshTriangleProvider_t91A74BBAD481A972AB062B4971F03948B35F3D5C* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* V_0 = NULL;
	int32_t V_1 = 0;
	DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* V_2 = NULL;
	{
		// var dataList = GameObject.FindObjectsOfType<DungeonSceneProviderData>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* L_0;
		L_0 = Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3(Object_FindObjectsOfType_TisDungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A_mEE4666C062550D2B35D667393227B8989DE09AF3_RuntimeMethod_var);
		// foreach (var data in dataList)
		V_0 = L_0;
		V_1 = 0;
		goto IL_0030;
	}

IL_000a:
	{
		// foreach (var data in dataList)
		DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (data == null) continue;
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// if (data.affectsNavigation)
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_7 = V_2;
		NullCheck(L_7);
		bool L_8 = L_7->___affectsNavigation_6;
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		// AddTriangles(triangles, data.gameObject);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_9 = ___0_triangles;
		DungeonSceneProviderData_t550886CE6C51CA704025FA337DD6A8B9835DDA0A* L_10 = V_2;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		StaticMeshTriangleProvider_AddTriangles_mBE1813CF70BC7BD3CDA3A3CC9D9879A8B8D10BF9(__this, L_9, L_11, NULL);
	}

IL_002c:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		// foreach (var data in dataList)
		int32_t L_13 = V_1;
		DungeonSceneProviderDataU5BU5D_t510024821274D399DC6FD3914FC96809B348C75D* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.StaticMeshTriangleProvider::AddTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMeshTriangleProvider_AddTriangles_mBE1813CF70BC7BD3CDA3A3CC9D9879A8B8D10BF9 (StaticMeshTriangleProvider_t91A74BBAD481A972AB062B4971F03948B35F3D5C* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* V_0 = NULL;
	int32_t V_1 = 0;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var filters = gameObject.GetComponentsInChildren<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___1_gameObject;
		NullCheck(L_0);
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495(L_0, GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495_RuntimeMethod_var);
		// foreach (MeshFilter filter in filters) {
		V_0 = L_1;
		V_1 = 0;
		goto IL_0031;
	}

IL_000b:
	{
		// foreach (MeshFilter filter in filters) {
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// var transform = Matrix.FromGameTransform(filter.gameObject.transform);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_6 = V_2;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix_FromGameTransform_mC51B7E15F87A62CEB132EF53921EC3E904A78089(L_8, NULL);
		V_3 = L_9;
		// AddMeshTriangles(triangles, filter.sharedMesh, transform);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_10 = ___0_triangles;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_11 = V_2;
		NullCheck(L_11);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12;
		L_12 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_11, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = V_3;
		StaticMeshTriangleProvider_AddMeshTriangles_m2FFB29DD183854BB0842470AECE78FAC34F7E563(L_10, L_12, L_13, NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0031:
	{
		// foreach (MeshFilter filter in filters) {
		int32_t L_15 = V_1;
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.StaticMeshTriangleProvider::AddMeshTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.Mesh,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMeshTriangleProvider_AddMeshTriangles_m2FFB29DD183854BB0842470AECE78FAC34F7E563 (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___1_mesh, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_transform, const RuntimeMethod* method) 
{
	{
		// AddMeshTriangles(triangles, mesh.vertices, mesh.triangles, transform);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_0 = ___0_triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = ___1_mesh;
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2;
		L_2 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_1, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = ___1_mesh;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_3, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___2_transform;
		StaticMeshTriangleProvider_AddMeshTriangles_m1C415B5B1602C1B213E7E074D352F2AE248B6338(L_0, L_2, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.StaticMeshTriangleProvider::AddMeshTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.Vector3[],System.Int32[],UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMeshTriangleProvider_AddMeshTriangles_m1C415B5B1602C1B213E7E074D352F2AE248B6338 (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_vertices, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_indices, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m272C6A5A3620E81931888D90AA9E9524D5C55214_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27EEF3D07EEFA922D8C70C9E696D1140E3742E58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// List<SVector3> svertices = new List<SVector3>();
		List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* L_0 = (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D*)il2cpp_codegen_object_new(List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m27EEF3D07EEFA922D8C70C9E696D1140E3742E58(L_0, List_1__ctor_m27EEF3D07EEFA922D8C70C9E696D1140E3742E58_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var vert in vertices) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___1_vertices;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0042;
	}

IL_000c:
	{
		// foreach (var vert in vertices) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// var gvert = transform.MultiplyPoint(vert);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&___3_transform), L_6, NULL);
		V_4 = L_7;
		// svertices.Add (new SVector3(gvert.x, gvert.y, gvert.z));
		List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_4;
		float L_10 = L_9.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_4;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_4;
		float L_14 = L_13.___z_4;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m168D4D359A145D225B2579608B75AABFF6ABD4C5((&L_15), L_10, L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m272C6A5A3620E81931888D90AA9E9524D5C55214_inline(L_8, L_15, List_1_Add_m272C6A5A3620E81931888D90AA9E9524D5C55214_RuntimeMethod_var);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0042:
	{
		// foreach (var vert in vertices) {
		int32_t L_17 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// for (int i = 0; i + 2 < indices.Length; i += 3) {
		V_5 = 0;
		goto IL_0084;
	}

IL_004d:
	{
		// var tri = new Triangle3(
		//     svertices[indices[i]],
		//     svertices[indices[i + 1]],
		//     svertices[indices[i + 2]]);
		List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* L_19 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___2_indices;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_24;
		L_24 = List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E(L_19, L_23, List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E_RuntimeMethod_var);
		List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* L_25 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___2_indices;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_25);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_30;
		L_30 = List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E(L_25, L_29, List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E_RuntimeMethod_var);
		List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___2_indices;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_36;
		L_36 = List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E(L_31, L_35, List_1_get_Item_m79FEF87D3B2D501B8E81B89206CB946BA68E266E_RuntimeMethod_var);
		Triangle3__ctor_mE3A051C362CD6284A554EDA55439AB1D9B447ADE((&V_6), L_24, L_30, L_36, NULL);
		// triangles.Add(tri);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_37 = ___0_triangles;
		Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB L_38 = V_6;
		NullCheck(L_37);
		List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_inline(L_37, L_38, List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_RuntimeMethod_var);
		// for (int i = 0; i + 2 < indices.Length; i += 3) {
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 3));
	}

IL_0084:
	{
		// for (int i = 0; i + 2 < indices.Length; i += 3) {
		int32_t L_40 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ___2_indices;
		NullCheck(L_41);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_40, 2))) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_004d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.StaticMeshTriangleProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMeshTriangleProvider__ctor_m63D8B23C097B97A5978595FCBC23D6A15B581EF4 (StaticMeshTriangleProvider_t91A74BBAD481A972AB062B4971F03948B35F3D5C* __this, const RuntimeMethod* method) 
{
	{
		NavigationTriangleProvider__ctor_mB26639ADAFB5E6B5168DF2CD728D36AA0A7DC9C2(__this, NULL);
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
// System.Void DungeonArchitect.Navigation.TerrainTriangleProvider::AddNavTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTriangleProvider_AddNavTriangles_m9FD9BA0E38B4CCDE397BBAF3C2497B32DD535F66 (TerrainTriangleProvider_tC6AAA38C7EE500BFBE79C3D0C93E80F39D0C3286* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_0 = NULL;
	{
		// var terrain = Terrain.activeTerrain;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0;
		L_0 = Terrain_get_activeTerrain_mAE5A7FE933C2C1A57FC9542E9BFA315A413F224E(NULL);
		V_0 = L_0;
		// if (terrain != null && terrain.terrainData != null) {
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = V_0;
		NullCheck(L_3);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_4;
		L_4 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// AddTerrainTriangles(triangles, terrain);
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_6 = ___0_triangles;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = V_0;
		TerrainTriangleProvider_AddTerrainTriangles_m2F8314EE16C975765CBA484C4CA3BBFD5BB07F5C(__this, L_6, L_7, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.TerrainTriangleProvider::AddTerrainTriangles(System.Collections.Generic.List`1<SharpNav.Geometry.Triangle3>,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTriangleProvider_AddTerrainTriangles_m2F8314EE16C975765CBA484C4CA3BBFD5BB07F5C (TerrainTriangleProvider_tC6AAA38C7EE500BFBE79C3D0C93E80F39D0C3286* __this, List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* ___0_triangles, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___1_terrain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* V_8 = NULL;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0* V_11 = NULL;
	float V_12 = 0.0f;
	int32_t V_13 = 0;
	Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		// var data = terrain.terrainData;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___1_terrain;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		// var terrainSize = data.size;
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_2, NULL);
		V_0 = L_3;
		// var terrainWidth = data.heightmapResolution;
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_4 = L_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(L_4, NULL);
		V_1 = L_5;
		// var terrainHeight = data.heightmapResolution;
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_6 = L_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(L_6, NULL);
		V_2 = L_7;
		// var terrainScale = data.heightmapScale;
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_8 = L_6;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = TerrainData_get_heightmapScale_m4B6AB6495384109BA54955CA52B883A118015188(L_8, NULL);
		V_3 = L_9;
		// int incrementX = Mathf.Max (1, Mathf.RoundToInt(terrainCellSize / terrainScale.x));
		float L_10 = __this->___terrainCellSize_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_3;
		float L_12 = L_11.___x_2;
		int32_t L_13;
		L_13 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_10/L_12)), NULL);
		int32_t L_14;
		L_14 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(1, L_13, NULL);
		V_4 = L_14;
		// int incrementZ = Mathf.Max (1, Mathf.RoundToInt(terrainCellSize / terrainScale.z));
		float L_15 = __this->___terrainCellSize_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		float L_17 = L_16.___z_4;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_15/L_17)), NULL);
		int32_t L_19;
		L_19 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(1, L_18, NULL);
		V_5 = L_19;
		// var multiplierX = terrainSize.x / (terrainWidth - 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		float L_21 = L_20.___x_2;
		int32_t L_22 = V_1;
		V_6 = ((float)(L_21/((float)((int32_t)il2cpp_codegen_subtract(L_22, 1)))));
		// var multiplierZ = terrainSize.z / (terrainHeight - 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = L_23.___z_4;
		int32_t L_25 = V_2;
		V_7 = ((float)(L_24/((float)((int32_t)il2cpp_codegen_subtract(L_25, 1)))));
		// var heights = data.GetHeights(0, 0, terrainWidth, terrainHeight);
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_8);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_28;
		L_28 = TerrainData_GetHeights_m3E5C109E98E72A23E39B92F7DF48D87888B2D488(L_8, 0, 0, L_26, L_27, NULL);
		V_8 = L_28;
		// var optimizedWidth = Mathf.Floor(terrainWidth / incrementX);
		int32_t L_29 = V_1;
		int32_t L_30 = V_4;
		float L_31;
		L_31 = floorf(((float)((int32_t)(L_29/L_30))));
		V_9 = L_31;
		// var optimizedHeight = Mathf.Floor(terrainHeight / incrementZ);
		int32_t L_32 = V_2;
		int32_t L_33 = V_5;
		float L_34;
		L_34 = floorf(((float)((int32_t)(L_32/L_33))));
		V_10 = L_34;
		// var worldHeights = new SVector3[terrainWidth, terrainHeight];
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		il2cpp_array_size_t L_38[] = { (il2cpp_array_size_t)L_35, (il2cpp_array_size_t)L_36 };
		Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0* L_37 = (Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0*)GenArrayNew(Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0_il2cpp_TypeInfo_var, L_38);
		V_11 = L_37;
		// var resolution = terrain.terrainData.size.y;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_39 = ___1_terrain;
		NullCheck(L_39);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_40;
		L_40 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_40, NULL);
		float L_42 = L_41.___y_3;
		V_12 = L_42;
		// int ox = 0;
		V_13 = 0;
		// for (var hx = 0; hx < terrainWidth; hx += incrementX) {
		V_15 = 0;
		goto IL_0149;
	}

IL_00b9:
	{
		// int oz = 0;
		V_16 = 0;
		// for (var hz = 0; hz < terrainHeight; hz += incrementZ) {
		V_17 = 0;
		goto IL_0137;
	}

IL_00c1:
	{
		// var x = hx * multiplierX + terrain.transform.position.x;
		int32_t L_43 = V_15;
		float L_44 = V_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_45 = ___1_terrain;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___x_2;
		V_18 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_43), L_44)), L_48));
		// var z = hz * multiplierZ + terrain.transform.position.z;
		int32_t L_49 = V_17;
		float L_50 = V_7;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_51 = ___1_terrain;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		float L_54 = L_53.___z_4;
		V_19 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_49), L_50)), L_54));
		// var y = heights[hx, hz] * resolution + terrain.transform.position.y;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_55 = V_8;
		int32_t L_56 = V_15;
		int32_t L_57 = V_17;
		NullCheck(L_55);
		float L_58;
		L_58 = (L_55)->GetAt(L_56, L_57);
		float L_59 = V_12;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_60 = ___1_terrain;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_60, NULL);
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_61, NULL);
		float L_63 = L_62.___y_3;
		V_20 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_58, L_59)), L_63));
		// worldHeights[ox, oz] = new SVector3(z, y, x);
		Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0* L_64 = V_11;
		int32_t L_65 = V_13;
		int32_t L_66 = V_16;
		float L_67 = V_19;
		float L_68 = V_20;
		float L_69 = V_18;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m168D4D359A145D225B2579608B75AABFF6ABD4C5((&L_70), L_67, L_68, L_69, /*hidden argument*/NULL);
		NullCheck(L_64);
		(L_64)->SetAt(L_65, L_66, L_70);
		// oz++;
		int32_t L_71 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		// for (var hz = 0; hz < terrainHeight; hz += incrementZ) {
		int32_t L_72 = V_17;
		int32_t L_73 = V_5;
		V_17 = ((int32_t)il2cpp_codegen_add(L_72, L_73));
	}

IL_0137:
	{
		// for (var hz = 0; hz < terrainHeight; hz += incrementZ) {
		int32_t L_74 = V_17;
		int32_t L_75 = V_2;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00c1;
		}
	}
	{
		// ox++;
		int32_t L_76 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		// for (var hx = 0; hx < terrainWidth; hx += incrementX) {
		int32_t L_77 = V_15;
		int32_t L_78 = V_4;
		V_15 = ((int32_t)il2cpp_codegen_add(L_77, L_78));
	}

IL_0149:
	{
		// for (var hx = 0; hx < terrainWidth; hx += incrementX) {
		int32_t L_79 = V_15;
		int32_t L_80 = V_1;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_00b9;
		}
	}
	{
		// var vertices = new SVector3[4];
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_81 = (Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3*)(Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3*)SZArrayNew(Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3_il2cpp_TypeInfo_var, (uint32_t)4);
		V_14 = L_81;
		// for (var hx = 0; hx < optimizedWidth - 1; hx++) {
		V_21 = 0;
		goto IL_021f;
	}

IL_0161:
	{
		// for (var hz = 0; hz < optimizedHeight - 1; hz++) {
		V_22 = 0;
		goto IL_0209;
	}

IL_0169:
	{
		// vertices[0] = worldHeights[hx, hz];
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_82 = V_14;
		Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0* L_83 = V_11;
		int32_t L_84 = V_21;
		int32_t L_85 = V_22;
		NullCheck(L_83);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_86;
		L_86 = (L_83)->GetAt(L_84, L_85);
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4)L_86);
		// vertices[1] = worldHeights[hx, hz + 1];
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_87 = V_14;
		Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0* L_88 = V_11;
		int32_t L_89 = V_21;
		int32_t L_90 = V_22;
		NullCheck(L_88);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_91;
		L_91 = (L_88)->GetAt(L_89, ((int32_t)il2cpp_codegen_add(L_90, 1)));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4)L_91);
		// vertices[2] = worldHeights[hx + 1, hz + 1];
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_92 = V_14;
		Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0* L_93 = V_11;
		int32_t L_94 = V_21;
		int32_t L_95 = V_22;
		NullCheck(L_93);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_96;
		L_96 = (L_93)->GetAt(((int32_t)il2cpp_codegen_add(L_94, 1)), ((int32_t)il2cpp_codegen_add(L_95, 1)));
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4)L_96);
		// vertices[3] = worldHeights[hx + 1, hz];
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_97 = V_14;
		Vector3U5BU2CU5D_t25BAC3B70723BB1F08CC0E0FA241108C68B5F5E0* L_98 = V_11;
		int32_t L_99 = V_21;
		int32_t L_100 = V_22;
		NullCheck(L_98);
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_101;
		L_101 = (L_98)->GetAt(((int32_t)il2cpp_codegen_add(L_99, 1)), L_100);
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4)L_101);
		// triangles.Add (new Triangle3(
		//     vertices[0],
		//     vertices[1],
		//     vertices[2]
		//     ));
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_102 = ___0_triangles;
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_103 = V_14;
		NullCheck(L_103);
		int32_t L_104 = 0;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_106 = V_14;
		NullCheck(L_106);
		int32_t L_107 = 1;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_109 = V_14;
		NullCheck(L_109);
		int32_t L_110 = 2;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB L_112;
		memset((&L_112), 0, sizeof(L_112));
		Triangle3__ctor_mE3A051C362CD6284A554EDA55439AB1D9B447ADE((&L_112), L_105, L_108, L_111, /*hidden argument*/NULL);
		NullCheck(L_102);
		List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_inline(L_102, L_112, List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_RuntimeMethod_var);
		// triangles.Add (new Triangle3(
		//     vertices[2],
		//     vertices[3],
		//     vertices[0]
		//     ));
		List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* L_113 = ___0_triangles;
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_114 = V_14;
		NullCheck(L_114);
		int32_t L_115 = 2;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_117 = V_14;
		NullCheck(L_117);
		int32_t L_118 = 3;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_120 = V_14;
		NullCheck(L_120);
		int32_t L_121 = 0;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB L_123;
		memset((&L_123), 0, sizeof(L_123));
		Triangle3__ctor_mE3A051C362CD6284A554EDA55439AB1D9B447ADE((&L_123), L_116, L_119, L_122, /*hidden argument*/NULL);
		NullCheck(L_113);
		List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_inline(L_113, L_123, List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_RuntimeMethod_var);
		// for (var hz = 0; hz < optimizedHeight - 1; hz++) {
		int32_t L_124 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_0209:
	{
		// for (var hz = 0; hz < optimizedHeight - 1; hz++) {
		int32_t L_125 = V_22;
		float L_126 = V_10;
		if ((((float)((float)L_125)) < ((float)((float)il2cpp_codegen_subtract(L_126, (1.0f))))))
		{
			goto IL_0169;
		}
	}
	{
		// for (var hx = 0; hx < optimizedWidth - 1; hx++) {
		int32_t L_127 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_021f:
	{
		// for (var hx = 0; hx < optimizedWidth - 1; hx++) {
		int32_t L_128 = V_21;
		float L_129 = V_9;
		if ((((float)((float)L_128)) < ((float)((float)il2cpp_codegen_subtract(L_129, (1.0f))))))
		{
			goto IL_0161;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DungeonArchitect.Navigation.TerrainTriangleProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTriangleProvider__ctor_m9167BBAED6235EAB24223056FF23B3E71B360C9A (TerrainTriangleProvider_tC6AAA38C7EE500BFBE79C3D0C93E80F39D0C3286* __this, const RuntimeMethod* method) 
{
	{
		// public float terrainCellSize = 2;
		__this->___terrainCellSize_4 = (2.0f);
		NavigationTriangleProvider__ctor_mB26639ADAFB5E6B5168DF2CD728D36AA0A7DC9C2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 Agent_get_Position_m116BBB61D61E6DB2C4200A4AB040A1C8AEC606A9_inline (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* __this, const RuntimeMethod* method) 
{
	{
		// return currentPos;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_0 = __this->___currentPos_11;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* DungeonNavMesh_get_NavMeshQuery_m12901D8C2D9DE996BB42BFA8646DF131E6A9A431_inline (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// return navMeshQuery;
		NavMeshQuery_tE5CF2A7A8DB527A6587EF6DD4CCAD58D0912F1A9* L_0 = __this->___navMeshQuery_14;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* DungeonNavMesh_get_Crowd_m038118397F4A8B5F988F43E7F058305F4BBB2F3F_inline (DungeonNavMesh_tB315EE0B1B0DBAA9E8BE277429DF66D806E23880* __this, const RuntimeMethod* method) 
{
	{
		// return crowd;
		Crowd_t687A2D83CF08C587052DA8701C5F12D57556404E* L_0 = __this->___crowd_15;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 Agent_get_TargetPosition_m8658806B510BEC0788ECB2F2C51F885AF7DF525A_inline (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* __this, const RuntimeMethod* method) 
{
	{
		// return targetPos;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_0 = __this->___targetPos_23;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Agent_set_Position_mD34FC14E5BC00C636B9AE801C210ED33C0F018A7_inline (Agent_t6CFDAC0A484764CDC48AE0170442CEBB56EE32F9* __this, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_value, const RuntimeMethod* method) 
{
	{
		// currentPos = value;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_0 = ___0_value;
		__this->___currentPos_11 = L_0;
		// }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshGenerationSettings_set_AgentHeight_m16F23C7EC51A6CA5C95A983A14E9063B8A5C7922_inline (NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AgentHeight { get; set; }
		float L_0 = ___0_value;
		__this->___U3CAgentHeightU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshGenerationSettings_set_AgentRadius_mFA7FF029325EAF91EFDA3BA9F18C3751A6DF4823_inline (NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AgentRadius { get; set; }
		float L_0 = ___0_value;
		__this->___U3CAgentRadiusU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshGenerationSettings_set_MaxClimb_m193CADF08DB8F410F092EF5A4F74B3E2BF035DAC_inline (NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxClimb { get; set; }
		float L_0 = ___0_value;
		__this->___U3CMaxClimbU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshGenerationSettings_set_CellSize_mA90DCE0E7FFEC25E52256027513569DCC2059E02_inline (NavMeshGenerationSettings_tB890C98CEBC3F858492AC511F01BDB83E45834EC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float CellSize { get; set; }
		float L_0 = ___0_value;
		__this->___U3CCellSizeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavmeshBuiltDelegate_Invoke_m8CC98972FB82BBC1B797ED1D4418A08DEC6681B9_inline (OnNavmeshBuiltDelegate_t88964A7DE3D9EB7E8C9F364CA49D876D1BD10CEA* __this, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2* ___0_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NavigationEvent_t95185E063C0E8EA77F0DBC662525997A0BE2CCE2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812* MeshTile_get_Polys_m02CD915E917BF27F36D8C94B2688AB33061D2DA5_inline (MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* __this, const RuntimeMethod* method) 
{
	{
		// public Poly[] Polys { get; set; }
		PolyU5BU5D_tE65528EEB8D61B8A8423D53600BA81A18DCF7812* L_0 = __this->___U3CPolysU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Poly_get_Verts_m0C3D65847A75BD3D5D99760CABBB31F02C3D8000_inline (Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* __this, const RuntimeMethod* method) 
{
	{
		// public int[] Verts { get; set; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___U3CVertsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* MeshTile_get_Verts_m58EE3B69BCC1DCF475808A022BAF08BDA2B24DEC_inline (MeshTile_t4A0CFD702894760B7EC52905F7DD209B33B6D705* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3[] Verts { get; set; }
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_0 = __this->___U3CVertsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Poly_get_VertCount_m4A450D850DD3A5DB062B44A7646A28C89438A159_inline (Poly_t1232CF7BFFD0E1BFA8AA4395E53C00CF5CE5BE6E* __this, const RuntimeMethod* method) 
{
	{
		// public int VertCount { get; set; }
		int32_t L_0 = __this->___U3CVertCountU3Ek__BackingField_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3AFC51320B2220B8365431B3C71D901B426B4457_gshared_inline (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m272C6A5A3620E81931888D90AA9E9524D5C55214_gshared_inline (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D* __this, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_1 = (Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_t7BAE163797922D7D3436798286CE34B53AF25DC3* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4)L_8);
		return;
	}

IL_0034:
	{
		Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4 L_9 = ___0_item;
		((  void (*) (List_1_t92A179C8CEB17BEB8E66377CB935E81F74AAD64D*, Vector3_tD2F584D473760BF755676EDB942F65DF2CEBF5C4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m72E8104DD82C16BA85E0237D91A43D62B954D81A_gshared_inline (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2* __this, Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB ___0_item, const RuntimeMethod* method) 
{
	Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C* L_1 = (Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Triangle3U5BU5D_tA901756B3B9D181D5FBCAC26CDE18BAD4707B94C* L_6 = V_0;
		int32_t L_7 = V_1;
		Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB)L_8);
		return;
	}

IL_0034:
	{
		Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB L_9 = ___0_item;
		((  void (*) (List_1_t76BC5FD68E26B35339A5751BB74CAE7A9D6A87D2*, Triangle3_t647A244EA652DCD9201C1A2EC2BFC20D1CDEC7AB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
