#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif





// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C;
// System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// DungeonArchitect.Meshing.Common.GeometryVertex[]
struct GeometryVertexU5BU5D_t1EE3A14E6B74B4A4BB05978BA0601AA957D1A275;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// DungeonArchitect.Visibility.VisibilityGraphNode
struct VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DungeonArchitect.Meshing.Common.GeometryData
struct GeometryData_t72C3B8549D86EEB776C67101C593722C48A3A7E7  : public RuntimeObject
{
	// DungeonArchitect.Meshing.Common.GeometryVertex[] DungeonArchitect.Meshing.Common.GeometryData::vertices
	GeometryVertexU5BU5D_t1EE3A14E6B74B4A4BB05978BA0601AA957D1A275* ___vertices_0;
	// System.Int32[] DungeonArchitect.Meshing.Common.GeometryData::indices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices_1;
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

// DungeonArchitect.Meshing.Common.GeometryVertex
struct GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1 
{
	// UnityEngine.Vector3 DungeonArchitect.Meshing.Common.GeometryVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 DungeonArchitect.Meshing.Common.GeometryVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector2 DungeonArchitect.Meshing.Common.GeometryVertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
	// System.Single DungeonArchitect.Meshing.Common.GeometryVertex::ao
	float ___ao_3;
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

// DungeonArchitect.Meshing.Common.GeometryData

// DungeonArchitect.Meshing.Common.GeometryData

// System.ValueType

// System.ValueType

// DungeonArchitect.Visibility.VisibilityGraph

// DungeonArchitect.Visibility.VisibilityGraph

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

// DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState

// DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState

// UnityEngine.Bounds

// UnityEngine.Bounds

// DungeonArchitect.Meshing.Common.GeometryVertex

// DungeonArchitect.Meshing.Common.GeometryVertex

// DungeonArchitect.Visibility.VisibilityGraphNode

// DungeonArchitect.Visibility.VisibilityGraphNode

// DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode

// DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6000[3] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6001[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6008[2] = 
{
	static_cast<int32_t>(offsetof(VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0, ___Node_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0, ___Depth_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6009[2] = 
{
	static_cast<int32_t>(offsetof(VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47, ___U3CVisibilityDepthU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47, ___nodes_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6010[3] = 
{
	static_cast<int32_t>(offsetof(VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98, ___bounds_0)),static_cast<int32_t>(offsetof(VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98, ____visible_1)),static_cast<int32_t>(offsetof(VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98, ___connectedNodes_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6011[1] = 
{
	static_cast<int32_t>(offsetof(GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6, ___gameObjects_3)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6015[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6023[4] = 
{
	static_cast<int32_t>(offsetof(GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1, ___position_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1, ___normal_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1, ___uv_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1, ___ao_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6024[2] = 
{
	static_cast<int32_t>(offsetof(GeometryData_t72C3B8549D86EEB776C67101C593722C48A3A7E7, ___vertices_0)),static_cast<int32_t>(offsetof(GeometryData_t72C3B8549D86EEB776C67101C593722C48A3A7E7, ___indices_1)),};
